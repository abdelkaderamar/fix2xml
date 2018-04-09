#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::AllocationReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReport_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_2;
  AccruedInterestAmt_2.setString("20532813");
set_field(msg, AccruedInterestAmt_2, AllocationReport_0);
  FIX::AccruedInterestRate AccruedInterestRate_2;
  AccruedInterestRate_2.setString("23.350000");
set_field(msg, AccruedInterestRate_2, AllocationReport_0);
  set_field(msg, FIX::AllocCancReplaceReason{1}, AllocationReport_0);
  set_field(msg, FIX::AllocID{"STRING_870744981"}, AllocationReport_0);
  set_field(msg, FIX::AllocIntermedReqType{6}, AllocationReport_0);
  set_field(msg, FIX::AllocLinkID{"STRING_256321415"}, AllocationReport_0);
  set_field(msg, FIX::AllocLinkType{0}, AllocationReport_0);
  set_field(msg, FIX::AllocNoOrdersType{1}, AllocationReport_0);
  set_field(msg, FIX::AllocRejCode{2}, AllocationReport_0);
  set_field(msg, FIX::AllocReportID{"STRING_682270426"}, AllocationReport_0);
  set_field(msg, FIX::AllocReportRefID{"STRING_1928389269"}, AllocationReport_0);
  set_field(msg, FIX::AllocReportType{10}, AllocationReport_0);
  set_field(msg, FIX::AllocStatus{5}, AllocationReport_0);
  set_field(msg, FIX::AllocTransType{'1'}, AllocationReport_0);
  set_field(msg, FIX::AutoAcceptIndicator{false}, AllocationReport_0);
  FIX::AvgParPx AvgParPx_2;
  AvgParPx_2.setString("7063423");
set_field(msg, AvgParPx_2, AllocationReport_0);
  FIX::AvgPx AvgPx_2;
  AvgPx_2.setString("3202570");
set_field(msg, AvgPx_2, AllocationReport_0);
  set_field(msg, FIX::AvgPxIndicator{0}, AllocationReport_0);
  set_field(msg, FIX::AvgPxPrecision{2056155819}, AllocationReport_0);
  set_field(msg, FIX::BookingRefID{"STRING_1867844890"}, AllocationReport_0);
  set_field(msg, FIX::BookingType{1}, AllocationReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1575659222"}, AllocationReport_0);
  FIX::Concession Concession_2;
  Concession_2.setString("11514207");
set_field(msg, Concession_2, AllocationReport_0);
  set_field(msg, FIX::Currency{"CAN"}, AllocationReport_0);
  set_field(msg, FIX::CustOrderCapacity{4}, AllocationReport_0);
  set_field(msg, FIX::EncodedText{"DATA_810589270"}, AllocationReport_0);
  set_field(msg, FIX::EncodedTextLen{1757085368}, AllocationReport_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_2;
  EndAccruedInterestAmt_2.setString("1100122");
set_field(msg, EndAccruedInterestAmt_2, AllocationReport_0);
  FIX::EndCash EndCash_2;
  EndCash_2.setString("12704821");
set_field(msg, EndCash_2, AllocationReport_0);
  FIX::GrossTradeAmt GrossTradeAmt_2;
  GrossTradeAmt_2.setString("7392395");
set_field(msg, GrossTradeAmt_2, AllocationReport_0);
  FIX::InterestAtMaturity InterestAtMaturity_2;
  InterestAtMaturity_2.setString("158099");
set_field(msg, InterestAtMaturity_2, AllocationReport_0);
  set_field(msg, FIX::LastFragment{false}, AllocationReport_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_691699255"}, AllocationReport_0);
  set_field(msg, FIX::LegalConfirm{false}, AllocationReport_0);
  set_field(msg, FIX::MatchType{"STRING_4"}, AllocationReport_0);
  set_field(msg, FIX::MessageEventSource{"STRING_948020671"}, AllocationReport_0);
  set_field(msg, FIX::MultiLegReportingType{'1'}, AllocationReport_0);
  FIX::NetMoney NetMoney_2;
  NetMoney_2.setString("18216814");
set_field(msg, NetMoney_2, AllocationReport_0);
  set_field(msg, FIX::NumDaysInterest{857458615}, AllocationReport_0);
  set_field(msg, FIX::PositionEffect{'O'}, AllocationReport_0);
  set_field(msg, FIX::PreviouslyReported{false}, AllocationReport_0);
  set_field(msg, FIX::PriceType{6}, AllocationReport_0);
  set_field(msg, FIX::QtyType{1}, AllocationReport_0);
  FIX::Quantity Quantity_3;
  Quantity_3.setString("17413612");
set_field(msg, Quantity_3, AllocationReport_0);
  set_field(msg, FIX::RefAllocID{"STRING_69219010"}, AllocationReport_0);
  set_field(msg, FIX::ReversalIndicator{false}, AllocationReport_0);
  FIX::RndPx RndPx_2;
  RndPx_2.setString("20616182");
set_field(msg, RndPx_2, AllocationReport_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_1590643783"}, AllocationReport_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_2072071088"}, AllocationReport_0);
  set_field(msg, FIX::SettlType{"STRING_7"}, AllocationReport_0);
  set_field(msg, FIX::Side{'4'}, AllocationReport_0);
  FIX::StartCash StartCash_2;
  StartCash_2.setString("15002466");
set_field(msg, StartCash_2, AllocationReport_0);
  set_field(msg, FIX::Text{"STRING_785916614"}, AllocationReport_0);
  set_field(msg, FIX::TotNoAllocs{2046336934}, AllocationReport_0);
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_2;
  TotalAccruedInterestAmt_2.setString("3634327");
set_field(msg, TotalAccruedInterestAmt_2, AllocationReport_0);
  FIX::TotalTakedown TotalTakedown_2;
  TotalTakedown_2.setString("15134342");
set_field(msg, TotalTakedown_2, AllocationReport_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_709442556"}, AllocationReport_0);
  set_field(msg, FIX::TradeInputDevice{"STRING_2120518101"}, AllocationReport_0);
  set_field(msg, FIX::TradeInputSource{"STRING_1623446549"}, AllocationReport_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_1979924714"}, AllocationReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, AllocationReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_5"}, AllocationReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(14, 22, 7, 9, 5, 2015)}, AllocationReport_0);
  set_field(msg, FIX::TrdSubType{14}, AllocationReport_0);
  set_field(msg, FIX::TrdType{16}, AllocationReport_0);
  all_values.push_back(AllocationReport_0);

  all_compo_names.insert("AllocationReport");

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationReport::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_5;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1491952579"}, AllocGrp_NoAllocs_5);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_5;
    AllocAccruedInterestAmt_5.setString("14243697");
set_field(noAllocs_0_0, AllocAccruedInterestAmt_5, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{1525285566}, AllocGrp_NoAllocs_5);
    FIX::AllocAvgPx AllocAvgPx_5;
    AllocAvgPx_5.setString("15611715");
set_field(noAllocs_0_0, AllocAvgPx_5, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::AllocCustomerCapacity{"STRING_1440285047"}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::AllocHandlInst{1}, AllocGrp_NoAllocs_5);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_5;
    AllocInterestAtMaturity_5.setString("10043317");
set_field(noAllocs_0_0, AllocInterestAtMaturity_5, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::AllocMethod{3}, AllocGrp_NoAllocs_5);
    FIX::AllocNetMoney AllocNetMoney_5;
    AllocNetMoney_5.setString("10739160");
set_field(noAllocs_0_0, AllocNetMoney_5, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::AllocPositionEffect{'F'}, AllocGrp_NoAllocs_5);
    FIX::AllocPrice AllocPrice_7;
    AllocPrice_7.setString("7176355");
set_field(noAllocs_0_0, AllocPrice_7, AllocGrp_NoAllocs_5);
    FIX::AllocQty AllocQty_7;
    AllocQty_7.setString("18598326");
set_field(noAllocs_0_0, AllocQty_7, AllocGrp_NoAllocs_5);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_5;
    AllocSettlCurrAmt_5.setString("20479970");
set_field(noAllocs_0_0, AllocSettlCurrAmt_5, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"JPY"}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::AllocSettlInstType{0}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::AllocText{"STRING_1054102688"}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::ClearingFeeIndicator{"STRING_I"}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::EncodedAllocText{"DATA_442397036"}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::EncodedAllocTextLen{1766376711}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_193519122"}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::IndividualAllocType{1}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::MatchStatus{'0'}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::NotifyBrokerOfCredit{false}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::ProcessCode{'5'}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::SecondaryIndividualAllocID{"STRING_1227376643"}, AllocGrp_NoAllocs_5);
    FIX::SettlCurrAmt SettlCurrAmt_5;
    SettlCurrAmt_5.setString("4035323");
set_field(noAllocs_0_0, SettlCurrAmt_5, AllocGrp_NoAllocs_5);
    FIX::SettlCurrFxRate SettlCurrFxRate_5;
    SettlCurrFxRate_5.setString("3647593");
set_field(noAllocs_0_0, SettlCurrFxRate_5, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::SettlCurrFxRateCalc{'D'}, AllocGrp_NoAllocs_5);
    set_field(noAllocs_0_0, FIX::SettlCurrency{"EUR"}, AllocGrp_NoAllocs_5);
    all_values.push_back(AllocGrp_NoAllocs_5);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_9;
      set_field(noClearingInstructions_0_1_0, FIX::ClearingInstruction{0}, ClrInstGrp_NoClearingInstructions_9);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_9);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_10;
      set_field(noClearingInstructions_0_1_1, FIX::ClearingInstruction{11}, ClrInstGrp_NoClearingInstructions_10);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_10);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_5;
    set_field(noAllocs_0_0, FIX::CommCurrency{"CHF"}, CommissionData_5);
    set_field(noAllocs_0_0, FIX::CommType{'3'}, CommissionData_5);
    FIX::Commission Commission_5;
    Commission_5.setString("20518341");
set_field(noAllocs_0_0, Commission_5, CommissionData_5);
    set_field(noAllocs_0_0, FIX::FundRenewWaiv{'N'}, CommissionData_5);
    all_values.push_back(CommissionData_5);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_13;
      FIX::MiscFeeAmt MiscFeeAmt_13;
      MiscFeeAmt_13.setString("20534942");
set_field(noMiscFees_0_1_0, MiscFeeAmt_13, MiscFeesGrp_NoMiscFees_13);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_13);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_13);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeType{"STRING_7"}, MiscFeesGrp_NoMiscFees_13);
      all_values.push_back(MiscFeesGrp_NoMiscFees_13);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_14;
      FIX::MiscFeeAmt MiscFeeAmt_14;
      MiscFeeAmt_14.setString("8304705");
set_field(noMiscFees_0_1_1, MiscFeeAmt_14, MiscFeesGrp_NoMiscFees_14);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_14);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_14);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeType{"STRING_3"}, MiscFeesGrp_NoMiscFees_14);
      all_values.push_back(MiscFeesGrp_NoMiscFees_14);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_18;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1725735947"}, NestedParties_NoNestedPartyIDs_18);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_18);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1652487744}, NestedParties_NoNestedPartyIDs_18);
      all_values.push_back(NestedParties_NoNestedPartyIDs_18);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_41;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_276130824"}, NstdPtysSubGrp_NoNestedPartySubIDs_41);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{732380739}, NstdPtysSubGrp_NoNestedPartySubIDs_41);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_41);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_42;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_553631601"}, NstdPtysSubGrp_NoNestedPartySubIDs_42);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{640890211}, NstdPtysSubGrp_NoNestedPartySubIDs_42);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_42);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_43;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_874242651"}, NstdPtysSubGrp_NoNestedPartySubIDs_43);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{924477147}, NstdPtysSubGrp_NoNestedPartySubIDs_43);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_43);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_5;
    set_field(noAllocs_0_0, FIX::SettlDeliveryType{2}, SettlInstructionsData_5);
    set_field(noAllocs_0_0, FIX::StandInstDbID{"STRING_360573494"}, SettlInstructionsData_5);
    set_field(noAllocs_0_0, FIX::StandInstDbName{"STRING_572208823"}, SettlInstructionsData_5);
    set_field(noAllocs_0_0, FIX::StandInstDbType{2}, SettlInstructionsData_5);
    all_values.push_back(SettlInstructionsData_5);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_9;
      set_field(noDlvyInst_0_1_0, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_9);
      set_field(noDlvyInst_0_1_0, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_9);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_9);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_16;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_1965631109"}, SettlParties_NoSettlPartyIDs_16);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_16);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{1218437072}, SettlParties_NoSettlPartyIDs_16);
        all_values.push_back(SettlParties_NoSettlPartyIDs_16);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_30;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_778990767"}, SettlPtysSubGrp_NoSettlPartySubIDs_30);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{1024961122}, SettlPtysSubGrp_NoSettlPartySubIDs_30);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_30);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_31;
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubID{"STRING_797814178"}, SettlPtysSubGrp_NoSettlPartySubIDs_31);
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubIDType{1609461360}, SettlPtysSubGrp_NoSettlPartySubIDs_31);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_31);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_17;
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyID{"STRING_1441441142"}, SettlParties_NoSettlPartyIDs_17);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_17);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyRole{994194537}, SettlParties_NoSettlPartyIDs_17);
        all_values.push_back(SettlParties_NoSettlPartyIDs_17);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_32;
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubID{"STRING_290680273"}, SettlPtysSubGrp_NoSettlPartySubIDs_32);
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubIDType{572446836}, SettlPtysSubGrp_NoSettlPartySubIDs_32);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_32);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoAllocs noAllocs_0_1;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_6;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_393026907"}, AllocGrp_NoAllocs_6);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_6;
    AllocAccruedInterestAmt_6.setString("19431680");
set_field(noAllocs_0_1, AllocAccruedInterestAmt_6, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{722546120}, AllocGrp_NoAllocs_6);
    FIX::AllocAvgPx AllocAvgPx_6;
    AllocAvgPx_6.setString("6691577");
set_field(noAllocs_0_1, AllocAvgPx_6, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::AllocCustomerCapacity{"STRING_528065109"}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::AllocHandlInst{3}, AllocGrp_NoAllocs_6);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_6;
    AllocInterestAtMaturity_6.setString("13100479");
set_field(noAllocs_0_1, AllocInterestAtMaturity_6, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::AllocMethod{1}, AllocGrp_NoAllocs_6);
    FIX::AllocNetMoney AllocNetMoney_6;
    AllocNetMoney_6.setString("531712");
set_field(noAllocs_0_1, AllocNetMoney_6, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::AllocPositionEffect{'C'}, AllocGrp_NoAllocs_6);
    FIX::AllocPrice AllocPrice_8;
    AllocPrice_8.setString("17628812");
set_field(noAllocs_0_1, AllocPrice_8, AllocGrp_NoAllocs_6);
    FIX::AllocQty AllocQty_8;
    AllocQty_8.setString("6253800");
set_field(noAllocs_0_1, AllocQty_8, AllocGrp_NoAllocs_6);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_6;
    AllocSettlCurrAmt_6.setString("2681976");
set_field(noAllocs_0_1, AllocSettlCurrAmt_6, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::AllocSettlCurrency{"CAN"}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::AllocSettlInstType{0}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::AllocText{"STRING_188416320"}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::ClearingFeeIndicator{"STRING_3"}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::EncodedAllocText{"DATA_576982812"}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::EncodedAllocTextLen{1406853392}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_797457930"}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::IndividualAllocType{2}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::MatchStatus{'1'}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::NotifyBrokerOfCredit{true}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::ProcessCode{'4'}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::SecondaryIndividualAllocID{"STRING_1725772008"}, AllocGrp_NoAllocs_6);
    FIX::SettlCurrAmt SettlCurrAmt_6;
    SettlCurrAmt_6.setString("12563309");
set_field(noAllocs_0_1, SettlCurrAmt_6, AllocGrp_NoAllocs_6);
    FIX::SettlCurrFxRate SettlCurrFxRate_6;
    SettlCurrFxRate_6.setString("18121458");
set_field(noAllocs_0_1, SettlCurrFxRate_6, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::SettlCurrFxRateCalc{'M'}, AllocGrp_NoAllocs_6);
    set_field(noAllocs_0_1, FIX::SettlCurrency{"CHF"}, AllocGrp_NoAllocs_6);
    all_values.push_back(AllocGrp_NoAllocs_6);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_11;
      set_field(noClearingInstructions_1_1_0, FIX::ClearingInstruction{0}, ClrInstGrp_NoClearingInstructions_11);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_11);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_12;
      set_field(noClearingInstructions_1_1_1, FIX::ClearingInstruction{7}, ClrInstGrp_NoClearingInstructions_12);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_12);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_13;
      set_field(noClearingInstructions_1_1_2, FIX::ClearingInstruction{0}, ClrInstGrp_NoClearingInstructions_13);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_13);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_6;
    set_field(noAllocs_0_1, FIX::CommCurrency{"GBP"}, CommissionData_6);
    set_field(noAllocs_0_1, FIX::CommType{'6'}, CommissionData_6);
    FIX::Commission Commission_6;
    Commission_6.setString("11255848");
set_field(noAllocs_0_1, Commission_6, CommissionData_6);
    set_field(noAllocs_0_1, FIX::FundRenewWaiv{'Y'}, CommissionData_6);
    all_values.push_back(CommissionData_6);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_15;
      FIX::MiscFeeAmt MiscFeeAmt_15;
      MiscFeeAmt_15.setString("7409824");
set_field(noMiscFees_1_1_0, MiscFeeAmt_15, MiscFeesGrp_NoMiscFees_15);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_15);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_15);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeType{"STRING_8"}, MiscFeesGrp_NoMiscFees_15);
      all_values.push_back(MiscFeesGrp_NoMiscFees_15);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_1.addGroup(noMiscFees_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_1_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_16;
      FIX::MiscFeeAmt MiscFeeAmt_16;
      MiscFeeAmt_16.setString("17263706");
set_field(noMiscFees_1_1_1, MiscFeeAmt_16, MiscFeesGrp_NoMiscFees_16);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_16);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_16);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeType{"STRING_7"}, MiscFeesGrp_NoMiscFees_16);
      all_values.push_back(MiscFeesGrp_NoMiscFees_16);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_1.addGroup(noMiscFees_1_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_19;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1511843400"}, NestedParties_NoNestedPartyIDs_19);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_19);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1106538213}, NestedParties_NoNestedPartyIDs_19);
      all_values.push_back(NestedParties_NoNestedPartyIDs_19);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_44;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1074861270"}, NstdPtysSubGrp_NoNestedPartySubIDs_44);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{215385543}, NstdPtysSubGrp_NoNestedPartySubIDs_44);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_44);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_20;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_1994456873"}, NestedParties_NoNestedPartyIDs_20);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_20);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{1762396794}, NestedParties_NoNestedPartyIDs_20);
      all_values.push_back(NestedParties_NoNestedPartyIDs_20);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_45;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_930133998"}, NstdPtysSubGrp_NoNestedPartySubIDs_45);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{957608766}, NstdPtysSubGrp_NoNestedPartySubIDs_45);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_45);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_6;
    set_field(noAllocs_0_1, FIX::SettlDeliveryType{3}, SettlInstructionsData_6);
    set_field(noAllocs_0_1, FIX::StandInstDbID{"STRING_1723441548"}, SettlInstructionsData_6);
    set_field(noAllocs_0_1, FIX::StandInstDbName{"STRING_680885848"}, SettlInstructionsData_6);
    set_field(noAllocs_0_1, FIX::StandInstDbType{0}, SettlInstructionsData_6);
    all_values.push_back(SettlInstructionsData_6);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_10;
      set_field(noDlvyInst_1_1_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_10);
      set_field(noDlvyInst_1_1_0, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_10);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_10);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_18;
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyID{"STRING_399969489"}, SettlParties_NoSettlPartyIDs_18);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_18);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyRole{1763531125}, SettlParties_NoSettlPartyIDs_18);
        all_values.push_back(SettlParties_NoSettlPartyIDs_18);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_33;
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubID{"STRING_798046268"}, SettlPtysSubGrp_NoSettlPartySubIDs_33);
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubIDType{1342418134}, SettlPtysSubGrp_NoSettlPartySubIDs_33);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_33);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_34;
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubID{"STRING_1969814121"}, SettlPtysSubGrp_NoSettlPartySubIDs_34);
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubIDType{1659338091}, SettlPtysSubGrp_NoSettlPartySubIDs_34);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_34);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_35;
          set_field(noSettlPartySubIDs_1_0_0_3_2, FIX::SettlPartySubID{"STRING_1498287955"}, SettlPtysSubGrp_NoSettlPartySubIDs_35);
          set_field(noSettlPartySubIDs_1_0_0_3_2, FIX::SettlPartySubIDType{1034572517}, SettlPtysSubGrp_NoSettlPartySubIDs_35);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_35);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_2);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_19;
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyID{"STRING_1170604196"}, SettlParties_NoSettlPartyIDs_19);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyIDSource{'8'}, SettlParties_NoSettlPartyIDs_19);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyRole{383661779}, SettlParties_NoSettlPartyIDs_19);
        all_values.push_back(SettlParties_NoSettlPartyIDs_19);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_36;
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubID{"STRING_1044958752"}, SettlPtysSubGrp_NoSettlPartySubIDs_36);
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubIDType{1458523049}, SettlPtysSubGrp_NoSettlPartySubIDs_36);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_36);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_20;
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyID{"STRING_345044304"}, SettlParties_NoSettlPartyIDs_20);
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyIDSource{'8'}, SettlParties_NoSettlPartyIDs_20);
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyRole{117023581}, SettlParties_NoSettlPartyIDs_20);
        all_values.push_back(SettlParties_NoSettlPartyIDs_20);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_37;
          set_field(noSettlPartySubIDs_1_0_2_3_0, FIX::SettlPartySubID{"STRING_976014220"}, SettlPtysSubGrp_NoSettlPartySubIDs_37);
          set_field(noSettlPartySubIDs_1_0_2_3_0, FIX::SettlPartySubIDType{1047157580}, SettlPtysSubGrp_NoSettlPartySubIDs_37);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_37);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_0);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_0);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoAllocs noAllocs_0_2;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_7;
    set_field(noAllocs_0_2, FIX::AllocAccount{"STRING_917566217"}, AllocGrp_NoAllocs_7);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_7;
    AllocAccruedInterestAmt_7.setString("20197516");
set_field(noAllocs_0_2, AllocAccruedInterestAmt_7, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::AllocAcctIDSource{623115480}, AllocGrp_NoAllocs_7);
    FIX::AllocAvgPx AllocAvgPx_7;
    AllocAvgPx_7.setString("15984520");
set_field(noAllocs_0_2, AllocAvgPx_7, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::AllocCustomerCapacity{"STRING_1004354542"}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::AllocHandlInst{3}, AllocGrp_NoAllocs_7);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_7;
    AllocInterestAtMaturity_7.setString("12574391");
set_field(noAllocs_0_2, AllocInterestAtMaturity_7, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::AllocMethod{2}, AllocGrp_NoAllocs_7);
    FIX::AllocNetMoney AllocNetMoney_7;
    AllocNetMoney_7.setString("17422686");
set_field(noAllocs_0_2, AllocNetMoney_7, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::AllocPositionEffect{'F'}, AllocGrp_NoAllocs_7);
    FIX::AllocPrice AllocPrice_9;
    AllocPrice_9.setString("235017");
set_field(noAllocs_0_2, AllocPrice_9, AllocGrp_NoAllocs_7);
    FIX::AllocQty AllocQty_9;
    AllocQty_9.setString("13583161");
set_field(noAllocs_0_2, AllocQty_9, AllocGrp_NoAllocs_7);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_7;
    AllocSettlCurrAmt_7.setString("16743504");
set_field(noAllocs_0_2, AllocSettlCurrAmt_7, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::AllocSettlCurrency{"CHF"}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::AllocSettlInstType{4}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::AllocText{"STRING_333402477"}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::ClearingFeeIndicator{"STRING_4"}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::EncodedAllocText{"DATA_383769758"}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::EncodedAllocTextLen{1504006673}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::IndividualAllocID{"STRING_766702629"}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::IndividualAllocType{2}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::MatchStatus{'0'}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::NotifyBrokerOfCredit{false}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::ProcessCode{'0'}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::SecondaryIndividualAllocID{"STRING_1978709739"}, AllocGrp_NoAllocs_7);
    FIX::SettlCurrAmt SettlCurrAmt_7;
    SettlCurrAmt_7.setString("5561097");
set_field(noAllocs_0_2, SettlCurrAmt_7, AllocGrp_NoAllocs_7);
    FIX::SettlCurrFxRate SettlCurrFxRate_7;
    SettlCurrFxRate_7.setString("1954945");
set_field(noAllocs_0_2, SettlCurrFxRate_7, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::SettlCurrFxRateCalc{'M'}, AllocGrp_NoAllocs_7);
    set_field(noAllocs_0_2, FIX::SettlCurrency{"GBP"}, AllocGrp_NoAllocs_7);
    all_values.push_back(AllocGrp_NoAllocs_7);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_2_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_14;
      set_field(noClearingInstructions_2_1_0, FIX::ClearingInstruction{0}, ClrInstGrp_NoClearingInstructions_14);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_14);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_2.addGroup(noClearingInstructions_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_2_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_15;
      set_field(noClearingInstructions_2_1_1, FIX::ClearingInstruction{12}, ClrInstGrp_NoClearingInstructions_15);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_15);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_2.addGroup(noClearingInstructions_2_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_2_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_16;
      set_field(noClearingInstructions_2_1_2, FIX::ClearingInstruction{2}, ClrInstGrp_NoClearingInstructions_16);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_16);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_2.addGroup(noClearingInstructions_2_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_7;
    set_field(noAllocs_0_2, FIX::CommCurrency{"JPY"}, CommissionData_7);
    set_field(noAllocs_0_2, FIX::CommType{'3'}, CommissionData_7);
    FIX::Commission Commission_7;
    Commission_7.setString("3917406");
set_field(noAllocs_0_2, Commission_7, CommissionData_7);
    set_field(noAllocs_0_2, FIX::FundRenewWaiv{'N'}, CommissionData_7);
    all_values.push_back(CommissionData_7);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_2_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_17;
      FIX::MiscFeeAmt MiscFeeAmt_17;
      MiscFeeAmt_17.setString("4152424");
set_field(noMiscFees_2_1_0, MiscFeeAmt_17, MiscFeesGrp_NoMiscFees_17);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_17);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_17);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeType{"STRING_13"}, MiscFeesGrp_NoMiscFees_17);
      all_values.push_back(MiscFeesGrp_NoMiscFees_17);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_2.addGroup(noMiscFees_2_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_21;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_1570192969"}, NestedParties_NoNestedPartyIDs_21);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_21);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{186915998}, NestedParties_NoNestedPartyIDs_21);
      all_values.push_back(NestedParties_NoNestedPartyIDs_21);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_46;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_2050338450"}, NstdPtysSubGrp_NoNestedPartySubIDs_46);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{954347536}, NstdPtysSubGrp_NoNestedPartySubIDs_46);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_46);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_47;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_412897781"}, NstdPtysSubGrp_NoNestedPartySubIDs_47);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{1714516184}, NstdPtysSubGrp_NoNestedPartySubIDs_47);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_47);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_22;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_1032818474"}, NestedParties_NoNestedPartyIDs_22);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_22);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{123142247}, NestedParties_NoNestedPartyIDs_22);
      all_values.push_back(NestedParties_NoNestedPartyIDs_22);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_48;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_35307415"}, NstdPtysSubGrp_NoNestedPartySubIDs_48);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{1655266179}, NstdPtysSubGrp_NoNestedPartySubIDs_48);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_48);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_49;
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubID{"STRING_323481446"}, NstdPtysSubGrp_NoNestedPartySubIDs_49);
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubIDType{744057174}, NstdPtysSubGrp_NoNestedPartySubIDs_49);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_49);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_50;
        set_field(noNestedPartySubIDs_2_1_2_2, FIX::NestedPartySubID{"STRING_912174415"}, NstdPtysSubGrp_NoNestedPartySubIDs_50);
        set_field(noNestedPartySubIDs_2_1_2_2, FIX::NestedPartySubIDType{41765379}, NstdPtysSubGrp_NoNestedPartySubIDs_50);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_50);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_2);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_23;
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyID{"STRING_903775350"}, NestedParties_NoNestedPartyIDs_23);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_23);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyRole{2062478185}, NestedParties_NoNestedPartyIDs_23);
      all_values.push_back(NestedParties_NoNestedPartyIDs_23);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_51;
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubID{"STRING_1565177887"}, NstdPtysSubGrp_NoNestedPartySubIDs_51);
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubIDType{1530492345}, NstdPtysSubGrp_NoNestedPartySubIDs_51);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_51);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_7;
    set_field(noAllocs_0_2, FIX::SettlDeliveryType{2}, SettlInstructionsData_7);
    set_field(noAllocs_0_2, FIX::StandInstDbID{"STRING_1980420345"}, SettlInstructionsData_7);
    set_field(noAllocs_0_2, FIX::StandInstDbName{"STRING_209338984"}, SettlInstructionsData_7);
    set_field(noAllocs_0_2, FIX::StandInstDbType{3}, SettlInstructionsData_7);
    all_values.push_back(SettlInstructionsData_7);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_2_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_11;
      set_field(noDlvyInst_2_1_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_11);
      set_field(noDlvyInst_2_1_0, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_11);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_11);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_21;
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyID{"STRING_725072058"}, SettlParties_NoSettlPartyIDs_21);
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_21);
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyRole{1419152505}, SettlParties_NoSettlPartyIDs_21);
        all_values.push_back(SettlParties_NoSettlPartyIDs_21);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_38;
          set_field(noSettlPartySubIDs_2_0_0_3_0, FIX::SettlPartySubID{"STRING_351406339"}, SettlPtysSubGrp_NoSettlPartySubIDs_38);
          set_field(noSettlPartySubIDs_2_0_0_3_0, FIX::SettlPartySubIDType{1832050286}, SettlPtysSubGrp_NoSettlPartySubIDs_38);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_38);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_39;
          set_field(noSettlPartySubIDs_2_0_0_3_1, FIX::SettlPartySubID{"STRING_194959397"}, SettlPtysSubGrp_NoSettlPartySubIDs_39);
          set_field(noSettlPartySubIDs_2_0_0_3_1, FIX::SettlPartySubIDType{1384224814}, SettlPtysSubGrp_NoSettlPartySubIDs_39);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_39);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_40;
          set_field(noSettlPartySubIDs_2_0_0_3_2, FIX::SettlPartySubID{"STRING_2076174159"}, SettlPtysSubGrp_NoSettlPartySubIDs_40);
          set_field(noSettlPartySubIDs_2_0_0_3_2, FIX::SettlPartySubIDType{318101644}, SettlPtysSubGrp_NoSettlPartySubIDs_40);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_40);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_2);
        }
        noDlvyInst_2_1_0.addGroup(noSettlPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_22;
        set_field(noSettlPartyIDs_2_0_2_1, FIX::SettlPartyID{"STRING_465054160"}, SettlParties_NoSettlPartyIDs_22);
        set_field(noSettlPartyIDs_2_0_2_1, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_22);
        set_field(noSettlPartyIDs_2_0_2_1, FIX::SettlPartyRole{1973367824}, SettlParties_NoSettlPartyIDs_22);
        all_values.push_back(SettlParties_NoSettlPartyIDs_22);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_41;
          set_field(noSettlPartySubIDs_2_0_1_3_0, FIX::SettlPartySubID{"STRING_708055100"}, SettlPtysSubGrp_NoSettlPartySubIDs_41);
          set_field(noSettlPartySubIDs_2_0_1_3_0, FIX::SettlPartySubIDType{738058591}, SettlPtysSubGrp_NoSettlPartySubIDs_41);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_41);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_42;
          set_field(noSettlPartySubIDs_2_0_1_3_1, FIX::SettlPartySubID{"STRING_830300986"}, SettlPtysSubGrp_NoSettlPartySubIDs_42);
          set_field(noSettlPartySubIDs_2_0_1_3_1, FIX::SettlPartySubIDType{1611830450}, SettlPtysSubGrp_NoSettlPartySubIDs_42);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_42);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_1);
        }
        noDlvyInst_2_1_0.addGroup(noSettlPartyIDs_2_0_2_1);
      }
      noAllocs_0_2.addGroup(noDlvyInst_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_2_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_12;
      set_field(noDlvyInst_2_1_1, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_12);
      set_field(noDlvyInst_2_1_1, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_12);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_12);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_23;
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyID{"STRING_1329190024"}, SettlParties_NoSettlPartyIDs_23);
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_23);
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyRole{738327001}, SettlParties_NoSettlPartyIDs_23);
        all_values.push_back(SettlParties_NoSettlPartyIDs_23);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_43;
          set_field(noSettlPartySubIDs_2_1_0_3_0, FIX::SettlPartySubID{"STRING_337643205"}, SettlPtysSubGrp_NoSettlPartySubIDs_43);
          set_field(noSettlPartySubIDs_2_1_0_3_0, FIX::SettlPartySubIDType{145323566}, SettlPtysSubGrp_NoSettlPartySubIDs_43);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_43);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_44;
          set_field(noSettlPartySubIDs_2_1_0_3_1, FIX::SettlPartySubID{"STRING_84370263"}, SettlPtysSubGrp_NoSettlPartySubIDs_44);
          set_field(noSettlPartySubIDs_2_1_0_3_1, FIX::SettlPartySubIDType{1926563090}, SettlPtysSubGrp_NoSettlPartySubIDs_44);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_44);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_45;
          set_field(noSettlPartySubIDs_2_1_0_3_2, FIX::SettlPartySubID{"STRING_1502950019"}, SettlPtysSubGrp_NoSettlPartySubIDs_45);
          set_field(noSettlPartySubIDs_2_1_0_3_2, FIX::SettlPartySubIDType{576806773}, SettlPtysSubGrp_NoSettlPartySubIDs_45);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_45);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_2);
        }
        noDlvyInst_2_1_1.addGroup(noSettlPartyIDs_2_1_2_0);
      }
      noAllocs_0_2.addGroup(noDlvyInst_2_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_2_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_13;
      set_field(noDlvyInst_2_1_2, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_13);
      set_field(noDlvyInst_2_1_2, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_13);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_13);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_24;
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyID{"STRING_1132078362"}, SettlParties_NoSettlPartyIDs_24);
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_24);
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyRole{1680525917}, SettlParties_NoSettlPartyIDs_24);
        all_values.push_back(SettlParties_NoSettlPartyIDs_24);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_46;
          set_field(noSettlPartySubIDs_2_2_0_3_0, FIX::SettlPartySubID{"STRING_488156328"}, SettlPtysSubGrp_NoSettlPartySubIDs_46);
          set_field(noSettlPartySubIDs_2_2_0_3_0, FIX::SettlPartySubIDType{1609216428}, SettlPtysSubGrp_NoSettlPartySubIDs_46);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_46);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_47;
          set_field(noSettlPartySubIDs_2_2_0_3_1, FIX::SettlPartySubID{"STRING_1645139403"}, SettlPtysSubGrp_NoSettlPartySubIDs_47);
          set_field(noSettlPartySubIDs_2_2_0_3_1, FIX::SettlPartySubIDType{953210489}, SettlPtysSubGrp_NoSettlPartySubIDs_47);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_47);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_48;
          set_field(noSettlPartySubIDs_2_2_0_3_2, FIX::SettlPartySubID{"STRING_1573214355"}, SettlPtysSubGrp_NoSettlPartySubIDs_48);
          set_field(noSettlPartySubIDs_2_2_0_3_2, FIX::SettlPartySubIDType{1471023579}, SettlPtysSubGrp_NoSettlPartySubIDs_48);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_48);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_2);
        }
        noDlvyInst_2_1_2.addGroup(noSettlPartyIDs_2_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_25;
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyID{"STRING_1741746096"}, SettlParties_NoSettlPartyIDs_25);
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_25);
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyRole{61598523}, SettlParties_NoSettlPartyIDs_25);
        all_values.push_back(SettlParties_NoSettlPartyIDs_25);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_49;
          set_field(noSettlPartySubIDs_2_2_1_3_0, FIX::SettlPartySubID{"STRING_1745616258"}, SettlPtysSubGrp_NoSettlPartySubIDs_49);
          set_field(noSettlPartySubIDs_2_2_1_3_0, FIX::SettlPartySubIDType{1973094308}, SettlPtysSubGrp_NoSettlPartySubIDs_49);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_49);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_50;
          set_field(noSettlPartySubIDs_2_2_1_3_1, FIX::SettlPartySubID{"STRING_1169858957"}, SettlPtysSubGrp_NoSettlPartySubIDs_50);
          set_field(noSettlPartySubIDs_2_2_1_3_1, FIX::SettlPartySubIDType{1383412045}, SettlPtysSubGrp_NoSettlPartySubIDs_50);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_50);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_51;
          set_field(noSettlPartySubIDs_2_2_1_3_2, FIX::SettlPartySubID{"STRING_1154800684"}, SettlPtysSubGrp_NoSettlPartySubIDs_51);
          set_field(noSettlPartySubIDs_2_2_1_3_2, FIX::SettlPartySubIDType{1298163178}, SettlPtysSubGrp_NoSettlPartySubIDs_51);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_51);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_2);
        }
        noDlvyInst_2_1_2.addGroup(noSettlPartyIDs_2_2_2_1);
      }
      noAllocs_0_2.addGroup(noDlvyInst_2_1_2);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_4;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_169443757"}, ExecAllocGrp_NoExecs_4);
    set_field(noExecs_0_0, FIX::FirmTradeID{"STRING_1635806384"}, ExecAllocGrp_NoExecs_4);
    set_field(noExecs_0_0, FIX::LastCapacity{'2'}, ExecAllocGrp_NoExecs_4);
    FIX::LastParPx LastParPx_4;
    LastParPx_4.setString("2538140");
set_field(noExecs_0_0, LastParPx_4, ExecAllocGrp_NoExecs_4);
    FIX::LastPx LastPx_4;
    LastPx_4.setString("14148858");
set_field(noExecs_0_0, LastPx_4, ExecAllocGrp_NoExecs_4);
    FIX::LastQty LastQty_4;
    LastQty_4.setString("16225289");
set_field(noExecs_0_0, LastQty_4, ExecAllocGrp_NoExecs_4);
    set_field(noExecs_0_0, FIX::SecondaryExecID{"STRING_830620794"}, ExecAllocGrp_NoExecs_4);
    set_field(noExecs_0_0, FIX::TradeID{"STRING_1919037327"}, ExecAllocGrp_NoExecs_4);
    all_values.push_back(ExecAllocGrp_NoExecs_4);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_5;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_375054159"}, ExecAllocGrp_NoExecs_5);
    set_field(noExecs_0_1, FIX::FirmTradeID{"STRING_679096424"}, ExecAllocGrp_NoExecs_5);
    set_field(noExecs_0_1, FIX::LastCapacity{'2'}, ExecAllocGrp_NoExecs_5);
    FIX::LastParPx LastParPx_5;
    LastParPx_5.setString("16264693");
set_field(noExecs_0_1, LastParPx_5, ExecAllocGrp_NoExecs_5);
    FIX::LastPx LastPx_5;
    LastPx_5.setString("2121386");
set_field(noExecs_0_1, LastPx_5, ExecAllocGrp_NoExecs_5);
    FIX::LastQty LastQty_5;
    LastQty_5.setString("831861");
set_field(noExecs_0_1, LastQty_5, ExecAllocGrp_NoExecs_5);
    set_field(noExecs_0_1, FIX::SecondaryExecID{"STRING_2114625650"}, ExecAllocGrp_NoExecs_5);
    set_field(noExecs_0_1, FIX::TradeID{"STRING_1821355122"}, ExecAllocGrp_NoExecs_5);
    all_values.push_back(ExecAllocGrp_NoExecs_5);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_2;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_6;
    set_field(noExecs_0_2, FIX::ExecID{"STRING_1728325556"}, ExecAllocGrp_NoExecs_6);
    set_field(noExecs_0_2, FIX::FirmTradeID{"STRING_920352491"}, ExecAllocGrp_NoExecs_6);
    set_field(noExecs_0_2, FIX::LastCapacity{'2'}, ExecAllocGrp_NoExecs_6);
    FIX::LastParPx LastParPx_6;
    LastParPx_6.setString("10518654");
set_field(noExecs_0_2, LastParPx_6, ExecAllocGrp_NoExecs_6);
    FIX::LastPx LastPx_6;
    LastPx_6.setString("5146149");
set_field(noExecs_0_2, LastPx_6, ExecAllocGrp_NoExecs_6);
    FIX::LastQty LastQty_6;
    LastQty_6.setString("13808716");
set_field(noExecs_0_2, LastQty_6, ExecAllocGrp_NoExecs_6);
    set_field(noExecs_0_2, FIX::SecondaryExecID{"STRING_1113464010"}, ExecAllocGrp_NoExecs_6);
    set_field(noExecs_0_2, FIX::TradeID{"STRING_939178373"}, ExecAllocGrp_NoExecs_6);
    all_values.push_back(ExecAllocGrp_NoExecs_6);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_2;
  set_field(msg, FIX::AgreementCurrency{"USD"}, FinancingDetails_2);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_2109037331"}, FinancingDetails_2);
  set_field(msg, FIX::AgreementDesc{"STRING_214932643"}, FinancingDetails_2);
  set_field(msg, FIX::AgreementID{"STRING_2093875354"}, FinancingDetails_2);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_2);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_189188042"}, FinancingDetails_2);
  FIX::MarginRatio MarginRatio_2;
  MarginRatio_2.setString("54.640000");
set_field(msg, MarginRatio_2, FinancingDetails_2);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_748039597"}, FinancingDetails_2);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_2);
  all_values.push_back(FinancingDetails_2);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_5;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_15441776"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1931295991}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1200270278"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1934479103}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_158866503"}, InstrumentLeg_5);
    FIX::LegContractMultiplier LegContractMultiplier_5;
    LegContractMultiplier_5.setString("18793667");
set_field(noLegs_0_0, LegContractMultiplier_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{690627497}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1785335825"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_2091505396"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_773813649"}, InstrumentLeg_5);
    FIX::LegCouponRate LegCouponRate_5;
    LegCouponRate_5.setString("78.270000");
set_field(noLegs_0_0, LegCouponRate_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1765376870"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_864979051"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1406521045}, InstrumentLeg_5);
    FIX::LegFactor LegFactor_5;
    LegFactor_5.setString("10399616");
set_field(noLegs_0_0, LegFactor_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{98367040}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_372501407"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1979139984"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1077371286"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1311576078"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1940693667"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1292303930"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1257967784"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1052926880"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_5);
    FIX::LegOptionRatio LegOptionRatio_5;
    LegOptionRatio_5.setString("13738032");
set_field(noLegs_0_0, LegOptionRatio_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1800966478"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1790258979"}, InstrumentLeg_5);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_5;
    LegPriceUnitOfMeasureQty_5.setString("17434527");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegProduct{1816408254}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1574071322}, InstrumentLeg_5);
    FIX::LegRatioQty LegRatioQty_5;
    LegRatioQty_5.setString("7962393");
set_field(noLegs_0_0, LegRatioQty_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1603403709"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1732937825"}, InstrumentLeg_5);
    FIX::LegRepurchaseRate LegRepurchaseRate_5;
    LegRepurchaseRate_5.setString("24.180000");
set_field(noLegs_0_0, LegRepurchaseRate_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{146547558}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1370790002"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_472144167"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_920361208"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_975784182"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_90037389"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1275016765"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_955016441"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_5);
    FIX::LegStrikePrice LegStrikePrice_5;
    LegStrikePrice_5.setString("10533834");
set_field(noLegs_0_0, LegStrikePrice_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_906555570"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_225265151"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_2130754767"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_70648000"}, InstrumentLeg_5);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_5;
    LegUnitOfMeasureQty_5.setString("184751");
set_field(noLegs_0_0, LegUnitOfMeasureQty_5, InstrumentLeg_5);
    all_values.push_back(InstrumentLeg_5);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_8;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1328615784"}, LegSecAltIDGrp_NoLegSecurityAltID_8);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1071402051"}, LegSecAltIDGrp_NoLegSecurityAltID_8);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_8);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_6;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_609583373"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{554935385}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_724884881"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{252358704}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_150904470"}, InstrumentLeg_6);
    FIX::LegContractMultiplier LegContractMultiplier_6;
    LegContractMultiplier_6.setString("3938094");
set_field(noLegs_0_1, LegContractMultiplier_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1826430027}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_947143833"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1997213196"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1411884204"}, InstrumentLeg_6);
    FIX::LegCouponRate LegCouponRate_6;
    LegCouponRate_6.setString("62.520000");
set_field(noLegs_0_1, LegCouponRate_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_2143760755"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_916638315"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1610974741}, InstrumentLeg_6);
    FIX::LegFactor LegFactor_6;
    LegFactor_6.setString("20374478");
set_field(noLegs_0_1, LegFactor_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{44171432}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_964621946"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_844980601"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_578225595"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1358230761"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1898364082"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1484781165"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1583495913"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1881635202"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_6);
    FIX::LegOptionRatio LegOptionRatio_6;
    LegOptionRatio_6.setString("16019710");
set_field(noLegs_0_1, LegOptionRatio_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1009726603"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_736561301"}, InstrumentLeg_6);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_6;
    LegPriceUnitOfMeasureQty_6.setString("5258894");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegProduct{1619309977}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1291496686}, InstrumentLeg_6);
    FIX::LegRatioQty LegRatioQty_6;
    LegRatioQty_6.setString("12507743");
set_field(noLegs_0_1, LegRatioQty_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1871668681"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1442401156"}, InstrumentLeg_6);
    FIX::LegRepurchaseRate LegRepurchaseRate_6;
    LegRepurchaseRate_6.setString("38.540000");
set_field(noLegs_0_1, LegRepurchaseRate_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1550615060}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_242061342"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1494313403"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_815015617"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1717327594"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1490590510"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1450206176"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_259745177"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_6);
    FIX::LegStrikePrice LegStrikePrice_6;
    LegStrikePrice_6.setString("3039166");
set_field(noLegs_0_1, LegStrikePrice_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1878319215"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_104715479"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_882142204"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1089066328"}, InstrumentLeg_6);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_6;
    LegUnitOfMeasureQty_6.setString("20030795");
set_field(noLegs_0_1, LegUnitOfMeasureQty_6, InstrumentLeg_6);
    all_values.push_back(InstrumentLeg_6);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_9;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_525078593"}, LegSecAltIDGrp_NoLegSecurityAltID_9);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1737231115"}, LegSecAltIDGrp_NoLegSecurityAltID_9);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_9);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_10;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1774868886"}, LegSecAltIDGrp_NoLegSecurityAltID_10);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_2127049677"}, LegSecAltIDGrp_NoLegSecurityAltID_10);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_10);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_11;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_599474071"}, LegSecAltIDGrp_NoLegSecurityAltID_11);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_363946540"}, LegSecAltIDGrp_NoLegSecurityAltID_11);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_11);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_7;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_505455515"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{71300400}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1655443226"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{1756229883}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_1942969081"}, InstrumentLeg_7);
    FIX::LegContractMultiplier LegContractMultiplier_7;
    LegContractMultiplier_7.setString("9503607");
set_field(noLegs_0_2, LegContractMultiplier_7, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1253330089}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1346100494"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_1192422077"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_600159844"}, InstrumentLeg_7);
    FIX::LegCouponRate LegCouponRate_7;
    LegCouponRate_7.setString("24.630000");
set_field(noLegs_0_2, LegCouponRate_7, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_762266023"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegCurrency{"CHF"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_132036740"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{203011883}, InstrumentLeg_7);
    FIX::LegFactor LegFactor_7;
    LegFactor_7.setString("2300522");
set_field(noLegs_0_2, LegFactor_7, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1539255265}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_506928493"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2108371475"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_1643970744"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_1389070697"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1049954155"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_1499566658"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1608510419"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_1575032749"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_7);
    FIX::LegOptionRatio LegOptionRatio_7;
    LegOptionRatio_7.setString("12358956");
set_field(noLegs_0_2, LegOptionRatio_7, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_1554598778"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1688788196"}, InstrumentLeg_7);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_7;
    LegPriceUnitOfMeasureQty_7.setString("15998421");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_7, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegProduct{2060054293}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegPutOrCall{1760088596}, InstrumentLeg_7);
    FIX::LegRatioQty LegRatioQty_7;
    LegRatioQty_7.setString("11078017");
set_field(noLegs_0_2, LegRatioQty_7, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1668800528"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1555574030"}, InstrumentLeg_7);
    FIX::LegRepurchaseRate LegRepurchaseRate_7;
    LegRepurchaseRate_7.setString("25.110000");
set_field(noLegs_0_2, LegRepurchaseRate_7, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{774646970}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_754190876"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_1103100940"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_1374806814"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_767823339"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_1865366963"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_1318073521"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegSide{'8'}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1997403703"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_7);
    FIX::LegStrikePrice LegStrikePrice_7;
    LegStrikePrice_7.setString("13891753");
set_field(noLegs_0_2, LegStrikePrice_7, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_2028013897"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_275118417"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_885662417"}, InstrumentLeg_7);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1269600947"}, InstrumentLeg_7);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_7;
    LegUnitOfMeasureQty_7.setString("13250725");
set_field(noLegs_0_2, LegUnitOfMeasureQty_7, InstrumentLeg_7);
    all_values.push_back(InstrumentLeg_7);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_12;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_730627718"}, LegSecAltIDGrp_NoLegSecurityAltID_12);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_752621673"}, LegSecAltIDGrp_NoLegSecurityAltID_12);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_12);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_13;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_1327059552"}, LegSecAltIDGrp_NoLegSecurityAltID_13);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_1966523375"}, LegSecAltIDGrp_NoLegSecurityAltID_13);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_13);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_14;
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltID{"STRING_159736803"}, LegSecAltIDGrp_NoLegSecurityAltID_14);
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltIDSource{"STRING_868364101"}, LegSecAltIDGrp_NoLegSecurityAltID_14);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_14);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_6;
  FIX::AttachmentPoint AttachmentPoint_6;
  AttachmentPoint_6.setString("19.250000");
set_field(msg, AttachmentPoint_6, Instrument_6);
  set_field(msg, FIX::CFICode{"STRING_72307449"}, Instrument_6);
  set_field(msg, FIX::CPProgram{2}, Instrument_6);
  set_field(msg, FIX::CPRegType{"STRING_379200053"}, Instrument_6);
  FIX::CapPrice CapPrice_6;
  CapPrice_6.setString("17411079");
set_field(msg, CapPrice_6, Instrument_6);
  FIX::ContractMultiplier ContractMultiplier_6;
  ContractMultiplier_6.setString("20365430");
set_field(msg, ContractMultiplier_6, Instrument_6);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_6);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_368271299"}, Instrument_6);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_643250307"}, Instrument_6);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1392979856"}, Instrument_6);
  FIX::CouponRate CouponRate_6;
  CouponRate_6.setString("81.140000");
set_field(msg, CouponRate_6, Instrument_6);
  set_field(msg, FIX::CreditRating{"STRING_1411073646"}, Instrument_6);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1110863171"}, Instrument_6);
  FIX::DetachmentPoint DetachmentPoint_6;
  DetachmentPoint_6.setString("79.870000");
set_field(msg, DetachmentPoint_6, Instrument_6);
  set_field(msg, FIX::EncodedIssuer{"DATA_1495251976"}, Instrument_6);
  set_field(msg, FIX::EncodedIssuerLen{960783226}, Instrument_6);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_287269743"}, Instrument_6);
  set_field(msg, FIX::EncodedSecurityDescLen{1809482566}, Instrument_6);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_6);
  FIX::Factor Factor_6;
  Factor_6.setString("1677999");
set_field(msg, Factor_6, Instrument_6);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_6);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_6);
  FIX::FloorPrice FloorPrice_6;
  FloorPrice_6.setString("14374009");
set_field(msg, FloorPrice_6, Instrument_6);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_6);
  set_field(msg, FIX::InstrRegistry{"STRING_1325882742"}, Instrument_6);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_6);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2014811581"}, Instrument_6);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_505458647"}, Instrument_6);
  set_field(msg, FIX::Issuer{"STRING_1987068385"}, Instrument_6);
  set_field(msg, FIX::ListMethod{1}, Instrument_6);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1373822748"}, Instrument_6);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1258466662"}, Instrument_6);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_99372186"}, Instrument_6);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1854791797"}, Instrument_6);
  FIX::MinPriceIncrement MinPriceIncrement_6;
  MinPriceIncrement_6.setString("16376667");
set_field(msg, MinPriceIncrement_6, Instrument_6);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_6;
  MinPriceIncrementAmount_6.setString("18404801");
set_field(msg, MinPriceIncrementAmount_6, Instrument_6);
  set_field(msg, FIX::NTPositionLimit{1743851229}, Instrument_6);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_6;
  NotionalPercentageOutstanding_6.setString("56.310000");
set_field(msg, NotionalPercentageOutstanding_6, Instrument_6);
  set_field(msg, FIX::OptAttribute{'6'}, Instrument_6);
  FIX::OptPayoutAmount OptPayoutAmount_6;
  OptPayoutAmount_6.setString("2396178");
set_field(msg, OptPayoutAmount_6, Instrument_6);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_6);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_6;
  OriginalNotionalPercentageOutstanding_6.setString("59.290000");
set_field(msg, OriginalNotionalPercentageOutstanding_6, Instrument_6);
  set_field(msg, FIX::Pool{"STRING_1650691535"}, Instrument_6);
  set_field(msg, FIX::PositionLimit{136421362}, Instrument_6);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_6);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_998459863"}, Instrument_6);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_6;
  PriceUnitOfMeasureQty_6.setString("10972045");
set_field(msg, PriceUnitOfMeasureQty_6, Instrument_6);
  set_field(msg, FIX::Product{4}, Instrument_6);
  set_field(msg, FIX::ProductComplex{"STRING_660458782"}, Instrument_6);
  set_field(msg, FIX::PutOrCall{1}, Instrument_6);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1025600004"}, Instrument_6);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_597576117"}, Instrument_6);
  FIX::RepurchaseRate RepurchaseRate_6;
  RepurchaseRate_6.setString("31.540000");
set_field(msg, RepurchaseRate_6, Instrument_6);
  set_field(msg, FIX::RepurchaseTerm{315517296}, Instrument_6);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_6);
  set_field(msg, FIX::SecurityDesc{"STRING_1566215897"}, Instrument_6);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_336062306"}, Instrument_6);
  set_field(msg, FIX::SecurityGroup{"STRING_1727093959"}, Instrument_6);
  set_field(msg, FIX::SecurityID{"STRING_2071674544"}, Instrument_6);
  set_field(msg, FIX::SecurityIDSource{"STRING_D"}, Instrument_6);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_6);
  set_field(msg, FIX::SecuritySubType{"STRING_1298013644"}, Instrument_6);
  set_field(msg, FIX::SecurityType{"STRING_FXFWD"}, Instrument_6);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_6);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_6);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_924296774"}, Instrument_6);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1546527397"}, Instrument_6);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_6);
  FIX::StrikeMultiplier StrikeMultiplier_6;
  StrikeMultiplier_6.setString("16077952");
set_field(msg, StrikeMultiplier_6, Instrument_6);
  FIX::StrikePrice StrikePrice_6;
  StrikePrice_6.setString("8413072");
set_field(msg, StrikePrice_6, Instrument_6);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_6);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_6;
  StrikePriceBoundaryPrecision_6.setString("74.930000");
set_field(msg, StrikePriceBoundaryPrecision_6, Instrument_6);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_6);
  FIX::StrikeValue StrikeValue_6;
  StrikeValue_6.setString("20138219");
set_field(msg, StrikeValue_6, Instrument_6);
  set_field(msg, FIX::Symbol{"STRING_1835187761"}, Instrument_6);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_6);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_6);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_6);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_6);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_6;
  UnitOfMeasureQty_6.setString("1157387");
set_field(msg, UnitOfMeasureQty_6, Instrument_6);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_6);
  all_values.push_back(Instrument_6);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_11;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_11);
    FIX::ComplexEventPrice ComplexEventPrice_11;
    ComplexEventPrice_11.setString("18866214");
set_field(noComplexEvents_0_0, ComplexEventPrice_11, ComplexEvents_NoComplexEvents_11);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_11);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_11;
    ComplexEventPriceBoundaryPrecision_11.setString("77.900000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_11, ComplexEvents_NoComplexEvents_11);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_11);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_11);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_11;
    ComplexOptPayoutAmount_11.setString("18464786");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_11, ComplexEvents_NoComplexEvents_11);
    all_values.push_back(ComplexEvents_NoComplexEvents_11);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_23;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 35, 3, 20, 6, 2015)}, ComplexEventDates_NoComplexEventDates_23);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 17, 25, 23, 12, 2005)}, ComplexEventDates_NoComplexEventDates_23);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_23);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_57;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 39, 9)}, ComplexEventTimes_NoComplexEventTimes_57);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 51, 33)}, ComplexEventTimes_NoComplexEventTimes_57);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_57);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_58;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 56, 54)}, ComplexEventTimes_NoComplexEventTimes_58);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 32, 22)}, ComplexEventTimes_NoComplexEventTimes_58);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_58);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_24;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 49, 14, 11, 7, 2003)}, ComplexEventDates_NoComplexEventDates_24);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 57, 23, 8, 9, 2002)}, ComplexEventDates_NoComplexEventDates_24);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_24);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_59;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 38, 54)}, ComplexEventTimes_NoComplexEventTimes_59);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 37, 57)}, ComplexEventTimes_NoComplexEventTimes_59);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_59);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_60;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 53, 57)}, ComplexEventTimes_NoComplexEventTimes_60);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 22, 53)}, ComplexEventTimes_NoComplexEventTimes_60);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_60);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_12;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_12);
    FIX::ComplexEventPrice ComplexEventPrice_12;
    ComplexEventPrice_12.setString("9210651");
set_field(noComplexEvents_0_1, ComplexEventPrice_12, ComplexEvents_NoComplexEvents_12);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_12);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_12;
    ComplexEventPriceBoundaryPrecision_12.setString("89.920000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_12, ComplexEvents_NoComplexEvents_12);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_12);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_12);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_12;
    ComplexOptPayoutAmount_12.setString("1862768");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_12, ComplexEvents_NoComplexEvents_12);
    all_values.push_back(ComplexEvents_NoComplexEvents_12);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_25;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 36, 33, 21, 8, 2008)}, ComplexEventDates_NoComplexEventDates_25);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 2, 47, 6, 11, 2004)}, ComplexEventDates_NoComplexEventDates_25);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_25);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_61;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 37, 11)}, ComplexEventTimes_NoComplexEventTimes_61);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 33, 19)}, ComplexEventTimes_NoComplexEventTimes_61);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_61);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_62;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 54, 43)}, ComplexEventTimes_NoComplexEventTimes_62);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 55, 11)}, ComplexEventTimes_NoComplexEventTimes_62);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_62);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_63;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 40, 8)}, ComplexEventTimes_NoComplexEventTimes_63);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 32, 6)}, ComplexEventTimes_NoComplexEventTimes_63);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_63);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_13;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_13);
    FIX::ComplexEventPrice ComplexEventPrice_13;
    ComplexEventPrice_13.setString("12096314");
set_field(noComplexEvents_0_2, ComplexEventPrice_13, ComplexEvents_NoComplexEvents_13);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_13);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_13;
    ComplexEventPriceBoundaryPrecision_13.setString("71.720000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_13, ComplexEvents_NoComplexEvents_13);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_13);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_13);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_13;
    ComplexOptPayoutAmount_13.setString("2314119");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_13, ComplexEvents_NoComplexEvents_13);
    all_values.push_back(ComplexEvents_NoComplexEvents_13);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_26;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 1, 23, 6, 3, 2006)}, ComplexEventDates_NoComplexEventDates_26);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 28, 35, 2, 4, 2004)}, ComplexEventDates_NoComplexEventDates_26);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_26);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_64;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 25, 3)}, ComplexEventTimes_NoComplexEventTimes_64);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 27, 30)}, ComplexEventTimes_NoComplexEventTimes_64);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_64);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_65;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 16, 6)}, ComplexEventTimes_NoComplexEventTimes_65);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 34, 20)}, ComplexEventTimes_NoComplexEventTimes_65);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_65);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_66;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 13, 22)}, ComplexEventTimes_NoComplexEventTimes_66);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 57, 58)}, ComplexEventTimes_NoComplexEventTimes_66);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_66);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_27;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 25, 13, 24, 5, 2007)}, ComplexEventDates_NoComplexEventDates_27);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 24, 42, 18, 6, 2009)}, ComplexEventDates_NoComplexEventDates_27);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_27);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_67;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 0, 53)}, ComplexEventTimes_NoComplexEventTimes_67);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 19, 54)}, ComplexEventTimes_NoComplexEventTimes_67);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_67);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_68;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 8, 32)}, ComplexEventTimes_NoComplexEventTimes_68);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 29, 38)}, ComplexEventTimes_NoComplexEventTimes_68);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_68);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_28;
      set_field(noComplexEventDates_2_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 55, 16, 27, 12, 2015)}, ComplexEventDates_NoComplexEventDates_28);
      set_field(noComplexEventDates_2_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 40, 44, 12, 2, 2004)}, ComplexEventDates_NoComplexEventDates_28);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_28);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_69;
        set_field(noComplexEventTimes_2_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 40, 45)}, ComplexEventTimes_NoComplexEventTimes_69);
        set_field(noComplexEventTimes_2_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 56, 10)}, ComplexEventTimes_NoComplexEventTimes_69);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_69);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_70;
        set_field(noComplexEventTimes_2_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 10, 25)}, ComplexEventTimes_NoComplexEventTimes_70);
        set_field(noComplexEventTimes_2_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 54, 40)}, ComplexEventTimes_NoComplexEventTimes_70);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_70);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_14;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_2135876029"}, EvntGrp_NoEvents_14);
    FIX::EventPx EventPx_14;
    EventPx_14.setString("13836381");
set_field(noEvents_0_0, EventPx_14, EvntGrp_NoEvents_14);
    set_field(noEvents_0_0, FIX::EventText{"STRING_415954013"}, EvntGrp_NoEvents_14);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(15, 8, 23, 5, 5, 2002)}, EvntGrp_NoEvents_14);
    set_field(noEvents_0_0, FIX::EventType{10}, EvntGrp_NoEvents_14);
    all_values.push_back(EvntGrp_NoEvents_14);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_15;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1354226865"}, EvntGrp_NoEvents_15);
    FIX::EventPx EventPx_15;
    EventPx_15.setString("11802626");
set_field(noEvents_0_1, EventPx_15, EvntGrp_NoEvents_15);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1059410741"}, EvntGrp_NoEvents_15);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(23, 13, 22, 19, 9, 2010)}, EvntGrp_NoEvents_15);
    set_field(noEvents_0_1, FIX::EventType{2}, EvntGrp_NoEvents_15);
    all_values.push_back(EvntGrp_NoEvents_15);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_16;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1638775248"}, EvntGrp_NoEvents_16);
    FIX::EventPx EventPx_16;
    EventPx_16.setString("8451569");
set_field(noEvents_0_2, EventPx_16, EvntGrp_NoEvents_16);
    set_field(noEvents_0_2, FIX::EventText{"STRING_270427203"}, EvntGrp_NoEvents_16);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(3, 44, 0, 20, 6, 2017)}, EvntGrp_NoEvents_16);
    set_field(noEvents_0_2, FIX::EventType{1}, EvntGrp_NoEvents_16);
    all_values.push_back(EvntGrp_NoEvents_16);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_12;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_557771274"}, InstrumentParties_NoInstrumentParties_12);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_12);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1207936942}, InstrumentParties_NoInstrumentParties_12);
    all_values.push_back(InstrumentParties_NoInstrumentParties_12);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1621230265"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{928858615}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_13;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1994521526"}, InstrumentParties_NoInstrumentParties_13);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_13);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{135601832}, InstrumentParties_NoInstrumentParties_13);
    all_values.push_back(InstrumentParties_NoInstrumentParties_13);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1612398908"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{899871730}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_14;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_508531093"}, SecAltIDGrp_NoSecurityAltID_14);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_688615704"}, SecAltIDGrp_NoSecurityAltID_14);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_14);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_15;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1961244698"}, SecAltIDGrp_NoSecurityAltID_15);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1958895189"}, SecAltIDGrp_NoSecurityAltID_15);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_15);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_16;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1185369995"}, SecAltIDGrp_NoSecurityAltID_16);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1545907591"}, SecAltIDGrp_NoSecurityAltID_16);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_16);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_12;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1450186790"}, SecurityXML_12);
  set_field(msg, FIX::SecurityXMLLen{2030526976}, SecurityXML_12);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1816334794"}, SecurityXML_12);
  all_values.push_back(SecurityXML_12);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_2;
  set_field(msg, FIX::DeliveryForm{2}, InstrumentExtension_2);
  FIX::PctAtRisk PctAtRisk_2;
  PctAtRisk_2.setString("14.190000");
set_field(msg, PctAtRisk_2, InstrumentExtension_2);
  all_values.push_back(InstrumentExtension_2);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_3;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{26}, AttrbGrp_NoInstrAttrib_3);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_440021843"}, AttrbGrp_NoInstrAttrib_3);
    all_values.push_back(AttrbGrp_NoInstrAttrib_3);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_4;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{11}, AttrbGrp_NoInstrAttrib_4);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_292824389"}, AttrbGrp_NoInstrAttrib_4);
    all_values.push_back(AttrbGrp_NoInstrAttrib_4);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationReport::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_4;
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_1962468122"}, OrdAllocGrp_NoOrders_4);
    set_field(noOrders_0_0, FIX::ListID{"STRING_850595663"}, OrdAllocGrp_NoOrders_4);
    FIX::OrderAvgPx OrderAvgPx_4;
    OrderAvgPx_4.setString("7176564");
set_field(noOrders_0_0, OrderAvgPx_4, OrdAllocGrp_NoOrders_4);
    FIX::OrderBookingQty OrderBookingQty_4;
    OrderBookingQty_4.setString("10229214");
set_field(noOrders_0_0, OrderBookingQty_4, OrdAllocGrp_NoOrders_4);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_1935111041"}, OrdAllocGrp_NoOrders_4);
    FIX::OrderQty OrderQty_4;
    OrderQty_4.setString("1914030");
set_field(noOrders_0_0, OrderQty_4, OrdAllocGrp_NoOrders_4);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_1951780031"}, OrdAllocGrp_NoOrders_4);
    set_field(noOrders_0_0, FIX::SecondaryOrderID{"STRING_1782148919"}, OrdAllocGrp_NoOrders_4);
    all_values.push_back(OrdAllocGrp_NoOrders_4);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_7;
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyID{"STRING_2087381864"}, NestedParties2_NoNested2PartyIDs_7);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyIDSource{'6'}, NestedParties2_NoNested2PartyIDs_7);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyRole{209306462}, NestedParties2_NoNested2PartyIDs_7);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_7);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_13;
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubID{"STRING_2140163871"}, NstdPtys2SubGrp_NoNested2PartySubIDs_13);
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubIDType{717837556}, NstdPtys2SubGrp_NoNested2PartySubIDs_13);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_13);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_14;
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubID{"STRING_1528385650"}, NstdPtys2SubGrp_NoNested2PartySubIDs_14);
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubIDType{1953924921}, NstdPtys2SubGrp_NoNested2PartySubIDs_14);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_14);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_8;
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyID{"STRING_529249097"}, NestedParties2_NoNested2PartyIDs_8);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyIDSource{'5'}, NestedParties2_NoNested2PartyIDs_8);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyRole{1352348865}, NestedParties2_NoNested2PartyIDs_8);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_8);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_15;
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubID{"STRING_449315325"}, NstdPtys2SubGrp_NoNested2PartySubIDs_15);
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubIDType{1021200011}, NstdPtys2SubGrp_NoNested2PartySubIDs_15);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_15);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_16;
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubID{"STRING_1103590735"}, NstdPtys2SubGrp_NoNested2PartySubIDs_16);
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubIDType{1638056745}, NstdPtys2SubGrp_NoNested2PartySubIDs_16);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_16);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_9;
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyID{"STRING_831839422"}, NestedParties2_NoNested2PartyIDs_9);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_9);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyRole{2078078588}, NestedParties2_NoNested2PartyIDs_9);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_9);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_17;
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubID{"STRING_1110708551"}, NstdPtys2SubGrp_NoNested2PartySubIDs_17);
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubIDType{1005535344}, NstdPtys2SubGrp_NoNested2PartySubIDs_17);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_17);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_18;
        set_field(noNested2PartySubIDs_0_2_2_1, FIX::Nested2PartySubID{"STRING_1325400656"}, NstdPtys2SubGrp_NoNested2PartySubIDs_18);
        set_field(noNested2PartySubIDs_0_2_2_1, FIX::Nested2PartySubIDType{1961304215}, NstdPtys2SubGrp_NoNested2PartySubIDs_18);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_18);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_19;
        set_field(noNested2PartySubIDs_0_2_2_2, FIX::Nested2PartySubID{"STRING_1723191763"}, NstdPtys2SubGrp_NoNested2PartySubIDs_19);
        set_field(noNested2PartySubIDs_0_2_2_2, FIX::Nested2PartySubIDType{200838425}, NstdPtys2SubGrp_NoNested2PartySubIDs_19);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_19);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_5;
    set_field(noOrders_0_1, FIX::ClOrdID{"STRING_1748931608"}, OrdAllocGrp_NoOrders_5);
    set_field(noOrders_0_1, FIX::ListID{"STRING_1914594799"}, OrdAllocGrp_NoOrders_5);
    FIX::OrderAvgPx OrderAvgPx_5;
    OrderAvgPx_5.setString("51348");
set_field(noOrders_0_1, OrderAvgPx_5, OrdAllocGrp_NoOrders_5);
    FIX::OrderBookingQty OrderBookingQty_5;
    OrderBookingQty_5.setString("13835968");
set_field(noOrders_0_1, OrderBookingQty_5, OrdAllocGrp_NoOrders_5);
    set_field(noOrders_0_1, FIX::OrderID{"STRING_511502353"}, OrdAllocGrp_NoOrders_5);
    FIX::OrderQty OrderQty_5;
    OrderQty_5.setString("20925166");
set_field(noOrders_0_1, OrderQty_5, OrdAllocGrp_NoOrders_5);
    set_field(noOrders_0_1, FIX::SecondaryClOrdID{"STRING_2045562663"}, OrdAllocGrp_NoOrders_5);
    set_field(noOrders_0_1, FIX::SecondaryOrderID{"STRING_720808816"}, OrdAllocGrp_NoOrders_5);
    all_values.push_back(OrdAllocGrp_NoOrders_5);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_10;
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyID{"STRING_2038242886"}, NestedParties2_NoNested2PartyIDs_10);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_10);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyRole{165704973}, NestedParties2_NoNested2PartyIDs_10);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_10);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_20;
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubID{"STRING_1967895469"}, NstdPtys2SubGrp_NoNested2PartySubIDs_20);
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubIDType{731976970}, NstdPtys2SubGrp_NoNested2PartySubIDs_20);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_20);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    msg.addGroup(noOrders_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoOrders noOrders_0_2;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_6;
    set_field(noOrders_0_2, FIX::ClOrdID{"STRING_1049549377"}, OrdAllocGrp_NoOrders_6);
    set_field(noOrders_0_2, FIX::ListID{"STRING_1799847709"}, OrdAllocGrp_NoOrders_6);
    FIX::OrderAvgPx OrderAvgPx_6;
    OrderAvgPx_6.setString("11812922");
set_field(noOrders_0_2, OrderAvgPx_6, OrdAllocGrp_NoOrders_6);
    FIX::OrderBookingQty OrderBookingQty_6;
    OrderBookingQty_6.setString("20707493");
set_field(noOrders_0_2, OrderBookingQty_6, OrdAllocGrp_NoOrders_6);
    set_field(noOrders_0_2, FIX::OrderID{"STRING_755954796"}, OrdAllocGrp_NoOrders_6);
    FIX::OrderQty OrderQty_6;
    OrderQty_6.setString("6718653");
set_field(noOrders_0_2, OrderQty_6, OrdAllocGrp_NoOrders_6);
    set_field(noOrders_0_2, FIX::SecondaryClOrdID{"STRING_755105163"}, OrdAllocGrp_NoOrders_6);
    set_field(noOrders_0_2, FIX::SecondaryOrderID{"STRING_1573838958"}, OrdAllocGrp_NoOrders_6);
    all_values.push_back(OrdAllocGrp_NoOrders_6);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_11;
      set_field(noNested2PartyIDs_2_1_0, FIX::Nested2PartyID{"STRING_118037697"}, NestedParties2_NoNested2PartyIDs_11);
      set_field(noNested2PartyIDs_2_1_0, FIX::Nested2PartyIDSource{'5'}, NestedParties2_NoNested2PartyIDs_11);
      set_field(noNested2PartyIDs_2_1_0, FIX::Nested2PartyRole{1607995677}, NestedParties2_NoNested2PartyIDs_11);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_11);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_21;
        set_field(noNested2PartySubIDs_2_0_2_0, FIX::Nested2PartySubID{"STRING_350884429"}, NstdPtys2SubGrp_NoNested2PartySubIDs_21);
        set_field(noNested2PartySubIDs_2_0_2_0, FIX::Nested2PartySubIDType{1183703792}, NstdPtys2SubGrp_NoNested2PartySubIDs_21);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_21);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_0);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_0);
    }
    msg.addGroup(noOrders_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_8;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_2099816037"}, Parties_NoPartyIDs_8);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_8);
    set_field(noPartyIDs_0_0, FIX::PartyRole{20}, Parties_NoPartyIDs_8);
    all_values.push_back(Parties_NoPartyIDs_8);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_20;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1462317297"}, PtysSubGrp_NoPartySubIDs_20);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_20);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_20);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_21;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1234008285"}, PtysSubGrp_NoPartySubIDs_21);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_21);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_21);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_9;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_231763934"}, Parties_NoPartyIDs_9);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_9);
    set_field(noPartyIDs_0_1, FIX::PartyRole{51}, Parties_NoPartyIDs_9);
    all_values.push_back(Parties_NoPartyIDs_9);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_22;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_821968035"}, PtysSubGrp_NoPartySubIDs_22);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_22);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_22);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_23;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1129445878"}, PtysSubGrp_NoPartySubIDs_23);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_23);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_23);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_24;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_947064719"}, PtysSubGrp_NoPartySubIDs_24);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_24);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_24);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_10;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1794783153"}, Parties_NoPartyIDs_10);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_10);
    set_field(noPartyIDs_0_2, FIX::PartyRole{69}, Parties_NoPartyIDs_10);
    all_values.push_back(Parties_NoPartyIDs_10);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_25;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1129374826"}, PtysSubGrp_NoPartySubIDs_25);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_25);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_25);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_26;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_520442365"}, PtysSubGrp_NoPartySubIDs_26);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_26);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_26);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_6;
    FIX::PosAmt PosAmt_6;
    PosAmt_6.setString("19638807");
set_field(noPosAmt_0_0, PosAmt_6, PositionAmountData_NoPosAmt_6);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_ICPN"}, PositionAmountData_NoPosAmt_6);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_2081796074"}, PositionAmountData_NoPosAmt_6);
    all_values.push_back(PositionAmountData_NoPosAmt_6);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_2;
    set_field(noRateSources_0_0, FIX::RateSource{2}, RateSource_NoRateSources_2);
    set_field(noRateSources_0_0, FIX::RateSourceType{0}, RateSource_NoRateSources_2);
    set_field(noRateSources_0_0, FIX::ReferencePage{"STRING_962601790"}, RateSource_NoRateSources_2);
    all_values.push_back(RateSource_NoRateSources_2);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_3;
    set_field(noRateSources_0_1, FIX::RateSource{0}, RateSource_NoRateSources_3);
    set_field(noRateSources_0_1, FIX::RateSourceType{1}, RateSource_NoRateSources_3);
    set_field(noRateSources_0_1, FIX::ReferencePage{"STRING_409562754"}, RateSource_NoRateSources_3);
    all_values.push_back(RateSource_NoRateSources_3);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_2;
  set_field(msg, FIX::BenchmarkCurveCurrency{"GBP"}, SpreadOrBenchmarkCurveData_2);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_Pfandbriefe"}, SpreadOrBenchmarkCurveData_2);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1369393288"}, SpreadOrBenchmarkCurveData_2);
  FIX::BenchmarkPrice BenchmarkPrice_2;
  BenchmarkPrice_2.setString("17098923");
set_field(msg, BenchmarkPrice_2, SpreadOrBenchmarkCurveData_2);
  set_field(msg, FIX::BenchmarkPriceType{1038795596}, SpreadOrBenchmarkCurveData_2);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_43877676"}, SpreadOrBenchmarkCurveData_2);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_857109331"}, SpreadOrBenchmarkCurveData_2);
  FIX::Spread Spread_2;
  Spread_2.setString("207578");
set_field(msg, Spread_2, SpreadOrBenchmarkCurveData_2);
  all_values.push_back(SpreadOrBenchmarkCurveData_2);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_4;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_AVSIZE"}, Stipulations_NoStipulations_4);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_184012352"}, Stipulations_NoStipulations_4);
    all_values.push_back(Stipulations_NoStipulations_4);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_5;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_PXSOURCE"}, Stipulations_NoStipulations_5);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1359709918"}, Stipulations_NoStipulations_5);
    all_values.push_back(Stipulations_NoStipulations_5);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_7;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1965099261"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{341601096}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_309228875"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{338057979}, UnderlyingInstrument_7);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_7;
    UnderlyingAdjustedQuantity_7.setString("20080397");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_7, UnderlyingInstrument_7);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_7;
    UnderlyingAllocationPercent_7.setString("11.570000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_7, UnderlyingInstrument_7);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_7;
    UnderlyingAttachmentPoint_7.setString("50.500000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1877879253"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1141633584"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1615128901"}, UnderlyingInstrument_7);
    FIX::UnderlyingCapValue UnderlyingCapValue_7;
    UnderlyingCapValue_7.setString("17000511");
set_field(noUnderlyings_0_0, UnderlyingCapValue_7, UnderlyingInstrument_7);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_7;
    UnderlyingCashAmount_7.setString("20267609");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_7);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_7;
    UnderlyingContractMultiplier_7.setString("7106685");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{79238325}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_839809797"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_955294357"}, UnderlyingInstrument_7);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_7;
    UnderlyingCouponRate_7.setString("18.090000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1481136485"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_7);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_7;
    UnderlyingCurrentValue_7.setString("3724484");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_7, UnderlyingInstrument_7);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_7;
    UnderlyingDetachmentPoint_7.setString("16.730000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_7, UnderlyingInstrument_7);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_7;
    UnderlyingDirtyPrice_7.setString("7343598");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_7, UnderlyingInstrument_7);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_7;
    UnderlyingEndPrice_7.setString("3932062");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_7, UnderlyingInstrument_7);
    FIX::UnderlyingEndValue UnderlyingEndValue_7;
    UnderlyingEndValue_7.setString("21364767");
set_field(noUnderlyings_0_0, UnderlyingEndValue_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{391050216}, UnderlyingInstrument_7);
    FIX::UnderlyingFXRate UnderlyingFXRate_7;
    UnderlyingFXRate_7.setString("5772186");
set_field(noUnderlyings_0_0, UnderlyingFXRate_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_7);
    FIX::UnderlyingFactor UnderlyingFactor_7;
    UnderlyingFactor_7.setString("17507601");
set_field(noUnderlyings_0_0, UnderlyingFactor_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1596350882}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1369303321"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2092361231"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1905579758"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1707361300"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1952917368"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_965417267"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1861816350"}, UnderlyingInstrument_7);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_7;
    UnderlyingNotionalPercentageOutstanding_7.setString("29.730000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_7);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_7;
    UnderlyingOriginalNotionalPercentageOutstanding_7.setString("16.030000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1235880437"}, UnderlyingInstrument_7);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_7;
    UnderlyingPriceUnitOfMeasureQty_7.setString("19863281");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1759708646}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1946549029}, UnderlyingInstrument_7);
    FIX::UnderlyingPx UnderlyingPx_7;
    UnderlyingPx_7.setString("20655664");
set_field(noUnderlyings_0_0, UnderlyingPx_7, UnderlyingInstrument_7);
    FIX::UnderlyingQty UnderlyingQty_7;
    UnderlyingQty_7.setString("4520347");
set_field(noUnderlyings_0_0, UnderlyingQty_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_754359738"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_232924643"}, UnderlyingInstrument_7);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_7;
    UnderlyingRepurchaseRate_7.setString("12.810000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{931563736}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_110175125"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_158136066"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1152645409"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_844534939"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_551342326"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1141638523"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1235585155"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1128560937"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_545842583"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_7);
    FIX::UnderlyingStartValue UnderlyingStartValue_7;
    UnderlyingStartValue_7.setString("5774281");
set_field(noUnderlyings_0_0, UnderlyingStartValue_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1915145904"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_7);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_7;
    UnderlyingStrikePrice_7.setString("14750235");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_589172946"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1300941549"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1189356258"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_125002271"}, UnderlyingInstrument_7);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_7;
    UnderlyingUnitOfMeasureQty_7.setString("12605087");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_7, UnderlyingInstrument_7);
    all_values.push_back(UnderlyingInstrument_7);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_12;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1360882709"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_12);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1099353262"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_12);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_12);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_13;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_2131042860"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_13);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1159948090"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_13);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_13);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_13;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_435594008"}, UnderlyingStipulations_NoUnderlyingStips_13);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1914307829"}, UnderlyingStipulations_NoUnderlyingStips_13);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_13);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_14;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1250360740"}, UnderlyingStipulations_NoUnderlyingStips_14);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_221281641"}, UnderlyingStipulations_NoUnderlyingStips_14);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_14);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_15;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_698387917"}, UnderlyingStipulations_NoUnderlyingStips_15);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1360535866"}, UnderlyingStipulations_NoUnderlyingStips_15);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_15);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_17;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1851033326"}, UndlyInstrumentParties_NoUndlyInstrumentParties_17);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_17);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{930760033}, UndlyInstrumentParties_NoUndlyInstrumentParties_17);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_17);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1293172312"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2059320971}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1391030785"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{2132033955}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_489265495"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1158693041}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_2;
  FIX::Yield Yield_2;
  Yield_2.setString("95.330000");
set_field(msg, Yield_2, YieldData_2);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_824789777"}, YieldData_2);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_486232949"}, YieldData_2);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_2;
  YieldRedemptionPrice_2.setString("13574624");
set_field(msg, YieldRedemptionPrice_2, YieldData_2);
  set_field(msg, FIX::YieldRedemptionPriceType{2125731326}, YieldData_2);
  set_field(msg, FIX::YieldType{"STRING_LASTYEAR"}, YieldData_2);
  all_values.push_back(YieldData_2);
  all_compo_names.insert(".");

  // header
  multiset<string> header_5;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_0"}, header_5);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1238756431"}, header_5);
  set_header_field(msg.getHeader(), FIX::BodyLength{2046923421}, header_5);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_695863811"}, header_5);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_190626046"}, header_5);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_2030482634"}, header_5);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1855811902"}, header_5);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1208062143}, header_5);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_5);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1622636083}, header_5);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_310939235"}, header_5);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_539874635"}, header_5);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_173540352"}, header_5);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(14, 38, 18, 4, 9, 2009)}, header_5);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_5);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_5);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_859301230"}, header_5);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{103671546}, header_5);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1124518410"}, header_5);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1627590763"}, header_5);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_928461323"}, header_5);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(2, 41, 39, 24, 2, 2010)}, header_5);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_868414508"}, header_5);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_188607831"}, header_5);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_921295678"}, header_5);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_576742762"}, header_5);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1396669974}, header_5);
  all_values.push_back(header_5);
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
