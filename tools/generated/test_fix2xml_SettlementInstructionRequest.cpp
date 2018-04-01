#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementInstructionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementInstructionRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SettlementInstructionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructionRequest_0;
  set_field(msg, FIX::AllocAccount{"STRING_714000678"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::AllocAcctIDSource{2040651342}, SettlementInstructionRequest_0);
  set_field(msg, FIX::CFICode{"STRING_72553055"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(22, 5, 11, 1, 4, 2006)}, SettlementInstructionRequest_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(5, 20, 54, 23, 4, 2008)}, SettlementInstructionRequest_0);
  set_field(msg, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(4, 6, 16, 12, 12, 2003)}, SettlementInstructionRequest_0);
  set_field(msg, FIX::Product{10}, SettlementInstructionRequest_0);
  set_field(msg, FIX::SecurityType{"STRING_TMCP"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::SettlCurrency{"EUR"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::SettlInstReqID{"STRING_1620145756"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::Side{'B'}, SettlementInstructionRequest_0);
  set_field(msg, FIX::StandInstDbID{"STRING_1643970620"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::StandInstDbName{"STRING_186662786"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::StandInstDbType{2}, SettlementInstructionRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(5, 30, 52, 0, 12, 2012)}, SettlementInstructionRequest_0);
  all_values.push_back(SettlementInstructionRequest_0);

  all_compo_names.insert("SettlementInstructionRequest");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::SettlementInstructionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_124;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_963610931"}, Parties_NoPartyIDs_124);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_124);
    set_field(noPartyIDs_0_0, FIX::PartyRole{81}, Parties_NoPartyIDs_124);
    all_values.push_back(Parties_NoPartyIDs_124);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_258;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_742733600"}, PtysSubGrp_NoPartySubIDs_258);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_258);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_258);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_259;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1169253353"}, PtysSubGrp_NoPartySubIDs_259);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_259);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_259);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_260;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_778818726"}, PtysSubGrp_NoPartySubIDs_260);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_260);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_260);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::SettlementInstructionRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_125;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1779872651"}, Parties_NoPartyIDs_125);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_125);
    set_field(noPartyIDs_0_1, FIX::PartyRole{52}, Parties_NoPartyIDs_125);
    all_values.push_back(Parties_NoPartyIDs_125);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_261;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_183484544"}, PtysSubGrp_NoPartySubIDs_261);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_261);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_261);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
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
