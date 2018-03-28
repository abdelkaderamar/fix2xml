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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RegistrationInstructionsResponse msg;

  list<multiset<string>> all_values;
  multiset<string> RegistrationInstructionsResponse_0;
  FIX::Account Account_37("STRING_742518709");
  msg.set(Account_37);
  RegistrationInstructionsResponse_0.insert(Account_37.getString());
  FIX::AcctIDSource AcctIDSource_30(99);
  msg.set(AcctIDSource_30);
  RegistrationInstructionsResponse_0.insert(AcctIDSource_30.getString());
  FIX::ClOrdID ClOrdID_44("STRING_1269569565");
  msg.set(ClOrdID_44);
  RegistrationInstructionsResponse_0.insert(ClOrdID_44.getString());
  FIX::RegistID RegistID_9("STRING_1213609177");
  msg.set(RegistID_9);
  RegistrationInstructionsResponse_0.insert(RegistID_9.getString());
  FIX::RegistRefID RegistRefID_1("STRING_900914983");
  msg.set(RegistRefID_1);
  RegistrationInstructionsResponse_0.insert(RegistRefID_1.getString());
  FIX::RegistRejReasonCode RegistRejReasonCode_0(17);
  msg.set(RegistRejReasonCode_0);
  RegistrationInstructionsResponse_0.insert(RegistRejReasonCode_0.getString());
  FIX::RegistRejReasonText RegistRejReasonText_0("STRING_1246899378");
  msg.set(RegistRejReasonText_0);
  RegistrationInstructionsResponse_0.insert(RegistRejReasonText_0.getString());
  FIX::RegistStatus RegistStatus_1('A');
  msg.set(RegistStatus_1);
  RegistrationInstructionsResponse_0.insert(RegistStatus_1.getString());
  FIX::RegistTransType RegistTransType_1('2');
  msg.set(RegistTransType_1);
  RegistrationInstructionsResponse_0.insert(RegistTransType_1.getString());
  all_values.push_back(RegistrationInstructionsResponse_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_119;
    FIX::PartyID PartyID_119("STRING_1207132882");
    noPartyIDs_0_0.set(PartyID_119);
    Parties_NoPartyIDs_119.insert(PartyID_119.getString());
    FIX::PartyIDSource PartyIDSource_119('A');
    noPartyIDs_0_0.set(PartyIDSource_119);
    Parties_NoPartyIDs_119.insert(PartyIDSource_119.getString());
    FIX::PartyRole PartyRole_119(46);
    noPartyIDs_0_0.set(PartyRole_119);
    Parties_NoPartyIDs_119.insert(PartyRole_119.getString());
    all_values.push_back(Parties_NoPartyIDs_119);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_243;
      FIX::PartySubID PartySubID_243("STRING_280512606");
      noPartySubIDs_0_1_0.set(PartySubID_243);
      PtysSubGrp_NoPartySubIDs_243.insert(PartySubID_243.getString());
      FIX::PartySubIDType PartySubIDType_243(6);
      noPartySubIDs_0_1_0.set(PartySubIDType_243);
      PtysSubGrp_NoPartySubIDs_243.insert(PartySubIDType_243.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_243);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_244;
      FIX::PartySubID PartySubID_244("STRING_995643744");
      noPartySubIDs_0_1_1.set(PartySubID_244);
      PtysSubGrp_NoPartySubIDs_244.insert(PartySubID_244.getString());
      FIX::PartySubIDType PartySubIDType_244(14);
      noPartySubIDs_0_1_1.set(PartySubIDType_244);
      PtysSubGrp_NoPartySubIDs_244.insert(PartySubIDType_244.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_244);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_120;
    FIX::PartyID PartyID_120("STRING_1893386340");
    noPartyIDs_0_1.set(PartyID_120);
    Parties_NoPartyIDs_120.insert(PartyID_120.getString());
    FIX::PartyIDSource PartyIDSource_120('6');
    noPartyIDs_0_1.set(PartyIDSource_120);
    Parties_NoPartyIDs_120.insert(PartyIDSource_120.getString());
    FIX::PartyRole PartyRole_120(46);
    noPartyIDs_0_1.set(PartyRole_120);
    Parties_NoPartyIDs_120.insert(PartyRole_120.getString());
    all_values.push_back(Parties_NoPartyIDs_120);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_245;
      FIX::PartySubID PartySubID_245("STRING_239775938");
      noPartySubIDs_1_1_0.set(PartySubID_245);
      PtysSubGrp_NoPartySubIDs_245.insert(PartySubID_245.getString());
      FIX::PartySubIDType PartySubIDType_245(28);
      noPartySubIDs_1_1_0.set(PartySubIDType_245);
      PtysSubGrp_NoPartySubIDs_245.insert(PartySubIDType_245.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_245);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_246;
      FIX::PartySubID PartySubID_246("STRING_42482875");
      noPartySubIDs_1_1_1.set(PartySubID_246);
      PtysSubGrp_NoPartySubIDs_246.insert(PartySubID_246.getString());
      FIX::PartySubIDType PartySubIDType_246(5);
      noPartySubIDs_1_1_1.set(PartySubIDType_246);
      PtysSubGrp_NoPartySubIDs_246.insert(PartySubIDType_246.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_246);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
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
