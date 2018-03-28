#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/AllocationInstructionAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstructionAck, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationInstructionAck msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationInstructionAck_0;
  FIX::AllocID AllocID_1("STRING_1833937983");
  msg.set(AllocID_1);
  AllocationInstructionAck_0.insert(AllocID_1.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_1(5);
  msg.set(AllocIntermedReqType_1);
  AllocationInstructionAck_0.insert(AllocIntermedReqType_1.getString());
  FIX::AllocRejCode AllocRejCode_0(10);
  msg.set(AllocRejCode_0);
  AllocationInstructionAck_0.insert(AllocRejCode_0.getString());
  FIX::AllocStatus AllocStatus_0(5);
  msg.set(AllocStatus_0);
  AllocationInstructionAck_0.insert(AllocStatus_0.getString());
  FIX::AllocType AllocType_1(8);
  msg.set(AllocType_1);
  AllocationInstructionAck_0.insert(AllocType_1.getString());
  FIX::EncodedText EncodedText_2("DATA_613951157");
  msg.set(EncodedText_2);
  AllocationInstructionAck_0.insert(EncodedText_2.getString());
  FIX::EncodedTextLen EncodedTextLen_2(183961328);
  msg.set(EncodedTextLen_2);
  AllocationInstructionAck_0.insert(EncodedTextLen_2.getString());
  FIX::MatchStatus MatchStatus_2('0');
  msg.set(MatchStatus_2);
  AllocationInstructionAck_0.insert(MatchStatus_2.getString());
  FIX::Product Product_4(11);
  msg.set(Product_4);
  AllocationInstructionAck_0.insert(Product_4.getString());
  FIX::SecondaryAllocID SecondaryAllocID_1("STRING_909477807");
  msg.set(SecondaryAllocID_1);
  AllocationInstructionAck_0.insert(SecondaryAllocID_1.getString());
  FIX::SecurityType SecurityType_4("STRING_EUSOV");
  msg.set(SecurityType_4);
  AllocationInstructionAck_0.insert(SecurityType_4.getString());
  FIX::Text Text_2("STRING_1152298978");
  msg.set(Text_2);
  AllocationInstructionAck_0.insert(Text_2.getString());
  FIX::TradeDate TradeDate_2("LOCALMKTDATE_1078368070");
  msg.set(TradeDate_2);
  AllocationInstructionAck_0.insert(TradeDate_2.getString());
  FIX::TransactTime TransactTime_2(FIX::UTCTIMESTAMP(14, 22, 28, 14, 2, 2009));
  msg.set(TransactTime_2);
  AllocationInstructionAck_0.insert(TransactTime_2.getString());
  all_values.push_back(AllocationInstructionAck_0);

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_2("STRING_1486358147");
    noAllocs_0_0.set(AllocAccount_2);
    AllocAckGrp_NoAllocs_0.insert(AllocAccount_2.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_2(1863381898);
    noAllocs_0_0.set(AllocAcctIDSource_2);
    AllocAckGrp_NoAllocs_0.insert(AllocAcctIDSource_2.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_2("STRING_1328999018");
    noAllocs_0_0.set(AllocCustomerCapacity_2);
    AllocAckGrp_NoAllocs_0.insert(AllocCustomerCapacity_2.getString());
    FIX::AllocPositionEffect AllocPositionEffect_2('C');
    noAllocs_0_0.set(AllocPositionEffect_2);
    AllocAckGrp_NoAllocs_0.insert(AllocPositionEffect_2.getString());
    FIX::AllocPrice AllocPrice_2;
    AllocPrice_2.setString("18704565");
    noAllocs_0_0.set(AllocPrice_2);
    AllocAckGrp_NoAllocs_0.insert(AllocPrice_2.getString());
    FIX::AllocQty AllocQty_2;
    AllocQty_2.setString("4091783");
    noAllocs_0_0.set(AllocQty_2);
    AllocAckGrp_NoAllocs_0.insert(AllocQty_2.getString());
    FIX::AllocText AllocText_2("STRING_1299213408");
    noAllocs_0_0.set(AllocText_2);
    AllocAckGrp_NoAllocs_0.insert(AllocText_2.getString());
    FIX::EncodedAllocText EncodedAllocText_2("DATA_498901970");
    noAllocs_0_0.set(EncodedAllocText_2);
    AllocAckGrp_NoAllocs_0.insert(EncodedAllocText_2.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_2(306227653);
    noAllocs_0_0.set(EncodedAllocTextLen_2);
    AllocAckGrp_NoAllocs_0.insert(EncodedAllocTextLen_2.getString());
    FIX::IndividualAllocID IndividualAllocID_2("STRING_1857739593");
    noAllocs_0_0.set(IndividualAllocID_2);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocID_2.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_0(185356305);
    noAllocs_0_0.set(IndividualAllocRejCode_0);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocRejCode_0.getString());
    FIX::IndividualAllocType IndividualAllocType_2(2);
    noAllocs_0_0.set(IndividualAllocType_2);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocType_2.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_2("STRING_804472265");
    noAllocs_0_0.set(SecondaryIndividualAllocID_2);
    AllocAckGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_2.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_6;
      FIX::NestedPartyID NestedPartyID_6("STRING_1571207082");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyID_6.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_6('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyIDSource_6.getString());
      FIX::NestedPartyRole NestedPartyRole_6(871520678);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyRole_6.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_6);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_10;
        FIX::NestedPartySubID NestedPartySubID_10("STRING_1317945524");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_10);
        NstdPtysSubGrp_NoNestedPartySubIDs_10.insert(NestedPartySubID_10.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_10(1780998486);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_10);
        NstdPtysSubGrp_NoNestedPartySubIDs_10.insert(NestedPartySubIDType_10.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_10);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_11;
        FIX::NestedPartySubID NestedPartySubID_11("STRING_520228790");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_11);
        NstdPtysSubGrp_NoNestedPartySubIDs_11.insert(NestedPartySubID_11.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_11(322760854);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_11);
        NstdPtysSubGrp_NoNestedPartySubIDs_11.insert(NestedPartySubIDType_11.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_11);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstructionAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_4;
    FIX::PartyID PartyID_4("STRING_1385658316");
    noPartyIDs_0_0.set(PartyID_4);
    Parties_NoPartyIDs_4.insert(PartyID_4.getString());
    FIX::PartyIDSource PartyIDSource_4('D');
    noPartyIDs_0_0.set(PartyIDSource_4);
    Parties_NoPartyIDs_4.insert(PartyIDSource_4.getString());
    FIX::PartyRole PartyRole_4(7);
    noPartyIDs_0_0.set(PartyRole_4);
    Parties_NoPartyIDs_4.insert(PartyRole_4.getString());
    all_values.push_back(Parties_NoPartyIDs_4);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_6;
      FIX::PartySubID PartySubID_6("STRING_697392379");
      noPartySubIDs_0_1_0.set(PartySubID_6);
      PtysSubGrp_NoPartySubIDs_6.insert(PartySubID_6.getString());
      FIX::PartySubIDType PartySubIDType_6(5);
      noPartySubIDs_0_1_0.set(PartySubIDType_6);
      PtysSubGrp_NoPartySubIDs_6.insert(PartySubIDType_6.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_6);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_7;
      FIX::PartySubID PartySubID_7("STRING_693651128");
      noPartySubIDs_0_1_1.set(PartySubID_7);
      PtysSubGrp_NoPartySubIDs_7.insert(PartySubID_7.getString());
      FIX::PartySubIDType PartySubIDType_7(27);
      noPartySubIDs_0_1_1.set(PartySubIDType_7);
      PtysSubGrp_NoPartySubIDs_7.insert(PartySubIDType_7.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_7);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_5;
    FIX::PartyID PartyID_5("STRING_1154812859");
    noPartyIDs_0_1.set(PartyID_5);
    Parties_NoPartyIDs_5.insert(PartyID_5.getString());
    FIX::PartyIDSource PartyIDSource_5('A');
    noPartyIDs_0_1.set(PartyIDSource_5);
    Parties_NoPartyIDs_5.insert(PartyIDSource_5.getString());
    FIX::PartyRole PartyRole_5(73);
    noPartyIDs_0_1.set(PartyRole_5);
    Parties_NoPartyIDs_5.insert(PartyRole_5.getString());
    all_values.push_back(Parties_NoPartyIDs_5);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_8;
      FIX::PartySubID PartySubID_8("STRING_132522306");
      noPartySubIDs_1_1_0.set(PartySubID_8);
      PtysSubGrp_NoPartySubIDs_8.insert(PartySubID_8.getString());
      FIX::PartySubIDType PartySubIDType_8(17);
      noPartySubIDs_1_1_0.set(PartySubIDType_8);
      PtysSubGrp_NoPartySubIDs_8.insert(PartySubIDType_8.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_8);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_9;
      FIX::PartySubID PartySubID_9("STRING_1998271564");
      noPartySubIDs_1_1_1.set(PartySubID_9);
      PtysSubGrp_NoPartySubIDs_9.insert(PartySubID_9.getString());
      FIX::PartySubIDType PartySubIDType_9(33);
      noPartySubIDs_1_1_1.set(PartySubIDType_9);
      PtysSubGrp_NoPartySubIDs_9.insert(PartySubIDType_9.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_9);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAck::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_6;
    FIX::PartyID PartyID_6("STRING_1867824596");
    noPartyIDs_0_2.set(PartyID_6);
    Parties_NoPartyIDs_6.insert(PartyID_6.getString());
    FIX::PartyIDSource PartyIDSource_6('H');
    noPartyIDs_0_2.set(PartyIDSource_6);
    Parties_NoPartyIDs_6.insert(PartyIDSource_6.getString());
    FIX::PartyRole PartyRole_6(31);
    noPartyIDs_0_2.set(PartyRole_6);
    Parties_NoPartyIDs_6.insert(PartyRole_6.getString());
    all_values.push_back(Parties_NoPartyIDs_6);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_10;
      FIX::PartySubID PartySubID_10("STRING_365516126");
      noPartySubIDs_2_1_0.set(PartySubID_10);
      PtysSubGrp_NoPartySubIDs_10.insert(PartySubID_10.getString());
      FIX::PartySubIDType PartySubIDType_10(19);
      noPartySubIDs_2_1_0.set(PartySubIDType_10);
      PtysSubGrp_NoPartySubIDs_10.insert(PartySubIDType_10.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_10);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_11;
      FIX::PartySubID PartySubID_11("STRING_294617644");
      noPartySubIDs_2_1_1.set(PartySubID_11);
      PtysSubGrp_NoPartySubIDs_11.insert(PartySubID_11.getString());
      FIX::PartySubIDType PartySubIDType_11(7);
      noPartySubIDs_2_1_1.set(PartySubIDType_11);
      PtysSubGrp_NoPartySubIDs_11.insert(PartySubIDType_11.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_11);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_12;
      FIX::PartySubID PartySubID_12("STRING_228376962");
      noPartySubIDs_2_1_2.set(PartySubID_12);
      PtysSubGrp_NoPartySubIDs_12.insert(PartySubID_12.getString());
      FIX::PartySubIDType PartySubIDType_12(30);
      noPartySubIDs_2_1_2.set(PartySubIDType_12);
      PtysSubGrp_NoPartySubIDs_12.insert(PartySubIDType_12.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_12);

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
