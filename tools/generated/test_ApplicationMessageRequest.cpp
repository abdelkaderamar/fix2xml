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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ApplicationMessageRequest msg;

  list<multiset<string>> all_values;
  multiset<string> ApplicationMessageRequest_0;
  FIX::ApplReqID ApplReqID_1("STRING_746874452");
  msg.set(ApplReqID_1);
  ApplicationMessageRequest_0.insert(ApplReqID_1.getString());
  FIX::ApplReqType ApplReqType_0(0);
  msg.set(ApplReqType_0);
  ApplicationMessageRequest_0.insert(ApplReqType_0.getString());
  FIX::EncodedText EncodedText_7("DATA_331044534");
  msg.set(EncodedText_7);
  ApplicationMessageRequest_0.insert(EncodedText_7.getString());
  FIX::EncodedTextLen EncodedTextLen_7(575889669);
  msg.set(EncodedTextLen_7);
  ApplicationMessageRequest_0.insert(EncodedTextLen_7.getString());
  FIX::Text Text_7("STRING_1758298057");
  msg.set(Text_7);
  ApplicationMessageRequest_0.insert(Text_7.getString());
  all_values.push_back(ApplicationMessageRequest_0);

  // ApplIDRequestGrp
  // Group ApplIDRequestGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_0;
    FIX::ApplBegSeqNum ApplBegSeqNum_0(1904870528);
    noApplIDs_0_0.set(ApplBegSeqNum_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(ApplBegSeqNum_0.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_0(1476990291);
    noApplIDs_0_0.set(ApplEndSeqNum_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(ApplEndSeqNum_0.getString());
    FIX::RefApplID RefApplID_2("STRING_22810026");
    noApplIDs_0_0.set(RefApplID_2);
    ApplIDRequestGrp_NoApplIDs_0.insert(RefApplID_2.getString());
    FIX::RefApplReqID RefApplReqID_0("STRING_97382739");
    noApplIDs_0_0.set(RefApplReqID_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(RefApplReqID_0.getString());
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_22;
      FIX::NestedPartyID NestedPartyID_22("STRING_1612700130");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyID_22.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_22('4');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyIDSource_22.getString());
      FIX::NestedPartyRole NestedPartyRole_22(1160712701);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyRole_22.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_22);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_38;
        FIX::NestedPartySubID NestedPartySubID_38("STRING_1184177429");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_38);
        NstdPtysSubGrp_NoNestedPartySubIDs_38.insert(NestedPartySubID_38.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_38(478430780);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_38);
        NstdPtysSubGrp_NoNestedPartySubIDs_38.insert(NestedPartySubIDType_38.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_38);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_39;
        FIX::NestedPartySubID NestedPartySubID_39("STRING_1192141119");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_39);
        NstdPtysSubGrp_NoNestedPartySubIDs_39.insert(NestedPartySubID_39.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_39(672284592);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_39);
        NstdPtysSubGrp_NoNestedPartySubIDs_39.insert(NestedPartySubIDType_39.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_39);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_40;
        FIX::NestedPartySubID NestedPartySubID_40("STRING_1014397583");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_40);
        NstdPtysSubGrp_NoNestedPartySubIDs_40.insert(NestedPartySubID_40.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_40(1305394153);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_40);
        NstdPtysSubGrp_NoNestedPartySubIDs_40.insert(NestedPartySubIDType_40.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_40);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noApplIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_1;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_1;
    FIX::ApplBegSeqNum ApplBegSeqNum_1(1505703088);
    noApplIDs_0_1.set(ApplBegSeqNum_1);
    ApplIDRequestGrp_NoApplIDs_1.insert(ApplBegSeqNum_1.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_1(1580922019);
    noApplIDs_0_1.set(ApplEndSeqNum_1);
    ApplIDRequestGrp_NoApplIDs_1.insert(ApplEndSeqNum_1.getString());
    FIX::RefApplID RefApplID_3("STRING_1231157090");
    noApplIDs_0_1.set(RefApplID_3);
    ApplIDRequestGrp_NoApplIDs_1.insert(RefApplID_3.getString());
    FIX::RefApplReqID RefApplReqID_1("STRING_1599426311");
    noApplIDs_0_1.set(RefApplReqID_1);
    ApplIDRequestGrp_NoApplIDs_1.insert(RefApplReqID_1.getString());
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_23;
      FIX::NestedPartyID NestedPartyID_23("STRING_241948137");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyID_23.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_23('3');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyIDSource_23.getString());
      FIX::NestedPartyRole NestedPartyRole_23(2028322796);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyRole_23.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_23);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_41;
        FIX::NestedPartySubID NestedPartySubID_41("STRING_481150177");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_41);
        NstdPtysSubGrp_NoNestedPartySubIDs_41.insert(NestedPartySubID_41.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_41(627713601);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_41);
        NstdPtysSubGrp_NoNestedPartySubIDs_41.insert(NestedPartySubIDType_41.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_41);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_42;
        FIX::NestedPartySubID NestedPartySubID_42("STRING_1001855671");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_42);
        NstdPtysSubGrp_NoNestedPartySubIDs_42.insert(NestedPartySubID_42.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_42(812194712);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_42);
        NstdPtysSubGrp_NoNestedPartySubIDs_42.insert(NestedPartySubIDType_42.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_42);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_24;
      FIX::NestedPartyID NestedPartyID_24("STRING_1203603270");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyID_24.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_24('6');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyIDSource_24.getString());
      FIX::NestedPartyRole NestedPartyRole_24(1772220351);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyRole_24.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_24);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_43;
        FIX::NestedPartySubID NestedPartySubID_43("STRING_2089660372");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_43);
        NstdPtysSubGrp_NoNestedPartySubIDs_43.insert(NestedPartySubID_43.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_43(1795030378);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_43);
        NstdPtysSubGrp_NoNestedPartySubIDs_43.insert(NestedPartySubIDType_43.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_43);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noApplIDs_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_17;
    FIX::PartyID PartyID_17("STRING_2034370101");
    noPartyIDs_0_0.set(PartyID_17);
    Parties_NoPartyIDs_17.insert(PartyID_17.getString());
    FIX::PartyIDSource PartyIDSource_17('4');
    noPartyIDs_0_0.set(PartyIDSource_17);
    Parties_NoPartyIDs_17.insert(PartyIDSource_17.getString());
    FIX::PartyRole PartyRole_17(46);
    noPartyIDs_0_0.set(PartyRole_17);
    Parties_NoPartyIDs_17.insert(PartyRole_17.getString());
    all_values.push_back(Parties_NoPartyIDs_17);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_38;
      FIX::PartySubID PartySubID_38("STRING_858322595");
      noPartySubIDs_0_1_0.set(PartySubID_38);
      PtysSubGrp_NoPartySubIDs_38.insert(PartySubID_38.getString());
      FIX::PartySubIDType PartySubIDType_38(15);
      noPartySubIDs_0_1_0.set(PartySubIDType_38);
      PtysSubGrp_NoPartySubIDs_38.insert(PartySubIDType_38.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_38);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_18;
    FIX::PartyID PartyID_18("STRING_1526029934");
    noPartyIDs_0_1.set(PartyID_18);
    Parties_NoPartyIDs_18.insert(PartyID_18.getString());
    FIX::PartyIDSource PartyIDSource_18('F');
    noPartyIDs_0_1.set(PartyIDSource_18);
    Parties_NoPartyIDs_18.insert(PartyIDSource_18.getString());
    FIX::PartyRole PartyRole_18(32);
    noPartyIDs_0_1.set(PartyRole_18);
    Parties_NoPartyIDs_18.insert(PartyRole_18.getString());
    all_values.push_back(Parties_NoPartyIDs_18);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_39;
      FIX::PartySubID PartySubID_39("STRING_1208374220");
      noPartySubIDs_1_1_0.set(PartySubID_39);
      PtysSubGrp_NoPartySubIDs_39.insert(PartySubID_39.getString());
      FIX::PartySubIDType PartySubIDType_39(3);
      noPartySubIDs_1_1_0.set(PartySubIDType_39);
      PtysSubGrp_NoPartySubIDs_39.insert(PartySubIDType_39.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_39);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_40;
      FIX::PartySubID PartySubID_40("STRING_1973865889");
      noPartySubIDs_1_1_1.set(PartySubID_40);
      PtysSubGrp_NoPartySubIDs_40.insert(PartySubID_40.getString());
      FIX::PartySubIDType PartySubIDType_40(6);
      noPartySubIDs_1_1_1.set(PartySubIDType_40);
      PtysSubGrp_NoPartySubIDs_40.insert(PartySubIDType_40.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_40);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_41;
      FIX::PartySubID PartySubID_41("STRING_44606562");
      noPartySubIDs_1_1_2.set(PartySubID_41);
      PtysSubGrp_NoPartySubIDs_41.insert(PartySubID_41.getString());
      FIX::PartySubIDType PartySubIDType_41(16);
      noPartySubIDs_1_1_2.set(PartySubIDType_41);
      PtysSubGrp_NoPartySubIDs_41.insert(PartySubIDType_41.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_41);

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
