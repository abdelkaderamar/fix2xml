#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

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
  FIX::LastNetworkResponseID LastNetworkResponseID_0("STRING_442946639");
  msg.set(LastNetworkResponseID_0);
  NetworkCounterpartySystemStatusResponse_0.insert(LastNetworkResponseID_0.getString());
  FIX::NetworkRequestID NetworkRequestID_1("STRING_1071831601");
  msg.set(NetworkRequestID_1);
  NetworkCounterpartySystemStatusResponse_0.insert(NetworkRequestID_1.getString());
  FIX::NetworkResponseID NetworkResponseID_0("STRING_1779349724");
  msg.set(NetworkResponseID_0);
  NetworkCounterpartySystemStatusResponse_0.insert(NetworkResponseID_0.getString());
  FIX::NetworkStatusResponseType NetworkStatusResponseType_0(2);
  msg.set(NetworkStatusResponseType_0);
  NetworkCounterpartySystemStatusResponse_0.insert(NetworkStatusResponseType_0.getString());
  all_values.push_back(NetworkCounterpartySystemStatusResponse_0);

  all_compo_names.insert("NetworkCounterpartySystemStatusResponse");

  // CompIDStatGrp
  // Group CompIDStatGrp.NoCompIDs
  {
    FIX50SP2::NetworkCounterpartySystemStatusResponse::NoCompIDs noCompIDs_0_0;
    // CompIDStatGrp.NoCompIDs
    multiset<string> CompIDStatGrp_NoCompIDs_0;
    FIX::DeskID DeskID_4("STRING_366389800");
    noCompIDs_0_0.set(DeskID_4);
    CompIDStatGrp_NoCompIDs_0.insert(DeskID_4.getString());
    FIX::LocationID LocationID_4("STRING_1516746843");
    noCompIDs_0_0.set(LocationID_4);
    CompIDStatGrp_NoCompIDs_0.insert(LocationID_4.getString());
    FIX::RefCompID RefCompID_1("STRING_1915332637");
    noCompIDs_0_0.set(RefCompID_1);
    CompIDStatGrp_NoCompIDs_0.insert(RefCompID_1.getString());
    FIX::RefSubID RefSubID_1("STRING_1078111392");
    noCompIDs_0_0.set(RefSubID_1);
    CompIDStatGrp_NoCompIDs_0.insert(RefSubID_1.getString());
    FIX::StatusText StatusText_0("STRING_1277866398");
    noCompIDs_0_0.set(StatusText_0);
    CompIDStatGrp_NoCompIDs_0.insert(StatusText_0.getString());
    FIX::StatusValue StatusValue_0(1);
    noCompIDs_0_0.set(StatusValue_0);
    CompIDStatGrp_NoCompIDs_0.insert(StatusValue_0.getString());
    all_values.push_back(CompIDStatGrp_NoCompIDs_0);
    all_compo_names.insert("CompIDStatGrp.NoCompIDs");

    msg.addGroup(noCompIDs_0_0);
  }
  {
    FIX50SP2::NetworkCounterpartySystemStatusResponse::NoCompIDs noCompIDs_0_1;
    // CompIDStatGrp.NoCompIDs
    multiset<string> CompIDStatGrp_NoCompIDs_1;
    FIX::DeskID DeskID_5("STRING_525057701");
    noCompIDs_0_1.set(DeskID_5);
    CompIDStatGrp_NoCompIDs_1.insert(DeskID_5.getString());
    FIX::LocationID LocationID_5("STRING_131933044");
    noCompIDs_0_1.set(LocationID_5);
    CompIDStatGrp_NoCompIDs_1.insert(LocationID_5.getString());
    FIX::RefCompID RefCompID_2("STRING_910953514");
    noCompIDs_0_1.set(RefCompID_2);
    CompIDStatGrp_NoCompIDs_1.insert(RefCompID_2.getString());
    FIX::RefSubID RefSubID_2("STRING_694350437");
    noCompIDs_0_1.set(RefSubID_2);
    CompIDStatGrp_NoCompIDs_1.insert(RefSubID_2.getString());
    FIX::StatusText StatusText_1("STRING_711023340");
    noCompIDs_0_1.set(StatusText_1);
    CompIDStatGrp_NoCompIDs_1.insert(StatusText_1.getString());
    FIX::StatusValue StatusValue_1(2);
    noCompIDs_0_1.set(StatusValue_1);
    CompIDStatGrp_NoCompIDs_1.insert(StatusValue_1.getString());
    all_values.push_back(CompIDStatGrp_NoCompIDs_1);
    all_compo_names.insert("CompIDStatGrp.NoCompIDs");

    msg.addGroup(noCompIDs_0_1);
  }
  {
    FIX50SP2::NetworkCounterpartySystemStatusResponse::NoCompIDs noCompIDs_0_2;
    // CompIDStatGrp.NoCompIDs
    multiset<string> CompIDStatGrp_NoCompIDs_2;
    FIX::DeskID DeskID_6("STRING_30742835");
    noCompIDs_0_2.set(DeskID_6);
    CompIDStatGrp_NoCompIDs_2.insert(DeskID_6.getString());
    FIX::LocationID LocationID_6("STRING_1558643757");
    noCompIDs_0_2.set(LocationID_6);
    CompIDStatGrp_NoCompIDs_2.insert(LocationID_6.getString());
    FIX::RefCompID RefCompID_3("STRING_1479377208");
    noCompIDs_0_2.set(RefCompID_3);
    CompIDStatGrp_NoCompIDs_2.insert(RefCompID_3.getString());
    FIX::RefSubID RefSubID_3("STRING_876833693");
    noCompIDs_0_2.set(RefSubID_3);
    CompIDStatGrp_NoCompIDs_2.insert(RefSubID_3.getString());
    FIX::StatusText StatusText_2("STRING_732553499");
    noCompIDs_0_2.set(StatusText_2);
    CompIDStatGrp_NoCompIDs_2.insert(StatusText_2.getString());
    FIX::StatusValue StatusValue_2(4);
    noCompIDs_0_2.set(StatusValue_2);
    CompIDStatGrp_NoCompIDs_2.insert(StatusValue_2.getString());
    all_values.push_back(CompIDStatGrp_NoCompIDs_2);
    all_compo_names.insert("CompIDStatGrp.NoCompIDs");

    msg.addGroup(noCompIDs_0_2);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl; 
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
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
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
