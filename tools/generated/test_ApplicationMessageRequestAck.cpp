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
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequestAck_0;
  FIX::ApplReqID ApplReqID_2("STRING_597073729");
  msg.set(ApplReqID_2);
  ApplicationMessageRequestAck_0.insert(ApplReqID_2.getString());
  FIX::ApplReqType ApplReqType_1(3);
  msg.set(ApplReqType_1);
  ApplicationMessageRequestAck_0.insert(ApplReqType_1.getString());
  FIX::ApplResponseID ApplResponseID_0("STRING_8974824");
  msg.set(ApplResponseID_0);
  ApplicationMessageRequestAck_0.insert(ApplResponseID_0.getString());
  FIX::ApplResponseType ApplResponseType_0(1);
  msg.set(ApplResponseType_0);
  ApplicationMessageRequestAck_0.insert(ApplResponseType_0.getString());
  FIX::ApplTotalMessageCount ApplTotalMessageCount_0(834435944);
  msg.set(ApplTotalMessageCount_0);
  ApplicationMessageRequestAck_0.insert(ApplTotalMessageCount_0.getString());
  FIX::EncodedText EncodedText_8("DATA_453641346");
  msg.set(EncodedText_8);
  ApplicationMessageRequestAck_0.insert(EncodedText_8.getString());
  FIX::EncodedTextLen EncodedTextLen_8(1771512005);
  msg.set(EncodedTextLen_8);
  ApplicationMessageRequestAck_0.insert(EncodedTextLen_8.getString());
  FIX::Text Text_8("STRING_258119896");
  msg.set(Text_8);
  ApplicationMessageRequestAck_0.insert(Text_8.getString());
  all_values.push_back(ApplicationMessageRequestAck_0);

  all_compo_names.insert("ApplicationMessageRequestAck");

  // ApplIDRequestAckGrp
  // Group ApplIDRequestAckGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_0;
    FIX::ApplBegSeqNum ApplBegSeqNum_1(2006601406);
    noApplIDs_0_0.set(ApplBegSeqNum_1);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplBegSeqNum_1.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_1(1359441321);
    noApplIDs_0_0.set(ApplEndSeqNum_1);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplEndSeqNum_1.getString());
    FIX::ApplResponseError ApplResponseError_0(0);
    noApplIDs_0_0.set(ApplResponseError_0);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(ApplResponseError_0.getString());
    FIX::RefApplID RefApplID_4("STRING_1898085959");
    noApplIDs_0_0.set(RefApplID_4);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplID_4.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_3(2097527352);
    noApplIDs_0_0.set(RefApplLastSeqNum_3);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplLastSeqNum_3.getString());
    FIX::RefApplReqID RefApplReqID_1("STRING_380795790");
    noApplIDs_0_0.set(RefApplReqID_1);
    ApplIDRequestAckGrp_NoApplIDs_0.insert(RefApplReqID_1.getString());
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_0);
    all_compo_names.insert("ApplIDRequestAckGrp.NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_19;
      FIX::NestedPartyID NestedPartyID_19("STRING_1972807881");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyID_19.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_19('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyIDSource_19.getString());
      FIX::NestedPartyRole NestedPartyRole_19(928790825);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyRole_19.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_19);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_36;
        FIX::NestedPartySubID NestedPartySubID_36("STRING_1339247445");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_36);
        NstdPtysSubGrp_NoNestedPartySubIDs_36.insert(NestedPartySubID_36.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_36(1893955172);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_36);
        NstdPtysSubGrp_NoNestedPartySubIDs_36.insert(NestedPartySubIDType_36.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_36);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_37;
        FIX::NestedPartySubID NestedPartySubID_37("STRING_1492091530");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_37);
        NstdPtysSubGrp_NoNestedPartySubIDs_37.insert(NestedPartySubID_37.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_37(860398119);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_37);
        NstdPtysSubGrp_NoNestedPartySubIDs_37.insert(NestedPartySubIDType_37.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_37);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_20;
      FIX::NestedPartyID NestedPartyID_20("STRING_2141749647");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyID_20.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_20('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyIDSource_20.getString());
      FIX::NestedPartyRole NestedPartyRole_20(657340668);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyRole_20.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_20);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_38;
        FIX::NestedPartySubID NestedPartySubID_38("STRING_109552514");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_38);
        NstdPtysSubGrp_NoNestedPartySubIDs_38.insert(NestedPartySubID_38.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_38(1984292794);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_38);
        NstdPtysSubGrp_NoNestedPartySubIDs_38.insert(NestedPartySubIDType_38.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_38);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_39;
        FIX::NestedPartySubID NestedPartySubID_39("STRING_1481757380");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_39);
        NstdPtysSubGrp_NoNestedPartySubIDs_39.insert(NestedPartySubID_39.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_39(706626243);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_39);
        NstdPtysSubGrp_NoNestedPartySubIDs_39.insert(NestedPartySubIDType_39.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_39);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_40;
        FIX::NestedPartySubID NestedPartySubID_40("STRING_876777428");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_40);
        NstdPtysSubGrp_NoNestedPartySubIDs_40.insert(NestedPartySubID_40.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_40(1490732204);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_40);
        NstdPtysSubGrp_NoNestedPartySubIDs_40.insert(NestedPartySubIDType_40.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_40);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

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
    FIX::ApplBegSeqNum ApplBegSeqNum_2(505998986);
    noApplIDs_0_1.set(ApplBegSeqNum_2);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplBegSeqNum_2.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_2(1711213372);
    noApplIDs_0_1.set(ApplEndSeqNum_2);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplEndSeqNum_2.getString());
    FIX::ApplResponseError ApplResponseError_1(2);
    noApplIDs_0_1.set(ApplResponseError_1);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(ApplResponseError_1.getString());
    FIX::RefApplID RefApplID_5("STRING_130027344");
    noApplIDs_0_1.set(RefApplID_5);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplID_5.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_4(1969333268);
    noApplIDs_0_1.set(RefApplLastSeqNum_4);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplLastSeqNum_4.getString());
    FIX::RefApplReqID RefApplReqID_2("STRING_728768328");
    noApplIDs_0_1.set(RefApplReqID_2);
    ApplIDRequestAckGrp_NoApplIDs_1.insert(RefApplReqID_2.getString());
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_1);
    all_compo_names.insert("ApplIDRequestAckGrp.NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_21;
      FIX::NestedPartyID NestedPartyID_21("STRING_1181290941");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyID_21.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_21('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyIDSource_21.getString());
      FIX::NestedPartyRole NestedPartyRole_21(1887231061);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyRole_21.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_21);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_41;
        FIX::NestedPartySubID NestedPartySubID_41("STRING_1828731315");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_41);
        NstdPtysSubGrp_NoNestedPartySubIDs_41.insert(NestedPartySubID_41.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_41(763620033);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_41);
        NstdPtysSubGrp_NoNestedPartySubIDs_41.insert(NestedPartySubIDType_41.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_41);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_42;
        FIX::NestedPartySubID NestedPartySubID_42("STRING_956658879");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_42);
        NstdPtysSubGrp_NoNestedPartySubIDs_42.insert(NestedPartySubID_42.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_42(1653945429);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_42);
        NstdPtysSubGrp_NoNestedPartySubIDs_42.insert(NestedPartySubIDType_42.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_42);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_43;
        FIX::NestedPartySubID NestedPartySubID_43("STRING_1692410858");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_43);
        NstdPtysSubGrp_NoNestedPartySubIDs_43.insert(NestedPartySubID_43.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_43(702712310);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_43);
        NstdPtysSubGrp_NoNestedPartySubIDs_43.insert(NestedPartySubIDType_43.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_43);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_22;
      FIX::NestedPartyID NestedPartyID_22("STRING_845709226");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyID_22.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_22('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyIDSource_22.getString());
      FIX::NestedPartyRole NestedPartyRole_22(47320192);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyRole_22.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_22);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_44;
        FIX::NestedPartySubID NestedPartySubID_44("STRING_1433148382");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_44);
        NstdPtysSubGrp_NoNestedPartySubIDs_44.insert(NestedPartySubID_44.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_44(1631328461);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_44);
        NstdPtysSubGrp_NoNestedPartySubIDs_44.insert(NestedPartySubIDType_44.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_44);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_45;
        FIX::NestedPartySubID NestedPartySubID_45("STRING_215964365");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_45);
        NstdPtysSubGrp_NoNestedPartySubIDs_45.insert(NestedPartySubID_45.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_45(1393047178);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_45);
        NstdPtysSubGrp_NoNestedPartySubIDs_45.insert(NestedPartySubIDType_45.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_45);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noApplIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoApplIDs noApplIDs_0_2;
    // ApplIDRequestAckGrp.NoApplIDs
    multiset<string> ApplIDRequestAckGrp_NoApplIDs_2;
    FIX::ApplBegSeqNum ApplBegSeqNum_3(1740880975);
    noApplIDs_0_2.set(ApplBegSeqNum_3);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(ApplBegSeqNum_3.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_3(52773511);
    noApplIDs_0_2.set(ApplEndSeqNum_3);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(ApplEndSeqNum_3.getString());
    FIX::ApplResponseError ApplResponseError_2(2);
    noApplIDs_0_2.set(ApplResponseError_2);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(ApplResponseError_2.getString());
    FIX::RefApplID RefApplID_6("STRING_300023570");
    noApplIDs_0_2.set(RefApplID_6);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(RefApplID_6.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_5(929550940);
    noApplIDs_0_2.set(RefApplLastSeqNum_5);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(RefApplLastSeqNum_5.getString());
    FIX::RefApplReqID RefApplReqID_3("STRING_70569467");
    noApplIDs_0_2.set(RefApplReqID_3);
    ApplIDRequestAckGrp_NoApplIDs_2.insert(RefApplReqID_3.getString());
    all_values.push_back(ApplIDRequestAckGrp_NoApplIDs_2);
    all_compo_names.insert("ApplIDRequestAckGrp.NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_23;
      FIX::NestedPartyID NestedPartyID_23("STRING_493280664");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyID_23.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_23('2');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyIDSource_23.getString());
      FIX::NestedPartyRole NestedPartyRole_23(936049901);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyRole_23.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_23);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_46;
        FIX::NestedPartySubID NestedPartySubID_46("STRING_596227698");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_46);
        NstdPtysSubGrp_NoNestedPartySubIDs_46.insert(NestedPartySubID_46.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_46(925195003);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_46);
        NstdPtysSubGrp_NoNestedPartySubIDs_46.insert(NestedPartySubIDType_46.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_46);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_47;
        FIX::NestedPartySubID NestedPartySubID_47("STRING_1496421226");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_47);
        NstdPtysSubGrp_NoNestedPartySubIDs_47.insert(NestedPartySubID_47.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_47(2044163223);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_47);
        NstdPtysSubGrp_NoNestedPartySubIDs_47.insert(NestedPartySubIDType_47.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_47);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_24;
      FIX::NestedPartyID NestedPartyID_24("STRING_664942417");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyID_24.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_24('4');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyIDSource_24.getString());
      FIX::NestedPartyRole NestedPartyRole_24(1725410890);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyRole_24.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_24);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_48;
        FIX::NestedPartySubID NestedPartySubID_48("STRING_1436931103");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_48);
        NstdPtysSubGrp_NoNestedPartySubIDs_48.insert(NestedPartySubID_48.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_48(1231872672);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_48);
        NstdPtysSubGrp_NoNestedPartySubIDs_48.insert(NestedPartySubIDType_48.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_48);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_49;
        FIX::NestedPartySubID NestedPartySubID_49("STRING_973489661");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_49);
        NstdPtysSubGrp_NoNestedPartySubIDs_49.insert(NestedPartySubID_49.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_49(2139643414);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_49);
        NstdPtysSubGrp_NoNestedPartySubIDs_49.insert(NestedPartySubIDType_49.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_49);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_25;
      FIX::NestedPartyID NestedPartyID_25("STRING_2077581898");
      noNestedPartyIDs_2_1_2.set(NestedPartyID_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyID_25.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_25('2');
      noNestedPartyIDs_2_1_2.set(NestedPartyIDSource_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyIDSource_25.getString());
      FIX::NestedPartyRole NestedPartyRole_25(39479958);
      noNestedPartyIDs_2_1_2.set(NestedPartyRole_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyRole_25.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_25);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_50;
        FIX::NestedPartySubID NestedPartySubID_50("STRING_1698036778");
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubID_50);
        NstdPtysSubGrp_NoNestedPartySubIDs_50.insert(NestedPartySubID_50.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_50(1670808419);
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubIDType_50);
        NstdPtysSubGrp_NoNestedPartySubIDs_50.insert(NestedPartySubIDType_50.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_50);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequestAck::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_51;
        FIX::NestedPartySubID NestedPartySubID_51("STRING_1852169961");
        noNestedPartySubIDs_2_2_2_1.set(NestedPartySubID_51);
        NstdPtysSubGrp_NoNestedPartySubIDs_51.insert(NestedPartySubID_51.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_51(943600308);
        noNestedPartySubIDs_2_2_2_1.set(NestedPartySubIDType_51);
        NstdPtysSubGrp_NoNestedPartySubIDs_51.insert(NestedPartySubIDType_51.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_51);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

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
    multiset<string> Parties_NoPartyIDs_14;
    FIX::PartyID PartyID_14("STRING_1904943473");
    noPartyIDs_0_0.set(PartyID_14);
    Parties_NoPartyIDs_14.insert(PartyID_14.getString());
    FIX::PartyIDSource PartyIDSource_14('B');
    noPartyIDs_0_0.set(PartyIDSource_14);
    Parties_NoPartyIDs_14.insert(PartyIDSource_14.getString());
    FIX::PartyRole PartyRole_14(51);
    noPartyIDs_0_0.set(PartyRole_14);
    Parties_NoPartyIDs_14.insert(PartyRole_14.getString());
    all_values.push_back(Parties_NoPartyIDs_14);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_32;
      FIX::PartySubID PartySubID_32("STRING_1741490687");
      noPartySubIDs_0_1_0.set(PartySubID_32);
      PtysSubGrp_NoPartySubIDs_32.insert(PartySubID_32.getString());
      FIX::PartySubIDType PartySubIDType_32(11);
      noPartySubIDs_0_1_0.set(PartySubIDType_32);
      PtysSubGrp_NoPartySubIDs_32.insert(PartySubIDType_32.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_32);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_33;
      FIX::PartySubID PartySubID_33("STRING_1180291429");
      noPartySubIDs_0_1_1.set(PartySubID_33);
      PtysSubGrp_NoPartySubIDs_33.insert(PartySubID_33.getString());
      FIX::PartySubIDType PartySubIDType_33(12);
      noPartySubIDs_0_1_1.set(PartySubIDType_33);
      PtysSubGrp_NoPartySubIDs_33.insert(PartySubIDType_33.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_33);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_15;
    FIX::PartyID PartyID_15("STRING_1158818127");
    noPartyIDs_0_1.set(PartyID_15);
    Parties_NoPartyIDs_15.insert(PartyID_15.getString());
    FIX::PartyIDSource PartyIDSource_15('8');
    noPartyIDs_0_1.set(PartyIDSource_15);
    Parties_NoPartyIDs_15.insert(PartyIDSource_15.getString());
    FIX::PartyRole PartyRole_15(53);
    noPartyIDs_0_1.set(PartyRole_15);
    Parties_NoPartyIDs_15.insert(PartyRole_15.getString());
    all_values.push_back(Parties_NoPartyIDs_15);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_34;
      FIX::PartySubID PartySubID_34("STRING_844359293");
      noPartySubIDs_1_1_0.set(PartySubID_34);
      PtysSubGrp_NoPartySubIDs_34.insert(PartySubID_34.getString());
      FIX::PartySubIDType PartySubIDType_34(13);
      noPartySubIDs_1_1_0.set(PartySubIDType_34);
      PtysSubGrp_NoPartySubIDs_34.insert(PartySubIDType_34.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_34);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequestAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_35;
      FIX::PartySubID PartySubID_35("STRING_601471899");
      noPartySubIDs_1_1_1.set(PartySubID_35);
      PtysSubGrp_NoPartySubIDs_35.insert(PartySubID_35.getString());
      FIX::PartySubIDType PartySubIDType_35(1);
      noPartySubIDs_1_1_1.set(PartySubIDType_35);
      PtysSubGrp_NoPartySubIDs_35.insert(PartySubIDType_35.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_35);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

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
