#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RegistrationInstructionsResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RegistrationInstructionsResponse, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RegistrationInstructionsResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructionsResponse_0;
  set_field(msg, FIX::Account{"STRING_1837974412"}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::AcctIDSource{5}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::ClOrdID{"STRING_985934232"}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistID{"STRING_882805345"}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistRefID{"STRING_1034252097"}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistRejReasonCode{2}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistRejReasonText{"STRING_1884188824"}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistStatus{'R'}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistTransType{'0'}, RegistrationInstructionsResponse_0);
  all_values.push_back(RegistrationInstructionsResponse_0);

  all_compo_names.insert("RegistrationInstructionsResponse");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_117;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_177503892"}, Parties_NoPartyIDs_117);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_117);
    set_field(noPartyIDs_0_0, FIX::PartyRole{2}, Parties_NoPartyIDs_117);
    all_values.push_back(Parties_NoPartyIDs_117);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_241;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_47319498"}, PtysSubGrp_NoPartySubIDs_241);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_241);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_241);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_242;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_2081507050"}, PtysSubGrp_NoPartySubIDs_242);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{21}, PtysSubGrp_NoPartySubIDs_242);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_242);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_118;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1802609616"}, Parties_NoPartyIDs_118);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_118);
    set_field(noPartyIDs_0_1, FIX::PartyRole{35}, Parties_NoPartyIDs_118);
    all_values.push_back(Parties_NoPartyIDs_118);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_243;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_621538620"}, PtysSubGrp_NoPartySubIDs_243);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_243);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_243);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_244;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_830744772"}, PtysSubGrp_NoPartySubIDs_244);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_244);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_244);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_245;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1748439949"}, PtysSubGrp_NoPartySubIDs_245);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_245);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_245);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
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
