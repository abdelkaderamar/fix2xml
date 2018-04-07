#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::ApplicationMessageRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequest_0;
  set_field(msg, FIX::ApplReqID{"STRING_305479428"}, ApplicationMessageRequest_0);
  set_field(msg, FIX::ApplReqType{1}, ApplicationMessageRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_312535914"}, ApplicationMessageRequest_0);
  set_field(msg, FIX::EncodedTextLen{1144777939}, ApplicationMessageRequest_0);
  set_field(msg, FIX::Text{"STRING_616352496"}, ApplicationMessageRequest_0);
  all_values.push_back(ApplicationMessageRequest_0);

  all_compo_names.insert("ApplicationMessageRequest");

  // ApplIDRequestGrp
  // Group ApplIDRequestGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageRequest::NoApplIDs noApplIDs_0_0;
    // ApplIDRequestGrp.NoApplIDs
    multiset<string> ApplIDRequestGrp_NoApplIDs_0;
    set_field(noApplIDs_0_0, FIX::ApplBegSeqNum{1800210184}, ApplIDRequestGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::ApplEndSeqNum{792428963}, ApplIDRequestGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplID{"STRING_109848848"}, ApplIDRequestGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplReqID{"STRING_1014802560"}, ApplIDRequestGrp_NoApplIDs_0);
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_0);
    all_compo_names.insert("...NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_28;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_95952722"}, NestedParties_NoNestedPartyIDs_28);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_28);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{345729105}, NestedParties_NoNestedPartyIDs_28);
      all_values.push_back(NestedParties_NoNestedPartyIDs_28);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_58;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1568135041"}, NstdPtysSubGrp_NoNestedPartySubIDs_58);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{728655500}, NstdPtysSubGrp_NoNestedPartySubIDs_58);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_58);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_59;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_471732498"}, NstdPtysSubGrp_NoNestedPartySubIDs_59);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1403935543}, NstdPtysSubGrp_NoNestedPartySubIDs_59);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_59);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_60;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_1335103194"}, NstdPtysSubGrp_NoNestedPartySubIDs_60);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{987063679}, NstdPtysSubGrp_NoNestedPartySubIDs_60);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_60);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_29;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1597586031"}, NestedParties_NoNestedPartyIDs_29);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_29);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{271863251}, NestedParties_NoNestedPartyIDs_29);
      all_values.push_back(NestedParties_NoNestedPartyIDs_29);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_61;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1342110800"}, NstdPtysSubGrp_NoNestedPartySubIDs_61);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1943560129}, NstdPtysSubGrp_NoNestedPartySubIDs_61);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_61);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_62;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_881934553"}, NstdPtysSubGrp_NoNestedPartySubIDs_62);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{1861753060}, NstdPtysSubGrp_NoNestedPartySubIDs_62);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_62);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_63;
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubID{"STRING_359100924"}, NstdPtysSubGrp_NoNestedPartySubIDs_63);
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubIDType{1598148886}, NstdPtysSubGrp_NoNestedPartySubIDs_63);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_63);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noApplIDs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_30;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_19748840"}, NestedParties_NoNestedPartyIDs_30);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_30);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{1910684800}, NestedParties_NoNestedPartyIDs_30);
      all_values.push_back(NestedParties_NoNestedPartyIDs_30);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_64;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_583696956"}, NstdPtysSubGrp_NoNestedPartySubIDs_64);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{650918982}, NstdPtysSubGrp_NoNestedPartySubIDs_64);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_64);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_65;
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubID{"STRING_817253316"}, NstdPtysSubGrp_NoNestedPartySubIDs_65);
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubIDType{1376125919}, NstdPtysSubGrp_NoNestedPartySubIDs_65);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_65);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

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
    set_field(noApplIDs_0_1, FIX::ApplBegSeqNum{760767830}, ApplIDRequestGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::ApplEndSeqNum{1832055876}, ApplIDRequestGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplID{"STRING_516494000"}, ApplIDRequestGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplReqID{"STRING_856720553"}, ApplIDRequestGrp_NoApplIDs_1);
    all_values.push_back(ApplIDRequestGrp_NoApplIDs_1);
    all_compo_names.insert("...NoApplIDs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_31;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_862223106"}, NestedParties_NoNestedPartyIDs_31);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_31);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1496334454}, NestedParties_NoNestedPartyIDs_31);
      all_values.push_back(NestedParties_NoNestedPartyIDs_31);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_66;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1043850639"}, NstdPtysSubGrp_NoNestedPartySubIDs_66);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{752786349}, NstdPtysSubGrp_NoNestedPartySubIDs_66);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_66);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_67;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_778498153"}, NstdPtysSubGrp_NoNestedPartySubIDs_67);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{2030914318}, NstdPtysSubGrp_NoNestedPartySubIDs_67);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_67);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_68;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_202888732"}, NstdPtysSubGrp_NoNestedPartySubIDs_68);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{1435535841}, NstdPtysSubGrp_NoNestedPartySubIDs_68);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_68);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_32;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_155293921"}, NestedParties_NoNestedPartyIDs_32);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_32);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{630162993}, NestedParties_NoNestedPartyIDs_32);
      all_values.push_back(NestedParties_NoNestedPartyIDs_32);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_69;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_315141405"}, NstdPtysSubGrp_NoNestedPartySubIDs_69);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{344432405}, NstdPtysSubGrp_NoNestedPartySubIDs_69);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_69);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_70;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_310471326"}, NstdPtysSubGrp_NoNestedPartySubIDs_70);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{1913290291}, NstdPtysSubGrp_NoNestedPartySubIDs_70);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_70);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_71;
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubID{"STRING_364181246"}, NstdPtysSubGrp_NoNestedPartySubIDs_71);
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubIDType{277815786}, NstdPtysSubGrp_NoNestedPartySubIDs_71);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_71);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_33;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_1676491443"}, NestedParties_NoNestedPartyIDs_33);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_33);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{861512742}, NestedParties_NoNestedPartyIDs_33);
      all_values.push_back(NestedParties_NoNestedPartyIDs_33);
      all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_72;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_198477694"}, NstdPtysSubGrp_NoNestedPartySubIDs_72);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{90155013}, NstdPtysSubGrp_NoNestedPartySubIDs_72);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_72);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_73;
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubID{"STRING_940694608"}, NstdPtysSubGrp_NoNestedPartySubIDs_73);
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubIDType{2030533571}, NstdPtysSubGrp_NoNestedPartySubIDs_73);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_73);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::ApplicationMessageRequest::NoApplIDs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_74;
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubID{"STRING_606649014"}, NstdPtysSubGrp_NoNestedPartySubIDs_74);
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubIDType{1797415161}, NstdPtysSubGrp_NoNestedPartySubIDs_74);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_74);
        all_compo_names.insert("...NoApplIDs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noApplIDs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noApplIDs_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_11;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1468872120"}, Parties_NoPartyIDs_11);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_11);
    set_field(noPartyIDs_0_0, FIX::PartyRole{60}, Parties_NoPartyIDs_11);
    all_values.push_back(Parties_NoPartyIDs_11);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_22;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1265900293"}, PtysSubGrp_NoPartySubIDs_22);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_22);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_22);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_12;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1690765231"}, Parties_NoPartyIDs_12);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_12);
    set_field(noPartyIDs_0_1, FIX::PartyRole{41}, Parties_NoPartyIDs_12);
    all_values.push_back(Parties_NoPartyIDs_12);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_23;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1304624884"}, PtysSubGrp_NoPartySubIDs_23);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_23);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_23);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_24;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1608980418"}, PtysSubGrp_NoPartySubIDs_24);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_24);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_24);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_25;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_2011607128"}, PtysSubGrp_NoPartySubIDs_25);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_25);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_25);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_13;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1566466612"}, Parties_NoPartyIDs_13);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_13);
    set_field(noPartyIDs_0_2, FIX::PartyRole{6}, Parties_NoPartyIDs_13);
    all_values.push_back(Parties_NoPartyIDs_13);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_26;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1306421566"}, PtysSubGrp_NoPartySubIDs_26);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_26);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_26);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ApplicationMessageRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_27;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_558311492"}, PtysSubGrp_NoPartySubIDs_27);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_27);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_27);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";cout << "////////////////////////////////////////////" << endl;
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
