#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SettlementInstructionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementInstructionRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SettlementInstructionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> SettlementInstructionRequest_0;
  FIX::AllocAccount AllocAccount_35("STRING_1717363836");
  msg.set(AllocAccount_35);
  SettlementInstructionRequest_0.insert(AllocAccount_35.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_35(155104825);
  msg.set(AllocAcctIDSource_35);
  SettlementInstructionRequest_0.insert(AllocAcctIDSource_35.getString());
  FIX::CFICode CFICode_84("STRING_279977365");
  msg.set(CFICode_84);
  SettlementInstructionRequest_0.insert(CFICode_84.getString());
  FIX::EffectiveTime EffectiveTime_10(FIX::UTCTIMESTAMP(4, 31, 51, 26, 92011));
  msg.set(EffectiveTime_10);
  SettlementInstructionRequest_0.insert(EffectiveTime_10.getString());
  FIX::ExpireTime ExpireTime_20(FIX::UTCTIMESTAMP(2, 10, 42, 24, 32008));
  msg.set(ExpireTime_20);
  SettlementInstructionRequest_0.insert(ExpireTime_20.getString());
  FIX::LastUpdateTime LastUpdateTime_0(FIX::UTCTIMESTAMP(7, 31, 51, 19, 22015));
  msg.set(LastUpdateTime_0);
  SettlementInstructionRequest_0.insert(LastUpdateTime_0.getString());
  FIX::Product Product_87(6);
  msg.set(Product_87);
  SettlementInstructionRequest_0.insert(Product_87.getString());
  FIX::SecurityType SecurityType_87("STRING_TRAN");
  msg.set(SecurityType_87);
  SettlementInstructionRequest_0.insert(SecurityType_87.getString());
  FIX::SettlCurrency SettlCurrency_30("USD");
  msg.set(SettlCurrency_30);
  SettlementInstructionRequest_0.insert(SettlCurrency_30.getString());
  FIX::SettlInstReqID SettlInstReqID_0("STRING_1785625628");
  msg.set(SettlInstReqID_0);
  SettlementInstructionRequest_0.insert(SettlInstReqID_0.getString());
  FIX::Side Side_46('1');
  msg.set(Side_46);
  SettlementInstructionRequest_0.insert(Side_46.getString());
  FIX::StandInstDbID StandInstDbID_9("STRING_321902668");
  msg.set(StandInstDbID_9);
  SettlementInstructionRequest_0.insert(StandInstDbID_9.getString());
  FIX::StandInstDbName StandInstDbName_9("STRING_1355505816");
  msg.set(StandInstDbName_9);
  SettlementInstructionRequest_0.insert(StandInstDbName_9.getString());
  FIX::StandInstDbType StandInstDbType_9(0);
  msg.set(StandInstDbType_9);
  SettlementInstructionRequest_0.insert(StandInstDbType_9.getString());
  FIX::TransactTime TransactTime_61(FIX::UTCTIMESTAMP(2, 5, 24, 5, 82012));
  msg.set(TransactTime_61);
  SettlementInstructionRequest_0.insert(TransactTime_61.getString());
  all_values.push_back(SettlementInstructionRequest_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::SettlementInstructionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_132;
    FIX::PartyID PartyID_132("STRING_655843791");
    noPartyIDs_0_0.set(PartyID_132);
    Parties_NoPartyIDs_132.insert(PartyID_132.getString());
    FIX::PartyIDSource PartyIDSource_132('2');
    noPartyIDs_0_0.set(PartyIDSource_132);
    Parties_NoPartyIDs_132.insert(PartyIDSource_132.getString());
    FIX::PartyRole PartyRole_132(2);
    noPartyIDs_0_0.set(PartyRole_132);
    Parties_NoPartyIDs_132.insert(PartyRole_132.getString());
    all_values.push_back(Parties_NoPartyIDs_132);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_260;
      FIX::PartySubID PartySubID_260("STRING_2060136287");
      noPartySubIDs_0_1_0.set(PartySubID_260);
      PtysSubGrp_NoPartySubIDs_260.insert(PartySubID_260.getString());
      FIX::PartySubIDType PartySubIDType_260(2);
      noPartySubIDs_0_1_0.set(PartySubIDType_260);
      PtysSubGrp_NoPartySubIDs_260.insert(PartySubIDType_260.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_260);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_261;
      FIX::PartySubID PartySubID_261("STRING_1180041904");
      noPartySubIDs_0_1_1.set(PartySubID_261);
      PtysSubGrp_NoPartySubIDs_261.insert(PartySubID_261.getString());
      FIX::PartySubIDType PartySubIDType_261(2);
      noPartySubIDs_0_1_1.set(PartySubIDType_261);
      PtysSubGrp_NoPartySubIDs_261.insert(PartySubIDType_261.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_261);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::SettlementInstructionRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_133;
    FIX::PartyID PartyID_133("STRING_11045947");
    noPartyIDs_0_1.set(PartyID_133);
    Parties_NoPartyIDs_133.insert(PartyID_133.getString());
    FIX::PartyIDSource PartyIDSource_133('H');
    noPartyIDs_0_1.set(PartyIDSource_133);
    Parties_NoPartyIDs_133.insert(PartyIDSource_133.getString());
    FIX::PartyRole PartyRole_133(12);
    noPartyIDs_0_1.set(PartyRole_133);
    Parties_NoPartyIDs_133.insert(PartyRole_133.getString());
    all_values.push_back(Parties_NoPartyIDs_133);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_262;
      FIX::PartySubID PartySubID_262("STRING_1730853888");
      noPartySubIDs_1_1_0.set(PartySubID_262);
      PtysSubGrp_NoPartySubIDs_262.insert(PartySubID_262.getString());
      FIX::PartySubIDType PartySubIDType_262(25);
      noPartySubIDs_1_1_0.set(PartySubIDType_262);
      PtysSubGrp_NoPartySubIDs_262.insert(PartySubIDType_262.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_262);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_263;
      FIX::PartySubID PartySubID_263("STRING_1893192897");
      noPartySubIDs_1_1_1.set(PartySubID_263);
      PtysSubGrp_NoPartySubIDs_263.insert(PartySubID_263.getString());
      FIX::PartySubIDType PartySubIDType_263(32);
      noPartySubIDs_1_1_1.set(PartySubIDType_263);
      PtysSubGrp_NoPartySubIDs_263.insert(PartySubIDType_263.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_263);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_264;
      FIX::PartySubID PartySubID_264("STRING_1892885222");
      noPartySubIDs_1_1_2.set(PartySubID_264);
      PtysSubGrp_NoPartySubIDs_264.insert(PartySubID_264.getString());
      FIX::PartySubIDType PartySubIDType_264(11);
      noPartySubIDs_1_1_2.set(PartySubIDType_264);
      PtysSubGrp_NoPartySubIDs_264.insert(PartySubIDType_264.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_264);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::SettlementInstructionRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_134;
    FIX::PartyID PartyID_134("STRING_565996774");
    noPartyIDs_0_2.set(PartyID_134);
    Parties_NoPartyIDs_134.insert(PartyID_134.getString());
    FIX::PartyIDSource PartyIDSource_134('8');
    noPartyIDs_0_2.set(PartyIDSource_134);
    Parties_NoPartyIDs_134.insert(PartyIDSource_134.getString());
    FIX::PartyRole PartyRole_134(19);
    noPartyIDs_0_2.set(PartyRole_134);
    Parties_NoPartyIDs_134.insert(PartyRole_134.getString());
    all_values.push_back(Parties_NoPartyIDs_134);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_265;
      FIX::PartySubID PartySubID_265("STRING_2049725247");
      noPartySubIDs_2_1_0.set(PartySubID_265);
      PtysSubGrp_NoPartySubIDs_265.insert(PartySubID_265.getString());
      FIX::PartySubIDType PartySubIDType_265(18);
      noPartySubIDs_2_1_0.set(PartySubIDType_265);
      PtysSubGrp_NoPartySubIDs_265.insert(PartySubIDType_265.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_265);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_266;
      FIX::PartySubID PartySubID_266("STRING_660054041");
      noPartySubIDs_2_1_1.set(PartySubID_266);
      PtysSubGrp_NoPartySubIDs_266.insert(PartySubID_266.getString());
      FIX::PartySubIDType PartySubIDType_266(4);
      noPartySubIDs_2_1_1.set(PartySubIDType_266);
      PtysSubGrp_NoPartySubIDs_266.insert(PartySubIDType_266.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_266);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_267;
      FIX::PartySubID PartySubID_267("STRING_1217971468");
      noPartySubIDs_2_1_2.set(PartySubID_267);
      PtysSubGrp_NoPartySubIDs_267.insert(PartySubID_267.getString());
      FIX::PartySubIDType PartySubIDType_267(9);
      noPartySubIDs_2_1_2.set(PartySubIDType_267);
      PtysSubGrp_NoPartySubIDs_267.insert(PartySubIDType_267.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_267);

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
