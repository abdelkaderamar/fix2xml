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
  FIX::ApplReqID ApplReqID_2("STRING_533995799");
  msg.set(ApplReqID_2);
  ApplicationMessageRequestAck_0.insert(ApplReqID_2.getString());
  FIX::ApplReqType ApplReqType_1(6);
  msg.set(ApplReqType_1);
  ApplicationMessageRequestAck_0.insert(ApplReqType_1.getString());
  FIX::ApplResponseID ApplResponseID_0("STRING_932782672");
  msg.set(ApplResponseID_0);
  ApplicationMessageRequestAck_0.insert(ApplResponseID_0.getString());
  FIX::ApplResponseType ApplResponseType_0(0);
  msg.set(ApplResponseType_0);
  ApplicationMessageRequestAck_0.insert(ApplResponseType_0.getString());
  FIX::ApplTotalMessageCount ApplTotalMessageCount_0(904220579);
  msg.set(ApplTotalMessageCount_0);
  ApplicationMessageRequestAck_0.insert(ApplTotalMessageCount_0.getString());
  FIX::EncodedText EncodedText_8("DATA_1560496273");
  msg.set(EncodedText_8);
  ApplicationMessageRequestAck_0.insert(EncodedText_8.getString());
  FIX::EncodedTextLen EncodedTextLen_8(682728156);
  msg.set(EncodedTextLen_8);
  ApplicationMessageRequestAck_0.insert(EncodedTextLen_8.getString());
  FIX::Text Text_8("STRING_1716415291");
  msg.set(Text_8);
  ApplicationMessageRequestAck_0.insert(Text_8.getString());
  all_values.push_back(ApplicationMessageRequestAck_0);

  // ApplIDRequestAckGrp
  // Group ApplIDRequestAckGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_0;
    FIX::ApplBegSeqNum ApplBegSeqNum_2(1295398237);
    noApplIDs_0_0.set(ApplBegSeqNum_2);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplBegSeqNum_2.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_2(1341151995);
    noApplIDs_0_0.set(ApplEndSeqNum_2);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplEndSeqNum_2.getString());
    FIX::ApplResponseError ApplResponseError_0(2);
    noApplIDs_0_0.set(ApplResponseError_0);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplResponseError_0.getString());
    FIX::RefApplID RefApplID_4("STRING_1237574961");
    noApplIDs_0_0.set(RefApplID_4);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplID_4.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_2(988698725);
    noApplIDs_0_0.set(RefApplLastSeqNum_2);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplLastSeqNum_2.getString());
    FIX::RefApplReqID RefApplReqID_2("STRING_488495287");
    noApplIDs_0_0.set(RefApplReqID_2);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplReqID_2.getString());
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_25;
      FIX::NestedPartyID NestedPartyID_25("STRING_101461937");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyID_25.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_25('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyIDSource_25.getString());
      FIX::NestedPartyRole NestedPartyRole_25(24576920);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyRole_25.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_25);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_44;
        FIX::NestedPartySubID NestedPartySubID_44("STRING_428637589");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_44);
        NstdPtysSubGrp_NoNestedPartySubIDs_44.insert(NestedPartySubID_44.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_44(1550606855);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_44);
        NstdPtysSubGrp_NoNestedPartySubIDs_44.insert(NestedPartySubIDType_44.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_44);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_45;
        FIX::NestedPartySubID NestedPartySubID_45("STRING_862764600");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_45);
        NstdPtysSubGrp_NoNestedPartySubIDs_45.insert(NestedPartySubID_45.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_45(1663082047);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_45);
        NstdPtysSubGrp_NoNestedPartySubIDs_45.insert(NestedPartySubIDType_45.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_45);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_46;
        FIX::NestedPartySubID NestedPartySubID_46("STRING_1943550724");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_46);
        NstdPtysSubGrp_NoNestedPartySubIDs_46.insert(NestedPartySubID_46.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_46(2071138820);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_46);
        NstdPtysSubGrp_NoNestedPartySubIDs_46.insert(NestedPartySubIDType_46.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_46);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_26;
      FIX::NestedPartyID NestedPartyID_26("STRING_108262298");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyID_26.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_26('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyIDSource_26.getString());
      FIX::NestedPartyRole NestedPartyRole_26(215702834);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyRole_26.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_26);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_47;
        FIX::NestedPartySubID NestedPartySubID_47("STRING_674392841");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_47);
        NstdPtysSubGrp_NoNestedPartySubIDs_47.insert(NestedPartySubID_47.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_47(749698633);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_47);
        NstdPtysSubGrp_NoNestedPartySubIDs_47.insert(NestedPartySubIDType_47.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_47);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_48;
        FIX::NestedPartySubID NestedPartySubID_48("STRING_575939262");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_48);
        NstdPtysSubGrp_NoNestedPartySubIDs_48.insert(NestedPartySubID_48.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_48(1607175513);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_48);
        NstdPtysSubGrp_NoNestedPartySubIDs_48.insert(NestedPartySubIDType_48.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_48);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_49;
        FIX::NestedPartySubID NestedPartySubID_49("STRING_430571117");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_49);
        NstdPtysSubGrp_NoNestedPartySubIDs_49.insert(NestedPartySubID_49.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_49(1480159841);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_49);
        NstdPtysSubGrp_NoNestedPartySubIDs_49.insert(NestedPartySubIDType_49.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_49);

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
    FIX::ApplBegSeqNum ApplBegSeqNum_3(1020188138);
    noApplIDs_0_1.set(ApplBegSeqNum_3);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplBegSeqNum_3.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_3(1113299273);
    noApplIDs_0_1.set(ApplEndSeqNum_3);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplEndSeqNum_3.getString());
    FIX::ApplResponseError ApplResponseError_1(2);
    noApplIDs_0_1.set(ApplResponseError_1);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplResponseError_1.getString());
    FIX::RefApplID RefApplID_5("STRING_1636804033");
    noApplIDs_0_1.set(RefApplID_5);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplID_5.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_3(261213862);
    noApplIDs_0_1.set(RefApplLastSeqNum_3);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplLastSeqNum_3.getString());
    FIX::RefApplReqID RefApplReqID_3("STRING_242759832");
    noApplIDs_0_1.set(RefApplReqID_3);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplReqID_3.getString());
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_27;
      FIX::NestedPartyID NestedPartyID_27("STRING_1498788824");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyID_27.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_27('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyIDSource_27.getString());
      FIX::NestedPartyRole NestedPartyRole_27(1555421718);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyRole_27.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_27);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_50;
        FIX::NestedPartySubID NestedPartySubID_50("STRING_1332920494");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_50);
        NstdPtysSubGrp_NoNestedPartySubIDs_50.insert(NestedPartySubID_50.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_50(1421899442);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_50);
        NstdPtysSubGrp_NoNestedPartySubIDs_50.insert(NestedPartySubIDType_50.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_50);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_51;
        FIX::NestedPartySubID NestedPartySubID_51("STRING_500343511");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_51);
        NstdPtysSubGrp_NoNestedPartySubIDs_51.insert(NestedPartySubID_51.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_51(145221379);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_51);
        NstdPtysSubGrp_NoNestedPartySubIDs_51.insert(NestedPartySubIDType_51.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_51);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_28;
      FIX::NestedPartyID NestedPartyID_28("STRING_1850537031");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_28);
      NestedParties_NoNestedPartyIDs_28.insert(NestedPartyID_28.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_28('2');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_28);
      NestedParties_NoNestedPartyIDs_28.insert(NestedPartyIDSource_28.getString());
      FIX::NestedPartyRole NestedPartyRole_28(1007985979);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_28);
      NestedParties_NoNestedPartyIDs_28.insert(NestedPartyRole_28.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_28);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_52;
        FIX::NestedPartySubID NestedPartySubID_52("STRING_1847017442");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_52);
        NstdPtysSubGrp_NoNestedPartySubIDs_52.insert(NestedPartySubID_52.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_52(931641151);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_52);
        NstdPtysSubGrp_NoNestedPartySubIDs_52.insert(NestedPartySubIDType_52.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_52);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noApplIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_2;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_2;
    FIX::ApplBegSeqNum ApplBegSeqNum_4(1474397729);
    noApplIDs_0_2.set(ApplBegSeqNum_4);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(ApplBegSeqNum_4.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_4(1469466760);
    noApplIDs_0_2.set(ApplEndSeqNum_4);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(ApplEndSeqNum_4.getString());
    FIX::ApplResponseError ApplResponseError_2(0);
    noApplIDs_0_2.set(ApplResponseError_2);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(ApplResponseError_2.getString());
    FIX::RefApplID RefApplID_6("STRING_1627266589");
    noApplIDs_0_2.set(RefApplID_6);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(RefApplID_6.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_4(2143859601);
    noApplIDs_0_2.set(RefApplLastSeqNum_4);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(RefApplLastSeqNum_4.getString());
    FIX::RefApplReqID RefApplReqID_4("STRING_1897042618");
    noApplIDs_0_2.set(RefApplReqID_4);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(RefApplReqID_4.getString());
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_2);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_29;
      FIX::NestedPartyID NestedPartyID_29("STRING_1603551466");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_29);
      NestedParties_NoNestedPartyIDs_29.insert(NestedPartyID_29.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_29('1');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_29);
      NestedParties_NoNestedPartyIDs_29.insert(NestedPartyIDSource_29.getString());
      FIX::NestedPartyRole NestedPartyRole_29(1535882044);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_29);
      NestedParties_NoNestedPartyIDs_29.insert(NestedPartyRole_29.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_29);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_53;
        FIX::NestedPartySubID NestedPartySubID_53("STRING_1293429361");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_53);
        NstdPtysSubGrp_NoNestedPartySubIDs_53.insert(NestedPartySubID_53.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_53(437489881);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_53);
        NstdPtysSubGrp_NoNestedPartySubIDs_53.insert(NestedPartySubIDType_53.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_53);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_54;
        FIX::NestedPartySubID NestedPartySubID_54("STRING_2113059989");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_54);
        NstdPtysSubGrp_NoNestedPartySubIDs_54.insert(NestedPartySubID_54.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_54(1554643224);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_54);
        NstdPtysSubGrp_NoNestedPartySubIDs_54.insert(NestedPartySubIDType_54.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_54);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_30;
      FIX::NestedPartyID NestedPartyID_30("STRING_680249713");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_30);
      NestedParties_NoNestedPartyIDs_30.insert(NestedPartyID_30.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_30('1');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_30);
      NestedParties_NoNestedPartyIDs_30.insert(NestedPartyIDSource_30.getString());
      FIX::NestedPartyRole NestedPartyRole_30(905948400);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_30);
      NestedParties_NoNestedPartyIDs_30.insert(NestedPartyRole_30.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_30);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_55;
        FIX::NestedPartySubID NestedPartySubID_55("STRING_440440841");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_55);
        NstdPtysSubGrp_NoNestedPartySubIDs_55.insert(NestedPartySubID_55.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_55(1381714990);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_55);
        NstdPtysSubGrp_NoNestedPartySubIDs_55.insert(NestedPartySubIDType_55.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_55);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_31;
      FIX::NestedPartyID NestedPartyID_31("STRING_1097145117");
      noNestedPartyIDs_2_1_2.set(NestedPartyID_31);
      NestedParties_NoNestedPartyIDs_31.insert(NestedPartyID_31.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_31('1');
      noNestedPartyIDs_2_1_2.set(NestedPartyIDSource_31);
      NestedParties_NoNestedPartyIDs_31.insert(NestedPartyIDSource_31.getString());
      FIX::NestedPartyRole NestedPartyRole_31(1882058501);
      noNestedPartyIDs_2_1_2.set(NestedPartyRole_31);
      NestedParties_NoNestedPartyIDs_31.insert(NestedPartyRole_31.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_31);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_56;
        FIX::NestedPartySubID NestedPartySubID_56("STRING_1565393667");
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubID_56);
        NstdPtysSubGrp_NoNestedPartySubIDs_56.insert(NestedPartySubID_56.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_56(1785525219);
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubIDType_56);
        NstdPtysSubGrp_NoNestedPartySubIDs_56.insert(NestedPartySubIDType_56.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_56);

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_57;
        FIX::NestedPartySubID NestedPartySubID_57("STRING_102868828");
        noNestedPartySubIDs_2_2_2_1.set(NestedPartySubID_57);
        NstdPtysSubGrp_NoNestedPartySubIDs_57.insert(NestedPartySubID_57.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_57(784045450);
        noNestedPartySubIDs_2_2_2_1.set(NestedPartySubIDType_57);
        NstdPtysSubGrp_NoNestedPartySubIDs_57.insert(NestedPartySubIDType_57.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_57);

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_1);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    msg.addGroup(noApplIDs_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_19;
    FIX::PartyID PartyID_19("STRING_1034509979");
    noPartyIDs_0_0.set(PartyID_19);
    Parties_NoPartyIDs_19.insert(PartyID_19.getString());
    FIX::PartyIDSource PartyIDSource_19('3');
    noPartyIDs_0_0.set(PartyIDSource_19);
    Parties_NoPartyIDs_19.insert(PartyIDSource_19.getString());
    FIX::PartyRole PartyRole_19(32);
    noPartyIDs_0_0.set(PartyRole_19);
    Parties_NoPartyIDs_19.insert(PartyRole_19.getString());
    all_values.push_back(Parties_NoPartyIDs_19);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_42;
      FIX::PartySubID PartySubID_42("STRING_1738226120");
      noPartySubIDs_0_1_0.set(PartySubID_42);
      PtysSubGrp_NoPartySubIDs_42.insert(PartySubID_42.getString());
      FIX::PartySubIDType PartySubIDType_42(14);
      noPartySubIDs_0_1_0.set(PartySubIDType_42);
      PtysSubGrp_NoPartySubIDs_42.insert(PartySubIDType_42.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_42);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_43;
      FIX::PartySubID PartySubID_43("STRING_1931412935");
      noPartySubIDs_0_1_1.set(PartySubID_43);
      PtysSubGrp_NoPartySubIDs_43.insert(PartySubID_43.getString());
      FIX::PartySubIDType PartySubIDType_43(14);
      noPartySubIDs_0_1_1.set(PartySubIDType_43);
      PtysSubGrp_NoPartySubIDs_43.insert(PartySubIDType_43.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_43);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_20;
    FIX::PartyID PartyID_20("STRING_259485897");
    noPartyIDs_0_1.set(PartyID_20);
    Parties_NoPartyIDs_20.insert(PartyID_20.getString());
    FIX::PartyIDSource PartyIDSource_20('D');
    noPartyIDs_0_1.set(PartyIDSource_20);
    Parties_NoPartyIDs_20.insert(PartyIDSource_20.getString());
    FIX::PartyRole PartyRole_20(16);
    noPartyIDs_0_1.set(PartyRole_20);
    Parties_NoPartyIDs_20.insert(PartyRole_20.getString());
    all_values.push_back(Parties_NoPartyIDs_20);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_44;
      FIX::PartySubID PartySubID_44("STRING_1257488737");
      noPartySubIDs_1_1_0.set(PartySubID_44);
      PtysSubGrp_NoPartySubIDs_44.insert(PartySubID_44.getString());
      FIX::PartySubIDType PartySubIDType_44(21);
      noPartySubIDs_1_1_0.set(PartySubIDType_44);
      PtysSubGrp_NoPartySubIDs_44.insert(PartySubIDType_44.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_44);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_45;
      FIX::PartySubID PartySubID_45("STRING_701318194");
      noPartySubIDs_1_1_1.set(PartySubID_45);
      PtysSubGrp_NoPartySubIDs_45.insert(PartySubID_45.getString());
      FIX::PartySubIDType PartySubIDType_45(33);
      noPartySubIDs_1_1_1.set(PartySubIDType_45);
      PtysSubGrp_NoPartySubIDs_45.insert(PartySubIDType_45.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_45);

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
