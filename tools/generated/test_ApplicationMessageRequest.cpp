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
  FIX::ApplReqID ApplReqID_1("STRING_1974804915");
  msg.set(ApplReqID_1);
  ApplicationMessageRequest_0.insert(ApplReqID_1.getString());
  FIX::ApplReqType ApplReqType_0(4);
  msg.set(ApplReqType_0);
  ApplicationMessageRequest_0.insert(ApplReqType_0.getString());
  FIX::EncodedText EncodedText_7("DATA_1803510345");
  msg.set(EncodedText_7);
  ApplicationMessageRequest_0.insert(EncodedText_7.getString());
  FIX::EncodedTextLen EncodedTextLen_7(1850728236);
  msg.set(EncodedTextLen_7);
  ApplicationMessageRequest_0.insert(EncodedTextLen_7.getString());
  FIX::Text Text_7("STRING_878571299");
  msg.set(Text_7);
  ApplicationMessageRequest_0.insert(Text_7.getString());
  all_values.push_back(ApplicationMessageRequest_0);

  // ApplIDRequestGrp
  // Group ApplIDRequestGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_0;
    FIX::ApplBegSeqNum ApplBegSeqNum_0(998701398);
    noApplIDs_0_0.set(ApplBegSeqNum_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(ApplBegSeqNum_0.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_0(782047409);
    noApplIDs_0_0.set(ApplEndSeqNum_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(ApplEndSeqNum_0.getString());
    FIX::RefApplID RefApplID_2("STRING_1112339841");
    noApplIDs_0_0.set(RefApplID_2);
    ApplIDRequestGrp_NoApplIDs_0.insert(RefApplID_2.getString());
    FIX::RefApplReqID RefApplReqID_0("STRING_433099786");
    noApplIDs_0_0.set(RefApplReqID_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(RefApplReqID_0.getString());
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_16;
      FIX::NestedPartyID NestedPartyID_16("STRING_980446447");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyID_16.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_16('9');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyIDSource_16.getString());
      FIX::NestedPartyRole NestedPartyRole_16(1997597952);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyRole_16.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_16);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_32;
        FIX::NestedPartySubID NestedPartySubID_32("STRING_587090769");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_32);
        NstdPtysSubGrp_NoNestedPartySubIDs_32.insert(NestedPartySubID_32.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_32(1829257052);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_32);
        NstdPtysSubGrp_NoNestedPartySubIDs_32.insert(NestedPartySubIDType_32.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_32);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_33;
        FIX::NestedPartySubID NestedPartySubID_33("STRING_572677087");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_33);
        NstdPtysSubGrp_NoNestedPartySubIDs_33.insert(NestedPartySubID_33.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_33(490981501);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_33);
        NstdPtysSubGrp_NoNestedPartySubIDs_33.insert(NestedPartySubIDType_33.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_33);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_17;
      FIX::NestedPartyID NestedPartyID_17("STRING_1512845237");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyID_17.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_17('8');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyIDSource_17.getString());
      FIX::NestedPartyRole NestedPartyRole_17(239114971);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_17);
      NestedParties_NoNestedPartyIDs_17.insert(NestedPartyRole_17.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_17);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_34;
        FIX::NestedPartySubID NestedPartySubID_34("STRING_682017089");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_34);
        NstdPtysSubGrp_NoNestedPartySubIDs_34.insert(NestedPartySubID_34.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_34(386858853);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_34);
        NstdPtysSubGrp_NoNestedPartySubIDs_34.insert(NestedPartySubIDType_34.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_34);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_18;
      FIX::NestedPartyID NestedPartyID_18("STRING_75161251");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyID_18.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_18('1');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyIDSource_18.getString());
      FIX::NestedPartyRole NestedPartyRole_18(1125692569);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyRole_18.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_18);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_35;
        FIX::NestedPartySubID NestedPartySubID_35("STRING_278173544");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_35);
        NstdPtysSubGrp_NoNestedPartySubIDs_35.insert(NestedPartySubID_35.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_35(1580141430);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_35);
        NstdPtysSubGrp_NoNestedPartySubIDs_35.insert(NestedPartySubIDType_35.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_35);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_36;
        FIX::NestedPartySubID NestedPartySubID_36("STRING_1263167277");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_36);
        NstdPtysSubGrp_NoNestedPartySubIDs_36.insert(NestedPartySubID_36.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_36(112993139);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_36);
        NstdPtysSubGrp_NoNestedPartySubIDs_36.insert(NestedPartySubIDType_36.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_36);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noApplIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_1;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_1;
    FIX::ApplBegSeqNum ApplBegSeqNum_1(1236168127);
    noApplIDs_0_1.set(ApplBegSeqNum_1);
    ApplIDRequestGrp_NoApplIDs_1.insert(ApplBegSeqNum_1.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_1(966411865);
    noApplIDs_0_1.set(ApplEndSeqNum_1);
    ApplIDRequestGrp_NoApplIDs_1.insert(ApplEndSeqNum_1.getString());
    FIX::RefApplID RefApplID_3("STRING_991564438");
    noApplIDs_0_1.set(RefApplID_3);
    ApplIDRequestGrp_NoApplIDs_1.insert(RefApplID_3.getString());
    FIX::RefApplReqID RefApplReqID_1("STRING_620260333");
    noApplIDs_0_1.set(RefApplReqID_1);
    ApplIDRequestGrp_NoApplIDs_1.insert(RefApplReqID_1.getString());
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_19;
      FIX::NestedPartyID NestedPartyID_19("STRING_1773611847");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyID_19.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_19('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyIDSource_19.getString());
      FIX::NestedPartyRole NestedPartyRole_19(250729401);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyRole_19.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_19);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_37;
        FIX::NestedPartySubID NestedPartySubID_37("STRING_565562973");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_37);
        NstdPtysSubGrp_NoNestedPartySubIDs_37.insert(NestedPartySubID_37.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_37(1159681925);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_37);
        NstdPtysSubGrp_NoNestedPartySubIDs_37.insert(NestedPartySubIDType_37.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_37);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_38;
        FIX::NestedPartySubID NestedPartySubID_38("STRING_2071575127");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_38);
        NstdPtysSubGrp_NoNestedPartySubIDs_38.insert(NestedPartySubID_38.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_38(911672039);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_38);
        NstdPtysSubGrp_NoNestedPartySubIDs_38.insert(NestedPartySubIDType_38.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_38);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_20;
      FIX::NestedPartyID NestedPartyID_20("STRING_1746772694");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyID_20.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_20('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyIDSource_20.getString());
      FIX::NestedPartyRole NestedPartyRole_20(1484349126);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyRole_20.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_20);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_39;
        FIX::NestedPartySubID NestedPartySubID_39("STRING_1118710121");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_39);
        NstdPtysSubGrp_NoNestedPartySubIDs_39.insert(NestedPartySubID_39.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_39(168440535);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_39);
        NstdPtysSubGrp_NoNestedPartySubIDs_39.insert(NestedPartySubIDType_39.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_39);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_40;
        FIX::NestedPartySubID NestedPartySubID_40("STRING_329385519");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_40);
        NstdPtysSubGrp_NoNestedPartySubIDs_40.insert(NestedPartySubID_40.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_40(86997723);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_40);
        NstdPtysSubGrp_NoNestedPartySubIDs_40.insert(NestedPartySubIDType_40.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_40);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
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
    multiset<string> Parties_NoPartyIDs_10;
    FIX::PartyID PartyID_10("STRING_716244372");
    noPartyIDs_0_0.set(PartyID_10);
    Parties_NoPartyIDs_10.insert(PartyID_10.getString());
    FIX::PartyIDSource PartyIDSource_10('H');
    noPartyIDs_0_0.set(PartyIDSource_10);
    Parties_NoPartyIDs_10.insert(PartyIDSource_10.getString());
    FIX::PartyRole PartyRole_10(62);
    noPartyIDs_0_0.set(PartyRole_10);
    Parties_NoPartyIDs_10.insert(PartyRole_10.getString());
    all_values.push_back(Parties_NoPartyIDs_10);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_18;
      FIX::PartySubID PartySubID_18("STRING_1598004984");
      noPartySubIDs_0_1_0.set(PartySubID_18);
      PtysSubGrp_NoPartySubIDs_18.insert(PartySubID_18.getString());
      FIX::PartySubIDType PartySubIDType_18(30);
      noPartySubIDs_0_1_0.set(PartySubIDType_18);
      PtysSubGrp_NoPartySubIDs_18.insert(PartySubIDType_18.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_18);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_19;
      FIX::PartySubID PartySubID_19("STRING_1274594723");
      noPartySubIDs_0_1_1.set(PartySubID_19);
      PtysSubGrp_NoPartySubIDs_19.insert(PartySubID_19.getString());
      FIX::PartySubIDType PartySubIDType_19(23);
      noPartySubIDs_0_1_1.set(PartySubIDType_19);
      PtysSubGrp_NoPartySubIDs_19.insert(PartySubIDType_19.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_19);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_11;
    FIX::PartyID PartyID_11("STRING_642715999");
    noPartyIDs_0_1.set(PartyID_11);
    Parties_NoPartyIDs_11.insert(PartyID_11.getString());
    FIX::PartyIDSource PartyIDSource_11('H');
    noPartyIDs_0_1.set(PartyIDSource_11);
    Parties_NoPartyIDs_11.insert(PartyIDSource_11.getString());
    FIX::PartyRole PartyRole_11(15);
    noPartyIDs_0_1.set(PartyRole_11);
    Parties_NoPartyIDs_11.insert(PartyRole_11.getString());
    all_values.push_back(Parties_NoPartyIDs_11);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_20;
      FIX::PartySubID PartySubID_20("STRING_983539536");
      noPartySubIDs_1_1_0.set(PartySubID_20);
      PtysSubGrp_NoPartySubIDs_20.insert(PartySubID_20.getString());
      FIX::PartySubIDType PartySubIDType_20(14);
      noPartySubIDs_1_1_0.set(PartySubIDType_20);
      PtysSubGrp_NoPartySubIDs_20.insert(PartySubIDType_20.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_20);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_12;
    FIX::PartyID PartyID_12("STRING_1260408637");
    noPartyIDs_0_2.set(PartyID_12);
    Parties_NoPartyIDs_12.insert(PartyID_12.getString());
    FIX::PartyIDSource PartyIDSource_12('4');
    noPartyIDs_0_2.set(PartyIDSource_12);
    Parties_NoPartyIDs_12.insert(PartyIDSource_12.getString());
    FIX::PartyRole PartyRole_12(85);
    noPartyIDs_0_2.set(PartyRole_12);
    Parties_NoPartyIDs_12.insert(PartyRole_12.getString());
    all_values.push_back(Parties_NoPartyIDs_12);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_21;
      FIX::PartySubID PartySubID_21("STRING_1134219035");
      noPartySubIDs_2_1_0.set(PartySubID_21);
      PtysSubGrp_NoPartySubIDs_21.insert(PartySubID_21.getString());
      FIX::PartySubIDType PartySubIDType_21(18);
      noPartySubIDs_2_1_0.set(PartySubIDType_21);
      PtysSubGrp_NoPartySubIDs_21.insert(PartySubIDType_21.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_21);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_22;
      FIX::PartySubID PartySubID_22("STRING_1258477292");
      noPartySubIDs_2_1_1.set(PartySubID_22);
      PtysSubGrp_NoPartySubIDs_22.insert(PartySubID_22.getString());
      FIX::PartySubIDType PartySubIDType_22(8);
      noPartySubIDs_2_1_1.set(PartySubIDType_22);
      PtysSubGrp_NoPartySubIDs_22.insert(PartySubIDType_22.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_22);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_23;
      FIX::PartySubID PartySubID_23("STRING_359946819");
      noPartySubIDs_2_1_2.set(PartySubID_23);
      PtysSubGrp_NoPartySubIDs_23.insert(PartySubID_23.getString());
      FIX::PartySubIDType PartySubIDType_23(5);
      noPartySubIDs_2_1_2.set(PartySubIDType_23);
      PtysSubGrp_NoPartySubIDs_23.insert(PartySubIDType_23.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_23);

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
