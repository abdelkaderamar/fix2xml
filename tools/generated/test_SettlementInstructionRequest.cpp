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
  FIX::AllocAccount AllocAccount_33("STRING_665231443");
  msg.set(AllocAccount_33);
  SettlementInstructionRequest_0.insert(AllocAccount_33.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_33(911258141);
  msg.set(AllocAcctIDSource_33);
  SettlementInstructionRequest_0.insert(AllocAcctIDSource_33.getString());
  FIX::CFICode CFICode_83("STRING_129138086");
  msg.set(CFICode_83);
  SettlementInstructionRequest_0.insert(CFICode_83.getString());
  FIX::EffectiveTime EffectiveTime_8(FIX::UTCTIMESTAMP(22, 24, 43, 4, 11, 2014));
  msg.set(EffectiveTime_8);
  SettlementInstructionRequest_0.insert(EffectiveTime_8.getString());
  FIX::ExpireTime ExpireTime_19(FIX::UTCTIMESTAMP(14, 0, 12, 1, 6, 2008));
  msg.set(ExpireTime_19);
  SettlementInstructionRequest_0.insert(ExpireTime_19.getString());
  FIX::LastUpdateTime LastUpdateTime_0(FIX::UTCTIMESTAMP(22, 23, 17, 26, 11, 2006));
  msg.set(LastUpdateTime_0);
  SettlementInstructionRequest_0.insert(LastUpdateTime_0.getString());
  FIX::Product Product_86(11);
  msg.set(Product_86);
  SettlementInstructionRequest_0.insert(Product_86.getString());
  FIX::SecurityType SecurityType_86("STRING_AMENDED");
  msg.set(SecurityType_86);
  SettlementInstructionRequest_0.insert(SecurityType_86.getString());
  FIX::SettlCurrency SettlCurrency_30("GBP");
  msg.set(SettlCurrency_30);
  SettlementInstructionRequest_0.insert(SettlCurrency_30.getString());
  FIX::SettlInstReqID SettlInstReqID_0("STRING_1974599281");
  msg.set(SettlInstReqID_0);
  SettlementInstructionRequest_0.insert(SettlInstReqID_0.getString());
  FIX::Side Side_47('5');
  msg.set(Side_47);
  SettlementInstructionRequest_0.insert(Side_47.getString());
  FIX::StandInstDbID StandInstDbID_9("STRING_1269935731");
  msg.set(StandInstDbID_9);
  SettlementInstructionRequest_0.insert(StandInstDbID_9.getString());
  FIX::StandInstDbName StandInstDbName_9("STRING_492347077");
  msg.set(StandInstDbName_9);
  SettlementInstructionRequest_0.insert(StandInstDbName_9.getString());
  FIX::StandInstDbType StandInstDbType_9(4);
  msg.set(StandInstDbType_9);
  SettlementInstructionRequest_0.insert(StandInstDbType_9.getString());
  FIX::TransactTime TransactTime_62(FIX::UTCTIMESTAMP(21, 24, 21, 21, 10, 2011));
  msg.set(TransactTime_62);
  SettlementInstructionRequest_0.insert(TransactTime_62.getString());
  all_values.push_back(SettlementInstructionRequest_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::SettlementInstructionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_129;
    FIX::PartyID PartyID_129("STRING_1691619931");
    noPartyIDs_0_0.set(PartyID_129);
    Parties_NoPartyIDs_129.insert(PartyID_129.getString());
    FIX::PartyIDSource PartyIDSource_129('8');
    noPartyIDs_0_0.set(PartyIDSource_129);
    Parties_NoPartyIDs_129.insert(PartyIDSource_129.getString());
    FIX::PartyRole PartyRole_129(77);
    noPartyIDs_0_0.set(PartyRole_129);
    Parties_NoPartyIDs_129.insert(PartyRole_129.getString());
    all_values.push_back(Parties_NoPartyIDs_129);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_256;
      FIX::PartySubID PartySubID_256("STRING_737802415");
      noPartySubIDs_0_1_0.set(PartySubID_256);
      PtysSubGrp_NoPartySubIDs_256.insert(PartySubID_256.getString());
      FIX::PartySubIDType PartySubIDType_256(2);
      noPartySubIDs_0_1_0.set(PartySubIDType_256);
      PtysSubGrp_NoPartySubIDs_256.insert(PartySubIDType_256.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_256);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_257;
      FIX::PartySubID PartySubID_257("STRING_1181524261");
      noPartySubIDs_0_1_1.set(PartySubID_257);
      PtysSubGrp_NoPartySubIDs_257.insert(PartySubID_257.getString());
      FIX::PartySubIDType PartySubIDType_257(28);
      noPartySubIDs_0_1_1.set(PartySubIDType_257);
      PtysSubGrp_NoPartySubIDs_257.insert(PartySubIDType_257.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_257);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_258;
      FIX::PartySubID PartySubID_258("STRING_201833547");
      noPartySubIDs_0_1_2.set(PartySubID_258);
      PtysSubGrp_NoPartySubIDs_258.insert(PartySubID_258.getString());
      FIX::PartySubIDType PartySubIDType_258(20);
      noPartySubIDs_0_1_2.set(PartySubIDType_258);
      PtysSubGrp_NoPartySubIDs_258.insert(PartySubIDType_258.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_258);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
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
