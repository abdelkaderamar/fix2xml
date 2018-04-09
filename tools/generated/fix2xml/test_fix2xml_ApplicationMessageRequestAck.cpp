#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ApplicationMessageRequestAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequestAck_0;
  set_field(msg, FIX::ApplReqID{"STRING_615933371"}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::ApplReqType{5}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::ApplResponseID{"STRING_1106695471"}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::ApplResponseType{0}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::ApplTotalMessageCount{2077575533}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::EncodedText{"DATA_1755987373"}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::EncodedTextLen{655720255}, ApplicationMessageRequestAck_0);
  set_field(msg, FIX::Text{"STRING_2037956912"}, ApplicationMessageRequestAck_0);
  all_values.push_back(ApplicationMessageRequestAck_0);

  all_compo_names.insert("ApplicationMessageRequestAck");

  // ApplIDRequestAckGrp
  // Group ApplIDRequestAckGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_0;
    set_field(noApplIDs_0_0, FIX::ApplBegSeqNum{1683398231}, ApplIDRequestAckGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::ApplEndSeqNum{2144205121}, ApplIDRequestAckGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::ApplResponseError{0}, ApplIDRequestAckGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplID{"STRING_640416444"}, ApplIDRequestAckGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplLastSeqNum{1781010653}, ApplIDRequestAckGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplReqID{"STRING_1486758190"}, ApplIDRequestAckGrp_NoApplIDs_0);
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_0);
    all_compo_names.insert("...NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_36;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_927644415"}, NestedParties_NoNestedPartyIDs_36);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_36);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1747254139}, NestedParties_NoNestedPartyIDs_36);
      all_values.push_back(NestedParties_NoNestedPartyIDs_36);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_79;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1096493100"}, NstdPtysSubGrp_NoNestedPartySubIDs_79);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{614960026}, NstdPtysSubGrp_NoNestedPartySubIDs_79);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_79);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_37;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1632475581"}, NestedParties_NoNestedPartyIDs_37);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_37);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1376604678}, NestedParties_NoNestedPartyIDs_37);
      all_values.push_back(NestedParties_NoNestedPartyIDs_37);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_80;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1674965384"}, NstdPtysSubGrp_NoNestedPartySubIDs_80);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1667200146}, NstdPtysSubGrp_NoNestedPartySubIDs_80);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_80);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_81;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_1460837236"}, NstdPtysSubGrp_NoNestedPartySubIDs_81);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{939722423}, NstdPtysSubGrp_NoNestedPartySubIDs_81);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_81);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_82;
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubID{"STRING_1708422848"}, NstdPtysSubGrp_NoNestedPartySubIDs_82);
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubIDType{2076770608}, NstdPtysSubGrp_NoNestedPartySubIDs_82);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_82);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_38;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_1154326707"}, NestedParties_NoNestedPartyIDs_38);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_38);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{489917879}, NestedParties_NoNestedPartyIDs_38);
      all_values.push_back(NestedParties_NoNestedPartyIDs_38);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_83;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_276138396"}, NstdPtysSubGrp_NoNestedPartySubIDs_83);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{1145638134}, NstdPtysSubGrp_NoNestedPartySubIDs_83);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_83);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noApplIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_1;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_1;
    set_field(noApplIDs_0_1, FIX::ApplBegSeqNum{974891856}, ApplIDRequestAckGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::ApplEndSeqNum{2046467648}, ApplIDRequestAckGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::ApplResponseError{0}, ApplIDRequestAckGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplID{"STRING_971613330"}, ApplIDRequestAckGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplLastSeqNum{831068511}, ApplIDRequestAckGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplReqID{"STRING_1321969161"}, ApplIDRequestAckGrp_NoApplIDs_1);
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_1);
    all_compo_names.insert("...NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_39;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_170343054"}, NestedParties_NoNestedPartyIDs_39);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_39);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1532784750}, NestedParties_NoNestedPartyIDs_39);
      all_values.push_back(NestedParties_NoNestedPartyIDs_39);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_84;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1828182383"}, NstdPtysSubGrp_NoNestedPartySubIDs_84);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1975541800}, NstdPtysSubGrp_NoNestedPartySubIDs_84);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_84);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_85;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1721058271"}, NstdPtysSubGrp_NoNestedPartySubIDs_85);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{295658761}, NstdPtysSubGrp_NoNestedPartySubIDs_85);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_85);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noApplIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_2;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_2;
    set_field(noApplIDs_0_2, FIX::ApplBegSeqNum{1460533733}, ApplIDRequestAckGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::ApplEndSeqNum{53960231}, ApplIDRequestAckGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::ApplResponseError{2}, ApplIDRequestAckGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::RefApplID{"STRING_499088196"}, ApplIDRequestAckGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::RefApplLastSeqNum{1728925615}, ApplIDRequestAckGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::RefApplReqID{"STRING_1191979938"}, ApplIDRequestAckGrp_NoApplIDs_2);
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_2);
    all_compo_names.insert("...NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_40;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_521164390"}, NestedParties_NoNestedPartyIDs_40);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_40);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{1889212392}, NestedParties_NoNestedPartyIDs_40);
      all_values.push_back(NestedParties_NoNestedPartyIDs_40);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_86;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1420553809"}, NstdPtysSubGrp_NoNestedPartySubIDs_86);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{231646623}, NstdPtysSubGrp_NoNestedPartySubIDs_86);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_86);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_87;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_612426042"}, NstdPtysSubGrp_NoNestedPartySubIDs_87);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{1696692205}, NstdPtysSubGrp_NoNestedPartySubIDs_87);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_87);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_41;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_1377284757"}, NestedParties_NoNestedPartyIDs_41);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_41);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{1595676206}, NestedParties_NoNestedPartyIDs_41);
      all_values.push_back(NestedParties_NoNestedPartyIDs_41);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_88;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_411447580"}, NstdPtysSubGrp_NoNestedPartySubIDs_88);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{279261069}, NstdPtysSubGrp_NoNestedPartySubIDs_88);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_88);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noApplIDs_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_16;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1016587915"}, Parties_NoPartyIDs_16);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_16);
    set_field(noPartyIDs_0_0, FIX::PartyRole{85}, Parties_NoPartyIDs_16);
    all_values.push_back(Parties_NoPartyIDs_16);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_37;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1074169294"}, PtysSubGrp_NoPartySubIDs_37);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_37);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_37);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_17;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_229947170"}, Parties_NoPartyIDs_17);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_17);
    set_field(noPartyIDs_0_1, FIX::PartyRole{53}, Parties_NoPartyIDs_17);
    all_values.push_back(Parties_NoPartyIDs_17);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_38;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_701704149"}, PtysSubGrp_NoPartySubIDs_38);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_38);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_38);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_39;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_42085451"}, PtysSubGrp_NoPartySubIDs_39);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_39);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_39);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // header
  multiset<string> header_9;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_9);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_2002010884"}, header_9);
  set_header_field(msg.getHeader(), FIX::BodyLength{804310506}, header_9);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_612803947"}, header_9);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1743739628"}, header_9);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_332317956"}, header_9);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_2033357756"}, header_9);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1975386252}, header_9);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_9);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1582566314}, header_9);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1205187361"}, header_9);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_384578248"}, header_9);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1030758872"}, header_9);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(21, 41, 47, 4, 10, 2016)}, header_9);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_9);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_9);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_364098076"}, header_9);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{296966284}, header_9);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1334053629"}, header_9);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1654706804"}, header_9);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1987447188"}, header_9);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(3, 59, 6, 17, 8, 2001)}, header_9);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_795300432"}, header_9);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1480315856"}, header_9);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1308048709"}, header_9);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_681174541"}, header_9);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1308218460}, header_9);
  all_values.push_back(header_9);
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
