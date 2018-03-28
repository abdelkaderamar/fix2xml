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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataRequestReject msg;

  list<multiset<string>> all_values;
  multiset<string> MarketDataRequestReject_0;
  FIX::EncodedText EncodedText_45("DATA_697700583");
  msg.set(EncodedText_45);
  MarketDataRequestReject_0.insert(EncodedText_45.getString());
  FIX::EncodedTextLen EncodedTextLen_45(100033274);
  msg.set(EncodedTextLen_45);
  MarketDataRequestReject_0.insert(EncodedTextLen_45.getString());
  FIX::MDReqID MDReqID_2("STRING_496746003");
  msg.set(MDReqID_2);
  MarketDataRequestReject_0.insert(MDReqID_2.getString());
  FIX::MDReqRejReason MDReqRejReason_0('8');
  msg.set(MDReqRejReason_0);
  MarketDataRequestReject_0.insert(MDReqRejReason_0.getString());
  FIX::Text Text_45("STRING_616251290");
  msg.set(Text_45);
  MarketDataRequestReject_0.insert(Text_45.getString());
  all_values.push_back(MarketDataRequestReject_0);

  // MDRjctGrp
  // Group MDRjctGrp.NoAltMDSource
  {
    FIX50SP2::MarketDataRequestReject::NoAltMDSource noAltMDSource_0_0;
    // MDRjctGrp.NoAltMDSource
    multiset<string> MDRjctGrp_NoAltMDSource_0;
    FIX::AltMDSourceID AltMDSourceID_0("STRING_177842053");
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
    multiset<string> Parties_NoPartyIDs_52;
    FIX::PartyID PartyID_52("STRING_1236259757");
    noPartyIDs_0_0.set(PartyID_52);
    Parties_NoPartyIDs_52.insert(PartyID_52.getString());
    FIX::PartyIDSource PartyIDSource_52('A');
    noPartyIDs_0_0.set(PartyIDSource_52);
    Parties_NoPartyIDs_52.insert(PartyIDSource_52.getString());
    FIX::PartyRole PartyRole_52(41);
    noPartyIDs_0_0.set(PartyRole_52);
    Parties_NoPartyIDs_52.insert(PartyRole_52.getString());
    all_values.push_back(Parties_NoPartyIDs_52);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_104;
      FIX::PartySubID PartySubID_104("STRING_1462788305");
      noPartySubIDs_0_1_0.set(PartySubID_104);
      PtysSubGrp_NoPartySubIDs_104.insert(PartySubID_104.getString());
      FIX::PartySubIDType PartySubIDType_104(1);
      noPartySubIDs_0_1_0.set(PartySubIDType_104);
      PtysSubGrp_NoPartySubIDs_104.insert(PartySubIDType_104.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_104);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_105;
      FIX::PartySubID PartySubID_105("STRING_1961478312");
      noPartySubIDs_0_1_1.set(PartySubID_105);
      PtysSubGrp_NoPartySubIDs_105.insert(PartySubID_105.getString());
      FIX::PartySubIDType PartySubIDType_105(32);
      noPartySubIDs_0_1_1.set(PartySubIDType_105);
      PtysSubGrp_NoPartySubIDs_105.insert(PartySubIDType_105.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_105);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
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
