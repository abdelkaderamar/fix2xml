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
  multiset<string> SettlementInstructionRequest_0;
  FIX::AllocAccount AllocAccount_31("STRING_918719758");
  msg.set(AllocAccount_31);
  SettlementInstructionRequest_0.insert(AllocAccount_31.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_31(1358842276);
  msg.set(AllocAcctIDSource_31);
  SettlementInstructionRequest_0.insert(AllocAcctIDSource_31.getString());
  FIX::CFICode CFICode_90("STRING_1598576768");
  msg.set(CFICode_90);
  SettlementInstructionRequest_0.insert(CFICode_90.getString());
  FIX::EffectiveTime EffectiveTime_9(FIX::UTCTIMESTAMP(13, 51, 55, 4, 12, 2017));
  msg.set(EffectiveTime_9);
  SettlementInstructionRequest_0.insert(EffectiveTime_9.getString());
  FIX::ExpireTime ExpireTime_18(FIX::UTCTIMESTAMP(0, 48, 5, 24, 6, 2008));
  msg.set(ExpireTime_18);
  SettlementInstructionRequest_0.insert(ExpireTime_18.getString());
  FIX::LastUpdateTime LastUpdateTime_0(FIX::UTCTIMESTAMP(21, 22, 21, 17, 11, 2000));
  msg.set(LastUpdateTime_0);
  SettlementInstructionRequest_0.insert(LastUpdateTime_0.getString());
  FIX::Product Product_93(2);
  msg.set(Product_93);
  SettlementInstructionRequest_0.insert(Product_93.getString());
  FIX::SecurityType SecurityType_93("STRING_CB");
  msg.set(SecurityType_93);
  SettlementInstructionRequest_0.insert(SecurityType_93.getString());
  FIX::SettlCurrency SettlCurrency_26("EUR");
  msg.set(SettlCurrency_26);
  SettlementInstructionRequest_0.insert(SettlCurrency_26.getString());
  FIX::SettlInstReqID SettlInstReqID_0("STRING_1991965080");
  msg.set(SettlInstReqID_0);
  SettlementInstructionRequest_0.insert(SettlInstReqID_0.getString());
  FIX::Side Side_41('D');
  msg.set(Side_41);
  SettlementInstructionRequest_0.insert(Side_41.getString());
  FIX::StandInstDbID StandInstDbID_10("STRING_1638021879");
  msg.set(StandInstDbID_10);
  SettlementInstructionRequest_0.insert(StandInstDbID_10.getString());
  FIX::StandInstDbName StandInstDbName_10("STRING_763201190");
  msg.set(StandInstDbName_10);
  SettlementInstructionRequest_0.insert(StandInstDbName_10.getString());
  FIX::StandInstDbType StandInstDbType_10(4);
  msg.set(StandInstDbType_10);
  SettlementInstructionRequest_0.insert(StandInstDbType_10.getString());
  FIX::TransactTime TransactTime_67(FIX::UTCTIMESTAMP(17, 54, 22, 24, 11, 2009));
  msg.set(TransactTime_67);
  SettlementInstructionRequest_0.insert(TransactTime_67.getString());
  all_values.push_back(SettlementInstructionRequest_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::SettlementInstructionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_126;
    FIX::PartyID PartyID_126("STRING_1094538133");
    noPartyIDs_0_0.set(PartyID_126);
    Parties_NoPartyIDs_126.insert(PartyID_126.getString());
    FIX::PartyIDSource PartyIDSource_126('3');
    noPartyIDs_0_0.set(PartyIDSource_126);
    Parties_NoPartyIDs_126.insert(PartyIDSource_126.getString());
    FIX::PartyRole PartyRole_126(65);
    noPartyIDs_0_0.set(PartyRole_126);
    Parties_NoPartyIDs_126.insert(PartyRole_126.getString());
    all_values.push_back(Parties_NoPartyIDs_126);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_257;
      FIX::PartySubID PartySubID_257("STRING_351350921");
      noPartySubIDs_0_1_0.set(PartySubID_257);
      PtysSubGrp_NoPartySubIDs_257.insert(PartySubID_257.getString());
      FIX::PartySubIDType PartySubIDType_257(10);
      noPartySubIDs_0_1_0.set(PartySubIDType_257);
      PtysSubGrp_NoPartySubIDs_257.insert(PartySubIDType_257.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_257);

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
