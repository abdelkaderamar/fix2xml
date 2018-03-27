#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ListCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListCancelRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> ListCancelRequest_0;
  FIX::EncodedText EncodedText_38("DATA_1187645947");
  msg.set(EncodedText_38);
  ListCancelRequest_0.insert(EncodedText_38.getString());
  FIX::EncodedTextLen EncodedTextLen_38(73638052);
  msg.set(EncodedTextLen_38);
  ListCancelRequest_0.insert(EncodedTextLen_38.getString());
  FIX::ListID ListID_13("STRING_1635240104");
  msg.set(ListID_13);
  ListCancelRequest_0.insert(ListID_13.getString());
  FIX::Text Text_38("STRING_79944582");
  msg.set(Text_38);
  ListCancelRequest_0.insert(Text_38.getString());
  FIX::TradeDate TradeDate_15("LOCALMKTDATE_677682552");
  msg.set(TradeDate_15);
  ListCancelRequest_0.insert(TradeDate_15.getString());
  FIX::TradeOriginationDate TradeOriginationDate_9("LOCALMKTDATE_522287953");
  msg.set(TradeOriginationDate_9);
  ListCancelRequest_0.insert(TradeOriginationDate_9.getString());
  FIX::TransactTime TransactTime_20(FIX::UTCTIMESTAMP(10, 16, 8, 8, 22010));
  msg.set(TransactTime_20);
  ListCancelRequest_0.insert(TransactTime_20.getString());
  all_values.push_back(ListCancelRequest_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ListCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_49;
    FIX::PartyID PartyID_49("STRING_1610471372");
    noPartyIDs_0_0.set(PartyID_49);
    Parties_NoPartyIDs_49.insert(PartyID_49.getString());
    FIX::PartyIDSource PartyIDSource_49('2');
    noPartyIDs_0_0.set(PartyIDSource_49);
    Parties_NoPartyIDs_49.insert(PartyIDSource_49.getString());
    FIX::PartyRole PartyRole_49(49);
    noPartyIDs_0_0.set(PartyRole_49);
    Parties_NoPartyIDs_49.insert(PartyRole_49.getString());
    all_values.push_back(Parties_NoPartyIDs_49);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_101;
      FIX::PartySubID PartySubID_101("STRING_949615056");
      noPartySubIDs_0_1_0.set(PartySubID_101);
      PtysSubGrp_NoPartySubIDs_101.insert(PartySubID_101.getString());
      FIX::PartySubIDType PartySubIDType_101(24);
      noPartySubIDs_0_1_0.set(PartySubIDType_101);
      PtysSubGrp_NoPartySubIDs_101.insert(PartySubIDType_101.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_101);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_102;
      FIX::PartySubID PartySubID_102("STRING_923349349");
      noPartySubIDs_0_1_1.set(PartySubID_102);
      PtysSubGrp_NoPartySubIDs_102.insert(PartySubID_102.getString());
      FIX::PartySubIDType PartySubIDType_102(30);
      noPartySubIDs_0_1_1.set(PartySubIDType_102);
      PtysSubGrp_NoPartySubIDs_102.insert(PartySubIDType_102.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_102);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_103;
      FIX::PartySubID PartySubID_103("STRING_1054926924");
      noPartySubIDs_0_1_2.set(PartySubID_103);
      PtysSubGrp_NoPartySubIDs_103.insert(PartySubID_103.getString());
      FIX::PartySubIDType PartySubIDType_103(31);
      noPartySubIDs_0_1_2.set(PartySubIDType_103);
      PtysSubGrp_NoPartySubIDs_103.insert(PartySubIDType_103.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_103);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ListCancelRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_50;
    FIX::PartyID PartyID_50("STRING_604238547");
    noPartyIDs_0_1.set(PartyID_50);
    Parties_NoPartyIDs_50.insert(PartyID_50.getString());
    FIX::PartyIDSource PartyIDSource_50('9');
    noPartyIDs_0_1.set(PartyIDSource_50);
    Parties_NoPartyIDs_50.insert(PartyIDSource_50.getString());
    FIX::PartyRole PartyRole_50(47);
    noPartyIDs_0_1.set(PartyRole_50);
    Parties_NoPartyIDs_50.insert(PartyRole_50.getString());
    all_values.push_back(Parties_NoPartyIDs_50);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_104;
      FIX::PartySubID PartySubID_104("STRING_1975625236");
      noPartySubIDs_1_1_0.set(PartySubID_104);
      PtysSubGrp_NoPartySubIDs_104.insert(PartySubID_104.getString());
      FIX::PartySubIDType PartySubIDType_104(33);
      noPartySubIDs_1_1_0.set(PartySubIDType_104);
      PtysSubGrp_NoPartySubIDs_104.insert(PartySubIDType_104.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_104);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_105;
      FIX::PartySubID PartySubID_105("STRING_1544746192");
      noPartySubIDs_1_1_1.set(PartySubID_105);
      PtysSubGrp_NoPartySubIDs_105.insert(PartySubID_105.getString());
      FIX::PartySubIDType PartySubIDType_105(16);
      noPartySubIDs_1_1_1.set(PartySubIDType_105);
      PtysSubGrp_NoPartySubIDs_105.insert(PartySubIDType_105.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_105);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::ListCancelRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_51;
    FIX::PartyID PartyID_51("STRING_563889351");
    noPartyIDs_0_2.set(PartyID_51);
    Parties_NoPartyIDs_51.insert(PartyID_51.getString());
    FIX::PartyIDSource PartyIDSource_51('A');
    noPartyIDs_0_2.set(PartyIDSource_51);
    Parties_NoPartyIDs_51.insert(PartyIDSource_51.getString());
    FIX::PartyRole PartyRole_51(83);
    noPartyIDs_0_2.set(PartyRole_51);
    Parties_NoPartyIDs_51.insert(PartyRole_51.getString());
    all_values.push_back(Parties_NoPartyIDs_51);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_106;
      FIX::PartySubID PartySubID_106("STRING_1554790601");
      noPartySubIDs_2_1_0.set(PartySubID_106);
      PtysSubGrp_NoPartySubIDs_106.insert(PartySubID_106.getString());
      FIX::PartySubIDType PartySubIDType_106(28);
      noPartySubIDs_2_1_0.set(PartySubIDType_106);
      PtysSubGrp_NoPartySubIDs_106.insert(PartySubIDType_106.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_106);

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
