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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SettlementInstructionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructionRequest_0;
  FIX::AllocAccount AllocAccount_37("STRING_1644860352");
  msg.set(AllocAccount_37);
  SettlementInstructionRequest_0.insert(AllocAccount_37.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_37(1615666355);
  msg.set(AllocAcctIDSource_37);
  SettlementInstructionRequest_0.insert(AllocAcctIDSource_37.getString());
  FIX::CFICode CFICode_92("STRING_171502590");
  msg.set(CFICode_92);
  SettlementInstructionRequest_0.insert(CFICode_92.getString());
  FIX::EffectiveTime EffectiveTime_10(FIX::UTCTIMESTAMP(21, 48, 2, 7, 9, 2000));
  msg.set(EffectiveTime_10);
  SettlementInstructionRequest_0.insert(EffectiveTime_10.getString());
  FIX::ExpireTime ExpireTime_19(FIX::UTCTIMESTAMP(22, 8, 5, 1, 10, 2000));
  msg.set(ExpireTime_19);
  SettlementInstructionRequest_0.insert(ExpireTime_19.getString());
  FIX::LastUpdateTime LastUpdateTime_0(FIX::UTCTIMESTAMP(12, 24, 33, 11, 11, 2011));
  msg.set(LastUpdateTime_0);
  SettlementInstructionRequest_0.insert(LastUpdateTime_0.getString());
  FIX::Product Product_95(10);
  msg.set(Product_95);
  SettlementInstructionRequest_0.insert(Product_95.getString());
  FIX::SecurityType SecurityType_95("STRING_SUPRA");
  msg.set(SecurityType_95);
  SettlementInstructionRequest_0.insert(SecurityType_95.getString());
  FIX::SettlCurrency SettlCurrency_30("USD");
  msg.set(SettlCurrency_30);
  SettlementInstructionRequest_0.insert(SettlCurrency_30.getString());
  FIX::SettlInstReqID SettlInstReqID_0("STRING_621999702");
  msg.set(SettlInstReqID_0);
  SettlementInstructionRequest_0.insert(SettlInstReqID_0.getString());
  FIX::Side Side_47('1');
  msg.set(Side_47);
  SettlementInstructionRequest_0.insert(Side_47.getString());
  FIX::StandInstDbID StandInstDbID_8("STRING_353660028");
  msg.set(StandInstDbID_8);
  SettlementInstructionRequest_0.insert(StandInstDbID_8.getString());
  FIX::StandInstDbName StandInstDbName_8("STRING_119376406");
  msg.set(StandInstDbName_8);
  SettlementInstructionRequest_0.insert(StandInstDbName_8.getString());
  FIX::StandInstDbType StandInstDbType_8(0);
  msg.set(StandInstDbType_8);
  SettlementInstructionRequest_0.insert(StandInstDbType_8.getString());
  FIX::TransactTime TransactTime_70(FIX::UTCTIMESTAMP(20, 41, 7, 6, 1, 2009));
  msg.set(TransactTime_70);
  SettlementInstructionRequest_0.insert(TransactTime_70.getString());
  all_values.push_back(SettlementInstructionRequest_0);

  all_compo_names.insert("SettlementInstructionRequest");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::SettlementInstructionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_131;
    FIX::PartyID PartyID_131("STRING_613226536");
    noPartyIDs_0_0.set(PartyID_131);
    Parties_NoPartyIDs_131.insert(PartyID_131.getString());
    FIX::PartyIDSource PartyIDSource_131('3');
    noPartyIDs_0_0.set(PartyIDSource_131);
    Parties_NoPartyIDs_131.insert(PartyIDSource_131.getString());
    FIX::PartyRole PartyRole_131(55);
    noPartyIDs_0_0.set(PartyRole_131);
    Parties_NoPartyIDs_131.insert(PartyRole_131.getString());
    all_values.push_back(Parties_NoPartyIDs_131);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_288;
      FIX::PartySubID PartySubID_288("STRING_1865379082");
      noPartySubIDs_0_1_0.set(PartySubID_288);
      PtysSubGrp_NoPartySubIDs_288.insert(PartySubID_288.getString());
      FIX::PartySubIDType PartySubIDType_288(32);
      noPartySubIDs_0_1_0.set(PartySubIDType_288);
      PtysSubGrp_NoPartySubIDs_288.insert(PartySubIDType_288.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_288);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
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
