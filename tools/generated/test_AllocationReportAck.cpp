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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationReportAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReportAck_0;
  FIX::AllocID AllocID_4("STRING_1634976886");
  msg.set(AllocID_4);
  AllocationReportAck_0.insert(AllocID_4.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_4(6);
  msg.set(AllocIntermedReqType_4);
  AllocationReportAck_0.insert(AllocIntermedReqType_4.getString());
  FIX::AllocRejCode AllocRejCode_2(3);
  msg.set(AllocRejCode_2);
  AllocationReportAck_0.insert(AllocRejCode_2.getString());
  FIX::AllocReportID AllocReportID_1("STRING_1064329980");
  msg.set(AllocReportID_1);
  AllocationReportAck_0.insert(AllocReportID_1.getString());
  FIX::AllocReportType AllocReportType_1(4);
  msg.set(AllocReportType_1);
  AllocationReportAck_0.insert(AllocReportType_1.getString());
  FIX::AllocStatus AllocStatus_2(0);
  msg.set(AllocStatus_2);
  AllocationReportAck_0.insert(AllocStatus_2.getString());
  FIX::AllocTransType AllocTransType_3('6');
  msg.set(AllocTransType_3);
  AllocationReportAck_0.insert(AllocTransType_3.getString());
  FIX::AvgPxIndicator AvgPxIndicator_3(2);
  msg.set(AvgPxIndicator_3);
  AllocationReportAck_0.insert(AvgPxIndicator_3.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_4("LOCALMKTDATE_1943076898");
  msg.set(ClearingBusinessDate_4);
  AllocationReportAck_0.insert(ClearingBusinessDate_4.getString());
  FIX::EncodedText EncodedText_5("DATA_2124071177");
  msg.set(EncodedText_5);
  AllocationReportAck_0.insert(EncodedText_5.getString());
  FIX::EncodedTextLen EncodedTextLen_5(236535025);
  msg.set(EncodedTextLen_5);
  AllocationReportAck_0.insert(EncodedTextLen_5.getString());
  FIX::MatchStatus MatchStatus_5('2');
  msg.set(MatchStatus_5);
  AllocationReportAck_0.insert(MatchStatus_5.getString());
  FIX::Product Product_6(8);
  msg.set(Product_6);
  AllocationReportAck_0.insert(Product_6.getString());
  FIX::Quantity Quantity_4;
  Quantity_4.setString("21304576");
  msg.set(Quantity_4);
  AllocationReportAck_0.insert(Quantity_4.getString());
  FIX::SecondaryAllocID SecondaryAllocID_4("STRING_90729355");
  msg.set(SecondaryAllocID_4);
  AllocationReportAck_0.insert(SecondaryAllocID_4.getString());
  FIX::SecurityType SecurityType_6("STRING_REPLACD");
  msg.set(SecurityType_6);
  AllocationReportAck_0.insert(SecurityType_6.getString());
  FIX::Text Text_5("STRING_680132682");
  msg.set(Text_5);
  AllocationReportAck_0.insert(Text_5.getString());
  FIX::TradeDate TradeDate_5("LOCALMKTDATE_674688752");
  msg.set(TradeDate_5);
  AllocationReportAck_0.insert(TradeDate_5.getString());
  FIX::TransactTime TransactTime_5(FIX::UTCTIMESTAMP(23, 56, 59, 26, 6, 2007));
  msg.set(TransactTime_5);
  AllocationReportAck_0.insert(TransactTime_5.getString());
  all_values.push_back(AllocationReportAck_0);

  all_compo_names.insert("AllocationReportAck");

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationReportAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_6("STRING_205673247");
    noAllocs_0_0.set(AllocAccount_6);
    AllocAckGrp_NoAllocs_2.insert(AllocAccount_6.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_6(1289806995);
    noAllocs_0_0.set(AllocAcctIDSource_6);
    AllocAckGrp_NoAllocs_2.insert(AllocAcctIDSource_6.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_6("STRING_331945592");
    noAllocs_0_0.set(AllocCustomerCapacity_6);
    AllocAckGrp_NoAllocs_2.insert(AllocCustomerCapacity_6.getString());
    FIX::AllocPositionEffect AllocPositionEffect_6('C');
    noAllocs_0_0.set(AllocPositionEffect_6);
    AllocAckGrp_NoAllocs_2.insert(AllocPositionEffect_6.getString());
    FIX::AllocPrice AllocPrice_6;
    AllocPrice_6.setString("14906454");
    noAllocs_0_0.set(AllocPrice_6);
    AllocAckGrp_NoAllocs_2.insert(AllocPrice_6.getString());
    FIX::AllocQty AllocQty_6;
    AllocQty_6.setString("19669224");
    noAllocs_0_0.set(AllocQty_6);
    AllocAckGrp_NoAllocs_2.insert(AllocQty_6.getString());
    FIX::AllocText AllocText_6("STRING_1407824282");
    noAllocs_0_0.set(AllocText_6);
    AllocAckGrp_NoAllocs_2.insert(AllocText_6.getString());
    FIX::EncodedAllocText EncodedAllocText_6("DATA_230891721");
    noAllocs_0_0.set(EncodedAllocText_6);
    AllocAckGrp_NoAllocs_2.insert(EncodedAllocText_6.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_6(883768811);
    noAllocs_0_0.set(EncodedAllocTextLen_6);
    AllocAckGrp_NoAllocs_2.insert(EncodedAllocTextLen_6.getString());
    FIX::IndividualAllocID IndividualAllocID_6("STRING_871606057");
    noAllocs_0_0.set(IndividualAllocID_6);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocID_6.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_2(93128002);
    noAllocs_0_0.set(IndividualAllocRejCode_2);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocRejCode_2.getString());
    FIX::IndividualAllocType IndividualAllocType_6(1);
    noAllocs_0_0.set(IndividualAllocType_6);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocType_6.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_6("STRING_1183160454");
    noAllocs_0_0.set(SecondaryIndividualAllocID_6);
    AllocAckGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_6.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_2);
    all_compo_names.insert("AllocAckGrp.NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_14;
      FIX::NestedPartyID NestedPartyID_14("STRING_65340563");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyID_14.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_14('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyIDSource_14.getString());
      FIX::NestedPartyRole NestedPartyRole_14(1133026818);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyRole_14.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_14);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_28;
        FIX::NestedPartySubID NestedPartySubID_28("STRING_1402669462");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_28);
        NstdPtysSubGrp_NoNestedPartySubIDs_28.insert(NestedPartySubID_28.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_28(1223756173);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_28);
        NstdPtysSubGrp_NoNestedPartySubIDs_28.insert(NestedPartySubIDType_28.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_28);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_29;
        FIX::NestedPartySubID NestedPartySubID_29("STRING_1534953934");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_29);
        NstdPtysSubGrp_NoNestedPartySubIDs_29.insert(NestedPartySubID_29.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_29(2082802144);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_29);
        NstdPtysSubGrp_NoNestedPartySubIDs_29.insert(NestedPartySubIDType_29.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_29);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_15;
      FIX::NestedPartyID NestedPartyID_15("STRING_1898444925");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyID_15.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_15('7');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyIDSource_15.getString());
      FIX::NestedPartyRole NestedPartyRole_15(1344103423);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyRole_15.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_15);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_30;
        FIX::NestedPartySubID NestedPartySubID_30("STRING_223503923");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_30);
        NstdPtysSubGrp_NoNestedPartySubIDs_30.insert(NestedPartySubID_30.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_30(1935560833);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_30);
        NstdPtysSubGrp_NoNestedPartySubIDs_30.insert(NestedPartySubIDType_30.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_30);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_16;
      FIX::NestedPartyID NestedPartyID_16("STRING_2048421182");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyID_16.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_16('1');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyIDSource_16.getString());
      FIX::NestedPartyRole NestedPartyRole_16(1393445013);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_16);
      NestedParties_NoNestedPartyIDs_16.insert(NestedPartyRole_16.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_16);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_31;
        FIX::NestedPartySubID NestedPartySubID_31("STRING_565288130");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_31);
        NstdPtysSubGrp_NoNestedPartySubIDs_31.insert(NestedPartySubID_31.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_31(1725390605);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_31);
        NstdPtysSubGrp_NoNestedPartySubIDs_31.insert(NestedPartySubIDType_31.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_31);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
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
    multiset<string> Parties_NoPartyIDs_10;
    FIX::PartyID PartyID_10("STRING_2055933556");
    noPartyIDs_0_0.set(PartyID_10);
    Parties_NoPartyIDs_10.insert(PartyID_10.getString());
    FIX::PartyIDSource PartyIDSource_10('5');
    noPartyIDs_0_0.set(PartyIDSource_10);
    Parties_NoPartyIDs_10.insert(PartyIDSource_10.getString());
    FIX::PartyRole PartyRole_10(59);
    noPartyIDs_0_0.set(PartyRole_10);
    Parties_NoPartyIDs_10.insert(PartyRole_10.getString());
    all_values.push_back(Parties_NoPartyIDs_10);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_24;
      FIX::PartySubID PartySubID_24("STRING_281114598");
      noPartySubIDs_0_1_0.set(PartySubID_24);
      PtysSubGrp_NoPartySubIDs_24.insert(PartySubID_24.getString());
      FIX::PartySubIDType PartySubIDType_24(17);
      noPartySubIDs_0_1_0.set(PartySubIDType_24);
      PtysSubGrp_NoPartySubIDs_24.insert(PartySubIDType_24.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_24);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_25;
      FIX::PartySubID PartySubID_25("STRING_232469631");
      noPartySubIDs_0_1_1.set(PartySubID_25);
      PtysSubGrp_NoPartySubIDs_25.insert(PartySubID_25.getString());
      FIX::PartySubIDType PartySubIDType_25(3);
      noPartySubIDs_0_1_1.set(PartySubIDType_25);
      PtysSubGrp_NoPartySubIDs_25.insert(PartySubIDType_25.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_25);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_26;
      FIX::PartySubID PartySubID_26("STRING_815537036");
      noPartySubIDs_0_1_2.set(PartySubID_26);
      PtysSubGrp_NoPartySubIDs_26.insert(PartySubID_26.getString());
      FIX::PartySubIDType PartySubIDType_26(2);
      noPartySubIDs_0_1_2.set(PartySubIDType_26);
      PtysSubGrp_NoPartySubIDs_26.insert(PartySubIDType_26.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_26);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationReportAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_11;
    FIX::PartyID PartyID_11("STRING_435208196");
    noPartyIDs_0_1.set(PartyID_11);
    Parties_NoPartyIDs_11.insert(PartyID_11.getString());
    FIX::PartyIDSource PartyIDSource_11('7');
    noPartyIDs_0_1.set(PartyIDSource_11);
    Parties_NoPartyIDs_11.insert(PartyIDSource_11.getString());
    FIX::PartyRole PartyRole_11(11);
    noPartyIDs_0_1.set(PartyRole_11);
    Parties_NoPartyIDs_11.insert(PartyRole_11.getString());
    all_values.push_back(Parties_NoPartyIDs_11);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_27;
      FIX::PartySubID PartySubID_27("STRING_1490418329");
      noPartySubIDs_1_1_0.set(PartySubID_27);
      PtysSubGrp_NoPartySubIDs_27.insert(PartySubID_27.getString());
      FIX::PartySubIDType PartySubIDType_27(13);
      noPartySubIDs_1_1_0.set(PartySubIDType_27);
      PtysSubGrp_NoPartySubIDs_27.insert(PartySubIDType_27.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_27);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AllocationReportAck::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_12;
    FIX::PartyID PartyID_12("STRING_1225857749");
    noPartyIDs_0_2.set(PartyID_12);
    Parties_NoPartyIDs_12.insert(PartyID_12.getString());
    FIX::PartyIDSource PartyIDSource_12('3');
    noPartyIDs_0_2.set(PartyIDSource_12);
    Parties_NoPartyIDs_12.insert(PartyIDSource_12.getString());
    FIX::PartyRole PartyRole_12(67);
    noPartyIDs_0_2.set(PartyRole_12);
    Parties_NoPartyIDs_12.insert(PartyRole_12.getString());
    all_values.push_back(Parties_NoPartyIDs_12);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_28;
      FIX::PartySubID PartySubID_28("STRING_622356601");
      noPartySubIDs_2_1_0.set(PartySubID_28);
      PtysSubGrp_NoPartySubIDs_28.insert(PartySubID_28.getString());
      FIX::PartySubIDType PartySubIDType_28(3);
      noPartySubIDs_2_1_0.set(PartySubIDType_28);
      PtysSubGrp_NoPartySubIDs_28.insert(PartySubIDType_28.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_28);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_29;
      FIX::PartySubID PartySubID_29("STRING_33570557");
      noPartySubIDs_2_1_1.set(PartySubID_29);
      PtysSubGrp_NoPartySubIDs_29.insert(PartySubID_29.getString());
      FIX::PartySubIDType PartySubIDType_29(16);
      noPartySubIDs_2_1_1.set(PartySubIDType_29);
      PtysSubGrp_NoPartySubIDs_29.insert(PartySubIDType_29.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_29);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_30;
      FIX::PartySubID PartySubID_30("STRING_1677637473");
      noPartySubIDs_2_1_2.set(PartySubID_30);
      PtysSubGrp_NoPartySubIDs_30.insert(PartySubID_30.getString());
      FIX::PartySubIDType PartySubIDType_30(19);
      noPartySubIDs_2_1_2.set(PartySubIDType_30);
      PtysSubGrp_NoPartySubIDs_30.insert(PartySubIDType_30.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_30);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

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
