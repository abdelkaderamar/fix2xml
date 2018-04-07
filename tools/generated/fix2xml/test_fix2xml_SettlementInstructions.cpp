#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementInstructions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementInstructions, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SettlementInstructions msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructions_0;
  set_field(msg, FIX::ClOrdID{"STRING_804614239"}, SettlementInstructions_0);
  set_field(msg, FIX::EncodedText{"DATA_106156147"}, SettlementInstructions_0);
  set_field(msg, FIX::EncodedTextLen{2141865693}, SettlementInstructions_0);
  set_field(msg, FIX::SettlInstMode{'5'}, SettlementInstructions_0);
  set_field(msg, FIX::SettlInstMsgID{"STRING_1750126768"}, SettlementInstructions_0);
  set_field(msg, FIX::SettlInstReqID{"STRING_181044832"}, SettlementInstructions_0);
  set_field(msg, FIX::SettlInstReqRejCode{1}, SettlementInstructions_0);
  set_field(msg, FIX::Text{"STRING_1319166795"}, SettlementInstructions_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(7, 0, 58, 19, 1, 2009)}, SettlementInstructions_0);
  all_values.push_back(SettlementInstructions_0);

  all_compo_names.insert("SettlementInstructions");

  // SettlInstGrp
  // Group SettlInstGrp.NoSettlInst
  {
    FIX50SP2::SettlementInstructions::NoSettlInst noSettlInst_0_0;
    // SettlInstGrp.NoSettlInst
    multiset<string> SettlInstGrp_NoSettlInst_0;
    set_field(noSettlInst_0_0, FIX::CFICode{"STRING_167536665"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::CardExpDate{"LOCALMKTDATE_587326000"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::CardHolderName{"STRING_738925388"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::CardIssNum{"STRING_910270265"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::CardNumber{"STRING_1590674834"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::CardStartDate{"LOCALMKTDATE_1908178741"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::EffectiveTime{FIX::UTCTIMESTAMP(0, 45, 4, 11, 12, 2016)}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(17, 10, 59, 2, 4, 2015)}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(1, 35, 24, 20, 12, 2002)}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::PaymentDate{"LOCALMKTDATE_1974572623"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::PaymentMethod{3}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::PaymentRef{"STRING_1642995623"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::PaymentRemitterID{"STRING_618609586"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::Product{4}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::SecurityType{"STRING_MPO"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::SettlCurrency{"CAN"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::SettlInstID{"STRING_1673512809"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::SettlInstRefID{"STRING_1118230067"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::SettlInstTransType{'R'}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::Side{'2'}, SettlInstGrp_NoSettlInst_0);
    all_values.push_back(SettlInstGrp_NoSettlInst_0);
    all_compo_names.insert("...NoSettlInst");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_126;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_238334486"}, Parties_NoPartyIDs_126);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_126);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{74}, Parties_NoPartyIDs_126);
      all_values.push_back(Parties_NoPartyIDs_126);
      all_compo_names.insert("...NoSettlInst...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_262;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_1812705921"}, PtysSubGrp_NoPartySubIDs_262);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_262);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_262);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_127;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_110804786"}, Parties_NoPartyIDs_127);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_127);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{81}, Parties_NoPartyIDs_127);
      all_values.push_back(Parties_NoPartyIDs_127);
      all_compo_names.insert("...NoSettlInst...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_263;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_1728329080"}, PtysSubGrp_NoPartySubIDs_263);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_263);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_263);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_128;
      set_field(noPartyIDs_0_1_2, FIX::PartyID{"STRING_462842819"}, Parties_NoPartyIDs_128);
      set_field(noPartyIDs_0_1_2, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_128);
      set_field(noPartyIDs_0_1_2, FIX::PartyRole{48}, Parties_NoPartyIDs_128);
      all_values.push_back(Parties_NoPartyIDs_128);
      all_compo_names.insert("...NoSettlInst...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_264;
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubID{"STRING_1830092082"}, PtysSubGrp_NoPartySubIDs_264);
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_264);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_264);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_265;
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubID{"STRING_289111091"}, PtysSubGrp_NoPartySubIDs_265);
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_265);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_265);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_266;
        set_field(noPartySubIDs_0_2_2_2, FIX::PartySubID{"STRING_774970279"}, PtysSubGrp_NoPartySubIDs_266);
        set_field(noPartySubIDs_0_2_2_2, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_266);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_266);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_2);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_9;
    set_field(noSettlInst_0_0, FIX::SettlDeliveryType{1}, SettlInstructionsData_9);
    set_field(noSettlInst_0_0, FIX::StandInstDbID{"STRING_857808254"}, SettlInstructionsData_9);
    set_field(noSettlInst_0_0, FIX::StandInstDbName{"STRING_117772003"}, SettlInstructionsData_9);
    set_field(noSettlInst_0_0, FIX::StandInstDbType{1}, SettlInstructionsData_9);
    all_values.push_back(SettlInstructionsData_9);
    all_compo_names.insert("...NoSettlInst.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_19;
      set_field(noDlvyInst_0_1_0, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_19);
      set_field(noDlvyInst_0_1_0, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_19);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_19);
      all_compo_names.insert("...NoSettlInst....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_34;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_561832915"}, SettlParties_NoSettlPartyIDs_34);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'4'}, SettlParties_NoSettlPartyIDs_34);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{1894248537}, SettlParties_NoSettlPartyIDs_34);
        all_values.push_back(SettlParties_NoSettlPartyIDs_34);
        all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_68;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_241104731"}, SettlPtysSubGrp_NoSettlPartySubIDs_68);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{1559470810}, SettlPtysSubGrp_NoSettlPartySubIDs_68);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_68);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_69;
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubID{"STRING_1597556692"}, SettlPtysSubGrp_NoSettlPartySubIDs_69);
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubIDType{351909517}, SettlPtysSubGrp_NoSettlPartySubIDs_69);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_69);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_35;
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyID{"STRING_1381183103"}, SettlParties_NoSettlPartyIDs_35);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_35);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyRole{947856583}, SettlParties_NoSettlPartyIDs_35);
        all_values.push_back(SettlParties_NoSettlPartyIDs_35);
        all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_70;
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubID{"STRING_1640850993"}, SettlPtysSubGrp_NoSettlPartySubIDs_70);
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubIDType{1410699402}, SettlPtysSubGrp_NoSettlPartySubIDs_70);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_70);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_71;
          set_field(noSettlPartySubIDs_0_0_1_3_1, FIX::SettlPartySubID{"STRING_1621173902"}, SettlPtysSubGrp_NoSettlPartySubIDs_71);
          set_field(noSettlPartySubIDs_0_0_1_3_1, FIX::SettlPartySubIDType{1592606183}, SettlPtysSubGrp_NoSettlPartySubIDs_71);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_71);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noSettlInst_0_0.addGroup(noDlvyInst_0_1_0);
    }
    msg.addGroup(noSettlInst_0_0);
  }
  {
    FIX50SP2::SettlementInstructions::NoSettlInst noSettlInst_0_1;
    // SettlInstGrp.NoSettlInst
    multiset<string> SettlInstGrp_NoSettlInst_1;
    set_field(noSettlInst_0_1, FIX::CFICode{"STRING_1872721518"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::CardExpDate{"LOCALMKTDATE_1303782336"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::CardHolderName{"STRING_724580839"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::CardIssNum{"STRING_14348961"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::CardNumber{"STRING_853368289"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::CardStartDate{"LOCALMKTDATE_1499551118"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::EffectiveTime{FIX::UTCTIMESTAMP(2, 44, 1, 16, 12, 2011)}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(4, 18, 55, 5, 2, 2006)}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(21, 36, 43, 1, 8, 2000)}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::PaymentDate{"LOCALMKTDATE_386490038"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::PaymentMethod{10}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::PaymentRef{"STRING_1701243572"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::PaymentRemitterID{"STRING_1979096222"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::Product{9}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::SecurityType{"STRING_CTB"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::SettlCurrency{"EUR"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::SettlInstID{"STRING_1710910549"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::SettlInstRefID{"STRING_2055744532"}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::SettlInstTransType{'T'}, SettlInstGrp_NoSettlInst_1);
    set_field(noSettlInst_0_1, FIX::Side{'G'}, SettlInstGrp_NoSettlInst_1);
    all_values.push_back(SettlInstGrp_NoSettlInst_1);
    all_compo_names.insert("...NoSettlInst");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_129;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_2023804004"}, Parties_NoPartyIDs_129);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_129);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{66}, Parties_NoPartyIDs_129);
      all_values.push_back(Parties_NoPartyIDs_129);
      all_compo_names.insert("...NoSettlInst...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_267;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_16625432"}, PtysSubGrp_NoPartySubIDs_267);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_267);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_267);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_268;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_694873398"}, PtysSubGrp_NoPartySubIDs_268);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_268);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_268);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_269;
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubID{"STRING_1909793893"}, PtysSubGrp_NoPartySubIDs_269);
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_269);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_269);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_130;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_1441652426"}, Parties_NoPartyIDs_130);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_130);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{35}, Parties_NoPartyIDs_130);
      all_values.push_back(Parties_NoPartyIDs_130);
      all_compo_names.insert("...NoSettlInst...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_270;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_912176708"}, PtysSubGrp_NoPartySubIDs_270);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{21}, PtysSubGrp_NoPartySubIDs_270);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_270);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_271;
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubID{"STRING_464492474"}, PtysSubGrp_NoPartySubIDs_271);
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_271);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_271);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_272;
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubID{"STRING_958522552"}, PtysSubGrp_NoPartySubIDs_272);
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_272);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_272);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noSettlInst_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_10;
    set_field(noSettlInst_0_1, FIX::SettlDeliveryType{2}, SettlInstructionsData_10);
    set_field(noSettlInst_0_1, FIX::StandInstDbID{"STRING_790135126"}, SettlInstructionsData_10);
    set_field(noSettlInst_0_1, FIX::StandInstDbName{"STRING_834342132"}, SettlInstructionsData_10);
    set_field(noSettlInst_0_1, FIX::StandInstDbType{2}, SettlInstructionsData_10);
    all_values.push_back(SettlInstructionsData_10);
    all_compo_names.insert("...NoSettlInst.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_20;
      set_field(noDlvyInst_1_1_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_20);
      set_field(noDlvyInst_1_1_0, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_20);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_20);
      all_compo_names.insert("...NoSettlInst....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_36;
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyID{"STRING_1880197220"}, SettlParties_NoSettlPartyIDs_36);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyIDSource{'9'}, SettlParties_NoSettlPartyIDs_36);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyRole{1372726032}, SettlParties_NoSettlPartyIDs_36);
        all_values.push_back(SettlParties_NoSettlPartyIDs_36);
        all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_72;
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubID{"STRING_1935119130"}, SettlPtysSubGrp_NoSettlPartySubIDs_72);
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubIDType{2084575780}, SettlPtysSubGrp_NoSettlPartySubIDs_72);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_72);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_73;
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubID{"STRING_1761197995"}, SettlPtysSubGrp_NoSettlPartySubIDs_73);
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubIDType{1951744562}, SettlPtysSubGrp_NoSettlPartySubIDs_73);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_73);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_74;
          set_field(noSettlPartySubIDs_1_0_0_3_2, FIX::SettlPartySubID{"STRING_1374531508"}, SettlPtysSubGrp_NoSettlPartySubIDs_74);
          set_field(noSettlPartySubIDs_1_0_0_3_2, FIX::SettlPartySubIDType{308587745}, SettlPtysSubGrp_NoSettlPartySubIDs_74);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_74);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_2);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_37;
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyID{"STRING_1486589302"}, SettlParties_NoSettlPartyIDs_37);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_37);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyRole{770442833}, SettlParties_NoSettlPartyIDs_37);
        all_values.push_back(SettlParties_NoSettlPartyIDs_37);
        all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_75;
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubID{"STRING_783493679"}, SettlPtysSubGrp_NoSettlPartySubIDs_75);
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubIDType{449352654}, SettlPtysSubGrp_NoSettlPartySubIDs_75);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_75);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_76;
          set_field(noSettlPartySubIDs_1_0_1_3_1, FIX::SettlPartySubID{"STRING_186160415"}, SettlPtysSubGrp_NoSettlPartySubIDs_76);
          set_field(noSettlPartySubIDs_1_0_1_3_1, FIX::SettlPartySubIDType{1695670388}, SettlPtysSubGrp_NoSettlPartySubIDs_76);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_76);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_77;
          set_field(noSettlPartySubIDs_1_0_1_3_2, FIX::SettlPartySubID{"STRING_1021385168"}, SettlPtysSubGrp_NoSettlPartySubIDs_77);
          set_field(noSettlPartySubIDs_1_0_1_3_2, FIX::SettlPartySubIDType{650652889}, SettlPtysSubGrp_NoSettlPartySubIDs_77);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_77);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_2);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_38;
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyID{"STRING_540433118"}, SettlParties_NoSettlPartyIDs_38);
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_38);
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyRole{1437451257}, SettlParties_NoSettlPartyIDs_38);
        all_values.push_back(SettlParties_NoSettlPartyIDs_38);
        all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_78;
          set_field(noSettlPartySubIDs_1_0_2_3_0, FIX::SettlPartySubID{"STRING_622559199"}, SettlPtysSubGrp_NoSettlPartySubIDs_78);
          set_field(noSettlPartySubIDs_1_0_2_3_0, FIX::SettlPartySubIDType{124309741}, SettlPtysSubGrp_NoSettlPartySubIDs_78);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_78);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_79;
          set_field(noSettlPartySubIDs_1_0_2_3_1, FIX::SettlPartySubID{"STRING_342504335"}, SettlPtysSubGrp_NoSettlPartySubIDs_79);
          set_field(noSettlPartySubIDs_1_0_2_3_1, FIX::SettlPartySubIDType{1968887739}, SettlPtysSubGrp_NoSettlPartySubIDs_79);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_79);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_80;
          set_field(noSettlPartySubIDs_1_0_2_3_2, FIX::SettlPartySubID{"STRING_1020544598"}, SettlPtysSubGrp_NoSettlPartySubIDs_80);
          set_field(noSettlPartySubIDs_1_0_2_3_2, FIX::SettlPartySubIDType{1309479799}, SettlPtysSubGrp_NoSettlPartySubIDs_80);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_80);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_2);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_2);
      }
      noSettlInst_0_1.addGroup(noDlvyInst_1_1_0);
    }
    msg.addGroup(noSettlInst_0_1);
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
