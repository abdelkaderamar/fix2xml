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
  FIX::EncodedText EncodedText_45("DATA_234965493");
  msg.set(EncodedText_45);
  MarketDataRequestReject_0.insert(EncodedText_45.getString());
  FIX::EncodedTextLen EncodedTextLen_45(646484064);
  msg.set(EncodedTextLen_45);
  MarketDataRequestReject_0.insert(EncodedTextLen_45.getString());
  FIX::MDReqID MDReqID_2("STRING_339561516");
  msg.set(MDReqID_2);
  MarketDataRequestReject_0.insert(MDReqID_2.getString());
  FIX::MDReqRejReason MDReqRejReason_0('9');
  msg.set(MDReqRejReason_0);
  MarketDataRequestReject_0.insert(MDReqRejReason_0.getString());
  FIX::Text Text_45("STRING_845391828");
  msg.set(Text_45);
  MarketDataRequestReject_0.insert(Text_45.getString());
  all_values.push_back(MarketDataRequestReject_0);

  // MDRjctGrp
  // Group MDRjctGrp.NoAltMDSource
  {
    FIX50SP2::MarketDataRequestReject::NoAltMDSource noAltMDSource_0_0;
    // MDRjctGrp.NoAltMDSource
    multiset<string> MDRjctGrp_NoAltMDSource_0;
    FIX::AltMDSourceID AltMDSourceID_0("STRING_1346351544");
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
    multiset<string> Parties_NoPartyIDs_58;
    FIX::PartyID PartyID_58("STRING_932423140");
    noPartyIDs_0_0.set(PartyID_58);
    Parties_NoPartyIDs_58.insert(PartyID_58.getString());
    FIX::PartyIDSource PartyIDSource_58('2');
    noPartyIDs_0_0.set(PartyIDSource_58);
    Parties_NoPartyIDs_58.insert(PartyIDSource_58.getString());
    FIX::PartyRole PartyRole_58(77);
    noPartyIDs_0_0.set(PartyRole_58);
    Parties_NoPartyIDs_58.insert(PartyRole_58.getString());
    all_values.push_back(Parties_NoPartyIDs_58);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_116;
      FIX::PartySubID PartySubID_116("STRING_1682026653");
      noPartySubIDs_0_1_0.set(PartySubID_116);
      PtysSubGrp_NoPartySubIDs_116.insert(PartySubID_116.getString());
      FIX::PartySubIDType PartySubIDType_116(25);
      noPartySubIDs_0_1_0.set(PartySubIDType_116);
      PtysSubGrp_NoPartySubIDs_116.insert(PartySubIDType_116.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_116);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_117;
      FIX::PartySubID PartySubID_117("STRING_652498376");
      noPartySubIDs_0_1_1.set(PartySubID_117);
      PtysSubGrp_NoPartySubIDs_117.insert(PartySubID_117.getString());
      FIX::PartySubIDType PartySubIDType_117(30);
      noPartySubIDs_0_1_1.set(PartySubIDType_117);
      PtysSubGrp_NoPartySubIDs_117.insert(PartySubIDType_117.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_117);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_118;
      FIX::PartySubID PartySubID_118("STRING_2045421351");
      noPartySubIDs_0_1_2.set(PartySubID_118);
      PtysSubGrp_NoPartySubIDs_118.insert(PartySubID_118.getString());
      FIX::PartySubIDType PartySubIDType_118(17);
      noPartySubIDs_0_1_2.set(PartySubIDType_118);
      PtysSubGrp_NoPartySubIDs_118.insert(PartySubIDType_118.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_118);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MarketDataRequestReject::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_59;
    FIX::PartyID PartyID_59("STRING_590489708");
    noPartyIDs_0_1.set(PartyID_59);
    Parties_NoPartyIDs_59.insert(PartyID_59.getString());
    FIX::PartyIDSource PartyIDSource_59('4');
    noPartyIDs_0_1.set(PartyIDSource_59);
    Parties_NoPartyIDs_59.insert(PartyIDSource_59.getString());
    FIX::PartyRole PartyRole_59(42);
    noPartyIDs_0_1.set(PartyRole_59);
    Parties_NoPartyIDs_59.insert(PartyRole_59.getString());
    all_values.push_back(Parties_NoPartyIDs_59);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_119;
      FIX::PartySubID PartySubID_119("STRING_1074980899");
      noPartySubIDs_1_1_0.set(PartySubID_119);
      PtysSubGrp_NoPartySubIDs_119.insert(PartySubID_119.getString());
      FIX::PartySubIDType PartySubIDType_119(2);
      noPartySubIDs_1_1_0.set(PartySubIDType_119);
      PtysSubGrp_NoPartySubIDs_119.insert(PartySubIDType_119.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_119);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_120;
      FIX::PartySubID PartySubID_120("STRING_455693780");
      noPartySubIDs_1_1_1.set(PartySubID_120);
      PtysSubGrp_NoPartySubIDs_120.insert(PartySubID_120.getString());
      FIX::PartySubIDType PartySubIDType_120(14);
      noPartySubIDs_1_1_1.set(PartySubIDType_120);
      PtysSubGrp_NoPartySubIDs_120.insert(PartySubIDType_120.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_120);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_121;
      FIX::PartySubID PartySubID_121("STRING_673787179");
      noPartySubIDs_1_1_2.set(PartySubID_121);
      PtysSubGrp_NoPartySubIDs_121.insert(PartySubID_121.getString());
      FIX::PartySubIDType PartySubIDType_121(20);
      noPartySubIDs_1_1_2.set(PartySubIDType_121);
      PtysSubGrp_NoPartySubIDs_121.insert(PartySubIDType_121.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_121);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
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
