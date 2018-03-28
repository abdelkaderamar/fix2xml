#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/MarketDataRequestReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataRequestReject, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataRequestReject msg;

  list<multiset<string>> all_values;
  multiset<string> MarketDataRequestReject_0;
  FIX::EncodedText EncodedText_53("DATA_137324065");
  msg.set(EncodedText_53);
  MarketDataRequestReject_0.insert(EncodedText_53.getString());
  FIX::EncodedTextLen EncodedTextLen_53(1157644222);
  msg.set(EncodedTextLen_53);
  MarketDataRequestReject_0.insert(EncodedTextLen_53.getString());
  FIX::MDReqID MDReqID_2("STRING_912627915");
  msg.set(MDReqID_2);
  MarketDataRequestReject_0.insert(MDReqID_2.getString());
  FIX::MDReqRejReason MDReqRejReason_0('D');
  msg.set(MDReqRejReason_0);
  MarketDataRequestReject_0.insert(MDReqRejReason_0.getString());
  FIX::Text Text_53("STRING_522172975");
  msg.set(Text_53);
  MarketDataRequestReject_0.insert(Text_53.getString());
  all_values.push_back(MarketDataRequestReject_0);

  // MDRjctGrp
  // Group MDRjctGrp.NoAltMDSource
  {
    FIX50SP2::MarketDataRequestReject::NoAltMDSource noAltMDSource_0_0;
    // MDRjctGrp.NoAltMDSource
    multiset<string> MDRjctGrp_NoAltMDSource_0;
    FIX::AltMDSourceID AltMDSourceID_0("STRING_1428010538");
    noAltMDSource_0_0.set(AltMDSourceID_0);
    MDRjctGrp_NoAltMDSource_0.insert(AltMDSourceID_0.getString());
    all_values.push_back(MDRjctGrp_NoAltMDSource_0);

    msg.addGroup(noAltMDSource_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MarketDataRequestReject::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_60;
    FIX::PartyID PartyID_60("STRING_599983834");
    noPartyIDs_0_0.set(PartyID_60);
    Parties_NoPartyIDs_60.insert(PartyID_60.getString());
    FIX::PartyIDSource PartyIDSource_60('E');
    noPartyIDs_0_0.set(PartyIDSource_60);
    Parties_NoPartyIDs_60.insert(PartyIDSource_60.getString());
    FIX::PartyRole PartyRole_60(24);
    noPartyIDs_0_0.set(PartyRole_60);
    Parties_NoPartyIDs_60.insert(PartyRole_60.getString());
    all_values.push_back(Parties_NoPartyIDs_60);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_123;
      FIX::PartySubID PartySubID_123("STRING_1232929744");
      noPartySubIDs_0_1_0.set(PartySubID_123);
      PtysSubGrp_NoPartySubIDs_123.insert(PartySubID_123.getString());
      FIX::PartySubIDType PartySubIDType_123(1);
      noPartySubIDs_0_1_0.set(PartySubIDType_123);
      PtysSubGrp_NoPartySubIDs_123.insert(PartySubIDType_123.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_123);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_124;
      FIX::PartySubID PartySubID_124("STRING_761070296");
      noPartySubIDs_0_1_1.set(PartySubID_124);
      PtysSubGrp_NoPartySubIDs_124.insert(PartySubID_124.getString());
      FIX::PartySubIDType PartySubIDType_124(9);
      noPartySubIDs_0_1_1.set(PartySubIDType_124);
      PtysSubGrp_NoPartySubIDs_124.insert(PartySubIDType_124.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_124);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MarketDataRequestReject::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_61;
    FIX::PartyID PartyID_61("STRING_1995584913");
    noPartyIDs_0_1.set(PartyID_61);
    Parties_NoPartyIDs_61.insert(PartyID_61.getString());
    FIX::PartyIDSource PartyIDSource_61('4');
    noPartyIDs_0_1.set(PartyIDSource_61);
    Parties_NoPartyIDs_61.insert(PartyIDSource_61.getString());
    FIX::PartyRole PartyRole_61(4);
    noPartyIDs_0_1.set(PartyRole_61);
    Parties_NoPartyIDs_61.insert(PartyRole_61.getString());
    all_values.push_back(Parties_NoPartyIDs_61);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_125;
      FIX::PartySubID PartySubID_125("STRING_933937029");
      noPartySubIDs_1_1_0.set(PartySubID_125);
      PtysSubGrp_NoPartySubIDs_125.insert(PartySubID_125.getString());
      FIX::PartySubIDType PartySubIDType_125(20);
      noPartySubIDs_1_1_0.set(PartySubIDType_125);
      PtysSubGrp_NoPartySubIDs_125.insert(PartySubIDType_125.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_125);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_126;
      FIX::PartySubID PartySubID_126("STRING_1602107361");
      noPartySubIDs_1_1_1.set(PartySubID_126);
      PtysSubGrp_NoPartySubIDs_126.insert(PartySubID_126.getString());
      FIX::PartySubIDType PartySubIDType_126(14);
      noPartySubIDs_1_1_1.set(PartySubIDType_126);
      PtysSubGrp_NoPartySubIDs_126.insert(PartySubIDType_126.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_126);

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
