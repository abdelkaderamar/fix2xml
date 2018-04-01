#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ApplicationMessageRequestAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ApplicationMessageRequestAck, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ApplicationMessageRequestAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequestAck_0;
  set_field(msg, FIX::ApplReqID{"STRING_1897296142"}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::ApplReqType{1}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::ApplResponseID{"STRING_279559305"}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::ApplResponseType{1}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::ApplTotalMessageCount{1255115519}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::EncodedText{"DATA_2076974466"}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::EncodedTextLen{1591595401}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::Text{"STRING_576503991"}, ApplicationMessageRequestAck_0);
  all_values.push_back(ApplicationMessageRequestAck_0);

  all_compo_names.insert("ApplicationMessageRequestAck");

  // ApplIDRequestAckGrp
  // Group ApplIDRequestAckGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_0;
    set_field(noApplIDs_0_0, FIX::ApplBegSeqNum{751695543}, ApplIDRequestAckGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::ApplEndSeqNum{1488771070}, ApplIDRequestAckGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::ApplResponseError{0}, ApplIDRequestAckGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplID{"STRING_664582034"}, ApplIDRequestAckGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplLastSeqNum{1032052653}, ApplIDRequestAckGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplReqID{"STRING_419288080"}, ApplIDRequestAckGrp_NoApplIDs_0);
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_0);
    all_compo_names.insert("...NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_34;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_2010870078"}, NestedParties_NoNestedPartyIDs_34);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_34);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{329339332}, NestedParties_NoNestedPartyIDs_34);
      all_values.push_back(NestedParties_NoNestedPartyIDs_34);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_75;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_832424602"}, NstdPtysSubGrp_NoNestedPartySubIDs_75);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{193462812}, NstdPtysSubGrp_NoNestedPartySubIDs_75);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_75);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_76;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_1278296023"}, NstdPtysSubGrp_NoNestedPartySubIDs_76);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{251407566}, NstdPtysSubGrp_NoNestedPartySubIDs_76);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_76);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_35;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1970876583"}, NestedParties_NoNestedPartyIDs_35);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_35);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{2095689964}, NestedParties_NoNestedPartyIDs_35);
      all_values.push_back(NestedParties_NoNestedPartyIDs_35);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_77;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_999741244"}, NstdPtysSubGrp_NoNestedPartySubIDs_77);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{506517808}, NstdPtysSubGrp_NoNestedPartySubIDs_77);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_77);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_36;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_468679198"}, NestedParties_NoNestedPartyIDs_36);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_36);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{1154984314}, NestedParties_NoNestedPartyIDs_36);
      all_values.push_back(NestedParties_NoNestedPartyIDs_36);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_78;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_382416155"}, NstdPtysSubGrp_NoNestedPartySubIDs_78);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{262616185}, NstdPtysSubGrp_NoNestedPartySubIDs_78);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_78);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_79;
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubID{"STRING_677729322"}, NstdPtysSubGrp_NoNestedPartySubIDs_79);
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubIDType{1974011556}, NstdPtysSubGrp_NoNestedPartySubIDs_79);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_79);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noApplIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_1;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_1;
    set_field(noApplIDs_0_1, FIX::ApplBegSeqNum{839120177}, ApplIDRequestAckGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::ApplEndSeqNum{829269794}, ApplIDRequestAckGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::ApplResponseError{1}, ApplIDRequestAckGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplID{"STRING_180407599"}, ApplIDRequestAckGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplLastSeqNum{99226912}, ApplIDRequestAckGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplReqID{"STRING_1242805485"}, ApplIDRequestAckGrp_NoApplIDs_1);
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_1);
    all_compo_names.insert("...NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_37;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_518514992"}, NestedParties_NoNestedPartyIDs_37);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_37);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1075846682}, NestedParties_NoNestedPartyIDs_37);
      all_values.push_back(NestedParties_NoNestedPartyIDs_37);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_80;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_205018427"}, NstdPtysSubGrp_NoNestedPartySubIDs_80);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{400729882}, NstdPtysSubGrp_NoNestedPartySubIDs_80);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_80);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_38;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_927368911"}, NestedParties_NoNestedPartyIDs_38);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_38);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{1679025906}, NestedParties_NoNestedPartyIDs_38);
      all_values.push_back(NestedParties_NoNestedPartyIDs_38);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_81;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_221874175"}, NstdPtysSubGrp_NoNestedPartySubIDs_81);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{979948703}, NstdPtysSubGrp_NoNestedPartySubIDs_81);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_81);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_82;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_1126982794"}, NstdPtysSubGrp_NoNestedPartySubIDs_82);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{1351688677}, NstdPtysSubGrp_NoNestedPartySubIDs_82);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_82);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_83;
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubID{"STRING_1979689947"}, NstdPtysSubGrp_NoNestedPartySubIDs_83);
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubIDType{1633500603}, NstdPtysSubGrp_NoNestedPartySubIDs_83);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_83);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noApplIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_2;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_2;
    set_field(noApplIDs_0_2, FIX::ApplBegSeqNum{1820367876}, ApplIDRequestAckGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::ApplEndSeqNum{581760038}, ApplIDRequestAckGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::ApplResponseError{2}, ApplIDRequestAckGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::RefApplID{"STRING_421122731"}, ApplIDRequestAckGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::RefApplLastSeqNum{964176193}, ApplIDRequestAckGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::RefApplReqID{"STRING_903617454"}, ApplIDRequestAckGrp_NoApplIDs_2);
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_2);
    all_compo_names.insert("...NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_39;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_790704102"}, NestedParties_NoNestedPartyIDs_39);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_39);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{1928121848}, NestedParties_NoNestedPartyIDs_39);
      all_values.push_back(NestedParties_NoNestedPartyIDs_39);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_84;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1923145230"}, NstdPtysSubGrp_NoNestedPartySubIDs_84);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{2027348760}, NstdPtysSubGrp_NoNestedPartySubIDs_84);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_84);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_85;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_464249391"}, NstdPtysSubGrp_NoNestedPartySubIDs_85);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{988121835}, NstdPtysSubGrp_NoNestedPartySubIDs_85);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_85);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_40;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_398380104"}, NestedParties_NoNestedPartyIDs_40);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_40);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{2063968517}, NestedParties_NoNestedPartyIDs_40);
      all_values.push_back(NestedParties_NoNestedPartyIDs_40);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_86;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_544946913"}, NstdPtysSubGrp_NoNestedPartySubIDs_86);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{317214752}, NstdPtysSubGrp_NoNestedPartySubIDs_86);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_86);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_41;
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyID{"STRING_1420693325"}, NestedParties_NoNestedPartyIDs_41);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyIDSource{'9'}, NestedParties_NoNestedPartyIDs_41);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyRole{1996240658}, NestedParties_NoNestedPartyIDs_41);
      all_values.push_back(NestedParties_NoNestedPartyIDs_41);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_87;
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubID{"STRING_1165302329"}, NstdPtysSubGrp_NoNestedPartySubIDs_87);
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubIDType{828705713}, NstdPtysSubGrp_NoNestedPartySubIDs_87);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_87);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_88;
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubID{"STRING_1578968949"}, NstdPtysSubGrp_NoNestedPartySubIDs_88);
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubIDType{369507358}, NstdPtysSubGrp_NoNestedPartySubIDs_88);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_88);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_89;
        set_field(noNestedPartySubIDs_2_2_2_2, FIX::NestedPartySubID{"STRING_660912012"}, NstdPtysSubGrp_NoNestedPartySubIDs_89);
        set_field(noNestedPartySubIDs_2_2_2_2, FIX::NestedPartySubIDType{1064985904}, NstdPtysSubGrp_NoNestedPartySubIDs_89);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_89);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_2);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    msg.addGroup(noApplIDs_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_14;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1242672050"}, Parties_NoPartyIDs_14);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_14);
    set_field(noPartyIDs_0_0, FIX::PartyRole{52}, Parties_NoPartyIDs_14);
    all_values.push_back(Parties_NoPartyIDs_14);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_28;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_462120980"}, PtysSubGrp_NoPartySubIDs_28);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_28);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_28);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_29;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_850068698"}, PtysSubGrp_NoPartySubIDs_29);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_29);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_29);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_30;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1343004571"}, PtysSubGrp_NoPartySubIDs_30);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_30);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_30);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_15;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1980520194"}, Parties_NoPartyIDs_15);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_15);
    set_field(noPartyIDs_0_1, FIX::PartyRole{84}, Parties_NoPartyIDs_15);
    all_values.push_back(Parties_NoPartyIDs_15);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_31;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1621249788"}, PtysSubGrp_NoPartySubIDs_31);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_31);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_31);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_32;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_737643250"}, PtysSubGrp_NoPartySubIDs_32);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_32);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_32);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_16;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1420637394"}, Parties_NoPartyIDs_16);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_16);
    set_field(noPartyIDs_0_2, FIX::PartyRole{56}, Parties_NoPartyIDs_16);
    all_values.push_back(Parties_NoPartyIDs_16);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_33;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_903615012"}, PtysSubGrp_NoPartySubIDs_33);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_33);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_33);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_34;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_1381884228"}, PtysSubGrp_NoPartySubIDs_34);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_34);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_34);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
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
