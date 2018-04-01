#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationInstruction.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstruction, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationInstruction msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstruction_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_0;
  AccruedInterestAmt_0.setString("12949547");
set_field(msg, AccruedInterestAmt_0, AllocationInstruction_0);
  FIX::AccruedInterestRate AccruedInterestRate_0;
  AccruedInterestRate_0.setString("95.180000");
set_field(msg, AccruedInterestRate_0, AllocationInstruction_0);
  set_field(msg, FIX::AllocCancReplaceReason{2}, AllocationInstruction_0);
  set_field(msg, FIX::AllocID{"STRING_1508544427"}, AllocationInstruction_0);
  set_field(msg, FIX::AllocIntermedReqType{2}, AllocationInstruction_0);
  set_field(msg, FIX::AllocLinkID{"STRING_1721072890"}, AllocationInstruction_0);
  set_field(msg, FIX::AllocLinkType{1}, AllocationInstruction_0);
  set_field(msg, FIX::AllocNoOrdersType{0}, AllocationInstruction_0);
  set_field(msg, FIX::AllocTransType{'6'}, AllocationInstruction_0);
  set_field(msg, FIX::AllocType{8}, AllocationInstruction_0);
  set_field(msg, FIX::AutoAcceptIndicator{true}, AllocationInstruction_0);
  FIX::AvgParPx AvgParPx_0;
  AvgParPx_0.setString("9235661");
set_field(msg, AvgParPx_0, AllocationInstruction_0);
  FIX::AvgPx AvgPx_0;
  AvgPx_0.setString("6729662");
set_field(msg, AvgPx_0, AllocationInstruction_0);
  set_field(msg, FIX::AvgPxIndicator{2}, AllocationInstruction_0);
  set_field(msg, FIX::AvgPxPrecision{955646626}, AllocationInstruction_0);
  set_field(msg, FIX::BookingRefID{"STRING_213504302"}, AllocationInstruction_0);
  set_field(msg, FIX::BookingType{0}, AllocationInstruction_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_636431019"}, AllocationInstruction_0);
  FIX::Concession Concession_0;
  Concession_0.setString("1327955");
set_field(msg, Concession_0, AllocationInstruction_0);
  set_field(msg, FIX::Currency{"USD"}, AllocationInstruction_0);
  set_field(msg, FIX::CustOrderCapacity{2}, AllocationInstruction_0);
  set_field(msg, FIX::EncodedText{"DATA_2047635283"}, AllocationInstruction_0);
  set_field(msg, FIX::EncodedTextLen{1950550844}, AllocationInstruction_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_0;
  EndAccruedInterestAmt_0.setString("11341756");
set_field(msg, EndAccruedInterestAmt_0, AllocationInstruction_0);
  FIX::EndCash EndCash_0;
  EndCash_0.setString("12019811");
set_field(msg, EndCash_0, AllocationInstruction_0);
  FIX::GrossTradeAmt GrossTradeAmt_0;
  GrossTradeAmt_0.setString("5382349");
set_field(msg, GrossTradeAmt_0, AllocationInstruction_0);
  FIX::InterestAtMaturity InterestAtMaturity_0;
  InterestAtMaturity_0.setString("4941256");
set_field(msg, InterestAtMaturity_0, AllocationInstruction_0);
  set_field(msg, FIX::LastFragment{true}, AllocationInstruction_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_1735964487"}, AllocationInstruction_0);
  set_field(msg, FIX::LegalConfirm{true}, AllocationInstruction_0);
  set_field(msg, FIX::MatchType{"STRING_6"}, AllocationInstruction_0);
  set_field(msg, FIX::MessageEventSource{"STRING_1910954005"}, AllocationInstruction_0);
  set_field(msg, FIX::MultiLegReportingType{'2'}, AllocationInstruction_0);
  FIX::NetMoney NetMoney_0;
  NetMoney_0.setString("19268050");
set_field(msg, NetMoney_0, AllocationInstruction_0);
  set_field(msg, FIX::NumDaysInterest{355925491}, AllocationInstruction_0);
  set_field(msg, FIX::PositionEffect{'D'}, AllocationInstruction_0);
  set_field(msg, FIX::PreviouslyReported{true}, AllocationInstruction_0);
  set_field(msg, FIX::PriceType{4}, AllocationInstruction_0);
  set_field(msg, FIX::QtyType{0}, AllocationInstruction_0);
  FIX::Quantity Quantity_1;
  Quantity_1.setString("15006739");
set_field(msg, Quantity_1, AllocationInstruction_0);
  set_field(msg, FIX::RefAllocID{"STRING_56570819"}, AllocationInstruction_0);
  set_field(msg, FIX::ReversalIndicator{false}, AllocationInstruction_0);
  FIX::RndPx RndPx_0;
  RndPx_0.setString("261565");
set_field(msg, RndPx_0, AllocationInstruction_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_852783823"}, AllocationInstruction_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_2131125604"}, AllocationInstruction_0);
  set_field(msg, FIX::SettlType{"STRING_8"}, AllocationInstruction_0);
  set_field(msg, FIX::Side{'4'}, AllocationInstruction_0);
  FIX::StartCash StartCash_0;
  StartCash_0.setString("6200729");
set_field(msg, StartCash_0, AllocationInstruction_0);
  set_field(msg, FIX::Text{"STRING_372456412"}, AllocationInstruction_0);
  set_field(msg, FIX::TotNoAllocs{2081287622}, AllocationInstruction_0);
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_0;
  TotalAccruedInterestAmt_0.setString("2079916");
set_field(msg, TotalAccruedInterestAmt_0, AllocationInstruction_0);
  FIX::TotalTakedown TotalTakedown_0;
  TotalTakedown_0.setString("14527469");
set_field(msg, TotalTakedown_0, AllocationInstruction_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1981439257"}, AllocationInstruction_0);
  set_field(msg, FIX::TradeInputSource{"STRING_11058819"}, AllocationInstruction_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_439438926"}, AllocationInstruction_0);
  set_field(msg, FIX::TradingSessionID{"STRING_3"}, AllocationInstruction_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_3"}, AllocationInstruction_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(10, 48, 26, 6, 3, 2009)}, AllocationInstruction_0);
  set_field(msg, FIX::TrdSubType{23}, AllocationInstruction_0);
  set_field(msg, FIX::TrdType{40}, AllocationInstruction_0);
  all_values.push_back(AllocationInstruction_0);

  all_compo_names.insert("AllocationInstruction");

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstruction::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_0;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1845712463"}, AllocGrp_NoAllocs_0);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_0;
    AllocAccruedInterestAmt_0.setString("17360045");
set_field(noAllocs_0_0, AllocAccruedInterestAmt_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{290103450}, AllocGrp_NoAllocs_0);
    FIX::AllocAvgPx AllocAvgPx_0;
    AllocAvgPx_0.setString("11989027");
set_field(noAllocs_0_0, AllocAvgPx_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocCustomerCapacity{"STRING_1792575328"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocHandlInst{1}, AllocGrp_NoAllocs_0);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_0;
    AllocInterestAtMaturity_0.setString("12250593");
set_field(noAllocs_0_0, AllocInterestAtMaturity_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocMethod{1}, AllocGrp_NoAllocs_0);
    FIX::AllocNetMoney AllocNetMoney_0;
    AllocNetMoney_0.setString("14492243");
set_field(noAllocs_0_0, AllocNetMoney_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocPositionEffect{'C'}, AllocGrp_NoAllocs_0);
    FIX::AllocPrice AllocPrice_0;
    AllocPrice_0.setString("4794510");
set_field(noAllocs_0_0, AllocPrice_0, AllocGrp_NoAllocs_0);
    FIX::AllocQty AllocQty_0;
    AllocQty_0.setString("20692973");
set_field(noAllocs_0_0, AllocQty_0, AllocGrp_NoAllocs_0);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_0;
    AllocSettlCurrAmt_0.setString("18371766");
set_field(noAllocs_0_0, AllocSettlCurrAmt_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"GBP"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocSettlInstType{1}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocText{"STRING_247210610"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::ClearingFeeIndicator{"STRING_5"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::EncodedAllocText{"DATA_1581878872"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::EncodedAllocTextLen{1283147392}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_690157943"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocType{1}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::MatchStatus{'2'}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::NotifyBrokerOfCredit{false}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::ProcessCode{'5'}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::SecondaryIndividualAllocID{"STRING_2019893272"}, AllocGrp_NoAllocs_0);
    FIX::SettlCurrAmt SettlCurrAmt_0;
    SettlCurrAmt_0.setString("7291775");
set_field(noAllocs_0_0, SettlCurrAmt_0, AllocGrp_NoAllocs_0);
    FIX::SettlCurrFxRate SettlCurrFxRate_0;
    SettlCurrFxRate_0.setString("8213388");
set_field(noAllocs_0_0, SettlCurrFxRate_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::SettlCurrFxRateCalc{'D'}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::SettlCurrency{"EUR"}, AllocGrp_NoAllocs_0);
    all_values.push_back(AllocGrp_NoAllocs_0);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_0;
      set_field(noClearingInstructions_0_1_0, FIX::ClearingInstruction{13}, ClrInstGrp_NoClearingInstructions_0);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_0);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_1;
      set_field(noClearingInstructions_0_1_1, FIX::ClearingInstruction{1}, ClrInstGrp_NoClearingInstructions_1);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_1);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_0;
    set_field(noAllocs_0_0, FIX::CommCurrency{"CAN"}, CommissionData_0);
    set_field(noAllocs_0_0, FIX::CommType{'6'}, CommissionData_0);
    FIX::Commission Commission_0;
    Commission_0.setString("2039416");
set_field(noAllocs_0_0, Commission_0, CommissionData_0);
    set_field(noAllocs_0_0, FIX::FundRenewWaiv{'N'}, CommissionData_0);
    all_values.push_back(CommissionData_0);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_0;
      FIX::MiscFeeAmt MiscFeeAmt_0;
      MiscFeeAmt_0.setString("16686618");
set_field(noMiscFees_0_1_0, MiscFeeAmt_0, MiscFeesGrp_NoMiscFees_0);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_0);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeCurr{"CAN"}, MiscFeesGrp_NoMiscFees_0);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeType{"STRING_13"}, MiscFeesGrp_NoMiscFees_0);
      all_values.push_back(MiscFeesGrp_NoMiscFees_0);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_1;
      FIX::MiscFeeAmt MiscFeeAmt_1;
      MiscFeeAmt_1.setString("19685751");
set_field(noMiscFees_0_1_1, MiscFeeAmt_1, MiscFeesGrp_NoMiscFees_1);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_1);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_1);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeType{"STRING_4"}, MiscFeesGrp_NoMiscFees_1);
      all_values.push_back(MiscFeesGrp_NoMiscFees_1);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_5;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_652113564"}, NestedParties_NoNestedPartyIDs_5);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_5);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{288322831}, NestedParties_NoNestedPartyIDs_5);
      all_values.push_back(NestedParties_NoNestedPartyIDs_5);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_14;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_671011599"}, NstdPtysSubGrp_NoNestedPartySubIDs_14);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{160732455}, NstdPtysSubGrp_NoNestedPartySubIDs_14);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_14);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_15;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_61740045"}, NstdPtysSubGrp_NoNestedPartySubIDs_15);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1492350448}, NstdPtysSubGrp_NoNestedPartySubIDs_15);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_15);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_16;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_389966741"}, NstdPtysSubGrp_NoNestedPartySubIDs_16);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{1048088079}, NstdPtysSubGrp_NoNestedPartySubIDs_16);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_16);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_0;
    set_field(noAllocs_0_0, FIX::SettlDeliveryType{3}, SettlInstructionsData_0);
    set_field(noAllocs_0_0, FIX::StandInstDbID{"STRING_317429842"}, SettlInstructionsData_0);
    set_field(noAllocs_0_0, FIX::StandInstDbName{"STRING_1622956974"}, SettlInstructionsData_0);
    set_field(noAllocs_0_0, FIX::StandInstDbType{1}, SettlInstructionsData_0);
    all_values.push_back(SettlInstructionsData_0);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_0;
      set_field(noDlvyInst_0_1_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_0);
      set_field(noDlvyInst_0_1_0, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_0);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_0);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_0;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_413269980"}, SettlParties_NoSettlPartyIDs_0);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_0);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{1168915593}, SettlParties_NoSettlPartyIDs_0);
        all_values.push_back(SettlParties_NoSettlPartyIDs_0);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_0;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_1282519400"}, SettlPtysSubGrp_NoSettlPartySubIDs_0);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{379786860}, SettlPtysSubGrp_NoSettlPartySubIDs_0);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_0);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_1;
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubID{"STRING_1073615544"}, SettlPtysSubGrp_NoSettlPartySubIDs_1);
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubIDType{1103610867}, SettlPtysSubGrp_NoSettlPartySubIDs_1);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_1);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_2;
          set_field(noSettlPartySubIDs_0_0_0_3_2, FIX::SettlPartySubID{"STRING_733098073"}, SettlPtysSubGrp_NoSettlPartySubIDs_2);
          set_field(noSettlPartySubIDs_0_0_0_3_2, FIX::SettlPartySubIDType{783884612}, SettlPtysSubGrp_NoSettlPartySubIDs_2);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_2);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_0_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_1;
      set_field(noDlvyInst_0_1_1, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_1);
      set_field(noDlvyInst_0_1_1, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_1);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_1);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_1;
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyID{"STRING_1717680052"}, SettlParties_NoSettlPartyIDs_1);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyIDSource{'6'}, SettlParties_NoSettlPartyIDs_1);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyRole{2065623904}, SettlParties_NoSettlPartyIDs_1);
        all_values.push_back(SettlParties_NoSettlPartyIDs_1);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_3;
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubID{"STRING_1347482335"}, SettlPtysSubGrp_NoSettlPartySubIDs_3);
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubIDType{78872711}, SettlPtysSubGrp_NoSettlPartySubIDs_3);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_3);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_4;
          set_field(noSettlPartySubIDs_0_1_0_3_1, FIX::SettlPartySubID{"STRING_1111982585"}, SettlPtysSubGrp_NoSettlPartySubIDs_4);
          set_field(noSettlPartySubIDs_0_1_0_3_1, FIX::SettlPartySubIDType{692349136}, SettlPtysSubGrp_NoSettlPartySubIDs_4);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_4);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_5;
          set_field(noSettlPartySubIDs_0_1_0_3_2, FIX::SettlPartySubID{"STRING_468839452"}, SettlPtysSubGrp_NoSettlPartySubIDs_5);
          set_field(noSettlPartySubIDs_0_1_0_3_2, FIX::SettlPartySubIDType{12587016}, SettlPtysSubGrp_NoSettlPartySubIDs_5);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_5);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_2);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_0_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_2;
      set_field(noDlvyInst_0_1_2, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_2);
      set_field(noDlvyInst_0_1_2, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_2);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_2);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_2;
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyID{"STRING_103290904"}, SettlParties_NoSettlPartyIDs_2);
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyIDSource{'8'}, SettlParties_NoSettlPartyIDs_2);
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyRole{1330977892}, SettlParties_NoSettlPartyIDs_2);
        all_values.push_back(SettlParties_NoSettlPartyIDs_2);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_6;
          set_field(noSettlPartySubIDs_0_2_0_3_0, FIX::SettlPartySubID{"STRING_1730318735"}, SettlPtysSubGrp_NoSettlPartySubIDs_6);
          set_field(noSettlPartySubIDs_0_2_0_3_0, FIX::SettlPartySubIDType{1744247872}, SettlPtysSubGrp_NoSettlPartySubIDs_6);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_6);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_0);
        }
        noDlvyInst_0_1_2.addGroup(noSettlPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_3;
        set_field(noSettlPartyIDs_0_2_2_1, FIX::SettlPartyID{"STRING_1368801371"}, SettlParties_NoSettlPartyIDs_3);
        set_field(noSettlPartyIDs_0_2_2_1, FIX::SettlPartyIDSource{'7'}, SettlParties_NoSettlPartyIDs_3);
        set_field(noSettlPartyIDs_0_2_2_1, FIX::SettlPartyRole{1207321310}, SettlParties_NoSettlPartyIDs_3);
        all_values.push_back(SettlParties_NoSettlPartyIDs_3);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_7;
          set_field(noSettlPartySubIDs_0_2_1_3_0, FIX::SettlPartySubID{"STRING_1131537540"}, SettlPtysSubGrp_NoSettlPartySubIDs_7);
          set_field(noSettlPartySubIDs_0_2_1_3_0, FIX::SettlPartySubIDType{133453206}, SettlPtysSubGrp_NoSettlPartySubIDs_7);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_7);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_8;
          set_field(noSettlPartySubIDs_0_2_1_3_1, FIX::SettlPartySubID{"STRING_1607447991"}, SettlPtysSubGrp_NoSettlPartySubIDs_8);
          set_field(noSettlPartySubIDs_0_2_1_3_1, FIX::SettlPartySubIDType{1864635613}, SettlPtysSubGrp_NoSettlPartySubIDs_8);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_8);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_9;
          set_field(noSettlPartySubIDs_0_2_1_3_2, FIX::SettlPartySubID{"STRING_917337818"}, SettlPtysSubGrp_NoSettlPartySubIDs_9);
          set_field(noSettlPartySubIDs_0_2_1_3_2, FIX::SettlPartySubIDType{525530831}, SettlPtysSubGrp_NoSettlPartySubIDs_9);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_9);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_2);
        }
        noDlvyInst_0_1_2.addGroup(noSettlPartyIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationInstruction::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_0;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_547155243"}, ExecAllocGrp_NoExecs_0);
    set_field(noExecs_0_0, FIX::FirmTradeID{"STRING_95727236"}, ExecAllocGrp_NoExecs_0);
    set_field(noExecs_0_0, FIX::LastCapacity{'1'}, ExecAllocGrp_NoExecs_0);
    FIX::LastParPx LastParPx_0;
    LastParPx_0.setString("4652954");
set_field(noExecs_0_0, LastParPx_0, ExecAllocGrp_NoExecs_0);
    FIX::LastPx LastPx_0;
    LastPx_0.setString("11459697");
set_field(noExecs_0_0, LastPx_0, ExecAllocGrp_NoExecs_0);
    FIX::LastQty LastQty_0;
    LastQty_0.setString("1144258");
set_field(noExecs_0_0, LastQty_0, ExecAllocGrp_NoExecs_0);
    set_field(noExecs_0_0, FIX::SecondaryExecID{"STRING_544168211"}, ExecAllocGrp_NoExecs_0);
    set_field(noExecs_0_0, FIX::TradeID{"STRING_110468713"}, ExecAllocGrp_NoExecs_0);
    all_values.push_back(ExecAllocGrp_NoExecs_0);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_1;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_806775035"}, ExecAllocGrp_NoExecs_1);
    set_field(noExecs_0_1, FIX::FirmTradeID{"STRING_1013007663"}, ExecAllocGrp_NoExecs_1);
    set_field(noExecs_0_1, FIX::LastCapacity{'2'}, ExecAllocGrp_NoExecs_1);
    FIX::LastParPx LastParPx_1;
    LastParPx_1.setString("17035204");
set_field(noExecs_0_1, LastParPx_1, ExecAllocGrp_NoExecs_1);
    FIX::LastPx LastPx_1;
    LastPx_1.setString("17992769");
set_field(noExecs_0_1, LastPx_1, ExecAllocGrp_NoExecs_1);
    FIX::LastQty LastQty_1;
    LastQty_1.setString("17585997");
set_field(noExecs_0_1, LastQty_1, ExecAllocGrp_NoExecs_1);
    set_field(noExecs_0_1, FIX::SecondaryExecID{"STRING_1806811331"}, ExecAllocGrp_NoExecs_1);
    set_field(noExecs_0_1, FIX::TradeID{"STRING_1881858338"}, ExecAllocGrp_NoExecs_1);
    all_values.push_back(ExecAllocGrp_NoExecs_1);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_0;
  set_field(msg, FIX::AgreementCurrency{"USD"}, FinancingDetails_0);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1464693426"}, FinancingDetails_0);
  set_field(msg, FIX::AgreementDesc{"STRING_538858189"}, FinancingDetails_0);
  set_field(msg, FIX::AgreementID{"STRING_805697157"}, FinancingDetails_0);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_0);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1746179499"}, FinancingDetails_0);
  FIX::MarginRatio MarginRatio_0;
  MarginRatio_0.setString("42.810000");
set_field(msg, MarginRatio_0, FinancingDetails_0);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1200497999"}, FinancingDetails_0);
  set_field(msg, FIX::TerminationType{2}, FinancingDetails_0);
  all_values.push_back(FinancingDetails_0);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationInstruction::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_3;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_917649964"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{649486876}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1295029455"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1155606440}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1196642119"}, InstrumentLeg_3);
    FIX::LegContractMultiplier LegContractMultiplier_3;
    LegContractMultiplier_3.setString("13907566");
set_field(noLegs_0_0, LegContractMultiplier_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{2070033652}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1661937619"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_389242819"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_36975904"}, InstrumentLeg_3);
    FIX::LegCouponRate LegCouponRate_3;
    LegCouponRate_3.setString("21.820000");
set_field(noLegs_0_0, LegCouponRate_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_499711532"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_622767262"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{399787718}, InstrumentLeg_3);
    FIX::LegFactor LegFactor_3;
    LegFactor_3.setString("7234231");
set_field(noLegs_0_0, LegFactor_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{233883334}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_59115402"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_457797846"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1175977299"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1643494836"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1922491272"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1714835489"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_301708346"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1991451730"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_3);
    FIX::LegOptionRatio LegOptionRatio_3;
    LegOptionRatio_3.setString("16112426");
set_field(noLegs_0_0, LegOptionRatio_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1044466081"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1045680398"}, InstrumentLeg_3);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_3;
    LegPriceUnitOfMeasureQty_3.setString("2332576");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegProduct{1962116046}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1695167274}, InstrumentLeg_3);
    FIX::LegRatioQty LegRatioQty_3;
    LegRatioQty_3.setString("15282870");
set_field(noLegs_0_0, LegRatioQty_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_970238838"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_744325745"}, InstrumentLeg_3);
    FIX::LegRepurchaseRate LegRepurchaseRate_3;
    LegRepurchaseRate_3.setString("1.020000");
set_field(noLegs_0_0, LegRepurchaseRate_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{892788843}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_258779716"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1160802921"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_929764747"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_317401898"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1660514454"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1773515686"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_135798068"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_3);
    FIX::LegStrikePrice LegStrikePrice_3;
    LegStrikePrice_3.setString("3696814");
set_field(noLegs_0_0, LegStrikePrice_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_84935159"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_422769097"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1545658702"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1728429995"}, InstrumentLeg_3);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_3;
    LegUnitOfMeasureQty_3.setString("1977767");
set_field(noLegs_0_0, LegUnitOfMeasureQty_3, InstrumentLeg_3);
    all_values.push_back(InstrumentLeg_3);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_5;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_2030138341"}, LegSecAltIDGrp_NoLegSecurityAltID_5);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_41744804"}, LegSecAltIDGrp_NoLegSecurityAltID_5);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_5);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_6;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_279058235"}, LegSecAltIDGrp_NoLegSecurityAltID_6);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1493897320"}, LegSecAltIDGrp_NoLegSecurityAltID_6);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_6);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_4;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1086210885"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1324738633}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1727154923"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{900843283}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_872422259"}, InstrumentLeg_4);
    FIX::LegContractMultiplier LegContractMultiplier_4;
    LegContractMultiplier_4.setString("11079583");
set_field(noLegs_0_1, LegContractMultiplier_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1871082122}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1616748005"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1879518436"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_616387317"}, InstrumentLeg_4);
    FIX::LegCouponRate LegCouponRate_4;
    LegCouponRate_4.setString("77.210000");
set_field(noLegs_0_1, LegCouponRate_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_892837709"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_405868515"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1172184102}, InstrumentLeg_4);
    FIX::LegFactor LegFactor_4;
    LegFactor_4.setString("14344777");
set_field(noLegs_0_1, LegFactor_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{541666583}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1198003859"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1399448967"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_911347986"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1282939018"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1822218065"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_309523040"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_863885366"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_2019994786"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_4);
    FIX::LegOptionRatio LegOptionRatio_4;
    LegOptionRatio_4.setString("7465400");
set_field(noLegs_0_1, LegOptionRatio_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_2061739590"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1701591818"}, InstrumentLeg_4);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_4;
    LegPriceUnitOfMeasureQty_4.setString("929537");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegProduct{1000466828}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegPutOrCall{878846804}, InstrumentLeg_4);
    FIX::LegRatioQty LegRatioQty_4;
    LegRatioQty_4.setString("18201086");
set_field(noLegs_0_1, LegRatioQty_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1901310111"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1751269063"}, InstrumentLeg_4);
    FIX::LegRepurchaseRate LegRepurchaseRate_4;
    LegRepurchaseRate_4.setString("33.410000");
set_field(noLegs_0_1, LegRepurchaseRate_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1624908585}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1220533420"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_512618129"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_93812254"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_948577494"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1405455839"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1639964318"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSide{'9'}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1811324354"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_4);
    FIX::LegStrikePrice LegStrikePrice_4;
    LegStrikePrice_4.setString("2055072");
set_field(noLegs_0_1, LegStrikePrice_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1862668632"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1680466501"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1116855276"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_998124003"}, InstrumentLeg_4);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_4;
    LegUnitOfMeasureQty_4.setString("13552009");
set_field(noLegs_0_1, LegUnitOfMeasureQty_4, InstrumentLeg_4);
    all_values.push_back(InstrumentLeg_4);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_7;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1862009369"}, LegSecAltIDGrp_NoLegSecurityAltID_7);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1227712057"}, LegSecAltIDGrp_NoLegSecurityAltID_7);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_7);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_8;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_701428251"}, LegSecAltIDGrp_NoLegSecurityAltID_8);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_461065780"}, LegSecAltIDGrp_NoLegSecurityAltID_8);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_8);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_9;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_1141967999"}, LegSecAltIDGrp_NoLegSecurityAltID_9);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_255536421"}, LegSecAltIDGrp_NoLegSecurityAltID_9);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_9);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_4;
  FIX::AttachmentPoint AttachmentPoint_4;
  AttachmentPoint_4.setString("95.120000");
set_field(msg, AttachmentPoint_4, Instrument_4);
  set_field(msg, FIX::CFICode{"STRING_2142434827"}, Instrument_4);
  set_field(msg, FIX::CPProgram{99}, Instrument_4);
  set_field(msg, FIX::CPRegType{"STRING_226644520"}, Instrument_4);
  FIX::CapPrice CapPrice_4;
  CapPrice_4.setString("18962612");
set_field(msg, CapPrice_4, Instrument_4);
  FIX::ContractMultiplier ContractMultiplier_4;
  ContractMultiplier_4.setString("7381686");
set_field(msg, ContractMultiplier_4, Instrument_4);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_4);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1373686228"}, Instrument_4);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1958702061"}, Instrument_4);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1519845991"}, Instrument_4);
  FIX::CouponRate CouponRate_4;
  CouponRate_4.setString("84.830000");
set_field(msg, CouponRate_4, Instrument_4);
  set_field(msg, FIX::CreditRating{"STRING_759795907"}, Instrument_4);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_777818182"}, Instrument_4);
  FIX::DetachmentPoint DetachmentPoint_4;
  DetachmentPoint_4.setString("91.530000");
set_field(msg, DetachmentPoint_4, Instrument_4);
  set_field(msg, FIX::EncodedIssuer{"DATA_1753819373"}, Instrument_4);
  set_field(msg, FIX::EncodedIssuerLen{441658888}, Instrument_4);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1624643926"}, Instrument_4);
  set_field(msg, FIX::EncodedSecurityDescLen{2034836907}, Instrument_4);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_4);
  FIX::Factor Factor_4;
  Factor_4.setString("13398289");
set_field(msg, Factor_4, Instrument_4);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_4);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_4);
  FIX::FloorPrice FloorPrice_4;
  FloorPrice_4.setString("1904692");
set_field(msg, FloorPrice_4, Instrument_4);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_4);
  set_field(msg, FIX::InstrRegistry{"STRING_1042916122"}, Instrument_4);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_4);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2003249088"}, Instrument_4);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1744344373"}, Instrument_4);
  set_field(msg, FIX::Issuer{"STRING_366060767"}, Instrument_4);
  set_field(msg, FIX::ListMethod{0}, Instrument_4);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1999880795"}, Instrument_4);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_920080280"}, Instrument_4);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_992684619"}, Instrument_4);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_986780372"}, Instrument_4);
  FIX::MinPriceIncrement MinPriceIncrement_4;
  MinPriceIncrement_4.setString("11467248");
set_field(msg, MinPriceIncrement_4, Instrument_4);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_4;
  MinPriceIncrementAmount_4.setString("7414622");
set_field(msg, MinPriceIncrementAmount_4, Instrument_4);
  set_field(msg, FIX::NTPositionLimit{1724949013}, Instrument_4);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_4;
  NotionalPercentageOutstanding_4.setString("90.130000");
set_field(msg, NotionalPercentageOutstanding_4, Instrument_4);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_4);
  FIX::OptPayoutAmount OptPayoutAmount_4;
  OptPayoutAmount_4.setString("15361674");
set_field(msg, OptPayoutAmount_4, Instrument_4);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_4);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_4;
  OriginalNotionalPercentageOutstanding_4.setString("33.260000");
set_field(msg, OriginalNotionalPercentageOutstanding_4, Instrument_4);
  set_field(msg, FIX::Pool{"STRING_148479686"}, Instrument_4);
  set_field(msg, FIX::PositionLimit{156649538}, Instrument_4);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_4);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1902299060"}, Instrument_4);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_4;
  PriceUnitOfMeasureQty_4.setString("5983084");
set_field(msg, PriceUnitOfMeasureQty_4, Instrument_4);
  set_field(msg, FIX::Product{2}, Instrument_4);
  set_field(msg, FIX::ProductComplex{"STRING_1789652319"}, Instrument_4);
  set_field(msg, FIX::PutOrCall{1}, Instrument_4);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1064648021"}, Instrument_4);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1209988432"}, Instrument_4);
  FIX::RepurchaseRate RepurchaseRate_4;
  RepurchaseRate_4.setString("24.120000");
set_field(msg, RepurchaseRate_4, Instrument_4);
  set_field(msg, FIX::RepurchaseTerm{1255117287}, Instrument_4);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_4);
  set_field(msg, FIX::SecurityDesc{"STRING_1904928534"}, Instrument_4);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1160112274"}, Instrument_4);
  set_field(msg, FIX::SecurityGroup{"STRING_1841290904"}, Instrument_4);
  set_field(msg, FIX::SecurityID{"STRING_1501789260"}, Instrument_4);
  set_field(msg, FIX::SecurityIDSource{"STRING_K"}, Instrument_4);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_4);
  set_field(msg, FIX::SecuritySubType{"STRING_1354186407"}, Instrument_4);
  set_field(msg, FIX::SecurityType{"STRING_TERM"}, Instrument_4);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_4);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_4);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1445494473"}, Instrument_4);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_278203930"}, Instrument_4);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_4);
  FIX::StrikeMultiplier StrikeMultiplier_4;
  StrikeMultiplier_4.setString("2458687");
set_field(msg, StrikeMultiplier_4, Instrument_4);
  FIX::StrikePrice StrikePrice_4;
  StrikePrice_4.setString("13071159");
set_field(msg, StrikePrice_4, Instrument_4);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_4);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_4;
  StrikePriceBoundaryPrecision_4.setString("20.990000");
set_field(msg, StrikePriceBoundaryPrecision_4, Instrument_4);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_4);
  FIX::StrikeValue StrikeValue_4;
  StrikeValue_4.setString("9874443");
set_field(msg, StrikeValue_4, Instrument_4);
  set_field(msg, FIX::Symbol{"STRING_1928690931"}, Instrument_4);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_4);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_4);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_4);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_4);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_4;
  UnitOfMeasureQty_4.setString("6837437");
set_field(msg, UnitOfMeasureQty_4, Instrument_4);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_4);
  all_values.push_back(Instrument_4);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_7;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_7);
    FIX::ComplexEventPrice ComplexEventPrice_7;
    ComplexEventPrice_7.setString("18257917");
set_field(noComplexEvents_0_0, ComplexEventPrice_7, ComplexEvents_NoComplexEvents_7);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_7);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_7;
    ComplexEventPriceBoundaryPrecision_7.setString("10.650000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_7, ComplexEvents_NoComplexEvents_7);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_7);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_7);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_7;
    ComplexOptPayoutAmount_7.setString("6575066");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_7, ComplexEvents_NoComplexEvents_7);
    all_values.push_back(ComplexEvents_NoComplexEvents_7);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_16;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 54, 3, 23, 4, 2014)}, ComplexEventDates_NoComplexEventDates_16);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 59, 8, 10, 4, 2003)}, ComplexEventDates_NoComplexEventDates_16);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_16);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_24;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 5, 55)}, ComplexEventTimes_NoComplexEventTimes_24);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 9, 38)}, ComplexEventTimes_NoComplexEventTimes_24);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_24);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_25;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 52, 7)}, ComplexEventTimes_NoComplexEventTimes_25);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 36, 1)}, ComplexEventTimes_NoComplexEventTimes_25);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_25);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_26;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 55, 54)}, ComplexEventTimes_NoComplexEventTimes_26);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 0, 4)}, ComplexEventTimes_NoComplexEventTimes_26);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_26);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_17;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 12, 23, 23, 4, 2005)}, ComplexEventDates_NoComplexEventDates_17);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 4, 40, 4, 1, 2005)}, ComplexEventDates_NoComplexEventDates_17);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_17);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_27;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 39, 49)}, ComplexEventTimes_NoComplexEventTimes_27);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 25, 57)}, ComplexEventTimes_NoComplexEventTimes_27);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_27);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_28;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 53, 0)}, ComplexEventTimes_NoComplexEventTimes_28);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 0, 20)}, ComplexEventTimes_NoComplexEventTimes_28);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_28);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_18;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 33, 9, 19, 5, 2002)}, ComplexEventDates_NoComplexEventDates_18);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 13, 32, 6, 6, 2005)}, ComplexEventDates_NoComplexEventDates_18);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_18);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_29;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 27, 12)}, ComplexEventTimes_NoComplexEventTimes_29);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 37, 6)}, ComplexEventTimes_NoComplexEventTimes_29);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_29);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_30;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 51, 55)}, ComplexEventTimes_NoComplexEventTimes_30);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 48, 11)}, ComplexEventTimes_NoComplexEventTimes_30);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_30);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_31;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 36, 45)}, ComplexEventTimes_NoComplexEventTimes_31);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 54, 48)}, ComplexEventTimes_NoComplexEventTimes_31);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_31);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_8;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_8);
    FIX::ComplexEventPrice ComplexEventPrice_8;
    ComplexEventPrice_8.setString("7744757");
set_field(noComplexEvents_0_1, ComplexEventPrice_8, ComplexEvents_NoComplexEvents_8);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_8);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_8;
    ComplexEventPriceBoundaryPrecision_8.setString("91.560000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_8, ComplexEvents_NoComplexEvents_8);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_8);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_8);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_8;
    ComplexOptPayoutAmount_8.setString("16969908");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_8, ComplexEvents_NoComplexEvents_8);
    all_values.push_back(ComplexEvents_NoComplexEvents_8);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_19;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 7, 47, 2, 9, 2005)}, ComplexEventDates_NoComplexEventDates_19);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 36, 57, 16, 8, 2015)}, ComplexEventDates_NoComplexEventDates_19);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_19);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_32;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 31, 41)}, ComplexEventTimes_NoComplexEventTimes_32);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 35, 2)}, ComplexEventTimes_NoComplexEventTimes_32);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_32);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_20;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 15, 50, 26, 6, 2006)}, ComplexEventDates_NoComplexEventDates_20);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 26, 0, 12, 9, 2006)}, ComplexEventDates_NoComplexEventDates_20);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_20);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_33;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 22, 39)}, ComplexEventTimes_NoComplexEventTimes_33);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 24, 50)}, ComplexEventTimes_NoComplexEventTimes_33);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_33);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_9;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_9);
    FIX::ComplexEventPrice ComplexEventPrice_9;
    ComplexEventPrice_9.setString("17308149");
set_field(noComplexEvents_0_2, ComplexEventPrice_9, ComplexEvents_NoComplexEvents_9);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_9);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_9;
    ComplexEventPriceBoundaryPrecision_9.setString("92.110000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_9, ComplexEvents_NoComplexEvents_9);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_9);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_9);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_9;
    ComplexOptPayoutAmount_9.setString("9098289");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_9, ComplexEvents_NoComplexEvents_9);
    all_values.push_back(ComplexEvents_NoComplexEvents_9);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_21;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 56, 58, 27, 6, 2008)}, ComplexEventDates_NoComplexEventDates_21);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 3, 41, 22, 12, 2010)}, ComplexEventDates_NoComplexEventDates_21);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_21);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_34;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 49, 40)}, ComplexEventTimes_NoComplexEventTimes_34);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 56, 26)}, ComplexEventTimes_NoComplexEventTimes_34);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_34);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_22;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 48, 55, 25, 7, 2010)}, ComplexEventDates_NoComplexEventDates_22);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 31, 54, 20, 3, 2005)}, ComplexEventDates_NoComplexEventDates_22);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_22);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_35;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 7, 41)}, ComplexEventTimes_NoComplexEventTimes_35);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 51, 7)}, ComplexEventTimes_NoComplexEventTimes_35);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_35);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_36;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 48, 17)}, ComplexEventTimes_NoComplexEventTimes_36);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 13, 49)}, ComplexEventTimes_NoComplexEventTimes_36);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_36);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationInstruction::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_10;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1220009203"}, EvntGrp_NoEvents_10);
    FIX::EventPx EventPx_10;
    EventPx_10.setString("13174029");
set_field(noEvents_0_0, EventPx_10, EvntGrp_NoEvents_10);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1589607051"}, EvntGrp_NoEvents_10);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(3, 17, 50, 13, 1, 2014)}, EvntGrp_NoEvents_10);
    set_field(noEvents_0_0, FIX::EventType{10}, EvntGrp_NoEvents_10);
    all_values.push_back(EvntGrp_NoEvents_10);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_11;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1822525635"}, EvntGrp_NoEvents_11);
    FIX::EventPx EventPx_11;
    EventPx_11.setString("11081532");
set_field(noEvents_0_1, EventPx_11, EvntGrp_NoEvents_11);
    set_field(noEvents_0_1, FIX::EventText{"STRING_2127256733"}, EvntGrp_NoEvents_11);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(9, 53, 55, 9, 9, 2002)}, EvntGrp_NoEvents_11);
    set_field(noEvents_0_1, FIX::EventType{17}, EvntGrp_NoEvents_11);
    all_values.push_back(EvntGrp_NoEvents_11);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_12;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_284685416"}, EvntGrp_NoEvents_12);
    FIX::EventPx EventPx_12;
    EventPx_12.setString("3053610");
set_field(noEvents_0_2, EventPx_12, EvntGrp_NoEvents_12);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1609255464"}, EvntGrp_NoEvents_12);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(17, 28, 27, 2, 5, 2002)}, EvntGrp_NoEvents_12);
    set_field(noEvents_0_2, FIX::EventType{12}, EvntGrp_NoEvents_12);
    all_values.push_back(EvntGrp_NoEvents_12);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_5;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_852276235"}, InstrumentParties_NoInstrumentParties_5);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_5);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1181016017}, InstrumentParties_NoInstrumentParties_5);
    all_values.push_back(InstrumentParties_NoInstrumentParties_5);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1633038115"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1996009565}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_6;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1322240062"}, InstrumentParties_NoInstrumentParties_6);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_6);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1671051552}, InstrumentParties_NoInstrumentParties_6);
    all_values.push_back(InstrumentParties_NoInstrumentParties_6);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1283810181"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{181074079}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_905500211"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{656654346}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13;
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubID{"STRING_1654429874"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13);
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubIDType{1952522028}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_7;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1025855186"}, InstrumentParties_NoInstrumentParties_7);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_7);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{162677716}, InstrumentParties_NoInstrumentParties_7);
    all_values.push_back(InstrumentParties_NoInstrumentParties_7);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_438909843"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1771933181}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_2109164136"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{1732374284}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16;
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubID{"STRING_1569266341"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16);
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubIDType{1835612035}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstruction::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_7;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_768802269"}, SecAltIDGrp_NoSecurityAltID_7);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_634585490"}, SecAltIDGrp_NoSecurityAltID_7);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_7);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_8;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_76237781"}, SecAltIDGrp_NoSecurityAltID_8);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1557945248"}, SecAltIDGrp_NoSecurityAltID_8);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_8);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_8;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1486861725"}, SecurityXML_8);
  set_field(msg, FIX::SecurityXMLLen{1079932875}, SecurityXML_8);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_591477617"}, SecurityXML_8);
  all_values.push_back(SecurityXML_8);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_0;
  set_field(msg, FIX::DeliveryForm{1}, InstrumentExtension_0);
  FIX::PctAtRisk PctAtRisk_0;
  PctAtRisk_0.setString("73.420000");
set_field(msg, PctAtRisk_0, InstrumentExtension_0);
  all_values.push_back(InstrumentExtension_0);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstruction::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_0;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{7}, AttrbGrp_NoInstrAttrib_0);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1869524438"}, AttrbGrp_NoInstrAttrib_0);
    all_values.push_back(AttrbGrp_NoInstrAttrib_0);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationInstruction::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_0;
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_355471430"}, OrdAllocGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ListID{"STRING_1005850971"}, OrdAllocGrp_NoOrders_0);
    FIX::OrderAvgPx OrderAvgPx_0;
    OrderAvgPx_0.setString("1446455");
set_field(noOrders_0_0, OrderAvgPx_0, OrdAllocGrp_NoOrders_0);
    FIX::OrderBookingQty OrderBookingQty_0;
    OrderBookingQty_0.setString("12609716");
set_field(noOrders_0_0, OrderBookingQty_0, OrdAllocGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_1662505318"}, OrdAllocGrp_NoOrders_0);
    FIX::OrderQty OrderQty_0;
    OrderQty_0.setString("17990753");
set_field(noOrders_0_0, OrderQty_0, OrdAllocGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_1066010022"}, OrdAllocGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SecondaryOrderID{"STRING_540876856"}, OrdAllocGrp_NoOrders_0);
    all_values.push_back(OrdAllocGrp_NoOrders_0);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_0;
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyID{"STRING_1228687739"}, NestedParties2_NoNested2PartyIDs_0);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_0);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyRole{224050353}, NestedParties2_NoNested2PartyIDs_0);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_0);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_0;
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubID{"STRING_1813097948"}, NstdPtys2SubGrp_NoNested2PartySubIDs_0);
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubIDType{1956424637}, NstdPtys2SubGrp_NoNested2PartySubIDs_0);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_0);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_1;
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubID{"STRING_274919965"}, NstdPtys2SubGrp_NoNested2PartySubIDs_1);
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubIDType{1501226335}, NstdPtys2SubGrp_NoNested2PartySubIDs_1);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_1);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_2;
        set_field(noNested2PartySubIDs_0_0_2_2, FIX::Nested2PartySubID{"STRING_54545527"}, NstdPtys2SubGrp_NoNested2PartySubIDs_2);
        set_field(noNested2PartySubIDs_0_0_2_2, FIX::Nested2PartySubIDType{1043722234}, NstdPtys2SubGrp_NoNested2PartySubIDs_2);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_2);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_1;
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyID{"STRING_2135811825"}, NestedParties2_NoNested2PartyIDs_1);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_1);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyRole{454183834}, NestedParties2_NoNested2PartyIDs_1);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_1);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_3;
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubID{"STRING_1210716183"}, NstdPtys2SubGrp_NoNested2PartySubIDs_3);
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubIDType{1045661452}, NstdPtys2SubGrp_NoNested2PartySubIDs_3);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_3);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_4;
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubID{"STRING_225511597"}, NstdPtys2SubGrp_NoNested2PartySubIDs_4);
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubIDType{1776203525}, NstdPtys2SubGrp_NoNested2PartySubIDs_4);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_4);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_2;
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyID{"STRING_1485664987"}, NestedParties2_NoNested2PartyIDs_2);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_2);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyRole{1498244315}, NestedParties2_NoNested2PartyIDs_2);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_2);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_5;
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubID{"STRING_653544784"}, NstdPtys2SubGrp_NoNested2PartySubIDs_5);
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubIDType{356611638}, NstdPtys2SubGrp_NoNested2PartySubIDs_5);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_5);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_6;
        set_field(noNested2PartySubIDs_0_2_2_1, FIX::Nested2PartySubID{"STRING_1593881945"}, NstdPtys2SubGrp_NoNested2PartySubIDs_6);
        set_field(noNested2PartySubIDs_0_2_2_1, FIX::Nested2PartySubIDType{1914516426}, NstdPtys2SubGrp_NoNested2PartySubIDs_6);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_6);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_7;
        set_field(noNested2PartySubIDs_0_2_2_2, FIX::Nested2PartySubID{"STRING_2019116956"}, NstdPtys2SubGrp_NoNested2PartySubIDs_7);
        set_field(noNested2PartySubIDs_0_2_2_2, FIX::Nested2PartySubIDType{1245473690}, NstdPtys2SubGrp_NoNested2PartySubIDs_7);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_7);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_2;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_412510165"}, Parties_NoPartyIDs_2);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_2);
    set_field(noPartyIDs_0_0, FIX::PartyRole{16}, Parties_NoPartyIDs_2);
    all_values.push_back(Parties_NoPartyIDs_2);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_4;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1254664553"}, PtysSubGrp_NoPartySubIDs_4);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_4);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_4);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_5;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1929541924"}, PtysSubGrp_NoPartySubIDs_5);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_5);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_5);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_6;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1042304128"}, PtysSubGrp_NoPartySubIDs_6);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_6);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_6);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_3;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1118151069"}, Parties_NoPartyIDs_3);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_3);
    set_field(noPartyIDs_0_1, FIX::PartyRole{43}, Parties_NoPartyIDs_3);
    all_values.push_back(Parties_NoPartyIDs_3);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_7;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_392726549"}, PtysSubGrp_NoPartySubIDs_7);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_7);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_7);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationInstruction::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_0;
    FIX::PosAmt PosAmt_0;
    PosAmt_0.setString("14383880");
set_field(noPosAmt_0_0, PosAmt_0, PositionAmountData_NoPosAmt_0);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_ICPN"}, PositionAmountData_NoPosAmt_0);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_2088370437"}, PositionAmountData_NoPosAmt_0);
    all_values.push_back(PositionAmountData_NoPosAmt_0);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_1;
    FIX::PosAmt PosAmt_1;
    PosAmt_1.setString("7765693");
set_field(noPosAmt_0_1, PosAmt_1, PositionAmountData_NoPosAmt_1);
    set_field(noPosAmt_0_1, FIX::PosAmtType{"STRING_PREM"}, PositionAmountData_NoPosAmt_1);
    set_field(noPosAmt_0_1, FIX::PositionCurrency{"STRING_1439131104"}, PositionAmountData_NoPosAmt_1);
    all_values.push_back(PositionAmountData_NoPosAmt_1);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_0;
    set_field(noRateSources_0_0, FIX::RateSource{2}, RateSource_NoRateSources_0);
    set_field(noRateSources_0_0, FIX::RateSourceType{0}, RateSource_NoRateSources_0);
    set_field(noRateSources_0_0, FIX::ReferencePage{"STRING_1672204063"}, RateSource_NoRateSources_0);
    all_values.push_back(RateSource_NoRateSources_0);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_1;
    set_field(noRateSources_0_1, FIX::RateSource{0}, RateSource_NoRateSources_1);
    set_field(noRateSources_0_1, FIX::RateSourceType{1}, RateSource_NoRateSources_1);
    set_field(noRateSources_0_1, FIX::ReferencePage{"STRING_770194105"}, RateSource_NoRateSources_1);
    all_values.push_back(RateSource_NoRateSources_1);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_2;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_2;
    set_field(noRateSources_0_2, FIX::RateSource{1}, RateSource_NoRateSources_2);
    set_field(noRateSources_0_2, FIX::RateSourceType{0}, RateSource_NoRateSources_2);
    set_field(noRateSources_0_2, FIX::ReferencePage{"STRING_1800808305"}, RateSource_NoRateSources_2);
    all_values.push_back(RateSource_NoRateSources_2);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_0;
  set_field(msg, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_0);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_MuniAAA"}, SpreadOrBenchmarkCurveData_0);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_910671764"}, SpreadOrBenchmarkCurveData_0);
  FIX::BenchmarkPrice BenchmarkPrice_0;
  BenchmarkPrice_0.setString("19783884");
set_field(msg, BenchmarkPrice_0, SpreadOrBenchmarkCurveData_0);
  set_field(msg, FIX::BenchmarkPriceType{1971594752}, SpreadOrBenchmarkCurveData_0);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1952975892"}, SpreadOrBenchmarkCurveData_0);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1114189433"}, SpreadOrBenchmarkCurveData_0);
  FIX::Spread Spread_0;
  Spread_0.setString("9422621");
set_field(msg, Spread_0, SpreadOrBenchmarkCurveData_0);
  all_values.push_back(SpreadOrBenchmarkCurveData_0);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_0;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_LOT"}, Stipulations_NoStipulations_0);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_43712902"}, Stipulations_NoStipulations_0);
    all_values.push_back(Stipulations_NoStipulations_0);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_1;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_DISCOUNT"}, Stipulations_NoStipulations_1);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_837637618"}, Stipulations_NoStipulations_1);
    all_values.push_back(Stipulations_NoStipulations_1);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_1;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1575149509"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1662468259}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_296766603"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{204235201}, UnderlyingInstrument_1);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_1;
    UnderlyingAdjustedQuantity_1.setString("6378886");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_1, UnderlyingInstrument_1);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_1;
    UnderlyingAllocationPercent_1.setString("77.070000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_1, UnderlyingInstrument_1);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_1;
    UnderlyingAttachmentPoint_1.setString("73.190000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_266853736"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1384156802"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1954761383"}, UnderlyingInstrument_1);
    FIX::UnderlyingCapValue UnderlyingCapValue_1;
    UnderlyingCapValue_1.setString("18103352");
set_field(noUnderlyings_0_0, UnderlyingCapValue_1, UnderlyingInstrument_1);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_1;
    UnderlyingCashAmount_1.setString("9040492");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_1);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_1;
    UnderlyingContractMultiplier_1.setString("20393760");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{836451773}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_230796498"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_35179954"}, UnderlyingInstrument_1);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_1;
    UnderlyingCouponRate_1.setString("83.170000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1138785708"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_1);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_1;
    UnderlyingCurrentValue_1.setString("9628968");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_1, UnderlyingInstrument_1);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_1;
    UnderlyingDetachmentPoint_1.setString("39.630000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_1, UnderlyingInstrument_1);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_1;
    UnderlyingDirtyPrice_1.setString("18303925");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_1, UnderlyingInstrument_1);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_1;
    UnderlyingEndPrice_1.setString("19051589");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_1, UnderlyingInstrument_1);
    FIX::UnderlyingEndValue UnderlyingEndValue_1;
    UnderlyingEndValue_1.setString("4953789");
set_field(noUnderlyings_0_0, UnderlyingEndValue_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{2068711146}, UnderlyingInstrument_1);
    FIX::UnderlyingFXRate UnderlyingFXRate_1;
    UnderlyingFXRate_1.setString("19488718");
set_field(noUnderlyings_0_0, UnderlyingFXRate_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_1);
    FIX::UnderlyingFactor UnderlyingFactor_1;
    UnderlyingFactor_1.setString("7588651");
set_field(noUnderlyings_0_0, UnderlyingFactor_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{157268055}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_59806291"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_273849728"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_454034659"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_264041492"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_911738334"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_42448718"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_546598811"}, UnderlyingInstrument_1);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_1;
    UnderlyingNotionalPercentageOutstanding_1.setString("20.700000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_1);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_1;
    UnderlyingOriginalNotionalPercentageOutstanding_1.setString("65.460000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_841443715"}, UnderlyingInstrument_1);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_1;
    UnderlyingPriceUnitOfMeasureQty_1.setString("1831710");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{931348387}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{733336069}, UnderlyingInstrument_1);
    FIX::UnderlyingPx UnderlyingPx_1;
    UnderlyingPx_1.setString("10196228");
set_field(noUnderlyings_0_0, UnderlyingPx_1, UnderlyingInstrument_1);
    FIX::UnderlyingQty UnderlyingQty_1;
    UnderlyingQty_1.setString("11621448");
set_field(noUnderlyings_0_0, UnderlyingQty_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_768516024"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1904921168"}, UnderlyingInstrument_1);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_1;
    UnderlyingRepurchaseRate_1.setString("69.450000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1714367742}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_473640658"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1116343758"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_318228057"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_156549582"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_874019097"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_813606979"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_77777080"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_675407338"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1445747409"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_1);
    FIX::UnderlyingStartValue UnderlyingStartValue_1;
    UnderlyingStartValue_1.setString("8326753");
set_field(noUnderlyings_0_0, UnderlyingStartValue_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1505553700"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_1);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_1;
    UnderlyingStrikePrice_1.setString("17695951");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_2022230258"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1329158771"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_168710356"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1053338681"}, UnderlyingInstrument_1);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_1;
    UnderlyingUnitOfMeasureQty_1.setString("6082806");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_1, UnderlyingInstrument_1);
    all_values.push_back(UnderlyingInstrument_1);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_3;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1894782396"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_3);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_791451721"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_3);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_3);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_3;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_480634818"}, UnderlyingStipulations_NoUnderlyingStips_3);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1811074571"}, UnderlyingStipulations_NoUnderlyingStips_3);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_3);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_4;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_468596526"}, UnderlyingStipulations_NoUnderlyingStips_4);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1249150842"}, UnderlyingStipulations_NoUnderlyingStips_4);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_4);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_2;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_622043472"}, UndlyInstrumentParties_NoUndlyInstrumentParties_2);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_2);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{2042152750}, UndlyInstrumentParties_NoUndlyInstrumentParties_2);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_2);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1134262994"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{51218684}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_3;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_464922679"}, UndlyInstrumentParties_NoUndlyInstrumentParties_3);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_3);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{128995764}, UndlyInstrumentParties_NoUndlyInstrumentParties_3);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_3);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1246133735"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{965637960}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1973005411"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{604203787}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_2076129885"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1112231815}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_4;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_226315332"}, UndlyInstrumentParties_NoUndlyInstrumentParties_4);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_4);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{293906938}, UndlyInstrumentParties_NoUndlyInstrumentParties_4);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_4);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_856731528"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{902187582}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_917612590"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{604030277}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_2;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1693639303"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{224064232}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1084665095"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1357230226}, UnderlyingInstrument_2);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_2;
    UnderlyingAdjustedQuantity_2.setString("6926607");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_2, UnderlyingInstrument_2);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_2;
    UnderlyingAllocationPercent_2.setString("22.890000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_2, UnderlyingInstrument_2);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_2;
    UnderlyingAttachmentPoint_2.setString("86.700000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1314704230"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1002367225"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_672927772"}, UnderlyingInstrument_2);
    FIX::UnderlyingCapValue UnderlyingCapValue_2;
    UnderlyingCapValue_2.setString("9056078");
set_field(noUnderlyings_0_1, UnderlyingCapValue_2, UnderlyingInstrument_2);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_2;
    UnderlyingCashAmount_2.setString("21366302");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_2);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_2;
    UnderlyingContractMultiplier_2.setString("13705304");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1937016545}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_853142220"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_363376862"}, UnderlyingInstrument_2);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_2;
    UnderlyingCouponRate_2.setString("66.320000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1818780180"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_2);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_2;
    UnderlyingCurrentValue_2.setString("17474264");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_2, UnderlyingInstrument_2);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_2;
    UnderlyingDetachmentPoint_2.setString("4.400000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_2, UnderlyingInstrument_2);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_2;
    UnderlyingDirtyPrice_2.setString("18661857");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_2, UnderlyingInstrument_2);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_2;
    UnderlyingEndPrice_2.setString("15508192");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_2, UnderlyingInstrument_2);
    FIX::UnderlyingEndValue UnderlyingEndValue_2;
    UnderlyingEndValue_2.setString("15950373");
set_field(noUnderlyings_0_1, UnderlyingEndValue_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{113727791}, UnderlyingInstrument_2);
    FIX::UnderlyingFXRate UnderlyingFXRate_2;
    UnderlyingFXRate_2.setString("2600671");
set_field(noUnderlyings_0_1, UnderlyingFXRate_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_2);
    FIX::UnderlyingFactor UnderlyingFactor_2;
    UnderlyingFactor_2.setString("10313403");
set_field(noUnderlyings_0_1, UnderlyingFactor_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{864097422}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_2043380616"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1255404614"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1948762517"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1253127194"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1948065372"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2135094806"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2031385864"}, UnderlyingInstrument_2);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_2;
    UnderlyingNotionalPercentageOutstanding_2.setString("59.550000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_2);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_2;
    UnderlyingOriginalNotionalPercentageOutstanding_2.setString("99.880000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2020893768"}, UnderlyingInstrument_2);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_2;
    UnderlyingPriceUnitOfMeasureQty_2.setString("9791249");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1280976444}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1243940612}, UnderlyingInstrument_2);
    FIX::UnderlyingPx UnderlyingPx_2;
    UnderlyingPx_2.setString("7686578");
set_field(noUnderlyings_0_1, UnderlyingPx_2, UnderlyingInstrument_2);
    FIX::UnderlyingQty UnderlyingQty_2;
    UnderlyingQty_2.setString("21341186");
set_field(noUnderlyings_0_1, UnderlyingQty_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1607317474"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1804324484"}, UnderlyingInstrument_2);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_2;
    UnderlyingRepurchaseRate_2.setString("51.970000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1796216099}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1296711256"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1405357966"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_949862892"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1015413359"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_808693583"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_397416623"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1129141151"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1068760729"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_747157936"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_2);
    FIX::UnderlyingStartValue UnderlyingStartValue_2;
    UnderlyingStartValue_2.setString("19328581");
set_field(noUnderlyings_0_1, UnderlyingStartValue_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_643054904"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_2);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_2;
    UnderlyingStrikePrice_2.setString("18961820");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1068984223"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1721748179"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1780084315"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_36786530"}, UnderlyingInstrument_2);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_2;
    UnderlyingUnitOfMeasureQty_2.setString("5642429");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_2, UnderlyingInstrument_2);
    all_values.push_back(UnderlyingInstrument_2);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_4;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_2057680298"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_4);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1543367871"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_4);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_4);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_5;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1470407100"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_5);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1154137263"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_5);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_5);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_6;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_164542075"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_6);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1457042116"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_6);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_6);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_5;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1968866560"}, UnderlyingStipulations_NoUnderlyingStips_5);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1114973665"}, UnderlyingStipulations_NoUnderlyingStips_5);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_5);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_6;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_262703541"}, UnderlyingStipulations_NoUnderlyingStips_6);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1118094168"}, UnderlyingStipulations_NoUnderlyingStips_6);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_6);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_7;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_372847984"}, UnderlyingStipulations_NoUnderlyingStips_7);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1212566433"}, UnderlyingStipulations_NoUnderlyingStips_7);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_7);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_5;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1181541567"}, UndlyInstrumentParties_NoUndlyInstrumentParties_5);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_5);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1115165030}, UndlyInstrumentParties_NoUndlyInstrumentParties_5);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_5);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_209657344"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1128162915}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2035676800"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{852712248}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_249081766"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1622330173}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_6;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_601410698"}, UndlyInstrumentParties_NoUndlyInstrumentParties_6);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_6);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1196594704}, UndlyInstrumentParties_NoUndlyInstrumentParties_6);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_6);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1354852520"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1760837620}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_423442021"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1265049171}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_7;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1156721843"}, UndlyInstrumentParties_NoUndlyInstrumentParties_7);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_7);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{271702786}, UndlyInstrumentParties_NoUndlyInstrumentParties_7);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_7);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1203407589"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{885673875}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_3;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1142646830"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{170897607}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1148377416"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{113257350}, UnderlyingInstrument_3);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_3;
    UnderlyingAdjustedQuantity_3.setString("5437455");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_3, UnderlyingInstrument_3);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_3;
    UnderlyingAllocationPercent_3.setString("2.010000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_3, UnderlyingInstrument_3);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_3;
    UnderlyingAttachmentPoint_3.setString("12.300000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1725287158"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_1823443257"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1214446260"}, UnderlyingInstrument_3);
    FIX::UnderlyingCapValue UnderlyingCapValue_3;
    UnderlyingCapValue_3.setString("18281058");
set_field(noUnderlyings_0_2, UnderlyingCapValue_3, UnderlyingInstrument_3);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_3;
    UnderlyingCashAmount_3.setString("20331006");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_3);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_3;
    UnderlyingContractMultiplier_3.setString("17162989");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{738329201}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_444207294"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1191145484"}, UnderlyingInstrument_3);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_3;
    UnderlyingCouponRate_3.setString("99.000000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1762273284"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_3);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_3;
    UnderlyingCurrentValue_3.setString("9696421");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_3, UnderlyingInstrument_3);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_3;
    UnderlyingDetachmentPoint_3.setString("41.600000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_3, UnderlyingInstrument_3);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_3;
    UnderlyingDirtyPrice_3.setString("19971932");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_3, UnderlyingInstrument_3);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_3;
    UnderlyingEndPrice_3.setString("872076");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_3, UnderlyingInstrument_3);
    FIX::UnderlyingEndValue UnderlyingEndValue_3;
    UnderlyingEndValue_3.setString("10103323");
set_field(noUnderlyings_0_2, UnderlyingEndValue_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{1743558759}, UnderlyingInstrument_3);
    FIX::UnderlyingFXRate UnderlyingFXRate_3;
    UnderlyingFXRate_3.setString("3589104");
set_field(noUnderlyings_0_2, UnderlyingFXRate_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_3);
    FIX::UnderlyingFactor UnderlyingFactor_3;
    UnderlyingFactor_3.setString("7994827");
set_field(noUnderlyings_0_2, UnderlyingFactor_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1244584341}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1326759456"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_970380308"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_245478110"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_1440016807"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1514125899"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_458938311"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1539298037"}, UnderlyingInstrument_3);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_3;
    UnderlyingNotionalPercentageOutstanding_3.setString("94.090000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_3);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_3;
    UnderlyingOriginalNotionalPercentageOutstanding_3.setString("6.490000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_772551568"}, UnderlyingInstrument_3);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_3;
    UnderlyingPriceUnitOfMeasureQty_3.setString("205148");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{801386177}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{341366879}, UnderlyingInstrument_3);
    FIX::UnderlyingPx UnderlyingPx_3;
    UnderlyingPx_3.setString("7588440");
set_field(noUnderlyings_0_2, UnderlyingPx_3, UnderlyingInstrument_3);
    FIX::UnderlyingQty UnderlyingQty_3;
    UnderlyingQty_3.setString("12455934");
set_field(noUnderlyings_0_2, UnderlyingQty_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1532512363"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2098583976"}, UnderlyingInstrument_3);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_3;
    UnderlyingRepurchaseRate_3.setString("31.080000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1772768904}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_1524851593"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_1830025265"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1626379416"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1374561232"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1917232945"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_489228124"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_970636343"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_128659763"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_673340750"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_3);
    FIX::UnderlyingStartValue UnderlyingStartValue_3;
    UnderlyingStartValue_3.setString("13732441");
set_field(noUnderlyings_0_2, UnderlyingStartValue_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2000100206"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_3);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_3;
    UnderlyingStrikePrice_3.setString("12926333");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_2107141603"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_2077660526"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_684447754"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1051587365"}, UnderlyingInstrument_3);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_3;
    UnderlyingUnitOfMeasureQty_3.setString("650747");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_3, UnderlyingInstrument_3);
    all_values.push_back(UnderlyingInstrument_3);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_7;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1824138933"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_7);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_85589674"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_7);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_7);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_8;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_2092094581"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_8);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_18022165"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_8);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_8);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_9;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_844433750"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_9);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1190204405"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_9);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_9);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_8;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_795534078"}, UnderlyingStipulations_NoUnderlyingStips_8);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_2050587514"}, UnderlyingStipulations_NoUnderlyingStips_8);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_8);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_9;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_1175819784"}, UnderlyingStipulations_NoUnderlyingStips_9);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_172902023"}, UnderlyingStipulations_NoUnderlyingStips_9);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_9);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_10;
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipType{"STRING_1733129131"}, UnderlyingStipulations_NoUnderlyingStips_10);
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipValue{"STRING_654715553"}, UnderlyingStipulations_NoUnderlyingStips_10);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_10);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_8;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1502878429"}, UndlyInstrumentParties_NoUndlyInstrumentParties_8);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_8);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{370615951}, UndlyInstrumentParties_NoUndlyInstrumentParties_8);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_8);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1817284427"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2140734995}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_0;
  FIX::Yield Yield_0;
  Yield_0.setString("86.490000");
set_field(msg, Yield_0, YieldData_0);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1669900985"}, YieldData_0);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_586267052"}, YieldData_0);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_0;
  YieldRedemptionPrice_0.setString("3285372");
set_field(msg, YieldRedemptionPrice_0, YieldData_0);
  set_field(msg, FIX::YieldRedemptionPriceType{815050703}, YieldData_0);
  set_field(msg, FIX::YieldType{"STRING_TAXEQUIV"}, YieldData_0);
  all_values.push_back(YieldData_0);
  all_compo_names.insert(".");


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
