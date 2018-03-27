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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NetworkCounterpartySystemStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> NetworkCounterpartySystemStatusRequest_0;
  FIX::NetworkRequestID NetworkRequestID_0("STRING_1566891125");
  msg.set(NetworkRequestID_0);
  NetworkCounterpartySystemStatusRequest_0.insert(NetworkRequestID_0.getString());
  FIX::NetworkRequestType NetworkRequestType_0(1);
  msg.set(NetworkRequestType_0);
  NetworkCounterpartySystemStatusRequest_0.insert(NetworkRequestType_0.getString());
  all_values.push_back(NetworkCounterpartySystemStatusRequest_0);

  // CompIDReqGrp
  // Group CompIDReqGrp.NoCompIDs
  {
    FIX50SP2::NetworkCounterpartySystemStatusRequest::NoCompIDs noCompIDs_0_0;
    // CompIDReqGrp.NoCompIDs
    multiset<string> CompIDReqGrp_NoCompIDs_0;
    FIX::DeskID DeskID_3("STRING_553956525");
    noCompIDs_0_0.set(DeskID_3);
    CompIDReqGrp_NoCompIDs_0.insert(DeskID_3.getString());
    FIX::LocationID LocationID_3("STRING_1473371475");
    noCompIDs_0_0.set(LocationID_3);
    CompIDReqGrp_NoCompIDs_0.insert(LocationID_3.getString());
    FIX::RefCompID RefCompID_0("STRING_846203833");
    noCompIDs_0_0.set(RefCompID_0);
    CompIDReqGrp_NoCompIDs_0.insert(RefCompID_0.getString());
    FIX::RefSubID RefSubID_0("STRING_437130548");
    noCompIDs_0_0.set(RefSubID_0);
    CompIDReqGrp_NoCompIDs_0.insert(RefSubID_0.getString());
    all_values.push_back(CompIDReqGrp_NoCompIDs_0);

    msg.addGroup(noCompIDs_0_0);
  }
  {
    FIX50SP2::NetworkCounterpartySystemStatusRequest::NoCompIDs noCompIDs_0_1;
    // CompIDReqGrp.NoCompIDs
    multiset<string> CompIDReqGrp_NoCompIDs_1;
    FIX::DeskID DeskID_4("STRING_2001452510");
    noCompIDs_0_1.set(DeskID_4);
    CompIDReqGrp_NoCompIDs_1.insert(DeskID_4.getString());
    FIX::LocationID LocationID_4("STRING_1563726341");
    noCompIDs_0_1.set(LocationID_4);
    CompIDReqGrp_NoCompIDs_1.insert(LocationID_4.getString());
    FIX::RefCompID RefCompID_1("STRING_1673378250");
    noCompIDs_0_1.set(RefCompID_1);
    CompIDReqGrp_NoCompIDs_1.insert(RefCompID_1.getString());
    FIX::RefSubID RefSubID_1("STRING_1215709421");
    noCompIDs_0_1.set(RefSubID_1);
    CompIDReqGrp_NoCompIDs_1.insert(RefSubID_1.getString());
    all_values.push_back(CompIDReqGrp_NoCompIDs_1);

    msg.addGroup(noCompIDs_0_1);
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
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
