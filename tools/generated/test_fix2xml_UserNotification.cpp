#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/UserNotification.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( UserNotification, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::UserNotification msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> UserNotification_0;
  set_field(msg, FIX::EncodedText{"DATA_951264529"}, UserNotification_0);
  set_field(msg, FIX::EncodedTextLen{1253334106}, UserNotification_0);
  set_field(msg, FIX::Text{"STRING_699217940"}, UserNotification_0);
  set_field(msg, FIX::UserStatus{5}, UserNotification_0);
  all_values.push_back(UserNotification_0);

  all_compo_names.insert("UserNotification");

  // UsernameGrp
  // Group UsernameGrp.NoUsernames
  {
    FIX50SP2::UserNotification::NoUsernames noUsernames_0_0;
    // UsernameGrp.NoUsernames
    multiset<string> UsernameGrp_NoUsernames_0;
    set_field(noUsernames_0_0, FIX::Username{"STRING_1858826018"}, UsernameGrp_NoUsernames_0);
    all_values.push_back(UsernameGrp_NoUsernames_0);
    all_compo_names.insert("...NoUsernames");

    msg.addGroup(noUsernames_0_0);
  }
  {
    FIX50SP2::UserNotification::NoUsernames noUsernames_0_1;
    // UsernameGrp.NoUsernames
    multiset<string> UsernameGrp_NoUsernames_1;
    set_field(noUsernames_0_1, FIX::Username{"STRING_806269183"}, UsernameGrp_NoUsernames_1);
    all_values.push_back(UsernameGrp_NoUsernames_1);
    all_compo_names.insert("...NoUsernames");

    msg.addGroup(noUsernames_0_1);
  }
  {
    FIX50SP2::UserNotification::NoUsernames noUsernames_0_2;
    // UsernameGrp.NoUsernames
    multiset<string> UsernameGrp_NoUsernames_2;
    set_field(noUsernames_0_2, FIX::Username{"STRING_45972211"}, UsernameGrp_NoUsernames_2);
    all_values.push_back(UsernameGrp_NoUsernames_2);
    all_compo_names.insert("...NoUsernames");

    msg.addGroup(noUsernames_0_2);
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
