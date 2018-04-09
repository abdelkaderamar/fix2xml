#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RegistrationInstructions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RegistrationInstructions, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::RegistrationInstructions msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructions_0;
  set_field(msg, FIX::Account{"STRING_317154469"}, RegistrationInstructions_0);
  set_field(msg, FIX::AcctIDSource{99}, RegistrationInstructions_0);
  set_field(msg, FIX::ClOrdID{"STRING_1320140569"}, RegistrationInstructions_0);
  set_field(msg, FIX::OwnershipType{'T'}, RegistrationInstructions_0);
  set_field(msg, FIX::RegistAcctType{"STRING_1216783158"}, RegistrationInstructions_0);
  set_field(msg, FIX::RegistID{"STRING_1695103036"}, RegistrationInstructions_0);
  set_field(msg, FIX::RegistRefID{"STRING_2041290961"}, RegistrationInstructions_0);
  set_field(msg, FIX::RegistTransType{'0'}, RegistrationInstructions_0);
  set_field(msg, FIX::TaxAdvantageType{0}, RegistrationInstructions_0);
  all_values.push_back(RegistrationInstructions_0);

  all_compo_names.insert("RegistrationInstructions");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_129;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_950554528"}, Parties_NoPartyIDs_129);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_129);
    set_field(noPartyIDs_0_0, FIX::PartyRole{58}, Parties_NoPartyIDs_129);
    all_values.push_back(Parties_NoPartyIDs_129);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_255;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1151486569"}, PtysSubGrp_NoPartySubIDs_255);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_255);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_255);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_256;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_456958188"}, PtysSubGrp_NoPartySubIDs_256);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_256);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_256);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_257;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1253203045"}, PtysSubGrp_NoPartySubIDs_257);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_257);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_257);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_130;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1943184542"}, Parties_NoPartyIDs_130);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_130);
    set_field(noPartyIDs_0_1, FIX::PartyRole{26}, Parties_NoPartyIDs_130);
    all_values.push_back(Parties_NoPartyIDs_130);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_258;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1146843236"}, PtysSubGrp_NoPartySubIDs_258);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_258);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_258);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // RgstDistInstGrp
  // Group RgstDistInstGrp.NoDistribInsts
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_0;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_0;
    set_field(noDistribInsts_0_0, FIX::CashDistribAgentAcctName{"STRING_659691128"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::CashDistribAgentAcctNumber{"STRING_1757208833"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::CashDistribAgentCode{"STRING_1675462886"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::CashDistribAgentName{"STRING_656498326"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::CashDistribCurr{"CAN"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::CashDistribPayRef{"STRING_1976638895"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::DistribPaymentMethod{9}, RgstDistInstGrp_NoDistribInsts_0);
    FIX::DistribPercentage DistribPercentage_0;
    DistribPercentage_0.setString("41.550000");
set_field(noDistribInsts_0_0, DistribPercentage_0, RgstDistInstGrp_NoDistribInsts_0);
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_0);
    all_compo_names.insert("...NoDistribInsts");

    msg.addGroup(noDistribInsts_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_1;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_1;
    set_field(noDistribInsts_0_1, FIX::CashDistribAgentAcctName{"STRING_1524258283"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::CashDistribAgentAcctNumber{"STRING_55782554"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::CashDistribAgentCode{"STRING_661792872"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::CashDistribAgentName{"STRING_791990510"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::CashDistribCurr{"CAN"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::CashDistribPayRef{"STRING_1397788199"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::DistribPaymentMethod{7}, RgstDistInstGrp_NoDistribInsts_1);
    FIX::DistribPercentage DistribPercentage_1;
    DistribPercentage_1.setString("49.870000");
set_field(noDistribInsts_0_1, DistribPercentage_1, RgstDistInstGrp_NoDistribInsts_1);
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_1);
    all_compo_names.insert("...NoDistribInsts");

    msg.addGroup(noDistribInsts_0_1);
  }
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_2;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_2;
    set_field(noDistribInsts_0_2, FIX::CashDistribAgentAcctName{"STRING_401791120"}, RgstDistInstGrp_NoDistribInsts_2);
    set_field(noDistribInsts_0_2, FIX::CashDistribAgentAcctNumber{"STRING_1742950206"}, RgstDistInstGrp_NoDistribInsts_2);
    set_field(noDistribInsts_0_2, FIX::CashDistribAgentCode{"STRING_130959528"}, RgstDistInstGrp_NoDistribInsts_2);
    set_field(noDistribInsts_0_2, FIX::CashDistribAgentName{"STRING_1491578786"}, RgstDistInstGrp_NoDistribInsts_2);
    set_field(noDistribInsts_0_2, FIX::CashDistribCurr{"GBP"}, RgstDistInstGrp_NoDistribInsts_2);
    set_field(noDistribInsts_0_2, FIX::CashDistribPayRef{"STRING_1287279680"}, RgstDistInstGrp_NoDistribInsts_2);
    set_field(noDistribInsts_0_2, FIX::DistribPaymentMethod{11}, RgstDistInstGrp_NoDistribInsts_2);
    FIX::DistribPercentage DistribPercentage_2;
    DistribPercentage_2.setString("74.440000");
set_field(noDistribInsts_0_2, DistribPercentage_2, RgstDistInstGrp_NoDistribInsts_2);
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_2);
    all_compo_names.insert("...NoDistribInsts");

    msg.addGroup(noDistribInsts_0_2);
  }
  // RgstDtlsGrp
  // Group RgstDtlsGrp.NoRegistDtls
  {
    FIX50SP2::RegistrationInstructions::NoRegistDtls noRegistDtls_0_0;
    // RgstDtlsGrp.NoRegistDtls
    multiset<string> RgstDtlsGrp_NoRegistDtls_0;
    set_field(noRegistDtls_0_0, FIX::DateOfBirth{"LOCALMKTDATE_1346060551"}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::InvestorCountryOfResidence{"COUNTRY_1002075405"}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::MailingDtls{"STRING_521174778"}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::MailingInst{"STRING_2005751679"}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::OwnerType{12}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::RegistDtls{"STRING_49154016"}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::RegistEmail{"STRING_514766357"}, RgstDtlsGrp_NoRegistDtls_0);
    all_values.push_back(RgstDtlsGrp_NoRegistDtls_0);
    all_compo_names.insert("...NoRegistDtls");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_146;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1415248661"}, NestedParties_NoNestedPartyIDs_146);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_146);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{700655485}, NestedParties_NoNestedPartyIDs_146);
      all_values.push_back(NestedParties_NoNestedPartyIDs_146);
      all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_305;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1868179888"}, NstdPtysSubGrp_NoNestedPartySubIDs_305);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{756438039}, NstdPtysSubGrp_NoNestedPartySubIDs_305);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_305);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_306;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_364952041"}, NstdPtysSubGrp_NoNestedPartySubIDs_306);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{512686751}, NstdPtysSubGrp_NoNestedPartySubIDs_306);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_306);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_307;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_1198338429"}, NstdPtysSubGrp_NoNestedPartySubIDs_307);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{1977299442}, NstdPtysSubGrp_NoNestedPartySubIDs_307);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_307);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noRegistDtls_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_147;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1910474950"}, NestedParties_NoNestedPartyIDs_147);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_147);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1651300781}, NestedParties_NoNestedPartyIDs_147);
      all_values.push_back(NestedParties_NoNestedPartyIDs_147);
      all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_308;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_812359250"}, NstdPtysSubGrp_NoNestedPartySubIDs_308);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1782260309}, NstdPtysSubGrp_NoNestedPartySubIDs_308);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_308);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noRegistDtls_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_148;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_1656361208"}, NestedParties_NoNestedPartyIDs_148);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_148);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{2113968541}, NestedParties_NoNestedPartyIDs_148);
      all_values.push_back(NestedParties_NoNestedPartyIDs_148);
      all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_309;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_1860246168"}, NstdPtysSubGrp_NoNestedPartySubIDs_309);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{777342338}, NstdPtysSubGrp_NoNestedPartySubIDs_309);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_309);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      noRegistDtls_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noRegistDtls_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoRegistDtls noRegistDtls_0_1;
    // RgstDtlsGrp.NoRegistDtls
    multiset<string> RgstDtlsGrp_NoRegistDtls_1;
    set_field(noRegistDtls_0_1, FIX::DateOfBirth{"LOCALMKTDATE_545331867"}, RgstDtlsGrp_NoRegistDtls_1);
    set_field(noRegistDtls_0_1, FIX::InvestorCountryOfResidence{"COUNTRY_1058823071"}, RgstDtlsGrp_NoRegistDtls_1);
    set_field(noRegistDtls_0_1, FIX::MailingDtls{"STRING_1779417743"}, RgstDtlsGrp_NoRegistDtls_1);
    set_field(noRegistDtls_0_1, FIX::MailingInst{"STRING_1066506645"}, RgstDtlsGrp_NoRegistDtls_1);
    set_field(noRegistDtls_0_1, FIX::OwnerType{6}, RgstDtlsGrp_NoRegistDtls_1);
    set_field(noRegistDtls_0_1, FIX::RegistDtls{"STRING_243734686"}, RgstDtlsGrp_NoRegistDtls_1);
    set_field(noRegistDtls_0_1, FIX::RegistEmail{"STRING_1115660661"}, RgstDtlsGrp_NoRegistDtls_1);
    all_values.push_back(RgstDtlsGrp_NoRegistDtls_1);
    all_compo_names.insert("...NoRegistDtls");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_149;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_782414931"}, NestedParties_NoNestedPartyIDs_149);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_149);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1775779064}, NestedParties_NoNestedPartyIDs_149);
      all_values.push_back(NestedParties_NoNestedPartyIDs_149);
      all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_310;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_86584843"}, NstdPtysSubGrp_NoNestedPartySubIDs_310);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1496475305}, NstdPtysSubGrp_NoNestedPartySubIDs_310);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_310);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_311;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_92024808"}, NstdPtysSubGrp_NoNestedPartySubIDs_311);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{451536884}, NstdPtysSubGrp_NoNestedPartySubIDs_311);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_311);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noRegistDtls_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_150;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_2009162056"}, NestedParties_NoNestedPartyIDs_150);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_150);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{281352678}, NestedParties_NoNestedPartyIDs_150);
      all_values.push_back(NestedParties_NoNestedPartyIDs_150);
      all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_312;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_359772281"}, NstdPtysSubGrp_NoNestedPartySubIDs_312);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{1932653459}, NstdPtysSubGrp_NoNestedPartySubIDs_312);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_312);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noRegistDtls_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_151;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_1936935780"}, NestedParties_NoNestedPartyIDs_151);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_151);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{1567430121}, NestedParties_NoNestedPartyIDs_151);
      all_values.push_back(NestedParties_NoNestedPartyIDs_151);
      all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_313;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_685676736"}, NstdPtysSubGrp_NoNestedPartySubIDs_313);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{1533915014}, NstdPtysSubGrp_NoNestedPartySubIDs_313);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_313);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      noRegistDtls_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noRegistDtls_0_1);
  }
  {
    FIX50SP2::RegistrationInstructions::NoRegistDtls noRegistDtls_0_2;
    // RgstDtlsGrp.NoRegistDtls
    multiset<string> RgstDtlsGrp_NoRegistDtls_2;
    set_field(noRegistDtls_0_2, FIX::DateOfBirth{"LOCALMKTDATE_94486933"}, RgstDtlsGrp_NoRegistDtls_2);
    set_field(noRegistDtls_0_2, FIX::InvestorCountryOfResidence{"COUNTRY_398439256"}, RgstDtlsGrp_NoRegistDtls_2);
    set_field(noRegistDtls_0_2, FIX::MailingDtls{"STRING_163773704"}, RgstDtlsGrp_NoRegistDtls_2);
    set_field(noRegistDtls_0_2, FIX::MailingInst{"STRING_639818801"}, RgstDtlsGrp_NoRegistDtls_2);
    set_field(noRegistDtls_0_2, FIX::OwnerType{2}, RgstDtlsGrp_NoRegistDtls_2);
    set_field(noRegistDtls_0_2, FIX::RegistDtls{"STRING_1943191448"}, RgstDtlsGrp_NoRegistDtls_2);
    set_field(noRegistDtls_0_2, FIX::RegistEmail{"STRING_1706325446"}, RgstDtlsGrp_NoRegistDtls_2);
    all_values.push_back(RgstDtlsGrp_NoRegistDtls_2);
    all_compo_names.insert("...NoRegistDtls");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_152;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_39442486"}, NestedParties_NoNestedPartyIDs_152);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_152);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{1658727241}, NestedParties_NoNestedPartyIDs_152);
      all_values.push_back(NestedParties_NoNestedPartyIDs_152);
      all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_314;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1057928134"}, NstdPtysSubGrp_NoNestedPartySubIDs_314);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{1287022657}, NstdPtysSubGrp_NoNestedPartySubIDs_314);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_314);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_315;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_157444185"}, NstdPtysSubGrp_NoNestedPartySubIDs_315);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{1144512977}, NstdPtysSubGrp_NoNestedPartySubIDs_315);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_315);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noRegistDtls_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_153;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_636014314"}, NestedParties_NoNestedPartyIDs_153);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_153);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{1596049861}, NestedParties_NoNestedPartyIDs_153);
      all_values.push_back(NestedParties_NoNestedPartyIDs_153);
      all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_316;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_1539832231"}, NstdPtysSubGrp_NoNestedPartySubIDs_316);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{1877402539}, NstdPtysSubGrp_NoNestedPartySubIDs_316);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_316);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      noRegistDtls_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noRegistDtls_0_2);
  }
  // header
  multiset<string> header_76;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_76);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1899604512"}, header_76);
  set_header_field(msg.getHeader(), FIX::BodyLength{1662572351}, header_76);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_2059298212"}, header_76);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_924252395"}, header_76);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1082518824"}, header_76);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1357627905"}, header_76);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1609929131}, header_76);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_76);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1452114838}, header_76);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_2008368388"}, header_76);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_632723895"}, header_76);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_2091933639"}, header_76);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(15, 58, 49, 5, 7, 2012)}, header_76);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_76);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_76);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_195799451"}, header_76);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1447175783}, header_76);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_232751714"}, header_76);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_831813766"}, header_76);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1696644777"}, header_76);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(16, 20, 27, 13, 1, 2000)}, header_76);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1363683485"}, header_76);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1765366619"}, header_76);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_8844346"}, header_76);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_573827742"}, header_76);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1227812102}, header_76);
  all_values.push_back(header_76);
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
