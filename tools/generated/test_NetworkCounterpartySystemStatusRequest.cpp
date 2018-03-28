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
  multiset<string> NetworkCounterpartySystemStatusRequest_0;
  FIX::NetworkRequestID NetworkRequestID_0("STRING_630225342");
  msg.set(NetworkRequestID_0);
  NetworkCounterpartySystemStatusRequest_0.insert(NetworkRequestID_0.getString());
  FIX::NetworkRequestType NetworkRequestType_0(2);
  msg.set(NetworkRequestType_0);
  NetworkCounterpartySystemStatusRequest_0.insert(NetworkRequestType_0.getString());
  all_values.push_back(NetworkCounterpartySystemStatusRequest_0);

  // CompIDReqGrp
  // Group CompIDReqGrp.NoCompIDs
  {
    FIX50SP2::NetworkCounterpartySystemStatusRequest::NoCompIDs noCompIDs_0_0;
    // CompIDReqGrp.NoCompIDs
    multiset<string> CompIDReqGrp_NoCompIDs_0;
    FIX::DeskID DeskID_2("STRING_913179740");
    noCompIDs_0_0.set(DeskID_2);
    CompIDReqGrp_NoCompIDs_0.insert(DeskID_2.getString());
    FIX::LocationID LocationID_2("STRING_1783993392");
    noCompIDs_0_0.set(LocationID_2);
    CompIDReqGrp_NoCompIDs_0.insert(LocationID_2.getString());
    FIX::RefCompID RefCompID_0("STRING_675767885");
    noCompIDs_0_0.set(RefCompID_0);
    CompIDReqGrp_NoCompIDs_0.insert(RefCompID_0.getString());
    FIX::RefSubID RefSubID_0("STRING_1508324052");
    noCompIDs_0_0.set(RefSubID_0);
    CompIDReqGrp_NoCompIDs_0.insert(RefSubID_0.getString());
    all_values.push_back(CompIDReqGrp_NoCompIDs_0);

    msg.addGroup(noCompIDs_0_0);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
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
