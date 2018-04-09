#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ApplicationMessageRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequest_0;
  set_field(msg, FIX::ApplReqID{"STRING_240611213"}, ApplicationMessageRequest_0);
  set_field(msg, FIX::ApplReqType{1}, ApplicationMessageRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_730359957"}, ApplicationMessageRequest_0);
  set_field(msg, FIX::EncodedTextLen{152739446}, ApplicationMessageRequest_0);
  set_field(msg, FIX::Text{"STRING_1715580302"}, ApplicationMessageRequest_0);
  all_values.push_back(ApplicationMessageRequest_0);

  all_compo_names.insert("ApplicationMessageRequest");

  // ApplIDRequestGrp
  // Group ApplIDRequestGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_0;
    set_field(noApplIDs_0_0, FIX::ApplBegSeqNum{1786151681}, ApplIDRequestGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::ApplEndSeqNum{1378085630}, ApplIDRequestGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplID{"STRING_1460035383"}, ApplIDRequestGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplReqID{"STRING_237934720"}, ApplIDRequestGrp_NoApplIDs_0);
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_0);
    all_compo_names.insert("...NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_30;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_73074856"}, NestedParties_NoNestedPartyIDs_30);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_30);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{184285139}, NestedParties_NoNestedPartyIDs_30);
      all_values.push_back(NestedParties_NoNestedPartyIDs_30);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_64;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_653988395"}, NstdPtysSubGrp_NoNestedPartySubIDs_64);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{573676957}, NstdPtysSubGrp_NoNestedPartySubIDs_64);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_64);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_65;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_3208629"}, NstdPtysSubGrp_NoNestedPartySubIDs_65);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1470771779}, NstdPtysSubGrp_NoNestedPartySubIDs_65);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_65);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_66;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_563162833"}, NstdPtysSubGrp_NoNestedPartySubIDs_66);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{1298315745}, NstdPtysSubGrp_NoNestedPartySubIDs_66);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_66);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_31;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1512257243"}, NestedParties_NoNestedPartyIDs_31);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_31);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{569203284}, NestedParties_NoNestedPartyIDs_31);
      all_values.push_back(NestedParties_NoNestedPartyIDs_31);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_67;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_509522041"}, NstdPtysSubGrp_NoNestedPartySubIDs_67);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1631201084}, NstdPtysSubGrp_NoNestedPartySubIDs_67);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_67);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_68;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_315657987"}, NstdPtysSubGrp_NoNestedPartySubIDs_68);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{2087948943}, NstdPtysSubGrp_NoNestedPartySubIDs_68);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_68);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_69;
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubID{"STRING_594580418"}, NstdPtysSubGrp_NoNestedPartySubIDs_69);
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubIDType{1216817730}, NstdPtysSubGrp_NoNestedPartySubIDs_69);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_69);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_32;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_181076508"}, NestedParties_NoNestedPartyIDs_32);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_32);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{1947177687}, NestedParties_NoNestedPartyIDs_32);
      all_values.push_back(NestedParties_NoNestedPartyIDs_32);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_70;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_447476386"}, NstdPtysSubGrp_NoNestedPartySubIDs_70);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{247248600}, NstdPtysSubGrp_NoNestedPartySubIDs_70);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_70);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_71;
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubID{"STRING_2119967635"}, NstdPtysSubGrp_NoNestedPartySubIDs_71);
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubIDType{1825562016}, NstdPtysSubGrp_NoNestedPartySubIDs_71);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_71);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_72;
        set_field(noNestedPartySubIDs_0_2_2_2, FIX::NestedPartySubID{"STRING_1707283983"}, NstdPtysSubGrp_NoNestedPartySubIDs_72);
        set_field(noNestedPartySubIDs_0_2_2_2, FIX::NestedPartySubIDType{210418707}, NstdPtysSubGrp_NoNestedPartySubIDs_72);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_72);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noApplIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_1;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_1;
    set_field(noApplIDs_0_1, FIX::ApplBegSeqNum{1373187205}, ApplIDRequestGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::ApplEndSeqNum{1780358839}, ApplIDRequestGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplID{"STRING_439180720"}, ApplIDRequestGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplReqID{"STRING_1557472344"}, ApplIDRequestGrp_NoApplIDs_1);
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_1);
    all_compo_names.insert("...NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_33;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1093169115"}, NestedParties_NoNestedPartyIDs_33);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_33);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{180937673}, NestedParties_NoNestedPartyIDs_33);
      all_values.push_back(NestedParties_NoNestedPartyIDs_33);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_73;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_546828486"}, NstdPtysSubGrp_NoNestedPartySubIDs_73);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1479253418}, NstdPtysSubGrp_NoNestedPartySubIDs_73);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_73);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_74;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1928714490"}, NstdPtysSubGrp_NoNestedPartySubIDs_74);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{782196851}, NstdPtysSubGrp_NoNestedPartySubIDs_74);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_74);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_34;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_2048456702"}, NestedParties_NoNestedPartyIDs_34);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_34);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{1291718893}, NestedParties_NoNestedPartyIDs_34);
      all_values.push_back(NestedParties_NoNestedPartyIDs_34);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_75;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_98021392"}, NstdPtysSubGrp_NoNestedPartySubIDs_75);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{1232184188}, NstdPtysSubGrp_NoNestedPartySubIDs_75);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_75);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noApplIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_2;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_2;
    set_field(noApplIDs_0_2, FIX::ApplBegSeqNum{2126754557}, ApplIDRequestGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::ApplEndSeqNum{1314839122}, ApplIDRequestGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::RefApplID{"STRING_1413260697"}, ApplIDRequestGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::RefApplReqID{"STRING_858650640"}, ApplIDRequestGrp_NoApplIDs_2);
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_2);
    all_compo_names.insert("...NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_35;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_1747076651"}, NestedParties_NoNestedPartyIDs_35);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_35);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{1361781762}, NestedParties_NoNestedPartyIDs_35);
      all_values.push_back(NestedParties_NoNestedPartyIDs_35);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_76;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_984205395"}, NstdPtysSubGrp_NoNestedPartySubIDs_76);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{921582098}, NstdPtysSubGrp_NoNestedPartySubIDs_76);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_76);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_77;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_1929979346"}, NstdPtysSubGrp_NoNestedPartySubIDs_77);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{209908952}, NstdPtysSubGrp_NoNestedPartySubIDs_77);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_77);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_78;
        set_field(noNestedPartySubIDs_2_0_2_2, FIX::NestedPartySubID{"STRING_554457289"}, NstdPtysSubGrp_NoNestedPartySubIDs_78);
        set_field(noNestedPartySubIDs_2_0_2_2, FIX::NestedPartySubIDType{221676419}, NstdPtysSubGrp_NoNestedPartySubIDs_78);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_78);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_2);
      }
      noApplIDs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noApplIDs_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_13;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_732186333"}, Parties_NoPartyIDs_13);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_13);
    set_field(noPartyIDs_0_0, FIX::PartyRole{3}, Parties_NoPartyIDs_13);
    all_values.push_back(Parties_NoPartyIDs_13);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_32;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1731302781"}, PtysSubGrp_NoPartySubIDs_32);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_32);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_32);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_33;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_244893776"}, PtysSubGrp_NoPartySubIDs_33);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_33);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_33);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_34;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_932588640"}, PtysSubGrp_NoPartySubIDs_34);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_34);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_34);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_14;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1294897028"}, Parties_NoPartyIDs_14);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_14);
    set_field(noPartyIDs_0_1, FIX::PartyRole{19}, Parties_NoPartyIDs_14);
    all_values.push_back(Parties_NoPartyIDs_14);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_35;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1309008073"}, PtysSubGrp_NoPartySubIDs_35);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_35);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_35);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_15;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_560273895"}, Parties_NoPartyIDs_15);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_15);
    set_field(noPartyIDs_0_2, FIX::PartyRole{20}, Parties_NoPartyIDs_15);
    all_values.push_back(Parties_NoPartyIDs_15);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_36;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_174378126"}, PtysSubGrp_NoPartySubIDs_36);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_36);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_36);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // header
  multiset<string> header_8;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_8);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1893938765"}, header_8);
  set_header_field(msg.getHeader(), FIX::BodyLength{511327645}, header_8);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1810687269"}, header_8);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1676434463"}, header_8);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_721236597"}, header_8);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_217660911"}, header_8);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1898110882}, header_8);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_8);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{949847244}, header_8);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1065472769"}, header_8);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2092181195"}, header_8);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1862971250"}, header_8);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(16, 46, 18, 24, 6, 2015)}, header_8);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_8);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_8);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_554673679"}, header_8);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{266026286}, header_8);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1294117410"}, header_8);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1114947574"}, header_8);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_840811409"}, header_8);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(23, 35, 12, 15, 9, 2007)}, header_8);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1194579776"}, header_8);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_290595467"}, header_8);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_274799126"}, header_8);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1412240687"}, header_8);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{41222702}, header_8);
  all_values.push_back(header_8);
  all_compo_names.insert(".header");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";
  cout << "////////////////////////////////////////////" << endl;
  cout << msg.toXML() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    BOOST_LOG_TRIVIAL(debug) << "XML Elements are:";
    cout << "	[";
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

    BOOST_LOG_TRIVIAL(debug) << "FIX Components are:"; 
    cout << "	[";
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

  }
  BOOST_LOG_TRIVIAL(debug) << "All FIX components";
  for (const auto& l : all_values) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }
  BOOST_LOG_TRIVIAL(debug) << "All XML components";
  for (const auto& l : elt_lists) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;

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
      BOOST_LOG_TRIVIAL(debug) << "[TO CHECK] This XML component was not found in FIX message";
      cout << "	 ---> [";
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << "]" << endl << endl;
    } // end if ! found
  } // end for elt_lists
}
