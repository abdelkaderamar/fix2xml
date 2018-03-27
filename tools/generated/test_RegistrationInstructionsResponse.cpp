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
  FIX::Account Account_41("STRING_1453468332");
  msg.set(Account_41);
  RegistrationInstructionsResponse_0.insert(Account_41.getString());
  FIX::AcctIDSource AcctIDSource_34(99);
  msg.set(AcctIDSource_34);
  RegistrationInstructionsResponse_0.insert(AcctIDSource_34.getString());
  FIX::ClOrdID ClOrdID_45("STRING_804621639");
  msg.set(ClOrdID_45);
  RegistrationInstructionsResponse_0.insert(ClOrdID_45.getString());
  FIX::RegistID RegistID_9("STRING_1837293918");
  msg.set(RegistID_9);
  RegistrationInstructionsResponse_0.insert(RegistID_9.getString());
  FIX::RegistRefID RegistRefID_1("STRING_364023524");
  msg.set(RegistRefID_1);
  RegistrationInstructionsResponse_0.insert(RegistRefID_1.getString());
  FIX::RegistRejReasonCode RegistRejReasonCode_0(10);
  msg.set(RegistRejReasonCode_0);
  RegistrationInstructionsResponse_0.insert(RegistRejReasonCode_0.getString());
  FIX::RegistRejReasonText RegistRejReasonText_0("STRING_2067848966");
  msg.set(RegistRejReasonText_0);
  RegistrationInstructionsResponse_0.insert(RegistRejReasonText_0.getString());
  FIX::RegistStatus RegistStatus_1('A');
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
    multiset<string> Parties_NoPartyIDs_126;
    FIX::PartyID PartyID_126("STRING_243628101");
    noPartyIDs_0_0.set(PartyID_126);
    Parties_NoPartyIDs_126.insert(PartyID_126.getString());
    FIX::PartyIDSource PartyIDSource_126('9');
    noPartyIDs_0_0.set(PartyIDSource_126);
    Parties_NoPartyIDs_126.insert(PartyIDSource_126.getString());
    FIX::PartyRole PartyRole_126(37);
    noPartyIDs_0_0.set(PartyRole_126);
    Parties_NoPartyIDs_126.insert(PartyRole_126.getString());
    all_values.push_back(Parties_NoPartyIDs_126);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_250;
      FIX::PartySubID PartySubID_250("STRING_1806631282");
      noPartySubIDs_0_1_0.set(PartySubID_250);
      PtysSubGrp_NoPartySubIDs_250.insert(PartySubID_250.getString());
      FIX::PartySubIDType PartySubIDType_250(33);
      noPartySubIDs_0_1_0.set(PartySubIDType_250);
      PtysSubGrp_NoPartySubIDs_250.insert(PartySubIDType_250.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_250);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_127;
    FIX::PartyID PartyID_127("STRING_580936622");
    noPartyIDs_0_1.set(PartyID_127);
    Parties_NoPartyIDs_127.insert(PartyID_127.getString());
    FIX::PartyIDSource PartyIDSource_127('E');
    noPartyIDs_0_1.set(PartyIDSource_127);
    Parties_NoPartyIDs_127.insert(PartyIDSource_127.getString());
    FIX::PartyRole PartyRole_127(82);
    noPartyIDs_0_1.set(PartyRole_127);
    Parties_NoPartyIDs_127.insert(PartyRole_127.getString());
    all_values.push_back(Parties_NoPartyIDs_127);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_251;
      FIX::PartySubID PartySubID_251("STRING_1041000405");
      noPartySubIDs_1_1_0.set(PartySubID_251);
      PtysSubGrp_NoPartySubIDs_251.insert(PartySubID_251.getString());
      FIX::PartySubIDType PartySubIDType_251(19);
      noPartySubIDs_1_1_0.set(PartySubIDType_251);
      PtysSubGrp_NoPartySubIDs_251.insert(PartySubIDType_251.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_251);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_252;
      FIX::PartySubID PartySubID_252("STRING_678033621");
      noPartySubIDs_1_1_1.set(PartySubID_252);
      PtysSubGrp_NoPartySubIDs_252.insert(PartySubID_252.getString());
      FIX::PartySubIDType PartySubIDType_252(14);
      noPartySubIDs_1_1_1.set(PartySubIDType_252);
      PtysSubGrp_NoPartySubIDs_252.insert(PartySubIDType_252.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_252);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_128;
    FIX::PartyID PartyID_128("STRING_412580030");
    noPartyIDs_0_2.set(PartyID_128);
    Parties_NoPartyIDs_128.insert(PartyID_128.getString());
    FIX::PartyIDSource PartyIDSource_128('F');
    noPartyIDs_0_2.set(PartyIDSource_128);
    Parties_NoPartyIDs_128.insert(PartyIDSource_128.getString());
    FIX::PartyRole PartyRole_128(68);
    noPartyIDs_0_2.set(PartyRole_128);
    Parties_NoPartyIDs_128.insert(PartyRole_128.getString());
    all_values.push_back(Parties_NoPartyIDs_128);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_253;
      FIX::PartySubID PartySubID_253("STRING_1883645341");
      noPartySubIDs_2_1_0.set(PartySubID_253);
      PtysSubGrp_NoPartySubIDs_253.insert(PartySubID_253.getString());
      FIX::PartySubIDType PartySubIDType_253(6);
      noPartySubIDs_2_1_0.set(PartySubIDType_253);
      PtysSubGrp_NoPartySubIDs_253.insert(PartySubIDType_253.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_253);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_254;
      FIX::PartySubID PartySubID_254("STRING_1055473508");
      noPartySubIDs_2_1_1.set(PartySubID_254);
      PtysSubGrp_NoPartySubIDs_254.insert(PartySubID_254.getString());
      FIX::PartySubIDType PartySubIDType_254(24);
      noPartySubIDs_2_1_1.set(PartySubIDType_254);
      PtysSubGrp_NoPartySubIDs_254.insert(PartySubIDType_254.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_254);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_255;
      FIX::PartySubID PartySubID_255("STRING_657537032");
      noPartySubIDs_2_1_2.set(PartySubID_255);
      PtysSubGrp_NoPartySubIDs_255.insert(PartySubID_255.getString());
      FIX::PartySubIDType PartySubIDType_255(21);
      noPartySubIDs_2_1_2.set(PartySubIDType_255);
      PtysSubGrp_NoPartySubIDs_255.insert(PartySubIDType_255.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_255);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
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
