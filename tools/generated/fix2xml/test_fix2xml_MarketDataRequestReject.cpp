#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataRequestReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataRequestReject, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataRequestReject msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequestReject_0;
  set_field(msg, FIX::EncodedText{"DATA_37087205"}, MarketDataRequestReject_0);
  set_field(msg, FIX::EncodedTextLen{783842341}, MarketDataRequestReject_0);
  set_field(msg, FIX::MDReqID{"STRING_6879441"}, MarketDataRequestReject_0);
  set_field(msg, FIX::MDReqRejReason{'8'}, MarketDataRequestReject_0);
  set_field(msg, FIX::Text{"STRING_1558770938"}, MarketDataRequestReject_0);
  all_values.push_back(MarketDataRequestReject_0);

  all_compo_names.insert("MarketDataRequestReject");

  // MDRjctGrp
  // Group MDRjctGrp.NoAltMDSource
  {
    FIX50SP2::MarketDataRequestReject::NoAltMDSource noAltMDSource_0_0;
    // MDRjctGrp.NoAltMDSource
    multiset<string> MDRjctGrp_NoAltMDSource_0;
    set_field(noAltMDSource_0_0, FIX::AltMDSourceID{"STRING_1217023994"}, MDRjctGrp_NoAltMDSource_0);
    all_values.push_back(MDRjctGrp_NoAltMDSource_0);
    all_compo_names.insert("...NoAltMDSource");

    msg.addGroup(noAltMDSource_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MarketDataRequestReject::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_57;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1985868619"}, Parties_NoPartyIDs_57);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_57);
    set_field(noPartyIDs_0_0, FIX::PartyRole{42}, Parties_NoPartyIDs_57);
    all_values.push_back(Parties_NoPartyIDs_57);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_116;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_378724995"}, PtysSubGrp_NoPartySubIDs_116);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_116);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_116);
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
