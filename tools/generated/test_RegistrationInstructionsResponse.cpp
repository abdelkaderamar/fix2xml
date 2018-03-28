#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/RegistrationInstructionsResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RegistrationInstructionsResponse, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RegistrationInstructionsResponse msg;

  list<multiset<string>> all_values;
  multiset<string> RegistrationInstructionsResponse_0;
  FIX::Account Account_39("STRING_1367276200");
  msg.set(Account_39);
  RegistrationInstructionsResponse_0.insert(Account_39.getString());
  FIX::AcctIDSource AcctIDSource_32(1);
  msg.set(AcctIDSource_32);
  RegistrationInstructionsResponse_0.insert(AcctIDSource_32.getString());
  FIX::ClOrdID ClOrdID_45("STRING_2110009011");
  msg.set(ClOrdID_45);
  RegistrationInstructionsResponse_0.insert(ClOrdID_45.getString());
  FIX::RegistID RegistID_9("STRING_1373882718");
  msg.set(RegistID_9);
  RegistrationInstructionsResponse_0.insert(RegistID_9.getString());
  FIX::RegistRefID RegistRefID_1("STRING_1726160969");
  msg.set(RegistRefID_1);
  RegistrationInstructionsResponse_0.insert(RegistRefID_1.getString());
  FIX::RegistRejReasonCode RegistRejReasonCode_0(99);
  msg.set(RegistRejReasonCode_0);
  RegistrationInstructionsResponse_0.insert(RegistRejReasonCode_0.getString());
  FIX::RegistRejReasonText RegistRejReasonText_0("STRING_1687032300");
  msg.set(RegistRejReasonText_0);
  RegistrationInstructionsResponse_0.insert(RegistRejReasonText_0.getString());
  FIX::RegistStatus RegistStatus_1('H');
  msg.set(RegistStatus_1);
  RegistrationInstructionsResponse_0.insert(RegistStatus_1.getString());
  FIX::RegistTransType RegistTransType_1('1');
  msg.set(RegistTransType_1);
  RegistrationInstructionsResponse_0.insert(RegistTransType_1.getString());
  all_values.push_back(RegistrationInstructionsResponse_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_124;
    FIX::PartyID PartyID_124("STRING_1284818949");
    noPartyIDs_0_0.set(PartyID_124);
    Parties_NoPartyIDs_124.insert(PartyID_124.getString());
    FIX::PartyIDSource PartyIDSource_124('1');
    noPartyIDs_0_0.set(PartyIDSource_124);
    Parties_NoPartyIDs_124.insert(PartyIDSource_124.getString());
    FIX::PartyRole PartyRole_124(46);
    noPartyIDs_0_0.set(PartyRole_124);
    Parties_NoPartyIDs_124.insert(PartyRole_124.getString());
    all_values.push_back(Parties_NoPartyIDs_124);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_248;
      FIX::PartySubID PartySubID_248("STRING_969800621");
      noPartySubIDs_0_1_0.set(PartySubID_248);
      PtysSubGrp_NoPartySubIDs_248.insert(PartySubID_248.getString());
      FIX::PartySubIDType PartySubIDType_248(25);
      noPartySubIDs_0_1_0.set(PartySubIDType_248);
      PtysSubGrp_NoPartySubIDs_248.insert(PartySubIDType_248.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_248);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_249;
      FIX::PartySubID PartySubID_249("STRING_709873380");
      noPartySubIDs_0_1_1.set(PartySubID_249);
      PtysSubGrp_NoPartySubIDs_249.insert(PartySubID_249.getString());
      FIX::PartySubIDType PartySubIDType_249(4);
      noPartySubIDs_0_1_1.set(PartySubIDType_249);
      PtysSubGrp_NoPartySubIDs_249.insert(PartySubIDType_249.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_249);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_250;
      FIX::PartySubID PartySubID_250("STRING_1346479567");
      noPartySubIDs_0_1_2.set(PartySubID_250);
      PtysSubGrp_NoPartySubIDs_250.insert(PartySubID_250.getString());
      FIX::PartySubIDType PartySubIDType_250(1);
      noPartySubIDs_0_1_2.set(PartySubIDType_250);
      PtysSubGrp_NoPartySubIDs_250.insert(PartySubIDType_250.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_250);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_125;
    FIX::PartyID PartyID_125("STRING_1890671230");
    noPartyIDs_0_1.set(PartyID_125);
    Parties_NoPartyIDs_125.insert(PartyID_125.getString());
    FIX::PartyIDSource PartyIDSource_125('2');
    noPartyIDs_0_1.set(PartyIDSource_125);
    Parties_NoPartyIDs_125.insert(PartyIDSource_125.getString());
    FIX::PartyRole PartyRole_125(74);
    noPartyIDs_0_1.set(PartyRole_125);
    Parties_NoPartyIDs_125.insert(PartyRole_125.getString());
    all_values.push_back(Parties_NoPartyIDs_125);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_251;
      FIX::PartySubID PartySubID_251("STRING_1722220790");
      noPartySubIDs_1_1_0.set(PartySubID_251);
      PtysSubGrp_NoPartySubIDs_251.insert(PartySubID_251.getString());
      FIX::PartySubIDType PartySubIDType_251(12);
      noPartySubIDs_1_1_0.set(PartySubIDType_251);
      PtysSubGrp_NoPartySubIDs_251.insert(PartySubIDType_251.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_251);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_126;
    FIX::PartyID PartyID_126("STRING_145426697");
    noPartyIDs_0_2.set(PartyID_126);
    Parties_NoPartyIDs_126.insert(PartyID_126.getString());
    FIX::PartyIDSource PartyIDSource_126('D');
    noPartyIDs_0_2.set(PartyIDSource_126);
    Parties_NoPartyIDs_126.insert(PartyIDSource_126.getString());
    FIX::PartyRole PartyRole_126(27);
    noPartyIDs_0_2.set(PartyRole_126);
    Parties_NoPartyIDs_126.insert(PartyRole_126.getString());
    all_values.push_back(Parties_NoPartyIDs_126);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_252;
      FIX::PartySubID PartySubID_252("STRING_1162174112");
      noPartySubIDs_2_1_0.set(PartySubID_252);
      PtysSubGrp_NoPartySubIDs_252.insert(PartySubID_252.getString());
      FIX::PartySubIDType PartySubIDType_252(22);
      noPartySubIDs_2_1_0.set(PartySubIDType_252);
      PtysSubGrp_NoPartySubIDs_252.insert(PartySubIDType_252.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_252);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
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
