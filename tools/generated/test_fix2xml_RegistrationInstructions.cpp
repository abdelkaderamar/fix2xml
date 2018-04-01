#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::RegistrationInstructions msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructions_0;
  set_field(msg, FIX::Account{"STRING_1416550982"}, RegistrationInstructions_0);
  set_field(msg, FIX::AcctIDSource{5}, RegistrationInstructions_0);
  set_field(msg, FIX::ClOrdID{"STRING_611130336"}, RegistrationInstructions_0);
  set_field(msg, FIX::OwnershipType{'2'}, RegistrationInstructions_0);
  set_field(msg, FIX::RegistAcctType{"STRING_4222087"}, RegistrationInstructions_0);
  set_field(msg, FIX::RegistID{"STRING_1665370543"}, RegistrationInstructions_0);
  set_field(msg, FIX::RegistRefID{"STRING_1956552546"}, RegistrationInstructions_0);
  set_field(msg, FIX::RegistTransType{'1'}, RegistrationInstructions_0);
  set_field(msg, FIX::TaxAdvantageType{15}, RegistrationInstructions_0);
  all_values.push_back(RegistrationInstructions_0);

  all_compo_names.insert("RegistrationInstructions");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_115;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1575184611"}, Parties_NoPartyIDs_115);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_115);
    set_field(noPartyIDs_0_0, FIX::PartyRole{19}, Parties_NoPartyIDs_115);
    all_values.push_back(Parties_NoPartyIDs_115);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_236;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1002176197"}, PtysSubGrp_NoPartySubIDs_236);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_236);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_236);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_237;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_113601411"}, PtysSubGrp_NoPartySubIDs_237);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_237);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_237);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_116;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_367381209"}, Parties_NoPartyIDs_116);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_116);
    set_field(noPartyIDs_0_1, FIX::PartyRole{2}, Parties_NoPartyIDs_116);
    all_values.push_back(Parties_NoPartyIDs_116);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_238;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_535585706"}, PtysSubGrp_NoPartySubIDs_238);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_238);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_238);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_239;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_2097421881"}, PtysSubGrp_NoPartySubIDs_239);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_239);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_239);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::RegistrationInstructions::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_240;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_500091868"}, PtysSubGrp_NoPartySubIDs_240);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_240);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_240);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // RgstDistInstGrp
  // Group RgstDistInstGrp.NoDistribInsts
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_0;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_0;
    set_field(noDistribInsts_0_0, FIX::CashDistribAgentAcctName{"STRING_1018277012"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::CashDistribAgentAcctNumber{"STRING_1719450965"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::CashDistribAgentCode{"STRING_1516544779"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::CashDistribAgentName{"STRING_1655724774"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::CashDistribCurr{"JPY"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::CashDistribPayRef{"STRING_1659946861"}, RgstDistInstGrp_NoDistribInsts_0);
    set_field(noDistribInsts_0_0, FIX::DistribPaymentMethod{6}, RgstDistInstGrp_NoDistribInsts_0);
    FIX::DistribPercentage DistribPercentage_0;
    DistribPercentage_0.setString("34.790000");
set_field(noDistribInsts_0_0, DistribPercentage_0, RgstDistInstGrp_NoDistribInsts_0);
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_0);
    all_compo_names.insert("...NoDistribInsts");

    msg.addGroup(noDistribInsts_0_0);
  }
  {
    FIX50SP2::RegistrationInstructions::NoDistribInsts noDistribInsts_0_1;
    // RgstDistInstGrp.NoDistribInsts
    multiset<string> RgstDistInstGrp_NoDistribInsts_1;
    set_field(noDistribInsts_0_1, FIX::CashDistribAgentAcctName{"STRING_2005259064"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::CashDistribAgentAcctNumber{"STRING_1725222440"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::CashDistribAgentCode{"STRING_738865427"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::CashDistribAgentName{"STRING_1432960027"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::CashDistribCurr{"USD"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::CashDistribPayRef{"STRING_895200873"}, RgstDistInstGrp_NoDistribInsts_1);
    set_field(noDistribInsts_0_1, FIX::DistribPaymentMethod{6}, RgstDistInstGrp_NoDistribInsts_1);
    FIX::DistribPercentage DistribPercentage_1;
    DistribPercentage_1.setString("13.440000");
set_field(noDistribInsts_0_1, DistribPercentage_1, RgstDistInstGrp_NoDistribInsts_1);
    all_values.push_back(RgstDistInstGrp_NoDistribInsts_1);
    all_compo_names.insert("...NoDistribInsts");

    msg.addGroup(noDistribInsts_0_1);
  }
  // RgstDtlsGrp
  // Group RgstDtlsGrp.NoRegistDtls
  {
    FIX50SP2::RegistrationInstructions::NoRegistDtls noRegistDtls_0_0;
    // RgstDtlsGrp.NoRegistDtls
    multiset<string> RgstDtlsGrp_NoRegistDtls_0;
    set_field(noRegistDtls_0_0, FIX::DateOfBirth{"LOCALMKTDATE_259540955"}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::InvestorCountryOfResidence{"COUNTRY_1286232554"}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::MailingDtls{"STRING_1149706579"}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::MailingInst{"STRING_2098613520"}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::OwnerType{5}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::RegistDtls{"STRING_1685292286"}, RgstDtlsGrp_NoRegistDtls_0);
    set_field(noRegistDtls_0_0, FIX::RegistEmail{"STRING_495178878"}, RgstDtlsGrp_NoRegistDtls_0);
    all_values.push_back(RgstDtlsGrp_NoRegistDtls_0);
    all_compo_names.insert("...NoRegistDtls");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_128;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_221435837"}, NestedParties_NoNestedPartyIDs_128);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'9'}, NestedParties_NoNestedPartyIDs_128);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1230869260}, NestedParties_NoNestedPartyIDs_128);
      all_values.push_back(NestedParties_NoNestedPartyIDs_128);
      all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::RegistrationInstructions::NoRegistDtls::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_259;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_2013547758"}, NstdPtysSubGrp_NoNestedPartySubIDs_259);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{802836578}, NstdPtysSubGrp_NoNestedPartySubIDs_259);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_259);
        all_compo_names.insert("...NoRegistDtls...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noRegistDtls_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noRegistDtls_0_0);
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
