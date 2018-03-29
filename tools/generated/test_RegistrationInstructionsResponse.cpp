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
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructionsResponse_0;
  FIX::Account Account_42("STRING_2106406707");
  msg.set(Account_42);
  RegistrationInstructionsResponse_0.insert(Account_42.getString());
  FIX::AcctIDSource AcctIDSource_35(99);
  msg.set(AcctIDSource_35);
  RegistrationInstructionsResponse_0.insert(AcctIDSource_35.getString());
  FIX::ClOrdID ClOrdID_45("STRING_2032494632");
  msg.set(ClOrdID_45);
  RegistrationInstructionsResponse_0.insert(ClOrdID_45.getString());
  FIX::RegistID RegistID_9("STRING_1471636656");
  msg.set(RegistID_9);
  RegistrationInstructionsResponse_0.insert(RegistID_9.getString());
  FIX::RegistRefID RegistRefID_1("STRING_1751563443");
  msg.set(RegistRefID_1);
  RegistrationInstructionsResponse_0.insert(RegistRefID_1.getString());
  FIX::RegistRejReasonCode RegistRejReasonCode_0(15);
  msg.set(RegistRejReasonCode_0);
  RegistrationInstructionsResponse_0.insert(RegistRejReasonCode_0.getString());
  FIX::RegistRejReasonText RegistRejReasonText_0("STRING_982251272");
  msg.set(RegistRejReasonText_0);
  RegistrationInstructionsResponse_0.insert(RegistRejReasonText_0.getString());
  FIX::RegistStatus RegistStatus_1('A');
  msg.set(RegistStatus_1);
  RegistrationInstructionsResponse_0.insert(RegistStatus_1.getString());
  FIX::RegistTransType RegistTransType_1('1');
  msg.set(RegistTransType_1);
  RegistrationInstructionsResponse_0.insert(RegistTransType_1.getString());
  all_values.push_back(RegistrationInstructionsResponse_0);

  all_compo_names.insert("RegistrationInstructionsResponse");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_124;
    FIX::PartyID PartyID_124("STRING_95644784");
    noPartyIDs_0_0.set(PartyID_124);
    Parties_NoPartyIDs_124.insert(PartyID_124.getString());
    FIX::PartyIDSource PartyIDSource_124('B');
    noPartyIDs_0_0.set(PartyIDSource_124);
    Parties_NoPartyIDs_124.insert(PartyIDSource_124.getString());
    FIX::PartyRole PartyRole_124(85);
    noPartyIDs_0_0.set(PartyRole_124);
    Parties_NoPartyIDs_124.insert(PartyRole_124.getString());
    all_values.push_back(Parties_NoPartyIDs_124);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_271;
      FIX::PartySubID PartySubID_271("STRING_2021467622");
      noPartySubIDs_0_1_0.set(PartySubID_271);
      PtysSubGrp_NoPartySubIDs_271.insert(PartySubID_271.getString());
      FIX::PartySubIDType PartySubIDType_271(24);
      noPartySubIDs_0_1_0.set(PartySubIDType_271);
      PtysSubGrp_NoPartySubIDs_271.insert(PartySubIDType_271.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_271);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_125;
    FIX::PartyID PartyID_125("STRING_556273282");
    noPartyIDs_0_1.set(PartyID_125);
    Parties_NoPartyIDs_125.insert(PartyID_125.getString());
    FIX::PartyIDSource PartyIDSource_125('3');
    noPartyIDs_0_1.set(PartyIDSource_125);
    Parties_NoPartyIDs_125.insert(PartyIDSource_125.getString());
    FIX::PartyRole PartyRole_125(30);
    noPartyIDs_0_1.set(PartyRole_125);
    Parties_NoPartyIDs_125.insert(PartyRole_125.getString());
    all_values.push_back(Parties_NoPartyIDs_125);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_272;
      FIX::PartySubID PartySubID_272("STRING_1543540395");
      noPartySubIDs_1_1_0.set(PartySubID_272);
      PtysSubGrp_NoPartySubIDs_272.insert(PartySubID_272.getString());
      FIX::PartySubIDType PartySubIDType_272(29);
      noPartySubIDs_1_1_0.set(PartySubIDType_272);
      PtysSubGrp_NoPartySubIDs_272.insert(PartySubIDType_272.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_272);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_273;
      FIX::PartySubID PartySubID_273("STRING_223705797");
      noPartySubIDs_1_1_1.set(PartySubID_273);
      PtysSubGrp_NoPartySubIDs_273.insert(PartySubID_273.getString());
      FIX::PartySubIDType PartySubIDType_273(17);
      noPartySubIDs_1_1_1.set(PartySubIDType_273);
      PtysSubGrp_NoPartySubIDs_273.insert(PartySubIDType_273.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_273);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_274;
      FIX::PartySubID PartySubID_274("STRING_353806947");
      noPartySubIDs_1_1_2.set(PartySubID_274);
      PtysSubGrp_NoPartySubIDs_274.insert(PartySubID_274.getString());
      FIX::PartySubIDType PartySubIDType_274(24);
      noPartySubIDs_1_1_2.set(PartySubIDType_274);
      PtysSubGrp_NoPartySubIDs_274.insert(PartySubIDType_274.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_274);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_126;
    FIX::PartyID PartyID_126("STRING_601337677");
    noPartyIDs_0_2.set(PartyID_126);
    Parties_NoPartyIDs_126.insert(PartyID_126.getString());
    FIX::PartyIDSource PartyIDSource_126('4');
    noPartyIDs_0_2.set(PartyIDSource_126);
    Parties_NoPartyIDs_126.insert(PartyIDSource_126.getString());
    FIX::PartyRole PartyRole_126(52);
    noPartyIDs_0_2.set(PartyRole_126);
    Parties_NoPartyIDs_126.insert(PartyRole_126.getString());
    all_values.push_back(Parties_NoPartyIDs_126);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_275;
      FIX::PartySubID PartySubID_275("STRING_1804100318");
      noPartySubIDs_2_1_0.set(PartySubID_275);
      PtysSubGrp_NoPartySubIDs_275.insert(PartySubID_275.getString());
      FIX::PartySubIDType PartySubIDType_275(7);
      noPartySubIDs_2_1_0.set(PartySubIDType_275);
      PtysSubGrp_NoPartySubIDs_275.insert(PartySubIDType_275.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_275);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_276;
      FIX::PartySubID PartySubID_276("STRING_839974391");
      noPartySubIDs_2_1_1.set(PartySubID_276);
      PtysSubGrp_NoPartySubIDs_276.insert(PartySubID_276.getString());
      FIX::PartySubIDType PartySubIDType_276(1);
      noPartySubIDs_2_1_1.set(PartySubIDType_276);
      PtysSubGrp_NoPartySubIDs_276.insert(PartySubIDType_276.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_276);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_277;
      FIX::PartySubID PartySubID_277("STRING_1707515745");
      noPartySubIDs_2_1_2.set(PartySubID_277);
      PtysSubGrp_NoPartySubIDs_277.insert(PartySubID_277.getString());
      FIX::PartySubIDType PartySubIDType_277(16);
      noPartySubIDs_2_1_2.set(PartySubIDType_277);
      PtysSubGrp_NoPartySubIDs_277.insert(PartySubIDType_277.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_277);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

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
