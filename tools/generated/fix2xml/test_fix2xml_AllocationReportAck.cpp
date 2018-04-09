#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::AllocationReportAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReportAck_0;
  set_field(msg, FIX::AllocID{"STRING_1239888672"}, AllocationReportAck_0);
  set_field(msg, FIX::AllocIntermedReqType{4}, AllocationReportAck_0);
  set_field(msg, FIX::AllocRejCode{99}, AllocationReportAck_0);
  set_field(msg, FIX::AllocReportID{"STRING_1779763307"}, AllocationReportAck_0);
  set_field(msg, FIX::AllocReportType{14}, AllocationReportAck_0);
  set_field(msg, FIX::AllocStatus{7}, AllocationReportAck_0);
  set_field(msg, FIX::AllocTransType{'2'}, AllocationReportAck_0);
  set_field(msg, FIX::AvgPxIndicator{0}, AllocationReportAck_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_813179273"}, AllocationReportAck_0);
  set_field(msg, FIX::EncodedText{"DATA_254140730"}, AllocationReportAck_0);
  set_field(msg, FIX::EncodedTextLen{824803812}, AllocationReportAck_0);
  set_field(msg, FIX::MatchStatus{'2'}, AllocationReportAck_0);
  set_field(msg, FIX::Product{11}, AllocationReportAck_0);
  FIX::Quantity Quantity_4;
  Quantity_4.setString("7906291");
set_field(msg, Quantity_4, AllocationReportAck_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_399747778"}, AllocationReportAck_0);
  set_field(msg, FIX::SecurityType{"STRING_CORP"}, AllocationReportAck_0);
  set_field(msg, FIX::Text{"STRING_1915147592"}, AllocationReportAck_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_2027338541"}, AllocationReportAck_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(23, 47, 11, 22, 9, 2010)}, AllocationReportAck_0);
  all_values.push_back(AllocationReportAck_0);

  all_compo_names.insert("AllocationReportAck");

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationReportAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_2;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1758389692"}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{1993978267}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::AllocCustomerCapacity{"STRING_181897297"}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::AllocPositionEffect{'R'}, AllocAckGrp_NoAllocs_2);
    FIX::AllocPrice AllocPrice_10;
    AllocPrice_10.setString("12431645");
set_field(noAllocs_0_0, AllocPrice_10, AllocAckGrp_NoAllocs_2);
    FIX::AllocQty AllocQty_10;
    AllocQty_10.setString("14217859");
set_field(noAllocs_0_0, AllocQty_10, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::AllocText{"STRING_239544003"}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::EncodedAllocText{"DATA_803290155"}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::EncodedAllocTextLen{1054065629}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_464979552"}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::IndividualAllocRejCode{2034890818}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::IndividualAllocType{2}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::SecondaryIndividualAllocID{"STRING_567505131"}, AllocAckGrp_NoAllocs_2);
    all_values.push_back(AllocAckGrp_NoAllocs_2);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_24;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1859778361"}, NestedParties_NoNestedPartyIDs_24);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_24);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{241032992}, NestedParties_NoNestedPartyIDs_24);
      all_values.push_back(NestedParties_NoNestedPartyIDs_24);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_52;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_35454477"}, NstdPtysSubGrp_NoNestedPartySubIDs_52);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{640780770}, NstdPtysSubGrp_NoNestedPartySubIDs_52);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_52);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_53;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_1700543469"}, NstdPtysSubGrp_NoNestedPartySubIDs_53);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1950602069}, NstdPtysSubGrp_NoNestedPartySubIDs_53);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_53);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_54;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_520635664"}, NstdPtysSubGrp_NoNestedPartySubIDs_54);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{453739471}, NstdPtysSubGrp_NoNestedPartySubIDs_54);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_54);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_25;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1181533724"}, NestedParties_NoNestedPartyIDs_25);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_25);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{113644475}, NestedParties_NoNestedPartyIDs_25);
      all_values.push_back(NestedParties_NoNestedPartyIDs_25);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_55;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_2128035335"}, NstdPtysSubGrp_NoNestedPartySubIDs_55);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1919014911}, NstdPtysSubGrp_NoNestedPartySubIDs_55);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_55);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

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
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_811923918"}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{1738941379}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::AllocCustomerCapacity{"STRING_1765509531"}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::AllocPositionEffect{'F'}, AllocAckGrp_NoAllocs_3);
    FIX::AllocPrice AllocPrice_11;
    AllocPrice_11.setString("19265901");
set_field(noAllocs_0_1, AllocPrice_11, AllocAckGrp_NoAllocs_3);
    FIX::AllocQty AllocQty_11;
    AllocQty_11.setString("8611904");
set_field(noAllocs_0_1, AllocQty_11, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::AllocText{"STRING_268123537"}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::EncodedAllocText{"DATA_18650540"}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::EncodedAllocTextLen{1664480631}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_1322189167"}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::IndividualAllocRejCode{483630092}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::IndividualAllocType{2}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::SecondaryIndividualAllocID{"STRING_780343150"}, AllocAckGrp_NoAllocs_3);
    all_values.push_back(AllocAckGrp_NoAllocs_3);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_26;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_104990597"}, NestedParties_NoNestedPartyIDs_26);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_26);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{295960519}, NestedParties_NoNestedPartyIDs_26);
      all_values.push_back(NestedParties_NoNestedPartyIDs_26);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_56;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_73479358"}, NstdPtysSubGrp_NoNestedPartySubIDs_56);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{331414996}, NstdPtysSubGrp_NoNestedPartySubIDs_56);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_56);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_57;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_986804359"}, NstdPtysSubGrp_NoNestedPartySubIDs_57);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{1774022828}, NstdPtysSubGrp_NoNestedPartySubIDs_57);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_57);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::AllocationReportAck::NoAllocs noAllocs_0_2;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_4;
    set_field(noAllocs_0_2, FIX::AllocAccount{"STRING_134533417"}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::AllocAcctIDSource{1507440023}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::AllocCustomerCapacity{"STRING_80278651"}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::AllocPositionEffect{'R'}, AllocAckGrp_NoAllocs_4);
    FIX::AllocPrice AllocPrice_12;
    AllocPrice_12.setString("5980165");
set_field(noAllocs_0_2, AllocPrice_12, AllocAckGrp_NoAllocs_4);
    FIX::AllocQty AllocQty_12;
    AllocQty_12.setString("1939231");
set_field(noAllocs_0_2, AllocQty_12, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::AllocText{"STRING_719905793"}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::EncodedAllocText{"DATA_578568214"}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::EncodedAllocTextLen{2112938038}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::IndividualAllocID{"STRING_1531829711"}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::IndividualAllocRejCode{170025946}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::IndividualAllocType{2}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::SecondaryIndividualAllocID{"STRING_378167278"}, AllocAckGrp_NoAllocs_4);
    all_values.push_back(AllocAckGrp_NoAllocs_4);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_27;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_444670749"}, NestedParties_NoNestedPartyIDs_27);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_27);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{2115266672}, NestedParties_NoNestedPartyIDs_27);
      all_values.push_back(NestedParties_NoNestedPartyIDs_27);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_58;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1968479983"}, NstdPtysSubGrp_NoNestedPartySubIDs_58);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{451413116}, NstdPtysSubGrp_NoNestedPartySubIDs_58);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_58);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_59;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_1513555534"}, NstdPtysSubGrp_NoNestedPartySubIDs_59);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{601339485}, NstdPtysSubGrp_NoNestedPartySubIDs_59);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_59);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_28;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_1502548340"}, NestedParties_NoNestedPartyIDs_28);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_28);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{1093977349}, NestedParties_NoNestedPartyIDs_28);
      all_values.push_back(NestedParties_NoNestedPartyIDs_28);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_60;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_1964569720"}, NstdPtysSubGrp_NoNestedPartySubIDs_60);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{1167456708}, NstdPtysSubGrp_NoNestedPartySubIDs_60);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_60);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_61;
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubID{"STRING_2129923856"}, NstdPtysSubGrp_NoNestedPartySubIDs_61);
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubIDType{803890432}, NstdPtysSubGrp_NoNestedPartySubIDs_61);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_61);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_29;
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyID{"STRING_793995888"}, NestedParties_NoNestedPartyIDs_29);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_29);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyRole{163846807}, NestedParties_NoNestedPartyIDs_29);
      all_values.push_back(NestedParties_NoNestedPartyIDs_29);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_62;
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubID{"STRING_1433040768"}, NstdPtysSubGrp_NoNestedPartySubIDs_62);
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubIDType{761863334}, NstdPtysSubGrp_NoNestedPartySubIDs_62);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_62);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_63;
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubID{"STRING_1068197666"}, NstdPtysSubGrp_NoNestedPartySubIDs_63);
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubIDType{5462913}, NstdPtysSubGrp_NoNestedPartySubIDs_63);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_63);
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
    multiset<string> Parties_NoPartyIDs_11;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1033652056"}, Parties_NoPartyIDs_11);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_11);
    set_field(noPartyIDs_0_0, FIX::PartyRole{73}, Parties_NoPartyIDs_11);
    all_values.push_back(Parties_NoPartyIDs_11);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_27;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1915459902"}, PtysSubGrp_NoPartySubIDs_27);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_27);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_27);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_28;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1061803078"}, PtysSubGrp_NoPartySubIDs_28);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_28);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_28);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationReportAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_12;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1427373002"}, Parties_NoPartyIDs_12);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_12);
    set_field(noPartyIDs_0_1, FIX::PartyRole{71}, Parties_NoPartyIDs_12);
    all_values.push_back(Parties_NoPartyIDs_12);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_29;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_389542698"}, PtysSubGrp_NoPartySubIDs_29);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_29);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_29);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_30;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1233850811"}, PtysSubGrp_NoPartySubIDs_30);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_30);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_30);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_31;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1930580240"}, PtysSubGrp_NoPartySubIDs_31);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_31);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_31);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // header
  multiset<string> header_6;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_6);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_950553300"}, header_6);
  set_header_field(msg.getHeader(), FIX::BodyLength{867316232}, header_6);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_481581686"}, header_6);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1744549188"}, header_6);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_984289858"}, header_6);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_645428493"}, header_6);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{471340080}, header_6);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_6);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1407291828}, header_6);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1539537746"}, header_6);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_275309891"}, header_6);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_600239729"}, header_6);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(19, 4, 23, 21, 11, 2003)}, header_6);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_6);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_6);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_980628725"}, header_6);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{82625597}, header_6);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_433995380"}, header_6);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1370171423"}, header_6);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_919228488"}, header_6);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(12, 1, 7, 18, 2, 2015)}, header_6);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1390049544"}, header_6);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1249943922"}, header_6);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_109361009"}, header_6);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_2035478038"}, header_6);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1721284002}, header_6);
  all_values.push_back(header_6);
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
