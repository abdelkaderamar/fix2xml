#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ApplicationMessageRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ApplicationMessageRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ApplicationMessageRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequest_0;
  FIX::ApplReqID ApplReqID_1("STRING_581111155");
  msg.set(ApplReqID_1);
  ApplicationMessageRequest_0.insert(ApplReqID_1.getString());
  FIX::ApplReqType ApplReqType_0(5);
  msg.set(ApplReqType_0);
  ApplicationMessageRequest_0.insert(ApplReqType_0.getString());
  FIX::EncodedText EncodedText_7("DATA_1556225786");
  msg.set(EncodedText_7);
  ApplicationMessageRequest_0.insert(EncodedText_7.getString());
  FIX::EncodedTextLen EncodedTextLen_7(2071529484);
  msg.set(EncodedTextLen_7);
  ApplicationMessageRequest_0.insert(EncodedTextLen_7.getString());
  FIX::Text Text_7("STRING_1860499804");
  msg.set(Text_7);
  ApplicationMessageRequest_0.insert(Text_7.getString());
  all_values.push_back(ApplicationMessageRequest_0);

  all_compo_names.insert("ApplicationMessageRequest");

  // ApplIDRequestGrp
  // Group ApplIDRequestGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_0;
    FIX::ApplBegSeqNum ApplBegSeqNum_0(1349782661);
    noApplIDs_0_0.set(ApplBegSeqNum_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(ApplBegSeqNum_0.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_0(1941951309);
    noApplIDs_0_0.set(ApplEndSeqNum_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(ApplEndSeqNum_0.getString());
    FIX::RefApplID RefApplID_3("STRING_444666522");
    noApplIDs_0_0.set(RefApplID_3);
    ApplIDRequestGrp_NoApplIDs_0.insert(RefApplID_3.getString());
    FIX::RefApplReqID RefApplReqID_0("STRING_1972139262");
    noApplIDs_0_0.set(RefApplReqID_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(RefApplReqID_0.getString());
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_0);
    all_compo_names.insert("ApplIDRequestGrp.NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_17;
      FIX::NestedPartyID NestedPartyID_17("STRING_478237079");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyID_17.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_17('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyIDSource_17.getString());
      FIX::NestedPartyRole NestedPartyRole_17(1101321425);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyRole_17.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_17);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_32;
        FIX::NestedPartySubID NestedPartySubID_32("STRING_2038968200");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_32);
        NstdPtysSubGrp_NoNestedPartySubIDs_32.insert(NestedPartySubID_32.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_32(738086031);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_32);
        NstdPtysSubGrp_NoNestedPartySubIDs_32.insert(NestedPartySubIDType_32.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_32);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_33;
        FIX::NestedPartySubID NestedPartySubID_33("STRING_1809112241");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_33);
        NstdPtysSubGrp_NoNestedPartySubIDs_33.insert(NestedPartySubID_33.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_33(1273270309);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_33);
        NstdPtysSubGrp_NoNestedPartySubIDs_33.insert(NestedPartySubIDType_33.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_33);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_34;
        FIX::NestedPartySubID NestedPartySubID_34("STRING_2022764176");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_34);
        NstdPtysSubGrp_NoNestedPartySubIDs_34.insert(NestedPartySubID_34.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_34(1591901971);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_34);
        NstdPtysSubGrp_NoNestedPartySubIDs_34.insert(NestedPartySubIDType_34.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_34);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_18;
      FIX::NestedPartyID NestedPartyID_18("STRING_2052401853");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyID_18.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_18('2');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyIDSource_18.getString());
      FIX::NestedPartyRole NestedPartyRole_18(1514033331);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyRole_18.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_18);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_35;
        FIX::NestedPartySubID NestedPartySubID_35("STRING_1746038098");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_35);
        NstdPtysSubGrp_NoNestedPartySubIDs_35.insert(NestedPartySubID_35.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_35(1668634322);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_35);
        NstdPtysSubGrp_NoNestedPartySubIDs_35.insert(NestedPartySubIDType_35.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_35);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noApplIDs_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_13;
    FIX::PartyID PartyID_13("STRING_91916738");
    noPartyIDs_0_0.set(PartyID_13);
    Parties_NoPartyIDs_13.insert(PartyID_13.getString());
    FIX::PartyIDSource PartyIDSource_13('B');
    noPartyIDs_0_0.set(PartyIDSource_13);
    Parties_NoPartyIDs_13.insert(PartyIDSource_13.getString());
    FIX::PartyRole PartyRole_13(14);
    noPartyIDs_0_0.set(PartyRole_13);
    Parties_NoPartyIDs_13.insert(PartyRole_13.getString());
    all_values.push_back(Parties_NoPartyIDs_13);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_31;
      FIX::PartySubID PartySubID_31("STRING_1326952126");
      noPartySubIDs_0_1_0.set(PartySubID_31);
      PtysSubGrp_NoPartySubIDs_31.insert(PartySubID_31.getString());
      FIX::PartySubIDType PartySubIDType_31(27);
      noPartySubIDs_0_1_0.set(PartySubIDType_31);
      PtysSubGrp_NoPartySubIDs_31.insert(PartySubIDType_31.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_31);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
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
