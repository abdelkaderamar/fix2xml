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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> ListCancelRequest_0;
  FIX::EncodedText EncodedText_38("DATA_1228921888");
  msg.set(EncodedText_38);
  ListCancelRequest_0.insert(EncodedText_38.getString());
  FIX::EncodedTextLen EncodedTextLen_38(149251849);
  msg.set(EncodedTextLen_38);
  ListCancelRequest_0.insert(EncodedTextLen_38.getString());
  FIX::ListID ListID_14("STRING_947627559");
  msg.set(ListID_14);
  ListCancelRequest_0.insert(ListID_14.getString());
  FIX::Text Text_38("STRING_1490017403");
  msg.set(Text_38);
  ListCancelRequest_0.insert(Text_38.getString());
  FIX::TradeDate TradeDate_13("LOCALMKTDATE_1121892943");
  msg.set(TradeDate_13);
  ListCancelRequest_0.insert(TradeDate_13.getString());
  FIX::TradeOriginationDate TradeOriginationDate_7("LOCALMKTDATE_1662258144");
  msg.set(TradeOriginationDate_7);
  ListCancelRequest_0.insert(TradeOriginationDate_7.getString());
  FIX::TransactTime TransactTime_20(FIX::UTCTIMESTAMP(22, 27, 1, 21, 7, 2006));
  msg.set(TransactTime_20);
  ListCancelRequest_0.insert(TransactTime_20.getString());
  all_values.push_back(ListCancelRequest_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ListCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_44;
    FIX::PartyID PartyID_44("STRING_1536443662");
    noPartyIDs_0_0.set(PartyID_44);
    Parties_NoPartyIDs_44.insert(PartyID_44.getString());
    FIX::PartyIDSource PartyIDSource_44('I');
    noPartyIDs_0_0.set(PartyIDSource_44);
    Parties_NoPartyIDs_44.insert(PartyIDSource_44.getString());
    FIX::PartyRole PartyRole_44(53);
    noPartyIDs_0_0.set(PartyRole_44);
    Parties_NoPartyIDs_44.insert(PartyRole_44.getString());
    all_values.push_back(Parties_NoPartyIDs_44);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_90;
      FIX::PartySubID PartySubID_90("STRING_135272497");
      noPartySubIDs_0_1_0.set(PartySubID_90);
      PtysSubGrp_NoPartySubIDs_90.insert(PartySubID_90.getString());
      FIX::PartySubIDType PartySubIDType_90(22);
      noPartySubIDs_0_1_0.set(PartySubIDType_90);
      PtysSubGrp_NoPartySubIDs_90.insert(PartySubIDType_90.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_90);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_91;
      FIX::PartySubID PartySubID_91("STRING_1241091873");
      noPartySubIDs_0_1_1.set(PartySubID_91);
      PtysSubGrp_NoPartySubIDs_91.insert(PartySubID_91.getString());
      FIX::PartySubIDType PartySubIDType_91(20);
      noPartySubIDs_0_1_1.set(PartySubIDType_91);
      PtysSubGrp_NoPartySubIDs_91.insert(PartySubIDType_91.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_91);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ListCancelRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_45;
    FIX::PartyID PartyID_45("STRING_220189414");
    noPartyIDs_0_1.set(PartyID_45);
    Parties_NoPartyIDs_45.insert(PartyID_45.getString());
    FIX::PartyIDSource PartyIDSource_45('2');
    noPartyIDs_0_1.set(PartyIDSource_45);
    Parties_NoPartyIDs_45.insert(PartyIDSource_45.getString());
    FIX::PartyRole PartyRole_45(21);
    noPartyIDs_0_1.set(PartyRole_45);
    Parties_NoPartyIDs_45.insert(PartyRole_45.getString());
    all_values.push_back(Parties_NoPartyIDs_45);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_92;
      FIX::PartySubID PartySubID_92("STRING_1996661384");
      noPartySubIDs_1_1_0.set(PartySubID_92);
      PtysSubGrp_NoPartySubIDs_92.insert(PartySubID_92.getString());
      FIX::PartySubIDType PartySubIDType_92(22);
      noPartySubIDs_1_1_0.set(PartySubIDType_92);
      PtysSubGrp_NoPartySubIDs_92.insert(PartySubIDType_92.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_92);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::ListCancelRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_46;
    FIX::PartyID PartyID_46("STRING_691664559");
    noPartyIDs_0_2.set(PartyID_46);
    Parties_NoPartyIDs_46.insert(PartyID_46.getString());
    FIX::PartyIDSource PartyIDSource_46('9');
    noPartyIDs_0_2.set(PartyIDSource_46);
    Parties_NoPartyIDs_46.insert(PartyIDSource_46.getString());
    FIX::PartyRole PartyRole_46(7);
    noPartyIDs_0_2.set(PartyRole_46);
    Parties_NoPartyIDs_46.insert(PartyRole_46.getString());
    all_values.push_back(Parties_NoPartyIDs_46);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_93;
      FIX::PartySubID PartySubID_93("STRING_616260988");
      noPartySubIDs_2_1_0.set(PartySubID_93);
      PtysSubGrp_NoPartySubIDs_93.insert(PartySubID_93.getString());
      FIX::PartySubIDType PartySubIDType_93(20);
      noPartySubIDs_2_1_0.set(PartySubIDType_93);
      PtysSubGrp_NoPartySubIDs_93.insert(PartySubIDType_93.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_93);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_94;
      FIX::PartySubID PartySubID_94("STRING_1263120203");
      noPartySubIDs_2_1_1.set(PartySubID_94);
      PtysSubGrp_NoPartySubIDs_94.insert(PartySubID_94.getString());
      FIX::PartySubIDType PartySubIDType_94(10);
      noPartySubIDs_2_1_1.set(PartySubIDType_94);
      PtysSubGrp_NoPartySubIDs_94.insert(PartySubIDType_94.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_94);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
