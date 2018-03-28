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
  FIX::EncodedText EncodedText_43("DATA_54125374");
  msg.set(EncodedText_43);
  ListCancelRequest_0.insert(EncodedText_43.getString());
  FIX::EncodedTextLen EncodedTextLen_43(411498942);
  msg.set(EncodedTextLen_43);
  ListCancelRequest_0.insert(EncodedTextLen_43.getString());
  FIX::ListID ListID_15("STRING_2033255110");
  msg.set(ListID_15);
  ListCancelRequest_0.insert(ListID_15.getString());
  FIX::Text Text_43("STRING_1899493827");
  msg.set(Text_43);
  ListCancelRequest_0.insert(Text_43.getString());
  FIX::TradeDate TradeDate_15("LOCALMKTDATE_1667194434");
  msg.set(TradeDate_15);
  ListCancelRequest_0.insert(TradeDate_15.getString());
  FIX::TradeOriginationDate TradeOriginationDate_9("LOCALMKTDATE_2073935241");
  msg.set(TradeOriginationDate_9);
  ListCancelRequest_0.insert(TradeOriginationDate_9.getString());
  FIX::TransactTime TransactTime_20(FIX::UTCTIMESTAMP(0, 27, 27, 13, 8, 2003));
  msg.set(TransactTime_20);
  ListCancelRequest_0.insert(TransactTime_20.getString());
  all_values.push_back(ListCancelRequest_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ListCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_52;
    FIX::PartyID PartyID_52("STRING_967294152");
    noPartyIDs_0_0.set(PartyID_52);
    Parties_NoPartyIDs_52.insert(PartyID_52.getString());
    FIX::PartyIDSource PartyIDSource_52('9');
    noPartyIDs_0_0.set(PartyIDSource_52);
    Parties_NoPartyIDs_52.insert(PartyIDSource_52.getString());
    FIX::PartyRole PartyRole_52(32);
    noPartyIDs_0_0.set(PartyRole_52);
    Parties_NoPartyIDs_52.insert(PartyRole_52.getString());
    all_values.push_back(Parties_NoPartyIDs_52);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_109;
      FIX::PartySubID PartySubID_109("STRING_1784318774");
      noPartySubIDs_0_1_0.set(PartySubID_109);
      PtysSubGrp_NoPartySubIDs_109.insert(PartySubID_109.getString());
      FIX::PartySubIDType PartySubIDType_109(33);
      noPartySubIDs_0_1_0.set(PartySubIDType_109);
      PtysSubGrp_NoPartySubIDs_109.insert(PartySubIDType_109.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_109);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_110;
      FIX::PartySubID PartySubID_110("STRING_910160723");
      noPartySubIDs_0_1_1.set(PartySubID_110);
      PtysSubGrp_NoPartySubIDs_110.insert(PartySubID_110.getString());
      FIX::PartySubIDType PartySubIDType_110(33);
      noPartySubIDs_0_1_1.set(PartySubIDType_110);
      PtysSubGrp_NoPartySubIDs_110.insert(PartySubIDType_110.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_110);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_111;
      FIX::PartySubID PartySubID_111("STRING_1952933795");
      noPartySubIDs_0_1_2.set(PartySubID_111);
      PtysSubGrp_NoPartySubIDs_111.insert(PartySubID_111.getString());
      FIX::PartySubIDType PartySubIDType_111(17);
      noPartySubIDs_0_1_2.set(PartySubIDType_111);
      PtysSubGrp_NoPartySubIDs_111.insert(PartySubIDType_111.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_111);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
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
