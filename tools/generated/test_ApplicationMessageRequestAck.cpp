#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ApplicationMessageRequestAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ApplicationMessageRequestAck, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ApplicationMessageRequestAck msg;

  list<multiset<string>> all_values;
  multiset<string> ApplicationMessageRequestAck_0;
  FIX::ApplReqID ApplReqID_2("STRING_1382756552");
  msg.set(ApplReqID_2);
  ApplicationMessageRequestAck_0.insert(ApplReqID_2.getString());
  FIX::ApplReqType ApplReqType_1(4);
  msg.set(ApplReqType_1);
  ApplicationMessageRequestAck_0.insert(ApplReqType_1.getString());
  FIX::ApplResponseID ApplResponseID_0("STRING_1983052296");
  msg.set(ApplResponseID_0);
  ApplicationMessageRequestAck_0.insert(ApplResponseID_0.getString());
  FIX::ApplResponseType ApplResponseType_0(2);
  msg.set(ApplResponseType_0);
  ApplicationMessageRequestAck_0.insert(ApplResponseType_0.getString());
  FIX::ApplTotalMessageCount ApplTotalMessageCount_0(779602885);
  msg.set(ApplTotalMessageCount_0);
  ApplicationMessageRequestAck_0.insert(ApplTotalMessageCount_0.getString());
  FIX::EncodedText EncodedText_8("DATA_2070050020");
  msg.set(EncodedText_8);
  ApplicationMessageRequestAck_0.insert(EncodedText_8.getString());
  FIX::EncodedTextLen EncodedTextLen_8(254171063);
  msg.set(EncodedTextLen_8);
  ApplicationMessageRequestAck_0.insert(EncodedTextLen_8.getString());
  FIX::Text Text_8("STRING_1495847257");
  msg.set(Text_8);
  ApplicationMessageRequestAck_0.insert(Text_8.getString());
  all_values.push_back(ApplicationMessageRequestAck_0);

  // ApplIDRequestAckGrp
  // Group ApplIDRequestAckGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_0;
    FIX::ApplBegSeqNum ApplBegSeqNum_2(505720380);
    noApplIDs_0_0.set(ApplBegSeqNum_2);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplBegSeqNum_2.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_2(1190300550);
    noApplIDs_0_0.set(ApplEndSeqNum_2);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplEndSeqNum_2.getString());
    FIX::ApplResponseError ApplResponseError_0(1);
    noApplIDs_0_0.set(ApplResponseError_0);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplResponseError_0.getString());
    FIX::RefApplID RefApplID_4("STRING_1035443240");
    noApplIDs_0_0.set(RefApplID_4);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplID_4.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_2(317411626);
    noApplIDs_0_0.set(RefApplLastSeqNum_2);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplLastSeqNum_2.getString());
    FIX::RefApplReqID RefApplReqID_2("STRING_248935297");
    noApplIDs_0_0.set(RefApplReqID_2);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplReqID_2.getString());
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_21;
      FIX::NestedPartyID NestedPartyID_21("STRING_680690829");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyID_21.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_21('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyIDSource_21.getString());
      FIX::NestedPartyRole NestedPartyRole_21(1164956030);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyRole_21.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_21);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_41;
        FIX::NestedPartySubID NestedPartySubID_41("STRING_1279282221");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_41);
        NstdPtysSubGrp_NoNestedPartySubIDs_41.insert(NestedPartySubID_41.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_41(277881019);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_41);
        NstdPtysSubGrp_NoNestedPartySubIDs_41.insert(NestedPartySubIDType_41.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_41);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_22;
      FIX::NestedPartyID NestedPartyID_22("STRING_85402779");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyID_22.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_22('8');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyIDSource_22.getString());
      FIX::NestedPartyRole NestedPartyRole_22(1612266832);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyRole_22.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_22);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_42;
        FIX::NestedPartySubID NestedPartySubID_42("STRING_1640915840");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_42);
        NstdPtysSubGrp_NoNestedPartySubIDs_42.insert(NestedPartySubID_42.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_42(723260476);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_42);
        NstdPtysSubGrp_NoNestedPartySubIDs_42.insert(NestedPartySubIDType_42.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_42);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_43;
        FIX::NestedPartySubID NestedPartySubID_43("STRING_1118029241");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_43);
        NstdPtysSubGrp_NoNestedPartySubIDs_43.insert(NestedPartySubID_43.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_43(2000862659);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_43);
        NstdPtysSubGrp_NoNestedPartySubIDs_43.insert(NestedPartySubIDType_43.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_43);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_44;
        FIX::NestedPartySubID NestedPartySubID_44("STRING_1587602651");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_44);
        NstdPtysSubGrp_NoNestedPartySubIDs_44.insert(NestedPartySubID_44.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_44(353302145);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_44);
        NstdPtysSubGrp_NoNestedPartySubIDs_44.insert(NestedPartySubIDType_44.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_44);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noApplIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_1;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_1;
    FIX::ApplBegSeqNum ApplBegSeqNum_3(303596378);
    noApplIDs_0_1.set(ApplBegSeqNum_3);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplBegSeqNum_3.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_3(1423171300);
    noApplIDs_0_1.set(ApplEndSeqNum_3);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplEndSeqNum_3.getString());
    FIX::ApplResponseError ApplResponseError_1(2);
    noApplIDs_0_1.set(ApplResponseError_1);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplResponseError_1.getString());
    FIX::RefApplID RefApplID_5("STRING_1083199263");
    noApplIDs_0_1.set(RefApplID_5);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplID_5.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_3(1345737672);
    noApplIDs_0_1.set(RefApplLastSeqNum_3);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplLastSeqNum_3.getString());
    FIX::RefApplReqID RefApplReqID_3("STRING_11186648");
    noApplIDs_0_1.set(RefApplReqID_3);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplReqID_3.getString());
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_23;
      FIX::NestedPartyID NestedPartyID_23("STRING_1430463019");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyID_23.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_23('5');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyIDSource_23.getString());
      FIX::NestedPartyRole NestedPartyRole_23(1621863423);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyRole_23.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_23);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_45;
        FIX::NestedPartySubID NestedPartySubID_45("STRING_1552350269");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_45);
        NstdPtysSubGrp_NoNestedPartySubIDs_45.insert(NestedPartySubID_45.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_45(1939275049);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_45);
        NstdPtysSubGrp_NoNestedPartySubIDs_45.insert(NestedPartySubIDType_45.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_45);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noApplIDs_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_13;
    FIX::PartyID PartyID_13("STRING_1083025861");
    noPartyIDs_0_0.set(PartyID_13);
    Parties_NoPartyIDs_13.insert(PartyID_13.getString());
    FIX::PartyIDSource PartyIDSource_13('E');
    noPartyIDs_0_0.set(PartyIDSource_13);
    Parties_NoPartyIDs_13.insert(PartyIDSource_13.getString());
    FIX::PartyRole PartyRole_13(53);
    noPartyIDs_0_0.set(PartyRole_13);
    Parties_NoPartyIDs_13.insert(PartyRole_13.getString());
    all_values.push_back(Parties_NoPartyIDs_13);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_24;
      FIX::PartySubID PartySubID_24("STRING_2136712595");
      noPartySubIDs_0_1_0.set(PartySubID_24);
      PtysSubGrp_NoPartySubIDs_24.insert(PartySubID_24.getString());
      FIX::PartySubIDType PartySubIDType_24(20);
      noPartySubIDs_0_1_0.set(PartySubIDType_24);
      PtysSubGrp_NoPartySubIDs_24.insert(PartySubIDType_24.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_24);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_25;
      FIX::PartySubID PartySubID_25("STRING_378379262");
      noPartySubIDs_0_1_1.set(PartySubID_25);
      PtysSubGrp_NoPartySubIDs_25.insert(PartySubID_25.getString());
      FIX::PartySubIDType PartySubIDType_25(16);
      noPartySubIDs_0_1_1.set(PartySubIDType_25);
      PtysSubGrp_NoPartySubIDs_25.insert(PartySubIDType_25.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_25);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_14;
    FIX::PartyID PartyID_14("STRING_1008253768");
    noPartyIDs_0_1.set(PartyID_14);
    Parties_NoPartyIDs_14.insert(PartyID_14.getString());
    FIX::PartyIDSource PartyIDSource_14('C');
    noPartyIDs_0_1.set(PartyIDSource_14);
    Parties_NoPartyIDs_14.insert(PartyIDSource_14.getString());
    FIX::PartyRole PartyRole_14(22);
    noPartyIDs_0_1.set(PartyRole_14);
    Parties_NoPartyIDs_14.insert(PartyRole_14.getString());
    all_values.push_back(Parties_NoPartyIDs_14);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_26;
      FIX::PartySubID PartySubID_26("STRING_566422922");
      noPartySubIDs_1_1_0.set(PartySubID_26);
      PtysSubGrp_NoPartySubIDs_26.insert(PartySubID_26.getString());
      FIX::PartySubIDType PartySubIDType_26(7);
      noPartySubIDs_1_1_0.set(PartySubIDType_26);
      PtysSubGrp_NoPartySubIDs_26.insert(PartySubIDType_26.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_26);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_27;
      FIX::PartySubID PartySubID_27("STRING_355064972");
      noPartySubIDs_1_1_1.set(PartySubID_27);
      PtysSubGrp_NoPartySubIDs_27.insert(PartySubID_27.getString());
      FIX::PartySubIDType PartySubIDType_27(7);
      noPartySubIDs_1_1_1.set(PartySubIDType_27);
      PtysSubGrp_NoPartySubIDs_27.insert(PartySubIDType_27.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_27);

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
