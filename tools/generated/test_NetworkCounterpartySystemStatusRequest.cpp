#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/NetworkCounterpartySystemStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NetworkCounterpartySystemStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NetworkCounterpartySystemStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NetworkCounterpartySystemStatusRequest_0;
  FIX::NetworkRequestID NetworkRequestID_0("STRING_1367029622");
  msg.set(NetworkRequestID_0);
  NetworkCounterpartySystemStatusRequest_0.insert(NetworkRequestID_0.getString());
  FIX::NetworkRequestType NetworkRequestType_0(1);
  msg.set(NetworkRequestType_0);
  NetworkCounterpartySystemStatusRequest_0.insert(NetworkRequestType_0.getString());
  all_values.push_back(NetworkCounterpartySystemStatusRequest_0);

  all_compo_names.insert("NetworkCounterpartySystemStatusRequest");

  // CompIDReqGrp
  // Group CompIDReqGrp.NoCompIDs
  {
    FIX50SP2::NetworkCounterpartySystemStatusRequest::NoCompIDs noCompIDs_0_0;
    // CompIDReqGrp.NoCompIDs
    multiset<string> CompIDReqGrp_NoCompIDs_0;
    FIX::DeskID DeskID_3("STRING_1931916313");
    noCompIDs_0_0.set(DeskID_3);
    CompIDReqGrp_NoCompIDs_0.insert(DeskID_3.getString());
    FIX::LocationID LocationID_3("STRING_1589335293");
    noCompIDs_0_0.set(LocationID_3);
    CompIDReqGrp_NoCompIDs_0.insert(LocationID_3.getString());
    FIX::RefCompID RefCompID_0("STRING_2108629533");
    noCompIDs_0_0.set(RefCompID_0);
    CompIDReqGrp_NoCompIDs_0.insert(RefCompID_0.getString());
    FIX::RefSubID RefSubID_0("STRING_203192157");
    noCompIDs_0_0.set(RefSubID_0);
    CompIDReqGrp_NoCompIDs_0.insert(RefSubID_0.getString());
    all_values.push_back(CompIDReqGrp_NoCompIDs_0);
    all_compo_names.insert("CompIDReqGrp.NoCompIDs");

    msg.addGroup(noCompIDs_0_0);
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
