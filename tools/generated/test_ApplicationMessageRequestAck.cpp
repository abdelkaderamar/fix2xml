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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ApplicationMessageRequestAck msg;

  list<multiset<string>> all_values;
  multiset<string> ApplicationMessageRequestAck_0;
  FIX::ApplReqID ApplReqID_2("STRING_1135684768");
  msg.set(ApplReqID_2);
  ApplicationMessageRequestAck_0.insert(ApplReqID_2.getString());
  FIX::ApplReqType ApplReqType_1(4);
  msg.set(ApplReqType_1);
  ApplicationMessageRequestAck_0.insert(ApplReqType_1.getString());
  FIX::ApplResponseID ApplResponseID_0("STRING_770965908");
  msg.set(ApplResponseID_0);
  ApplicationMessageRequestAck_0.insert(ApplResponseID_0.getString());
  FIX::ApplResponseType ApplResponseType_0(1);
  msg.set(ApplResponseType_0);
  ApplicationMessageRequestAck_0.insert(ApplResponseType_0.getString());
  FIX::ApplTotalMessageCount ApplTotalMessageCount_0(774956765);
  msg.set(ApplTotalMessageCount_0);
  ApplicationMessageRequestAck_0.insert(ApplTotalMessageCount_0.getString());
  FIX::EncodedText EncodedText_8("DATA_747717818");
  msg.set(EncodedText_8);
  ApplicationMessageRequestAck_0.insert(EncodedText_8.getString());
  FIX::EncodedTextLen EncodedTextLen_8(335246248);
  msg.set(EncodedTextLen_8);
  ApplicationMessageRequestAck_0.insert(EncodedTextLen_8.getString());
  FIX::Text Text_8("STRING_1449082637");
  msg.set(Text_8);
  ApplicationMessageRequestAck_0.insert(Text_8.getString());
  all_values.push_back(ApplicationMessageRequestAck_0);

  // ApplIDRequestAckGrp
  // Group ApplIDRequestAckGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_0;
    FIX::ApplBegSeqNum ApplBegSeqNum_3(965174144);
    noApplIDs_0_0.set(ApplBegSeqNum_3);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplBegSeqNum_3.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_3(1690372997);
    noApplIDs_0_0.set(ApplEndSeqNum_3);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplEndSeqNum_3.getString());
    FIX::ApplResponseError ApplResponseError_0(2);
    noApplIDs_0_0.set(ApplResponseError_0);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplResponseError_0.getString());
    FIX::RefApplID RefApplID_4("STRING_858850951");
    noApplIDs_0_0.set(RefApplID_4);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplID_4.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_1(1607092363);
    noApplIDs_0_0.set(RefApplLastSeqNum_1);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplLastSeqNum_1.getString());
    FIX::RefApplReqID RefApplReqID_3("STRING_963130273");
    noApplIDs_0_0.set(RefApplReqID_3);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplReqID_3.getString());
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_29;
      FIX::NestedPartyID NestedPartyID_29("STRING_437589258");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_29);
      NestedParties_NoNestedPartyIDs_29.insert(NestedPartyID_29.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_29('3');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_29);
      NestedParties_NoNestedPartyIDs_29.insert(NestedPartyIDSource_29.getString());
      FIX::NestedPartyRole NestedPartyRole_29(353110754);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_29);
      NestedParties_NoNestedPartyIDs_29.insert(NestedPartyRole_29.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_29);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_59;
        FIX::NestedPartySubID NestedPartySubID_59("STRING_1942485652");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_59);
        NstdPtysSubGrp_NoNestedPartySubIDs_59.insert(NestedPartySubID_59.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_59(1110248584);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_59);
        NstdPtysSubGrp_NoNestedPartySubIDs_59.insert(NestedPartySubIDType_59.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_59);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_60;
        FIX::NestedPartySubID NestedPartySubID_60("STRING_1493666957");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_60);
        NstdPtysSubGrp_NoNestedPartySubIDs_60.insert(NestedPartySubID_60.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_60(260670275);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_60);
        NstdPtysSubGrp_NoNestedPartySubIDs_60.insert(NestedPartySubIDType_60.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_60);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_61;
        FIX::NestedPartySubID NestedPartySubID_61("STRING_1579171632");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_61);
        NstdPtysSubGrp_NoNestedPartySubIDs_61.insert(NestedPartySubID_61.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_61(300278552);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_61);
        NstdPtysSubGrp_NoNestedPartySubIDs_61.insert(NestedPartySubIDType_61.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_61);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_30;
      FIX::NestedPartyID NestedPartyID_30("STRING_1932156979");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_30);
      NestedParties_NoNestedPartyIDs_30.insert(NestedPartyID_30.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_30('3');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_30);
      NestedParties_NoNestedPartyIDs_30.insert(NestedPartyIDSource_30.getString());
      FIX::NestedPartyRole NestedPartyRole_30(2023089059);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_30);
      NestedParties_NoNestedPartyIDs_30.insert(NestedPartyRole_30.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_30);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_62;
        FIX::NestedPartySubID NestedPartySubID_62("STRING_1547983729");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_62);
        NstdPtysSubGrp_NoNestedPartySubIDs_62.insert(NestedPartySubID_62.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_62(1011290179);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_62);
        NstdPtysSubGrp_NoNestedPartySubIDs_62.insert(NestedPartySubIDType_62.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_62);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_63;
        FIX::NestedPartySubID NestedPartySubID_63("STRING_1934448440");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_63);
        NstdPtysSubGrp_NoNestedPartySubIDs_63.insert(NestedPartySubID_63.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_63(171465989);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_63);
        NstdPtysSubGrp_NoNestedPartySubIDs_63.insert(NestedPartySubIDType_63.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_63);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_31;
      FIX::NestedPartyID NestedPartyID_31("STRING_861894966");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_31);
      NestedParties_NoNestedPartyIDs_31.insert(NestedPartyID_31.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_31('5');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_31);
      NestedParties_NoNestedPartyIDs_31.insert(NestedPartyIDSource_31.getString());
      FIX::NestedPartyRole NestedPartyRole_31(919183807);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_31);
      NestedParties_NoNestedPartyIDs_31.insert(NestedPartyRole_31.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_31);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_64;
        FIX::NestedPartySubID NestedPartySubID_64("STRING_2011004194");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_64);
        NstdPtysSubGrp_NoNestedPartySubIDs_64.insert(NestedPartySubID_64.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_64(1719321788);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_64);
        NstdPtysSubGrp_NoNestedPartySubIDs_64.insert(NestedPartySubIDType_64.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_64);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_65;
        FIX::NestedPartySubID NestedPartySubID_65("STRING_14831710");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_65);
        NstdPtysSubGrp_NoNestedPartySubIDs_65.insert(NestedPartySubID_65.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_65(1553893543);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_65);
        NstdPtysSubGrp_NoNestedPartySubIDs_65.insert(NestedPartySubIDType_65.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_65);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noApplIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_1;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_1;
    FIX::ApplBegSeqNum ApplBegSeqNum_4(186617862);
    noApplIDs_0_1.set(ApplBegSeqNum_4);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplBegSeqNum_4.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_4(873682661);
    noApplIDs_0_1.set(ApplEndSeqNum_4);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplEndSeqNum_4.getString());
    FIX::ApplResponseError ApplResponseError_1(0);
    noApplIDs_0_1.set(ApplResponseError_1);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplResponseError_1.getString());
    FIX::RefApplID RefApplID_5("STRING_1149748135");
    noApplIDs_0_1.set(RefApplID_5);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplID_5.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_2(226730921);
    noApplIDs_0_1.set(RefApplLastSeqNum_2);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplLastSeqNum_2.getString());
    FIX::RefApplReqID RefApplReqID_4("STRING_1451091516");
    noApplIDs_0_1.set(RefApplReqID_4);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplReqID_4.getString());
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_32;
      FIX::NestedPartyID NestedPartyID_32("STRING_579841675");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_32);
      NestedParties_NoNestedPartyIDs_32.insert(NestedPartyID_32.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_32('7');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_32);
      NestedParties_NoNestedPartyIDs_32.insert(NestedPartyIDSource_32.getString());
      FIX::NestedPartyRole NestedPartyRole_32(1291388412);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_32);
      NestedParties_NoNestedPartyIDs_32.insert(NestedPartyRole_32.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_32);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_66;
        FIX::NestedPartySubID NestedPartySubID_66("STRING_111922189");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_66);
        NstdPtysSubGrp_NoNestedPartySubIDs_66.insert(NestedPartySubID_66.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_66(1552058688);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_66);
        NstdPtysSubGrp_NoNestedPartySubIDs_66.insert(NestedPartySubIDType_66.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_66);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_33;
      FIX::NestedPartyID NestedPartyID_33("STRING_1121778244");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_33);
      NestedParties_NoNestedPartyIDs_33.insert(NestedPartyID_33.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_33('4');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_33);
      NestedParties_NoNestedPartyIDs_33.insert(NestedPartyIDSource_33.getString());
      FIX::NestedPartyRole NestedPartyRole_33(1336732019);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_33);
      NestedParties_NoNestedPartyIDs_33.insert(NestedPartyRole_33.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_33);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_67;
        FIX::NestedPartySubID NestedPartySubID_67("STRING_287806152");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_67);
        NstdPtysSubGrp_NoNestedPartySubIDs_67.insert(NestedPartySubID_67.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_67(2081026644);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_67);
        NstdPtysSubGrp_NoNestedPartySubIDs_67.insert(NestedPartySubIDType_67.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_67);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noApplIDs_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_14;
    FIX::PartyID PartyID_14("STRING_1299096332");
    noPartyIDs_0_0.set(PartyID_14);
    Parties_NoPartyIDs_14.insert(PartyID_14.getString());
    FIX::PartyIDSource PartyIDSource_14('7');
    noPartyIDs_0_0.set(PartyIDSource_14);
    Parties_NoPartyIDs_14.insert(PartyIDSource_14.getString());
    FIX::PartyRole PartyRole_14(75);
    noPartyIDs_0_0.set(PartyRole_14);
    Parties_NoPartyIDs_14.insert(PartyRole_14.getString());
    all_values.push_back(Parties_NoPartyIDs_14);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_30;
      FIX::PartySubID PartySubID_30("STRING_282429346");
      noPartySubIDs_0_1_0.set(PartySubID_30);
      PtysSubGrp_NoPartySubIDs_30.insert(PartySubID_30.getString());
      FIX::PartySubIDType PartySubIDType_30(16);
      noPartySubIDs_0_1_0.set(PartySubIDType_30);
      PtysSubGrp_NoPartySubIDs_30.insert(PartySubIDType_30.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_30);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_15;
    FIX::PartyID PartyID_15("STRING_1210648865");
    noPartyIDs_0_1.set(PartyID_15);
    Parties_NoPartyIDs_15.insert(PartyID_15.getString());
    FIX::PartyIDSource PartyIDSource_15('3');
    noPartyIDs_0_1.set(PartyIDSource_15);
    Parties_NoPartyIDs_15.insert(PartyIDSource_15.getString());
    FIX::PartyRole PartyRole_15(22);
    noPartyIDs_0_1.set(PartyRole_15);
    Parties_NoPartyIDs_15.insert(PartyRole_15.getString());
    all_values.push_back(Parties_NoPartyIDs_15);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_31;
      FIX::PartySubID PartySubID_31("STRING_1699843436");
      noPartySubIDs_1_1_0.set(PartySubID_31);
      PtysSubGrp_NoPartySubIDs_31.insert(PartySubID_31.getString());
      FIX::PartySubIDType PartySubIDType_31(13);
      noPartySubIDs_1_1_0.set(PartySubIDType_31);
      PtysSubGrp_NoPartySubIDs_31.insert(PartySubIDType_31.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_31);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_16;
    FIX::PartyID PartyID_16("STRING_2099163237");
    noPartyIDs_0_2.set(PartyID_16);
    Parties_NoPartyIDs_16.insert(PartyID_16.getString());
    FIX::PartyIDSource PartyIDSource_16('3');
    noPartyIDs_0_2.set(PartyIDSource_16);
    Parties_NoPartyIDs_16.insert(PartyIDSource_16.getString());
    FIX::PartyRole PartyRole_16(65);
    noPartyIDs_0_2.set(PartyRole_16);
    Parties_NoPartyIDs_16.insert(PartyRole_16.getString());
    all_values.push_back(Parties_NoPartyIDs_16);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_32;
      FIX::PartySubID PartySubID_32("STRING_2016953563");
      noPartySubIDs_2_1_0.set(PartySubID_32);
      PtysSubGrp_NoPartySubIDs_32.insert(PartySubID_32.getString());
      FIX::PartySubIDType PartySubIDType_32(18);
      noPartySubIDs_2_1_0.set(PartySubIDType_32);
      PtysSubGrp_NoPartySubIDs_32.insert(PartySubIDType_32.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_32);

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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
