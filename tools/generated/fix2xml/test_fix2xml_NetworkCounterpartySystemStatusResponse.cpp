#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NetworkCounterpartySystemStatusResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NetworkCounterpartySystemStatusResponse, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NetworkCounterpartySystemStatusResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NetworkCounterpartySystemStatusResponse_0;
  set_field(msg, FIX::LastNetworkResponseID{"STRING_906563472"}, NetworkCounterpartySystemStatusResponse_0);
  set_field(msg, FIX::NetworkRequestID{"STRING_1535066992"}, NetworkCounterpartySystemStatusResponse_0);
  set_field(msg, FIX::NetworkResponseID{"STRING_2039503455"}, NetworkCounterpartySystemStatusResponse_0);
  set_field(msg, FIX::NetworkStatusResponseType{1}, NetworkCounterpartySystemStatusResponse_0);
  all_values.push_back(NetworkCounterpartySystemStatusResponse_0);

  all_compo_names.insert("NetworkCounterpartySystemStatusResponse");

  // CompIDStatGrp
  // Group CompIDStatGrp.NoCompIDs
  {
    FIX50SP2::NetworkCounterpartySystemStatusResponse::NoCompIDs noCompIDs_0_0;
    // CompIDStatGrp.NoCompIDs
    multiset<string> CompIDStatGrp_NoCompIDs_0;
    set_field(noCompIDs_0_0, FIX::DeskID{"STRING_1929129255"}, CompIDStatGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::LocationID{"STRING_838445450"}, CompIDStatGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::RefCompID{"STRING_848439699"}, CompIDStatGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::RefSubID{"STRING_991039019"}, CompIDStatGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::StatusText{"STRING_1031416729"}, CompIDStatGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::StatusValue{4}, CompIDStatGrp_NoCompIDs_0);
    all_values.push_back(CompIDStatGrp_NoCompIDs_0);
    all_compo_names.insert("...NoCompIDs");

    msg.addGroup(noCompIDs_0_0);
  }
  {
    FIX50SP2::NetworkCounterpartySystemStatusResponse::NoCompIDs noCompIDs_0_1;
    // CompIDStatGrp.NoCompIDs
    multiset<string> CompIDStatGrp_NoCompIDs_1;
    set_field(noCompIDs_0_1, FIX::DeskID{"STRING_191192360"}, CompIDStatGrp_NoCompIDs_1);
    set_field(noCompIDs_0_1, FIX::LocationID{"STRING_1837144122"}, CompIDStatGrp_NoCompIDs_1);
    set_field(noCompIDs_0_1, FIX::RefCompID{"STRING_35505330"}, CompIDStatGrp_NoCompIDs_1);
    set_field(noCompIDs_0_1, FIX::RefSubID{"STRING_1002926106"}, CompIDStatGrp_NoCompIDs_1);
    set_field(noCompIDs_0_1, FIX::StatusText{"STRING_123046018"}, CompIDStatGrp_NoCompIDs_1);
    set_field(noCompIDs_0_1, FIX::StatusValue{4}, CompIDStatGrp_NoCompIDs_1);
    all_values.push_back(CompIDStatGrp_NoCompIDs_1);
    all_compo_names.insert("...NoCompIDs");

    msg.addGroup(noCompIDs_0_1);
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
