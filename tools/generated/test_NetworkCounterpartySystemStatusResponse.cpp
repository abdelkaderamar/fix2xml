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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NetworkCounterpartySystemStatusResponse msg;

  list<multiset<string>> all_values;
  multiset<string> NetworkCounterpartySystemStatusResponse_0;
  FIX::LastNetworkResponseID LastNetworkResponseID_0("STRING_2036773930");
  msg.set(LastNetworkResponseID_0);
  NetworkCounterpartySystemStatusResponse_0.insert(LastNetworkResponseID_0.getString());
  FIX::NetworkRequestID NetworkRequestID_1("STRING_1298830886");
  msg.set(NetworkRequestID_1);
  NetworkCounterpartySystemStatusResponse_0.insert(NetworkRequestID_1.getString());
  FIX::NetworkResponseID NetworkResponseID_0("STRING_1467470066");
  msg.set(NetworkResponseID_0);
  NetworkCounterpartySystemStatusResponse_0.insert(NetworkResponseID_0.getString());
  FIX::NetworkStatusResponseType NetworkStatusResponseType_0(2);
  msg.set(NetworkStatusResponseType_0);
  NetworkCounterpartySystemStatusResponse_0.insert(NetworkStatusResponseType_0.getString());
  all_values.push_back(NetworkCounterpartySystemStatusResponse_0);

  // CompIDStatGrp
  // Group CompIDStatGrp.NoCompIDs
  {
    FIX50SP2::NetworkCounterpartySystemStatusResponse::NoCompIDs noCompIDs_0_0;
    // CompIDStatGrp.NoCompIDs
    multiset<string> CompIDStatGrp_NoCompIDs_0;
    FIX::DeskID DeskID_8("STRING_2094853696");
    noCompIDs_0_0.set(DeskID_8);
    CompIDStatGrp_NoCompIDs_0.insert(DeskID_8.getString());
    FIX::LocationID LocationID_8("STRING_1682582214");
    noCompIDs_0_0.set(LocationID_8);
    CompIDStatGrp_NoCompIDs_0.insert(LocationID_8.getString());
    FIX::RefCompID RefCompID_3("STRING_1725610116");
    noCompIDs_0_0.set(RefCompID_3);
    CompIDStatGrp_NoCompIDs_0.insert(RefCompID_3.getString());
    FIX::RefSubID RefSubID_3("STRING_632900168");
    noCompIDs_0_0.set(RefSubID_3);
    CompIDStatGrp_NoCompIDs_0.insert(RefSubID_3.getString());
    FIX::StatusText StatusText_0("STRING_1817295519");
    noCompIDs_0_0.set(StatusText_0);
    CompIDStatGrp_NoCompIDs_0.insert(StatusText_0.getString());
    FIX::StatusValue StatusValue_0(3);
    noCompIDs_0_0.set(StatusValue_0);
    CompIDStatGrp_NoCompIDs_0.insert(StatusValue_0.getString());
    all_values.push_back(CompIDStatGrp_NoCompIDs_0);

    msg.addGroup(noCompIDs_0_0);
  }
  {
    FIX50SP2::NetworkCounterpartySystemStatusResponse::NoCompIDs noCompIDs_0_1;
    // CompIDStatGrp.NoCompIDs
    multiset<string> CompIDStatGrp_NoCompIDs_1;
    FIX::DeskID DeskID_9("STRING_320845804");
    noCompIDs_0_1.set(DeskID_9);
    CompIDStatGrp_NoCompIDs_1.insert(DeskID_9.getString());
    FIX::LocationID LocationID_9("STRING_2000162780");
    noCompIDs_0_1.set(LocationID_9);
    CompIDStatGrp_NoCompIDs_1.insert(LocationID_9.getString());
    FIX::RefCompID RefCompID_4("STRING_1907645607");
    noCompIDs_0_1.set(RefCompID_4);
    CompIDStatGrp_NoCompIDs_1.insert(RefCompID_4.getString());
    FIX::RefSubID RefSubID_4("STRING_1355488489");
    noCompIDs_0_1.set(RefSubID_4);
    CompIDStatGrp_NoCompIDs_1.insert(RefSubID_4.getString());
    FIX::StatusText StatusText_1("STRING_1308549292");
    noCompIDs_0_1.set(StatusText_1);
    CompIDStatGrp_NoCompIDs_1.insert(StatusText_1.getString());
    FIX::StatusValue StatusValue_1(1);
    noCompIDs_0_1.set(StatusValue_1);
    CompIDStatGrp_NoCompIDs_1.insert(StatusValue_1.getString());
    all_values.push_back(CompIDStatGrp_NoCompIDs_1);

    msg.addGroup(noCompIDs_0_1);
  }
  {
    FIX50SP2::NetworkCounterpartySystemStatusResponse::NoCompIDs noCompIDs_0_2;
    // CompIDStatGrp.NoCompIDs
    multiset<string> CompIDStatGrp_NoCompIDs_2;
    FIX::DeskID DeskID_10("STRING_286772570");
    noCompIDs_0_2.set(DeskID_10);
    CompIDStatGrp_NoCompIDs_2.insert(DeskID_10.getString());
    FIX::LocationID LocationID_10("STRING_1181342486");
    noCompIDs_0_2.set(LocationID_10);
    CompIDStatGrp_NoCompIDs_2.insert(LocationID_10.getString());
    FIX::RefCompID RefCompID_5("STRING_290354710");
    noCompIDs_0_2.set(RefCompID_5);
    CompIDStatGrp_NoCompIDs_2.insert(RefCompID_5.getString());
    FIX::RefSubID RefSubID_5("STRING_512443629");
    noCompIDs_0_2.set(RefSubID_5);
    CompIDStatGrp_NoCompIDs_2.insert(RefSubID_5.getString());
    FIX::StatusText StatusText_2("STRING_1230584405");
    noCompIDs_0_2.set(StatusText_2);
    CompIDStatGrp_NoCompIDs_2.insert(StatusText_2.getString());
    FIX::StatusValue StatusValue_2(2);
    noCompIDs_0_2.set(StatusValue_2);
    CompIDStatGrp_NoCompIDs_2.insert(StatusValue_2.getString());
    all_values.push_back(CompIDStatGrp_NoCompIDs_2);

    msg.addGroup(noCompIDs_0_2);
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
