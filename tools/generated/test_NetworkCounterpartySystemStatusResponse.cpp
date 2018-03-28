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
  multiset<string> NetworkCounterpartySystemStatusResponse_0;
  FIX::LastNetworkResponseID LastNetworkResponseID_0("STRING_1651748158");
  msg.set(LastNetworkResponseID_0);
  NetworkCounterpartySystemStatusResponse_0.insert(LastNetworkResponseID_0.getString());
  FIX::NetworkRequestID NetworkRequestID_1("STRING_1351958215");
  msg.set(NetworkRequestID_1);
  NetworkCounterpartySystemStatusResponse_0.insert(NetworkRequestID_1.getString());
  FIX::NetworkResponseID NetworkResponseID_0("STRING_1066956565");
  msg.set(NetworkResponseID_0);
  NetworkCounterpartySystemStatusResponse_0.insert(NetworkResponseID_0.getString());
  FIX::NetworkStatusResponseType NetworkStatusResponseType_0(1);
  msg.set(NetworkStatusResponseType_0);
  NetworkCounterpartySystemStatusResponse_0.insert(NetworkStatusResponseType_0.getString());
  all_values.push_back(NetworkCounterpartySystemStatusResponse_0);

  // CompIDStatGrp
  // Group CompIDStatGrp.NoCompIDs
  {
    FIX50SP2::NetworkCounterpartySystemStatusResponse::NoCompIDs noCompIDs_0_0;
    // CompIDStatGrp.NoCompIDs
    multiset<string> CompIDStatGrp_NoCompIDs_0;
    FIX::DeskID DeskID_3("STRING_949358281");
    noCompIDs_0_0.set(DeskID_3);
    CompIDStatGrp_NoCompIDs_0.insert(DeskID_3.getString());
    FIX::LocationID LocationID_3("STRING_914026346");
    noCompIDs_0_0.set(LocationID_3);
    CompIDStatGrp_NoCompIDs_0.insert(LocationID_3.getString());
    FIX::RefCompID RefCompID_1("STRING_279559580");
    noCompIDs_0_0.set(RefCompID_1);
    CompIDStatGrp_NoCompIDs_0.insert(RefCompID_1.getString());
    FIX::RefSubID RefSubID_1("STRING_874627571");
    noCompIDs_0_0.set(RefSubID_1);
    CompIDStatGrp_NoCompIDs_0.insert(RefSubID_1.getString());
    FIX::StatusText StatusText_0("STRING_1042944577");
    noCompIDs_0_0.set(StatusText_0);
    CompIDStatGrp_NoCompIDs_0.insert(StatusText_0.getString());
    FIX::StatusValue StatusValue_0(4);
    noCompIDs_0_0.set(StatusValue_0);
    CompIDStatGrp_NoCompIDs_0.insert(StatusValue_0.getString());
    all_values.push_back(CompIDStatGrp_NoCompIDs_0);

    msg.addGroup(noCompIDs_0_0);
  }
  {
    FIX50SP2::NetworkCounterpartySystemStatusResponse::NoCompIDs noCompIDs_0_1;
    // CompIDStatGrp.NoCompIDs
    multiset<string> CompIDStatGrp_NoCompIDs_1;
    FIX::DeskID DeskID_4("STRING_963736628");
    noCompIDs_0_1.set(DeskID_4);
    CompIDStatGrp_NoCompIDs_1.insert(DeskID_4.getString());
    FIX::LocationID LocationID_4("STRING_1960997109");
    noCompIDs_0_1.set(LocationID_4);
    CompIDStatGrp_NoCompIDs_1.insert(LocationID_4.getString());
    FIX::RefCompID RefCompID_2("STRING_553115555");
    noCompIDs_0_1.set(RefCompID_2);
    CompIDStatGrp_NoCompIDs_1.insert(RefCompID_2.getString());
    FIX::RefSubID RefSubID_2("STRING_547847726");
    noCompIDs_0_1.set(RefSubID_2);
    CompIDStatGrp_NoCompIDs_1.insert(RefSubID_2.getString());
    FIX::StatusText StatusText_1("STRING_1516288574");
    noCompIDs_0_1.set(StatusText_1);
    CompIDStatGrp_NoCompIDs_1.insert(StatusText_1.getString());
    FIX::StatusValue StatusValue_1(1);
    noCompIDs_0_1.set(StatusValue_1);
    CompIDStatGrp_NoCompIDs_1.insert(StatusValue_1.getString());
    all_values.push_back(CompIDStatGrp_NoCompIDs_1);

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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
