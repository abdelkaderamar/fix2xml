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
  multiset<string> ApplicationMessageRequest_0;
  FIX::ApplReqID ApplReqID_1("STRING_2122616596");
  msg.set(ApplReqID_1);
  ApplicationMessageRequest_0.insert(ApplReqID_1.getString());
  FIX::ApplReqType ApplReqType_0(0);
  msg.set(ApplReqType_0);
  ApplicationMessageRequest_0.insert(ApplReqType_0.getString());
  FIX::EncodedText EncodedText_7("DATA_556016081");
  msg.set(EncodedText_7);
  ApplicationMessageRequest_0.insert(EncodedText_7.getString());
  FIX::EncodedTextLen EncodedTextLen_7(807648476);
  msg.set(EncodedTextLen_7);
  ApplicationMessageRequest_0.insert(EncodedTextLen_7.getString());
  FIX::Text Text_7("STRING_1383548730");
  msg.set(Text_7);
  ApplicationMessageRequest_0.insert(Text_7.getString());
  all_values.push_back(ApplicationMessageRequest_0);

  // ApplIDRequestGrp
  // Group ApplIDRequestGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_0;
    FIX::ApplBegSeqNum ApplBegSeqNum_0(78074507);
    noApplIDs_0_0.set(ApplBegSeqNum_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(ApplBegSeqNum_0.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_0(41285915);
    noApplIDs_0_0.set(ApplEndSeqNum_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(ApplEndSeqNum_0.getString());
    FIX::RefApplID RefApplID_1("STRING_1290241322");
    noApplIDs_0_0.set(RefApplID_1);
    ApplIDRequestGrp_NoApplIDs_0.insert(RefApplID_1.getString());
    FIX::RefApplReqID RefApplReqID_0("STRING_945486682");
    noApplIDs_0_0.set(RefApplReqID_0);
    ApplIDRequestGrp_NoApplIDs_0.insert(RefApplReqID_0.getString());
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_23;
      FIX::NestedPartyID NestedPartyID_23("STRING_1535393351");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyID_23.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_23('6');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyIDSource_23.getString());
      FIX::NestedPartyRole NestedPartyRole_23(559356148);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_23);
      NestedParties_NoNestedPartyIDs_23.insert(NestedPartyRole_23.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_23);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_43;
        FIX::NestedPartySubID NestedPartySubID_43("STRING_320192038");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_43);
        NstdPtysSubGrp_NoNestedPartySubIDs_43.insert(NestedPartySubID_43.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_43(1735052492);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_43);
        NstdPtysSubGrp_NoNestedPartySubIDs_43.insert(NestedPartySubIDType_43.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_43);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_44;
        FIX::NestedPartySubID NestedPartySubID_44("STRING_1806862502");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_44);
        NstdPtysSubGrp_NoNestedPartySubIDs_44.insert(NestedPartySubID_44.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_44(523048640);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_44);
        NstdPtysSubGrp_NoNestedPartySubIDs_44.insert(NestedPartySubIDType_44.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_44);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_45;
        FIX::NestedPartySubID NestedPartySubID_45("STRING_625325214");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_45);
        NstdPtysSubGrp_NoNestedPartySubIDs_45.insert(NestedPartySubID_45.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_45(1834036972);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_45);
        NstdPtysSubGrp_NoNestedPartySubIDs_45.insert(NestedPartySubIDType_45.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_45);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_24;
      FIX::NestedPartyID NestedPartyID_24("STRING_1265946124");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyID_24.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_24('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyIDSource_24.getString());
      FIX::NestedPartyRole NestedPartyRole_24(771487234);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_24);
      NestedParties_NoNestedPartyIDs_24.insert(NestedPartyRole_24.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_24);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_46;
        FIX::NestedPartySubID NestedPartySubID_46("STRING_1385832171");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_46);
        NstdPtysSubGrp_NoNestedPartySubIDs_46.insert(NestedPartySubID_46.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_46(648932284);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_46);
        NstdPtysSubGrp_NoNestedPartySubIDs_46.insert(NestedPartySubIDType_46.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_46);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_47;
        FIX::NestedPartySubID NestedPartySubID_47("STRING_1757861035");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_47);
        NstdPtysSubGrp_NoNestedPartySubIDs_47.insert(NestedPartySubID_47.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_47(1132783681);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_47);
        NstdPtysSubGrp_NoNestedPartySubIDs_47.insert(NestedPartySubIDType_47.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_47);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noApplIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_1;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_1;
    FIX::ApplBegSeqNum ApplBegSeqNum_1(1029698284);
    noApplIDs_0_1.set(ApplBegSeqNum_1);
    ApplIDRequestGrp_NoApplIDs_1.insert(ApplBegSeqNum_1.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_1(1546177447);
    noApplIDs_0_1.set(ApplEndSeqNum_1);
    ApplIDRequestGrp_NoApplIDs_1.insert(ApplEndSeqNum_1.getString());
    FIX::RefApplID RefApplID_2("STRING_1107916629");
    noApplIDs_0_1.set(RefApplID_2);
    ApplIDRequestGrp_NoApplIDs_1.insert(RefApplID_2.getString());
    FIX::RefApplReqID RefApplReqID_1("STRING_952448809");
    noApplIDs_0_1.set(RefApplReqID_1);
    ApplIDRequestGrp_NoApplIDs_1.insert(RefApplReqID_1.getString());
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_25;
      FIX::NestedPartyID NestedPartyID_25("STRING_1915565106");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyID_25.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_25('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyIDSource_25.getString());
      FIX::NestedPartyRole NestedPartyRole_25(725084080);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_25);
      NestedParties_NoNestedPartyIDs_25.insert(NestedPartyRole_25.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_25);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_48;
        FIX::NestedPartySubID NestedPartySubID_48("STRING_229799807");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_48);
        NstdPtysSubGrp_NoNestedPartySubIDs_48.insert(NestedPartySubID_48.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_48(2015325402);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_48);
        NstdPtysSubGrp_NoNestedPartySubIDs_48.insert(NestedPartySubIDType_48.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_48);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_49;
        FIX::NestedPartySubID NestedPartySubID_49("STRING_791642647");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_49);
        NstdPtysSubGrp_NoNestedPartySubIDs_49.insert(NestedPartySubID_49.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_49(942397929);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_49);
        NstdPtysSubGrp_NoNestedPartySubIDs_49.insert(NestedPartySubIDType_49.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_49);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_50;
        FIX::NestedPartySubID NestedPartySubID_50("STRING_1403235105");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_50);
        NstdPtysSubGrp_NoNestedPartySubIDs_50.insert(NestedPartySubID_50.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_50(1449529404);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_50);
        NstdPtysSubGrp_NoNestedPartySubIDs_50.insert(NestedPartySubIDType_50.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_50);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_26;
      FIX::NestedPartyID NestedPartyID_26("STRING_1501754077");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyID_26.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_26('4');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyIDSource_26.getString());
      FIX::NestedPartyRole NestedPartyRole_26(1769721442);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_26);
      NestedParties_NoNestedPartyIDs_26.insert(NestedPartyRole_26.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_26);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_51;
        FIX::NestedPartySubID NestedPartySubID_51("STRING_75668253");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_51);
        NstdPtysSubGrp_NoNestedPartySubIDs_51.insert(NestedPartySubID_51.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_51(145286435);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_51);
        NstdPtysSubGrp_NoNestedPartySubIDs_51.insert(NestedPartySubIDType_51.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_51);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_52;
        FIX::NestedPartySubID NestedPartySubID_52("STRING_1714648136");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_52);
        NstdPtysSubGrp_NoNestedPartySubIDs_52.insert(NestedPartySubID_52.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_52(1909705225);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_52);
        NstdPtysSubGrp_NoNestedPartySubIDs_52.insert(NestedPartySubIDType_52.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_52);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_53;
        FIX::NestedPartySubID NestedPartySubID_53("STRING_1411232559");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_53);
        NstdPtysSubGrp_NoNestedPartySubIDs_53.insert(NestedPartySubID_53.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_53(1822912654);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_53);
        NstdPtysSubGrp_NoNestedPartySubIDs_53.insert(NestedPartySubIDType_53.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_53);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noApplIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_2;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_2;
    FIX::ApplBegSeqNum ApplBegSeqNum_2(533708811);
    noApplIDs_0_2.set(ApplBegSeqNum_2);
    ApplIDRequestGrp_NoApplIDs_2.insert(ApplBegSeqNum_2.getString());
    FIX::ApplEndSeqNum ApplEndSeqNum_2(748004150);
    noApplIDs_0_2.set(ApplEndSeqNum_2);
    ApplIDRequestGrp_NoApplIDs_2.insert(ApplEndSeqNum_2.getString());
    FIX::RefApplID RefApplID_3("STRING_1061261177");
    noApplIDs_0_2.set(RefApplID_3);
    ApplIDRequestGrp_NoApplIDs_2.insert(RefApplID_3.getString());
    FIX::RefApplReqID RefApplReqID_2("STRING_1182641095");
    noApplIDs_0_2.set(RefApplReqID_2);
    ApplIDRequestGrp_NoApplIDs_2.insert(RefApplReqID_2.getString());
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_2);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_27;
      FIX::NestedPartyID NestedPartyID_27("STRING_46561210");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyID_27.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_27('6');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyIDSource_27.getString());
      FIX::NestedPartyRole NestedPartyRole_27(1904558984);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_27);
      NestedParties_NoNestedPartyIDs_27.insert(NestedPartyRole_27.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_27);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_54;
        FIX::NestedPartySubID NestedPartySubID_54("STRING_1017304540");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_54);
        NstdPtysSubGrp_NoNestedPartySubIDs_54.insert(NestedPartySubID_54.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_54(1859268865);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_54);
        NstdPtysSubGrp_NoNestedPartySubIDs_54.insert(NestedPartySubIDType_54.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_54);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_55;
        FIX::NestedPartySubID NestedPartySubID_55("STRING_922559298");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_55);
        NstdPtysSubGrp_NoNestedPartySubIDs_55.insert(NestedPartySubID_55.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_55(1205818432);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_55);
        NstdPtysSubGrp_NoNestedPartySubIDs_55.insert(NestedPartySubIDType_55.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_55);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_56;
        FIX::NestedPartySubID NestedPartySubID_56("STRING_436869298");
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubID_56);
        NstdPtysSubGrp_NoNestedPartySubIDs_56.insert(NestedPartySubID_56.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_56(768715263);
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubIDType_56);
        NstdPtysSubGrp_NoNestedPartySubIDs_56.insert(NestedPartySubIDType_56.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_56);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_2);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_28;
      FIX::NestedPartyID NestedPartyID_28("STRING_1435618239");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_28);
      NestedParties_NoNestedPartyIDs_28.insert(NestedPartyID_28.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_28('3');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_28);
      NestedParties_NoNestedPartyIDs_28.insert(NestedPartyIDSource_28.getString());
      FIX::NestedPartyRole NestedPartyRole_28(1560357910);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_28);
      NestedParties_NoNestedPartyIDs_28.insert(NestedPartyRole_28.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_28);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_57;
        FIX::NestedPartySubID NestedPartySubID_57("STRING_1707946158");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_57);
        NstdPtysSubGrp_NoNestedPartySubIDs_57.insert(NestedPartySubID_57.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_57(862403666);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_57);
        NstdPtysSubGrp_NoNestedPartySubIDs_57.insert(NestedPartySubIDType_57.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_57);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_58;
        FIX::NestedPartySubID NestedPartySubID_58("STRING_1732286598");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_58);
        NstdPtysSubGrp_NoNestedPartySubIDs_58.insert(NestedPartySubID_58.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_58(2124235557);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_58);
        NstdPtysSubGrp_NoNestedPartySubIDs_58.insert(NestedPartySubIDType_58.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_58);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noApplIDs_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_11;
    FIX::PartyID PartyID_11("STRING_674125872");
    noPartyIDs_0_0.set(PartyID_11);
    Parties_NoPartyIDs_11.insert(PartyID_11.getString());
    FIX::PartyIDSource PartyIDSource_11('1');
    noPartyIDs_0_0.set(PartyIDSource_11);
    Parties_NoPartyIDs_11.insert(PartyIDSource_11.getString());
    FIX::PartyRole PartyRole_11(54);
    noPartyIDs_0_0.set(PartyRole_11);
    Parties_NoPartyIDs_11.insert(PartyRole_11.getString());
    all_values.push_back(Parties_NoPartyIDs_11);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_24;
      FIX::PartySubID PartySubID_24("STRING_1962125388");
      noPartySubIDs_0_1_0.set(PartySubID_24);
      PtysSubGrp_NoPartySubIDs_24.insert(PartySubID_24.getString());
      FIX::PartySubIDType PartySubIDType_24(5);
      noPartySubIDs_0_1_0.set(PartySubIDType_24);
      PtysSubGrp_NoPartySubIDs_24.insert(PartySubIDType_24.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_24);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_12;
    FIX::PartyID PartyID_12("STRING_2064203014");
    noPartyIDs_0_1.set(PartyID_12);
    Parties_NoPartyIDs_12.insert(PartyID_12.getString());
    FIX::PartyIDSource PartyIDSource_12('4');
    noPartyIDs_0_1.set(PartyIDSource_12);
    Parties_NoPartyIDs_12.insert(PartyIDSource_12.getString());
    FIX::PartyRole PartyRole_12(2);
    noPartyIDs_0_1.set(PartyRole_12);
    Parties_NoPartyIDs_12.insert(PartyRole_12.getString());
    all_values.push_back(Parties_NoPartyIDs_12);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_25;
      FIX::PartySubID PartySubID_25("STRING_1530991647");
      noPartySubIDs_1_1_0.set(PartySubID_25);
      PtysSubGrp_NoPartySubIDs_25.insert(PartySubID_25.getString());
      FIX::PartySubIDType PartySubIDType_25(3);
      noPartySubIDs_1_1_0.set(PartySubIDType_25);
      PtysSubGrp_NoPartySubIDs_25.insert(PartySubIDType_25.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_25);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_26;
      FIX::PartySubID PartySubID_26("STRING_1024541753");
      noPartySubIDs_1_1_1.set(PartySubID_26);
      PtysSubGrp_NoPartySubIDs_26.insert(PartySubID_26.getString());
      FIX::PartySubIDType PartySubIDType_26(17);
      noPartySubIDs_1_1_1.set(PartySubIDType_26);
      PtysSubGrp_NoPartySubIDs_26.insert(PartySubIDType_26.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_26);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_13;
    FIX::PartyID PartyID_13("STRING_757137830");
    noPartyIDs_0_2.set(PartyID_13);
    Parties_NoPartyIDs_13.insert(PartyID_13.getString());
    FIX::PartyIDSource PartyIDSource_13('H');
    noPartyIDs_0_2.set(PartyIDSource_13);
    Parties_NoPartyIDs_13.insert(PartyIDSource_13.getString());
    FIX::PartyRole PartyRole_13(77);
    noPartyIDs_0_2.set(PartyRole_13);
    Parties_NoPartyIDs_13.insert(PartyRole_13.getString());
    all_values.push_back(Parties_NoPartyIDs_13);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_27;
      FIX::PartySubID PartySubID_27("STRING_954095243");
      noPartySubIDs_2_1_0.set(PartySubID_27);
      PtysSubGrp_NoPartySubIDs_27.insert(PartySubID_27.getString());
      FIX::PartySubIDType PartySubIDType_27(8);
      noPartySubIDs_2_1_0.set(PartySubIDType_27);
      PtysSubGrp_NoPartySubIDs_27.insert(PartySubIDType_27.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_27);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_28;
      FIX::PartySubID PartySubID_28("STRING_905792346");
      noPartySubIDs_2_1_1.set(PartySubID_28);
      PtysSubGrp_NoPartySubIDs_28.insert(PartySubID_28.getString());
      FIX::PartySubIDType PartySubIDType_28(33);
      noPartySubIDs_2_1_1.set(PartySubIDType_28);
      PtysSubGrp_NoPartySubIDs_28.insert(PartySubIDType_28.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_28);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_29;
      FIX::PartySubID PartySubID_29("STRING_959621294");
      noPartySubIDs_2_1_2.set(PartySubID_29);
      PtysSubGrp_NoPartySubIDs_29.insert(PartySubID_29.getString());
      FIX::PartySubIDType PartySubIDType_29(6);
      noPartySubIDs_2_1_2.set(PartySubIDType_29);
      PtysSubGrp_NoPartySubIDs_29.insert(PartySubIDType_29.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_29);

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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
