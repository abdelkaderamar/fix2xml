#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/AllocationReportAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationReportAck, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationReportAck msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationReportAck_0;
  FIX::AllocID AllocID_4("STRING_1783155935");
  msg.set(AllocID_4);
  AllocationReportAck_0.insert(AllocID_4.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_4(6);
  msg.set(AllocIntermedReqType_4);
  AllocationReportAck_0.insert(AllocIntermedReqType_4.getString());
  FIX::AllocRejCode AllocRejCode_2(10);
  msg.set(AllocRejCode_2);
  AllocationReportAck_0.insert(AllocRejCode_2.getString());
  FIX::AllocReportID AllocReportID_1("STRING_1510016184");
  msg.set(AllocReportID_1);
  AllocationReportAck_0.insert(AllocReportID_1.getString());
  FIX::AllocReportType AllocReportType_1(8);
  msg.set(AllocReportType_1);
  AllocationReportAck_0.insert(AllocReportType_1.getString());
  FIX::AllocStatus AllocStatus_2(1);
  msg.set(AllocStatus_2);
  AllocationReportAck_0.insert(AllocStatus_2.getString());
  FIX::AllocTransType AllocTransType_3('4');
  msg.set(AllocTransType_3);
  AllocationReportAck_0.insert(AllocTransType_3.getString());
  FIX::AvgPxIndicator AvgPxIndicator_3(1);
  msg.set(AvgPxIndicator_3);
  AllocationReportAck_0.insert(AvgPxIndicator_3.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_4("LOCALMKTDATE_99319896");
  msg.set(ClearingBusinessDate_4);
  AllocationReportAck_0.insert(ClearingBusinessDate_4.getString());
  FIX::EncodedText EncodedText_5("DATA_561342180");
  msg.set(EncodedText_5);
  AllocationReportAck_0.insert(EncodedText_5.getString());
  FIX::EncodedTextLen EncodedTextLen_5(1098911590);
  msg.set(EncodedTextLen_5);
  AllocationReportAck_0.insert(EncodedTextLen_5.getString());
  FIX::MatchStatus MatchStatus_6('2');
  msg.set(MatchStatus_6);
  AllocationReportAck_0.insert(MatchStatus_6.getString());
  FIX::Product Product_7(11);
  msg.set(Product_7);
  AllocationReportAck_0.insert(Product_7.getString());
  FIX::Quantity Quantity_4;
  Quantity_4.setString("16150633");
  msg.set(Quantity_4);
  AllocationReportAck_0.insert(Quantity_4.getString());
  FIX::SecondaryAllocID SecondaryAllocID_4("STRING_714620880");
  msg.set(SecondaryAllocID_4);
  AllocationReportAck_0.insert(SecondaryAllocID_4.getString());
  FIX::SecurityType SecurityType_7("STRING_FADN");
  msg.set(SecurityType_7);
  AllocationReportAck_0.insert(SecurityType_7.getString());
  FIX::Text Text_5("STRING_1806016652");
  msg.set(Text_5);
  AllocationReportAck_0.insert(Text_5.getString());
  FIX::TradeDate TradeDate_5("LOCALMKTDATE_1081137688");
  msg.set(TradeDate_5);
  AllocationReportAck_0.insert(TradeDate_5.getString());
  FIX::TransactTime TransactTime_5(FIX::UTCTIMESTAMP(12, 4, 7, 23, 42013));
  msg.set(TransactTime_5);
  AllocationReportAck_0.insert(TransactTime_5.getString());
  all_values.push_back(AllocationReportAck_0);

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationReportAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_7("STRING_969049968");
    noAllocs_0_0.set(AllocAccount_7);
    AllocAckGrp_NoAllocs_2.insert(AllocAccount_7.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_7(1352948813);
    noAllocs_0_0.set(AllocAcctIDSource_7);
    AllocAckGrp_NoAllocs_2.insert(AllocAcctIDSource_7.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_7("STRING_426804755");
    noAllocs_0_0.set(AllocCustomerCapacity_7);
    AllocAckGrp_NoAllocs_2.insert(AllocCustomerCapacity_7.getString());
    FIX::AllocPositionEffect AllocPositionEffect_7('F');
    noAllocs_0_0.set(AllocPositionEffect_7);
    AllocAckGrp_NoAllocs_2.insert(AllocPositionEffect_7.getString());
    FIX::AllocPrice AllocPrice_7;
    AllocPrice_7.setString("12933222");
    noAllocs_0_0.set(AllocPrice_7);
    AllocAckGrp_NoAllocs_2.insert(AllocPrice_7.getString());
    FIX::AllocQty AllocQty_7;
    AllocQty_7.setString("624770");
    noAllocs_0_0.set(AllocQty_7);
    AllocAckGrp_NoAllocs_2.insert(AllocQty_7.getString());
    FIX::AllocText AllocText_7("STRING_1195040840");
    noAllocs_0_0.set(AllocText_7);
    AllocAckGrp_NoAllocs_2.insert(AllocText_7.getString());
    FIX::EncodedAllocText EncodedAllocText_7("DATA_1420001854");
    noAllocs_0_0.set(EncodedAllocText_7);
    AllocAckGrp_NoAllocs_2.insert(EncodedAllocText_7.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_7(1572493226);
    noAllocs_0_0.set(EncodedAllocTextLen_7);
    AllocAckGrp_NoAllocs_2.insert(EncodedAllocTextLen_7.getString());
    FIX::IndividualAllocID IndividualAllocID_7("STRING_2080007424");
    noAllocs_0_0.set(IndividualAllocID_7);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocID_7.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_2(809109391);
    noAllocs_0_0.set(IndividualAllocRejCode_2);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocRejCode_2.getString());
    FIX::IndividualAllocType IndividualAllocType_7(2);
    noAllocs_0_0.set(IndividualAllocType_7);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocType_7.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_7("STRING_933474335");
    noAllocs_0_0.set(SecondaryIndividualAllocID_7);
    AllocAckGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_7.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_2);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_19;
      FIX::NestedPartyID NestedPartyID_19("STRING_1052193036");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyID_19.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_19('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyIDSource_19.getString());
      FIX::NestedPartyRole NestedPartyRole_19(1248235930);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyRole_19.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_19);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_32;
        FIX::NestedPartySubID NestedPartySubID_32("STRING_1499965643");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_32);
        NstdPtysSubGrp_NoNestedPartySubIDs_32.insert(NestedPartySubID_32.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_32(1962856810);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_32);
        NstdPtysSubGrp_NoNestedPartySubIDs_32.insert(NestedPartySubIDType_32.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_32);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_33;
        FIX::NestedPartySubID NestedPartySubID_33("STRING_581286930");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_33);
        NstdPtysSubGrp_NoNestedPartySubIDs_33.insert(NestedPartySubID_33.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_33(1158498647);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_33);
        NstdPtysSubGrp_NoNestedPartySubIDs_33.insert(NestedPartySubIDType_33.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_33);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_20;
      FIX::NestedPartyID NestedPartyID_20("STRING_896510851");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyID_20.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_20('3');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyIDSource_20.getString());
      FIX::NestedPartyRole NestedPartyRole_20(29714596);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyRole_20.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_20);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_34;
        FIX::NestedPartySubID NestedPartySubID_34("STRING_690452796");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_34);
        NstdPtysSubGrp_NoNestedPartySubIDs_34.insert(NestedPartySubID_34.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_34(347373779);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_34);
        NstdPtysSubGrp_NoNestedPartySubIDs_34.insert(NestedPartySubIDType_34.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_34);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_21;
      FIX::NestedPartyID NestedPartyID_21("STRING_249198755");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyID_21.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_21('1');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyIDSource_21.getString());
      FIX::NestedPartyRole NestedPartyRole_21(918506577);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyRole_21.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_21);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_35;
        FIX::NestedPartySubID NestedPartySubID_35("STRING_666671297");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_35);
        NstdPtysSubGrp_NoNestedPartySubIDs_35.insert(NestedPartySubID_35.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_35(1345311332);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_35);
        NstdPtysSubGrp_NoNestedPartySubIDs_35.insert(NestedPartySubIDType_35.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_35);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_36;
        FIX::NestedPartySubID NestedPartySubID_36("STRING_30557634");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_36);
        NstdPtysSubGrp_NoNestedPartySubIDs_36.insert(NestedPartySubID_36.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_36(1959993551);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_36);
        NstdPtysSubGrp_NoNestedPartySubIDs_36.insert(NestedPartySubIDType_36.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_36);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_37;
        FIX::NestedPartySubID NestedPartySubID_37("STRING_1407788375");
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubID_37);
        NstdPtysSubGrp_NoNestedPartySubIDs_37.insert(NestedPartySubID_37.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_37(1225598474);
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubIDType_37);
        NstdPtysSubGrp_NoNestedPartySubIDs_37.insert(NestedPartySubIDType_37.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_37);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationReportAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_14;
    FIX::PartyID PartyID_14("STRING_832797953");
    noPartyIDs_0_0.set(PartyID_14);
    Parties_NoPartyIDs_14.insert(PartyID_14.getString());
    FIX::PartyIDSource PartyIDSource_14('7');
    noPartyIDs_0_0.set(PartyIDSource_14);
    Parties_NoPartyIDs_14.insert(PartyIDSource_14.getString());
    FIX::PartyRole PartyRole_14(59);
    noPartyIDs_0_0.set(PartyRole_14);
    Parties_NoPartyIDs_14.insert(PartyRole_14.getString());
    all_values.push_back(Parties_NoPartyIDs_14);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_33;
      FIX::PartySubID PartySubID_33("STRING_2091596586");
      noPartySubIDs_0_1_0.set(PartySubID_33);
      PtysSubGrp_NoPartySubIDs_33.insert(PartySubID_33.getString());
      FIX::PartySubIDType PartySubIDType_33(25);
      noPartySubIDs_0_1_0.set(PartySubIDType_33);
      PtysSubGrp_NoPartySubIDs_33.insert(PartySubIDType_33.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_33);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_34;
      FIX::PartySubID PartySubID_34("STRING_228358197");
      noPartySubIDs_0_1_1.set(PartySubID_34);
      PtysSubGrp_NoPartySubIDs_34.insert(PartySubID_34.getString());
      FIX::PartySubIDType PartySubIDType_34(33);
      noPartySubIDs_0_1_1.set(PartySubIDType_34);
      PtysSubGrp_NoPartySubIDs_34.insert(PartySubIDType_34.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_34);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_35;
      FIX::PartySubID PartySubID_35("STRING_2050802719");
      noPartySubIDs_0_1_2.set(PartySubID_35);
      PtysSubGrp_NoPartySubIDs_35.insert(PartySubID_35.getString());
      FIX::PartySubIDType PartySubIDType_35(17);
      noPartySubIDs_0_1_2.set(PartySubIDType_35);
      PtysSubGrp_NoPartySubIDs_35.insert(PartySubIDType_35.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_35);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationReportAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_15;
    FIX::PartyID PartyID_15("STRING_1328980859");
    noPartyIDs_0_1.set(PartyID_15);
    Parties_NoPartyIDs_15.insert(PartyID_15.getString());
    FIX::PartyIDSource PartyIDSource_15('G');
    noPartyIDs_0_1.set(PartyIDSource_15);
    Parties_NoPartyIDs_15.insert(PartyIDSource_15.getString());
    FIX::PartyRole PartyRole_15(69);
    noPartyIDs_0_1.set(PartyRole_15);
    Parties_NoPartyIDs_15.insert(PartyRole_15.getString());
    all_values.push_back(Parties_NoPartyIDs_15);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_36;
      FIX::PartySubID PartySubID_36("STRING_615203085");
      noPartySubIDs_1_1_0.set(PartySubID_36);
      PtysSubGrp_NoPartySubIDs_36.insert(PartySubID_36.getString());
      FIX::PartySubIDType PartySubIDType_36(1);
      noPartySubIDs_1_1_0.set(PartySubIDType_36);
      PtysSubGrp_NoPartySubIDs_36.insert(PartySubIDType_36.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_36);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AllocationReportAck::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_16;
    FIX::PartyID PartyID_16("STRING_369710455");
    noPartyIDs_0_2.set(PartyID_16);
    Parties_NoPartyIDs_16.insert(PartyID_16.getString());
    FIX::PartyIDSource PartyIDSource_16('C');
    noPartyIDs_0_2.set(PartyIDSource_16);
    Parties_NoPartyIDs_16.insert(PartyIDSource_16.getString());
    FIX::PartyRole PartyRole_16(66);
    noPartyIDs_0_2.set(PartyRole_16);
    Parties_NoPartyIDs_16.insert(PartyRole_16.getString());
    all_values.push_back(Parties_NoPartyIDs_16);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_37;
      FIX::PartySubID PartySubID_37("STRING_1465201727");
      noPartySubIDs_2_1_0.set(PartySubID_37);
      PtysSubGrp_NoPartySubIDs_37.insert(PartySubID_37.getString());
      FIX::PartySubIDType PartySubIDType_37(22);
      noPartySubIDs_2_1_0.set(PartySubIDType_37);
      PtysSubGrp_NoPartySubIDs_37.insert(PartySubIDType_37.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_37);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
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
