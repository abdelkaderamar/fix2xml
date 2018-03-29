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
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequestReject_0;
  FIX::EncodedText EncodedText_47("DATA_1436264049");
  msg.set(EncodedText_47);
  MarketDataRequestReject_0.insert(EncodedText_47.getString());
  FIX::EncodedTextLen EncodedTextLen_47(515691287);
  msg.set(EncodedTextLen_47);
  MarketDataRequestReject_0.insert(EncodedTextLen_47.getString());
  FIX::MDReqID MDReqID_2("STRING_1412501460");
  msg.set(MDReqID_2);
  MarketDataRequestReject_0.insert(MDReqID_2.getString());
  FIX::MDReqRejReason MDReqRejReason_0('4');
  msg.set(MDReqRejReason_0);
  MarketDataRequestReject_0.insert(MDReqRejReason_0.getString());
  FIX::Text Text_47("STRING_888554695");
  msg.set(Text_47);
  MarketDataRequestReject_0.insert(Text_47.getString());
  all_values.push_back(MarketDataRequestReject_0);

  all_compo_names.insert("MarketDataRequestReject");

  // MDRjctGrp
  // Group MDRjctGrp.NoAltMDSource
  {
    FIX50SP2::MarketDataRequestReject::NoAltMDSource noAltMDSource_0_0;
    // MDRjctGrp.NoAltMDSource
    multiset<string> MDRjctGrp_NoAltMDSource_0;
    FIX::AltMDSourceID AltMDSourceID_0("STRING_1184060516");
    noAltMDSource_0_0.set(AltMDSourceID_0);
    MDRjctGrp_NoAltMDSource_0.insert(AltMDSourceID_0.getString());
    all_values.push_back(MDRjctGrp_NoAltMDSource_0);
    all_compo_names.insert("MDRjctGrp.NoAltMDSource");

    msg.addGroup(noAltMDSource_0_0);
  }
  {
    FIX50SP2::MarketDataRequestReject::NoAltMDSource noAltMDSource_0_1;
    // MDRjctGrp.NoAltMDSource
    multiset<string> MDRjctGrp_NoAltMDSource_1;
    FIX::AltMDSourceID AltMDSourceID_1("STRING_1926137605");
    noAltMDSource_0_1.set(AltMDSourceID_1);
    MDRjctGrp_NoAltMDSource_1.insert(AltMDSourceID_1.getString());
    all_values.push_back(MDRjctGrp_NoAltMDSource_1);
    all_compo_names.insert("MDRjctGrp.NoAltMDSource");

    msg.addGroup(noAltMDSource_0_1);
  }
  {
    FIX50SP2::MarketDataRequestReject::NoAltMDSource noAltMDSource_0_2;
    // MDRjctGrp.NoAltMDSource
    multiset<string> MDRjctGrp_NoAltMDSource_2;
    FIX::AltMDSourceID AltMDSourceID_2("STRING_127397730");
    noAltMDSource_0_2.set(AltMDSourceID_2);
    MDRjctGrp_NoAltMDSource_2.insert(AltMDSourceID_2.getString());
    all_values.push_back(MDRjctGrp_NoAltMDSource_2);
    all_compo_names.insert("MDRjctGrp.NoAltMDSource");

    msg.addGroup(noAltMDSource_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MarketDataRequestReject::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_46;
    FIX::PartyID PartyID_46("STRING_714672651");
    noPartyIDs_0_0.set(PartyID_46);
    Parties_NoPartyIDs_46.insert(PartyID_46.getString());
    FIX::PartyIDSource PartyIDSource_46('7');
    noPartyIDs_0_0.set(PartyIDSource_46);
    Parties_NoPartyIDs_46.insert(PartyIDSource_46.getString());
    FIX::PartyRole PartyRole_46(12);
    noPartyIDs_0_0.set(PartyRole_46);
    Parties_NoPartyIDs_46.insert(PartyRole_46.getString());
    all_values.push_back(Parties_NoPartyIDs_46);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_99;
      FIX::PartySubID PartySubID_99("STRING_6286273");
      noPartySubIDs_0_1_0.set(PartySubID_99);
      PtysSubGrp_NoPartySubIDs_99.insert(PartySubID_99.getString());
      FIX::PartySubIDType PartySubIDType_99(22);
      noPartySubIDs_0_1_0.set(PartySubIDType_99);
      PtysSubGrp_NoPartySubIDs_99.insert(PartySubIDType_99.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_99);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_100;
      FIX::PartySubID PartySubID_100("STRING_1905007405");
      noPartySubIDs_0_1_1.set(PartySubID_100);
      PtysSubGrp_NoPartySubIDs_100.insert(PartySubID_100.getString());
      FIX::PartySubIDType PartySubIDType_100(23);
      noPartySubIDs_0_1_1.set(PartySubIDType_100);
      PtysSubGrp_NoPartySubIDs_100.insert(PartySubIDType_100.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_100);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_101;
      FIX::PartySubID PartySubID_101("STRING_2067804601");
      noPartySubIDs_0_1_2.set(PartySubID_101);
      PtysSubGrp_NoPartySubIDs_101.insert(PartySubID_101.getString());
      FIX::PartySubIDType PartySubIDType_101(32);
      noPartySubIDs_0_1_2.set(PartySubIDType_101);
      PtysSubGrp_NoPartySubIDs_101.insert(PartySubIDType_101.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_101);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MarketDataRequestReject::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_47;
    FIX::PartyID PartyID_47("STRING_2002144952");
    noPartyIDs_0_1.set(PartyID_47);
    Parties_NoPartyIDs_47.insert(PartyID_47.getString());
    FIX::PartyIDSource PartyIDSource_47('D');
    noPartyIDs_0_1.set(PartyIDSource_47);
    Parties_NoPartyIDs_47.insert(PartyIDSource_47.getString());
    FIX::PartyRole PartyRole_47(83);
    noPartyIDs_0_1.set(PartyRole_47);
    Parties_NoPartyIDs_47.insert(PartyRole_47.getString());
    all_values.push_back(Parties_NoPartyIDs_47);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_102;
      FIX::PartySubID PartySubID_102("STRING_1391120663");
      noPartySubIDs_1_1_0.set(PartySubID_102);
      PtysSubGrp_NoPartySubIDs_102.insert(PartySubID_102.getString());
      FIX::PartySubIDType PartySubIDType_102(1);
      noPartySubIDs_1_1_0.set(PartySubIDType_102);
      PtysSubGrp_NoPartySubIDs_102.insert(PartySubIDType_102.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_102);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_103;
      FIX::PartySubID PartySubID_103("STRING_926359077");
      noPartySubIDs_1_1_1.set(PartySubID_103);
      PtysSubGrp_NoPartySubIDs_103.insert(PartySubID_103.getString());
      FIX::PartySubIDType PartySubIDType_103(31);
      noPartySubIDs_1_1_1.set(PartySubIDType_103);
      PtysSubGrp_NoPartySubIDs_103.insert(PartySubIDType_103.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_103);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::MarketDataRequestReject::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_48;
    FIX::PartyID PartyID_48("STRING_1046708059");
    noPartyIDs_0_2.set(PartyID_48);
    Parties_NoPartyIDs_48.insert(PartyID_48.getString());
    FIX::PartyIDSource PartyIDSource_48('H');
    noPartyIDs_0_2.set(PartyIDSource_48);
    Parties_NoPartyIDs_48.insert(PartyIDSource_48.getString());
    FIX::PartyRole PartyRole_48(55);
    noPartyIDs_0_2.set(PartyRole_48);
    Parties_NoPartyIDs_48.insert(PartyRole_48.getString());
    all_values.push_back(Parties_NoPartyIDs_48);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_104;
      FIX::PartySubID PartySubID_104("STRING_1426961824");
      noPartySubIDs_2_1_0.set(PartySubID_104);
      PtysSubGrp_NoPartySubIDs_104.insert(PartySubID_104.getString());
      FIX::PartySubIDType PartySubIDType_104(13);
      noPartySubIDs_2_1_0.set(PartySubIDType_104);
      PtysSubGrp_NoPartySubIDs_104.insert(PartySubIDType_104.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_104);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_105;
      FIX::PartySubID PartySubID_105("STRING_98113548");
      noPartySubIDs_2_1_1.set(PartySubID_105);
      PtysSubGrp_NoPartySubIDs_105.insert(PartySubID_105.getString());
      FIX::PartySubIDType PartySubIDType_105(7);
      noPartySubIDs_2_1_1.set(PartySubIDType_105);
      PtysSubGrp_NoPartySubIDs_105.insert(PartySubIDType_105.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_105);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_106;
      FIX::PartySubID PartySubID_106("STRING_1629052205");
      noPartySubIDs_2_1_2.set(PartySubID_106);
      PtysSubGrp_NoPartySubIDs_106.insert(PartySubID_106.getString());
      FIX::PartySubIDType PartySubIDType_106(18);
      noPartySubIDs_2_1_2.set(PartySubIDType_106);
      PtysSubGrp_NoPartySubIDs_106.insert(PartySubIDType_106.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_106);
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
