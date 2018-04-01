#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationInstructionAlert.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstructionAlert, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationInstructionAlert msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAlert_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_1;
  AccruedInterestAmt_1.setString("14455871");
set_field(msg, AccruedInterestAmt_1, AllocationInstructionAlert_0);
  FIX::AccruedInterestRate AccruedInterestRate_1;
  AccruedInterestRate_1.setString("7.310000");
set_field(msg, AccruedInterestRate_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocCancReplaceReason{1}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocID{"STRING_935607202"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocIntermedReqType{2}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocLinkID{"STRING_2075215152"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocLinkType{0}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocNoOrdersType{0}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocTransType{'0'}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocType{2}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AutoAcceptIndicator{false}, AllocationInstructionAlert_0);
  FIX::AvgParPx AvgParPx_1;
  AvgParPx_1.setString("18534769");
set_field(msg, AvgParPx_1, AllocationInstructionAlert_0);
  FIX::AvgPx AvgPx_1;
  AvgPx_1.setString("3351299");
set_field(msg, AvgPx_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::AvgPxIndicator{1}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AvgPxPrecision{807693724}, AllocationInstructionAlert_0);
  set_field(msg, FIX::BookingRefID{"STRING_978666312"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::BookingType{1}, AllocationInstructionAlert_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1682720231"}, AllocationInstructionAlert_0);
  FIX::Concession Concession_1;
  Concession_1.setString("1056627");
set_field(msg, Concession_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::Currency{"JPY"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::CustOrderCapacity{3}, AllocationInstructionAlert_0);
  set_field(msg, FIX::EncodedText{"DATA_647236322"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::EncodedTextLen{1415281605}, AllocationInstructionAlert_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_1;
  EndAccruedInterestAmt_1.setString("17157188");
set_field(msg, EndAccruedInterestAmt_1, AllocationInstructionAlert_0);
  FIX::EndCash EndCash_1;
  EndCash_1.setString("8797967");
set_field(msg, EndCash_1, AllocationInstructionAlert_0);
  FIX::GrossTradeAmt GrossTradeAmt_1;
  GrossTradeAmt_1.setString("6600392");
set_field(msg, GrossTradeAmt_1, AllocationInstructionAlert_0);
  FIX::InterestAtMaturity InterestAtMaturity_1;
  InterestAtMaturity_1.setString("14295655");
set_field(msg, InterestAtMaturity_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::LastFragment{false}, AllocationInstructionAlert_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_2021125150"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::LegalConfirm{true}, AllocationInstructionAlert_0);
  set_field(msg, FIX::MatchType{"STRING_A2"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::MessageEventSource{"STRING_314612234"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::MultiLegReportingType{'1'}, AllocationInstructionAlert_0);
  FIX::NetMoney NetMoney_1;
  NetMoney_1.setString("13151859");
set_field(msg, NetMoney_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::NumDaysInterest{1472284017}, AllocationInstructionAlert_0);
  set_field(msg, FIX::PositionEffect{'O'}, AllocationInstructionAlert_0);
  set_field(msg, FIX::PreviouslyReported{false}, AllocationInstructionAlert_0);
  set_field(msg, FIX::PriceType{19}, AllocationInstructionAlert_0);
  set_field(msg, FIX::QtyType{0}, AllocationInstructionAlert_0);
  FIX::Quantity Quantity_2;
  Quantity_2.setString("15283411");
set_field(msg, Quantity_2, AllocationInstructionAlert_0);
  set_field(msg, FIX::RefAllocID{"STRING_438623960"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::ReversalIndicator{false}, AllocationInstructionAlert_0);
  FIX::RndPx RndPx_1;
  RndPx_1.setString("18634711");
set_field(msg, RndPx_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_1221473664"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1006778625"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::SettlType{"STRING_2"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::Side{'C'}, AllocationInstructionAlert_0);
  FIX::StartCash StartCash_1;
  StartCash_1.setString("5420152");
set_field(msg, StartCash_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::Text{"STRING_800316517"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TotNoAllocs{1206566463}, AllocationInstructionAlert_0);
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_1;
  TotalAccruedInterestAmt_1.setString("11464368");
set_field(msg, TotalAccruedInterestAmt_1, AllocationInstructionAlert_0);
  FIX::TotalTakedown TotalTakedown_1;
  TotalTakedown_1.setString("3905118");
set_field(msg, TotalTakedown_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1853802785"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TradeInputSource{"STRING_414234767"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_2106230754"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TradingSessionID{"STRING_4"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_2"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(10, 49, 20, 7, 4, 2003)}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TrdSubType{14}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TrdType{45}, AllocationInstructionAlert_0);
  all_values.push_back(AllocationInstructionAlert_0);

  all_compo_names.insert("AllocationInstructionAlert");

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_1;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1823479435"}, AllocGrp_NoAllocs_1);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_1;
    AllocAccruedInterestAmt_1.setString("6505863");
set_field(noAllocs_0_0, AllocAccruedInterestAmt_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{1707156450}, AllocGrp_NoAllocs_1);
    FIX::AllocAvgPx AllocAvgPx_1;
    AllocAvgPx_1.setString("12043369");
set_field(noAllocs_0_0, AllocAvgPx_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::AllocCustomerCapacity{"STRING_1089210281"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::AllocHandlInst{3}, AllocGrp_NoAllocs_1);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_1;
    AllocInterestAtMaturity_1.setString("9203243");
set_field(noAllocs_0_0, AllocInterestAtMaturity_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::AllocMethod{2}, AllocGrp_NoAllocs_1);
    FIX::AllocNetMoney AllocNetMoney_1;
    AllocNetMoney_1.setString("7655363");
set_field(noAllocs_0_0, AllocNetMoney_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::AllocPositionEffect{'R'}, AllocGrp_NoAllocs_1);
    FIX::AllocPrice AllocPrice_3;
    AllocPrice_3.setString("5801212");
set_field(noAllocs_0_0, AllocPrice_3, AllocGrp_NoAllocs_1);
    FIX::AllocQty AllocQty_3;
    AllocQty_3.setString("13075515");
set_field(noAllocs_0_0, AllocQty_3, AllocGrp_NoAllocs_1);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_1;
    AllocSettlCurrAmt_1.setString("2678109");
set_field(noAllocs_0_0, AllocSettlCurrAmt_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"JPY"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::AllocSettlInstType{0}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::AllocText{"STRING_1493006853"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::ClearingFeeIndicator{"STRING_C"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::EncodedAllocText{"DATA_617070002"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::EncodedAllocTextLen{2079122784}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_1795013474"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::IndividualAllocType{2}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::MatchStatus{'0'}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::NotifyBrokerOfCredit{false}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::ProcessCode{'3'}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::SecondaryIndividualAllocID{"STRING_1498916574"}, AllocGrp_NoAllocs_1);
    FIX::SettlCurrAmt SettlCurrAmt_1;
    SettlCurrAmt_1.setString("18579730");
set_field(noAllocs_0_0, SettlCurrAmt_1, AllocGrp_NoAllocs_1);
    FIX::SettlCurrFxRate SettlCurrFxRate_1;
    SettlCurrFxRate_1.setString("15448652");
set_field(noAllocs_0_0, SettlCurrFxRate_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::SettlCurrFxRateCalc{'D'}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::SettlCurrency{"JPY"}, AllocGrp_NoAllocs_1);
    all_values.push_back(AllocGrp_NoAllocs_1);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_2;
      set_field(noClearingInstructions_0_1_0, FIX::ClearingInstruction{1}, ClrInstGrp_NoClearingInstructions_2);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_2);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_1;
    set_field(noAllocs_0_0, FIX::CommCurrency{"USD"}, CommissionData_1);
    set_field(noAllocs_0_0, FIX::CommType{'3'}, CommissionData_1);
    FIX::Commission Commission_1;
    Commission_1.setString("20773605");
set_field(noAllocs_0_0, Commission_1, CommissionData_1);
    set_field(noAllocs_0_0, FIX::FundRenewWaiv{'Y'}, CommissionData_1);
    all_values.push_back(CommissionData_1);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_2;
      FIX::MiscFeeAmt MiscFeeAmt_2;
      MiscFeeAmt_2.setString("6954132");
set_field(noMiscFees_0_1_0, MiscFeeAmt_2, MiscFeesGrp_NoMiscFees_2);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_2);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeCurr{"GBP"}, MiscFeesGrp_NoMiscFees_2);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeType{"STRING_8"}, MiscFeesGrp_NoMiscFees_2);
      all_values.push_back(MiscFeesGrp_NoMiscFees_2);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_3;
      FIX::MiscFeeAmt MiscFeeAmt_3;
      MiscFeeAmt_3.setString("2726561");
set_field(noMiscFees_0_1_1, MiscFeeAmt_3, MiscFeesGrp_NoMiscFees_3);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_3);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_3);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeType{"STRING_7"}, MiscFeesGrp_NoMiscFees_3);
      all_values.push_back(MiscFeesGrp_NoMiscFees_3);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_12;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1697302106"}, NestedParties_NoNestedPartyIDs_12);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_12);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1088075946}, NestedParties_NoNestedPartyIDs_12);
      all_values.push_back(NestedParties_NoNestedPartyIDs_12);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_29;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1125700437"}, NstdPtysSubGrp_NoNestedPartySubIDs_29);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{210185563}, NstdPtysSubGrp_NoNestedPartySubIDs_29);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_29);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_13;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_500481692"}, NestedParties_NoNestedPartyIDs_13);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_13);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1755050780}, NestedParties_NoNestedPartyIDs_13);
      all_values.push_back(NestedParties_NoNestedPartyIDs_13);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_30;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1134007409"}, NstdPtysSubGrp_NoNestedPartySubIDs_30);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{219013517}, NstdPtysSubGrp_NoNestedPartySubIDs_30);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_30);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_1;
    set_field(noAllocs_0_0, FIX::SettlDeliveryType{1}, SettlInstructionsData_1);
    set_field(noAllocs_0_0, FIX::StandInstDbID{"STRING_2082411272"}, SettlInstructionsData_1);
    set_field(noAllocs_0_0, FIX::StandInstDbName{"STRING_390132703"}, SettlInstructionsData_1);
    set_field(noAllocs_0_0, FIX::StandInstDbType{3}, SettlInstructionsData_1);
    all_values.push_back(SettlInstructionsData_1);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_3;
      set_field(noDlvyInst_0_1_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_3);
      set_field(noDlvyInst_0_1_0, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_3);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_3);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_4;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_1015422812"}, SettlParties_NoSettlPartyIDs_4);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'5'}, SettlParties_NoSettlPartyIDs_4);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{511840963}, SettlParties_NoSettlPartyIDs_4);
        all_values.push_back(SettlParties_NoSettlPartyIDs_4);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_10;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_469477531"}, SettlPtysSubGrp_NoSettlPartySubIDs_10);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{784497079}, SettlPtysSubGrp_NoSettlPartySubIDs_10);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_10);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_5;
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyID{"STRING_1032889729"}, SettlParties_NoSettlPartyIDs_5);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_5);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyRole{402676401}, SettlParties_NoSettlPartyIDs_5);
        all_values.push_back(SettlParties_NoSettlPartyIDs_5);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_11;
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubID{"STRING_165277722"}, SettlPtysSubGrp_NoSettlPartySubIDs_11);
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubIDType{2099978508}, SettlPtysSubGrp_NoSettlPartySubIDs_11);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_11);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_4;
      set_field(noDlvyInst_0_1_1, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_4);
      set_field(noDlvyInst_0_1_1, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_4);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_4);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_6;
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyID{"STRING_1424086896"}, SettlParties_NoSettlPartyIDs_6);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_6);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyRole{1602025317}, SettlParties_NoSettlPartyIDs_6);
        all_values.push_back(SettlParties_NoSettlPartyIDs_6);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_12;
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubID{"STRING_1071106364"}, SettlPtysSubGrp_NoSettlPartySubIDs_12);
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubIDType{521328502}, SettlPtysSubGrp_NoSettlPartySubIDs_12);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_12);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_7;
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyID{"STRING_1246800524"}, SettlParties_NoSettlPartyIDs_7);
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_7);
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyRole{1830416264}, SettlParties_NoSettlPartyIDs_7);
        all_values.push_back(SettlParties_NoSettlPartyIDs_7);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_13;
          set_field(noSettlPartySubIDs_0_1_1_3_0, FIX::SettlPartySubID{"STRING_1680252585"}, SettlPtysSubGrp_NoSettlPartySubIDs_13);
          set_field(noSettlPartySubIDs_0_1_1_3_0, FIX::SettlPartySubIDType{291174559}, SettlPtysSubGrp_NoSettlPartySubIDs_13);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_13);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_14;
          set_field(noSettlPartySubIDs_0_1_1_3_1, FIX::SettlPartySubID{"STRING_1006786269"}, SettlPtysSubGrp_NoSettlPartySubIDs_14);
          set_field(noSettlPartySubIDs_0_1_1_3_1, FIX::SettlPartySubIDType{2000262178}, SettlPtysSubGrp_NoSettlPartySubIDs_14);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_14);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_15;
          set_field(noSettlPartySubIDs_0_1_1_3_2, FIX::SettlPartySubID{"STRING_1118895044"}, SettlPtysSubGrp_NoSettlPartySubIDs_15);
          set_field(noSettlPartySubIDs_0_1_1_3_2, FIX::SettlPartySubIDType{885175184}, SettlPtysSubGrp_NoSettlPartySubIDs_15);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_15);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_2);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_5;
      set_field(noDlvyInst_0_1_2, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_5);
      set_field(noDlvyInst_0_1_2, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_5);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_5);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_8;
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyID{"STRING_1739105264"}, SettlParties_NoSettlPartyIDs_8);
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_8);
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyRole{34029578}, SettlParties_NoSettlPartyIDs_8);
        all_values.push_back(SettlParties_NoSettlPartyIDs_8);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_16;
          set_field(noSettlPartySubIDs_0_2_0_3_0, FIX::SettlPartySubID{"STRING_1038166886"}, SettlPtysSubGrp_NoSettlPartySubIDs_16);
          set_field(noSettlPartySubIDs_0_2_0_3_0, FIX::SettlPartySubIDType{436705980}, SettlPtysSubGrp_NoSettlPartySubIDs_16);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_16);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_17;
          set_field(noSettlPartySubIDs_0_2_0_3_1, FIX::SettlPartySubID{"STRING_392642703"}, SettlPtysSubGrp_NoSettlPartySubIDs_17);
          set_field(noSettlPartySubIDs_0_2_0_3_1, FIX::SettlPartySubIDType{1203444609}, SettlPtysSubGrp_NoSettlPartySubIDs_17);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_17);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_1);
        }
        noDlvyInst_0_1_2.addGroup(noSettlPartyIDs_0_2_2_0);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_1;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_2;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_389200840"}, AllocGrp_NoAllocs_2);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_2;
    AllocAccruedInterestAmt_2.setString("6910291");
set_field(noAllocs_0_1, AllocAccruedInterestAmt_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{309314629}, AllocGrp_NoAllocs_2);
    FIX::AllocAvgPx AllocAvgPx_2;
    AllocAvgPx_2.setString("14907444");
set_field(noAllocs_0_1, AllocAvgPx_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::AllocCustomerCapacity{"STRING_2115116059"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::AllocHandlInst{1}, AllocGrp_NoAllocs_2);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_2;
    AllocInterestAtMaturity_2.setString("9452861");
set_field(noAllocs_0_1, AllocInterestAtMaturity_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::AllocMethod{3}, AllocGrp_NoAllocs_2);
    FIX::AllocNetMoney AllocNetMoney_2;
    AllocNetMoney_2.setString("6964765");
set_field(noAllocs_0_1, AllocNetMoney_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::AllocPositionEffect{'C'}, AllocGrp_NoAllocs_2);
    FIX::AllocPrice AllocPrice_4;
    AllocPrice_4.setString("13272260");
set_field(noAllocs_0_1, AllocPrice_4, AllocGrp_NoAllocs_2);
    FIX::AllocQty AllocQty_4;
    AllocQty_4.setString("19865964");
set_field(noAllocs_0_1, AllocQty_4, AllocGrp_NoAllocs_2);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_2;
    AllocSettlCurrAmt_2.setString("11495472");
set_field(noAllocs_0_1, AllocSettlCurrAmt_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::AllocSettlCurrency{"USD"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::AllocSettlInstType{3}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::AllocText{"STRING_1368256820"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::ClearingFeeIndicator{"STRING_C"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::EncodedAllocText{"DATA_412133209"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::EncodedAllocTextLen{105948356}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_92861622"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::IndividualAllocType{1}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::MatchStatus{'2'}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::NotifyBrokerOfCredit{true}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::ProcessCode{'6'}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::SecondaryIndividualAllocID{"STRING_1536994082"}, AllocGrp_NoAllocs_2);
    FIX::SettlCurrAmt SettlCurrAmt_2;
    SettlCurrAmt_2.setString("3089945");
set_field(noAllocs_0_1, SettlCurrAmt_2, AllocGrp_NoAllocs_2);
    FIX::SettlCurrFxRate SettlCurrFxRate_2;
    SettlCurrFxRate_2.setString("8919874");
set_field(noAllocs_0_1, SettlCurrFxRate_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::SettlCurrFxRateCalc{'M'}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::SettlCurrency{"GBP"}, AllocGrp_NoAllocs_2);
    all_values.push_back(AllocGrp_NoAllocs_2);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_3;
      set_field(noClearingInstructions_1_1_0, FIX::ClearingInstruction{13}, ClrInstGrp_NoClearingInstructions_3);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_3);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_4;
      set_field(noClearingInstructions_1_1_1, FIX::ClearingInstruction{8}, ClrInstGrp_NoClearingInstructions_4);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_4);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_2;
    set_field(noAllocs_0_1, FIX::CommCurrency{"JPY"}, CommissionData_2);
    set_field(noAllocs_0_1, FIX::CommType{'6'}, CommissionData_2);
    FIX::Commission Commission_2;
    Commission_2.setString("5039642");
set_field(noAllocs_0_1, Commission_2, CommissionData_2);
    set_field(noAllocs_0_1, FIX::FundRenewWaiv{'N'}, CommissionData_2);
    all_values.push_back(CommissionData_2);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_4;
      FIX::MiscFeeAmt MiscFeeAmt_4;
      MiscFeeAmt_4.setString("19705788");
set_field(noMiscFees_1_1_0, MiscFeeAmt_4, MiscFeesGrp_NoMiscFees_4);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_4);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeCurr{"CAN"}, MiscFeesGrp_NoMiscFees_4);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeType{"STRING_8"}, MiscFeesGrp_NoMiscFees_4);
      all_values.push_back(MiscFeesGrp_NoMiscFees_4);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_1.addGroup(noMiscFees_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_1_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_5;
      FIX::MiscFeeAmt MiscFeeAmt_5;
      MiscFeeAmt_5.setString("19375880");
set_field(noMiscFees_1_1_1, MiscFeeAmt_5, MiscFeesGrp_NoMiscFees_5);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_5);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeCurr{"USD"}, MiscFeesGrp_NoMiscFees_5);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeType{"STRING_13"}, MiscFeesGrp_NoMiscFees_5);
      all_values.push_back(MiscFeesGrp_NoMiscFees_5);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_1.addGroup(noMiscFees_1_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_14;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1255109928"}, NestedParties_NoNestedPartyIDs_14);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_14);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1811623373}, NestedParties_NoNestedPartyIDs_14);
      all_values.push_back(NestedParties_NoNestedPartyIDs_14);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_31;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_430072489"}, NstdPtysSubGrp_NoNestedPartySubIDs_31);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1201133807}, NstdPtysSubGrp_NoNestedPartySubIDs_31);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_31);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_2;
    set_field(noAllocs_0_1, FIX::SettlDeliveryType{2}, SettlInstructionsData_2);
    set_field(noAllocs_0_1, FIX::StandInstDbID{"STRING_1322059927"}, SettlInstructionsData_2);
    set_field(noAllocs_0_1, FIX::StandInstDbName{"STRING_1027350221"}, SettlInstructionsData_2);
    set_field(noAllocs_0_1, FIX::StandInstDbType{1}, SettlInstructionsData_2);
    all_values.push_back(SettlInstructionsData_2);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_6;
      set_field(noDlvyInst_1_1_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_6);
      set_field(noDlvyInst_1_1_0, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_6);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_6);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_9;
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyID{"STRING_801445547"}, SettlParties_NoSettlPartyIDs_9);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyIDSource{'4'}, SettlParties_NoSettlPartyIDs_9);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyRole{1409904595}, SettlParties_NoSettlPartyIDs_9);
        all_values.push_back(SettlParties_NoSettlPartyIDs_9);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_18;
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubID{"STRING_1848947436"}, SettlPtysSubGrp_NoSettlPartySubIDs_18);
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubIDType{1989014414}, SettlPtysSubGrp_NoSettlPartySubIDs_18);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_18);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_19;
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubID{"STRING_1128504949"}, SettlPtysSubGrp_NoSettlPartySubIDs_19);
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubIDType{321930577}, SettlPtysSubGrp_NoSettlPartySubIDs_19);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_19);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_1_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_7;
      set_field(noDlvyInst_1_1_1, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_7);
      set_field(noDlvyInst_1_1_1, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_7);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_7);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_10;
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyID{"STRING_49857777"}, SettlParties_NoSettlPartyIDs_10);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_10);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyRole{1506578432}, SettlParties_NoSettlPartyIDs_10);
        all_values.push_back(SettlParties_NoSettlPartyIDs_10);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_20;
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubID{"STRING_897558189"}, SettlPtysSubGrp_NoSettlPartySubIDs_20);
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubIDType{1815237302}, SettlPtysSubGrp_NoSettlPartySubIDs_20);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_20);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_11;
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyID{"STRING_319732364"}, SettlParties_NoSettlPartyIDs_11);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_11);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyRole{1479377027}, SettlParties_NoSettlPartyIDs_11);
        all_values.push_back(SettlParties_NoSettlPartyIDs_11);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_21;
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubID{"STRING_1903882617"}, SettlPtysSubGrp_NoSettlPartySubIDs_21);
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubIDType{533027187}, SettlPtysSubGrp_NoSettlPartySubIDs_21);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_21);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_22;
          set_field(noSettlPartySubIDs_1_1_1_3_1, FIX::SettlPartySubID{"STRING_360429632"}, SettlPtysSubGrp_NoSettlPartySubIDs_22);
          set_field(noSettlPartySubIDs_1_1_1_3_1, FIX::SettlPartySubIDType{1078458896}, SettlPtysSubGrp_NoSettlPartySubIDs_22);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_22);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_23;
          set_field(noSettlPartySubIDs_1_1_1_3_2, FIX::SettlPartySubID{"STRING_1560377408"}, SettlPtysSubGrp_NoSettlPartySubIDs_23);
          set_field(noSettlPartySubIDs_1_1_1_3_2, FIX::SettlPartySubIDType{163171021}, SettlPtysSubGrp_NoSettlPartySubIDs_23);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_23);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_2);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_1);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_2;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_3;
    set_field(noAllocs_0_2, FIX::AllocAccount{"STRING_200983574"}, AllocGrp_NoAllocs_3);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_3;
    AllocAccruedInterestAmt_3.setString("6556612");
set_field(noAllocs_0_2, AllocAccruedInterestAmt_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::AllocAcctIDSource{1358578858}, AllocGrp_NoAllocs_3);
    FIX::AllocAvgPx AllocAvgPx_3;
    AllocAvgPx_3.setString("17282549");
set_field(noAllocs_0_2, AllocAvgPx_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::AllocCustomerCapacity{"STRING_1457106783"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::AllocHandlInst{2}, AllocGrp_NoAllocs_3);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_3;
    AllocInterestAtMaturity_3.setString("9906758");
set_field(noAllocs_0_2, AllocInterestAtMaturity_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::AllocMethod{3}, AllocGrp_NoAllocs_3);
    FIX::AllocNetMoney AllocNetMoney_3;
    AllocNetMoney_3.setString("14682656");
set_field(noAllocs_0_2, AllocNetMoney_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::AllocPositionEffect{'C'}, AllocGrp_NoAllocs_3);
    FIX::AllocPrice AllocPrice_5;
    AllocPrice_5.setString("17435378");
set_field(noAllocs_0_2, AllocPrice_5, AllocGrp_NoAllocs_3);
    FIX::AllocQty AllocQty_5;
    AllocQty_5.setString("17901962");
set_field(noAllocs_0_2, AllocQty_5, AllocGrp_NoAllocs_3);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_3;
    AllocSettlCurrAmt_3.setString("10919600");
set_field(noAllocs_0_2, AllocSettlCurrAmt_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::AllocSettlCurrency{"USD"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::AllocSettlInstType{0}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::AllocText{"STRING_1916745954"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::ClearingFeeIndicator{"STRING_1"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::EncodedAllocText{"DATA_206440251"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::EncodedAllocTextLen{666820496}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::IndividualAllocID{"STRING_2120912630"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::IndividualAllocType{2}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::MatchStatus{'1'}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::NotifyBrokerOfCredit{false}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::ProcessCode{'4'}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::SecondaryIndividualAllocID{"STRING_1897029593"}, AllocGrp_NoAllocs_3);
    FIX::SettlCurrAmt SettlCurrAmt_3;
    SettlCurrAmt_3.setString("19858331");
set_field(noAllocs_0_2, SettlCurrAmt_3, AllocGrp_NoAllocs_3);
    FIX::SettlCurrFxRate SettlCurrFxRate_3;
    SettlCurrFxRate_3.setString("21459277");
set_field(noAllocs_0_2, SettlCurrFxRate_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::SettlCurrFxRateCalc{'M'}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_2, FIX::SettlCurrency{"CHF"}, AllocGrp_NoAllocs_3);
    all_values.push_back(AllocGrp_NoAllocs_3);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_2_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_5;
      set_field(noClearingInstructions_2_1_0, FIX::ClearingInstruction{11}, ClrInstGrp_NoClearingInstructions_5);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_5);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_2.addGroup(noClearingInstructions_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_2_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_6;
      set_field(noClearingInstructions_2_1_1, FIX::ClearingInstruction{5}, ClrInstGrp_NoClearingInstructions_6);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_6);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_2.addGroup(noClearingInstructions_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_2_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_7;
      set_field(noClearingInstructions_2_1_2, FIX::ClearingInstruction{13}, ClrInstGrp_NoClearingInstructions_7);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_7);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_2.addGroup(noClearingInstructions_2_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_3;
    set_field(noAllocs_0_2, FIX::CommCurrency{"CHF"}, CommissionData_3);
    set_field(noAllocs_0_2, FIX::CommType{'5'}, CommissionData_3);
    FIX::Commission Commission_3;
    Commission_3.setString("19790442");
set_field(noAllocs_0_2, Commission_3, CommissionData_3);
    set_field(noAllocs_0_2, FIX::FundRenewWaiv{'Y'}, CommissionData_3);
    all_values.push_back(CommissionData_3);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_2_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_6;
      FIX::MiscFeeAmt MiscFeeAmt_6;
      MiscFeeAmt_6.setString("15750984");
set_field(noMiscFees_2_1_0, MiscFeeAmt_6, MiscFeesGrp_NoMiscFees_6);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_6);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeCurr{"EUR"}, MiscFeesGrp_NoMiscFees_6);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeType{"STRING_12"}, MiscFeesGrp_NoMiscFees_6);
      all_values.push_back(MiscFeesGrp_NoMiscFees_6);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_2.addGroup(noMiscFees_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_2_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_7;
      FIX::MiscFeeAmt MiscFeeAmt_7;
      MiscFeeAmt_7.setString("3714527");
set_field(noMiscFees_2_1_1, MiscFeeAmt_7, MiscFeesGrp_NoMiscFees_7);
      set_field(noMiscFees_2_1_1, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_7);
      set_field(noMiscFees_2_1_1, FIX::MiscFeeCurr{"GBP"}, MiscFeesGrp_NoMiscFees_7);
      set_field(noMiscFees_2_1_1, FIX::MiscFeeType{"STRING_7"}, MiscFeesGrp_NoMiscFees_7);
      all_values.push_back(MiscFeesGrp_NoMiscFees_7);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_2.addGroup(noMiscFees_2_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_15;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_1104065635"}, NestedParties_NoNestedPartyIDs_15);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_15);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{634014158}, NestedParties_NoNestedPartyIDs_15);
      all_values.push_back(NestedParties_NoNestedPartyIDs_15);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_32;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1303592071"}, NstdPtysSubGrp_NoNestedPartySubIDs_32);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{472363707}, NstdPtysSubGrp_NoNestedPartySubIDs_32);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_32);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_16;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_740524262"}, NestedParties_NoNestedPartyIDs_16);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_16);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{1871090664}, NestedParties_NoNestedPartyIDs_16);
      all_values.push_back(NestedParties_NoNestedPartyIDs_16);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_33;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_1013101681"}, NstdPtysSubGrp_NoNestedPartySubIDs_33);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{1777995209}, NstdPtysSubGrp_NoNestedPartySubIDs_33);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_33);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_34;
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubID{"STRING_274849775"}, NstdPtysSubGrp_NoNestedPartySubIDs_34);
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubIDType{1622861377}, NstdPtysSubGrp_NoNestedPartySubIDs_34);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_34);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_35;
        set_field(noNestedPartySubIDs_2_1_2_2, FIX::NestedPartySubID{"STRING_994522889"}, NstdPtysSubGrp_NoNestedPartySubIDs_35);
        set_field(noNestedPartySubIDs_2_1_2_2, FIX::NestedPartySubIDType{1414362044}, NstdPtysSubGrp_NoNestedPartySubIDs_35);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_35);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_2);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_17;
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyID{"STRING_1075813299"}, NestedParties_NoNestedPartyIDs_17);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_17);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyRole{1874656362}, NestedParties_NoNestedPartyIDs_17);
      all_values.push_back(NestedParties_NoNestedPartyIDs_17);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_36;
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubID{"STRING_253698216"}, NstdPtysSubGrp_NoNestedPartySubIDs_36);
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubIDType{1977663305}, NstdPtysSubGrp_NoNestedPartySubIDs_36);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_36);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_37;
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubID{"STRING_590606815"}, NstdPtysSubGrp_NoNestedPartySubIDs_37);
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubIDType{1378514563}, NstdPtysSubGrp_NoNestedPartySubIDs_37);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_37);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_3;
    set_field(noAllocs_0_2, FIX::SettlDeliveryType{0}, SettlInstructionsData_3);
    set_field(noAllocs_0_2, FIX::StandInstDbID{"STRING_962059584"}, SettlInstructionsData_3);
    set_field(noAllocs_0_2, FIX::StandInstDbName{"STRING_125109569"}, SettlInstructionsData_3);
    set_field(noAllocs_0_2, FIX::StandInstDbType{1}, SettlInstructionsData_3);
    all_values.push_back(SettlInstructionsData_3);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_2_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_8;
      set_field(noDlvyInst_2_1_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_8);
      set_field(noDlvyInst_2_1_0, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_8);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_8);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_12;
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyID{"STRING_1092571197"}, SettlParties_NoSettlPartyIDs_12);
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_12);
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyRole{1238614724}, SettlParties_NoSettlPartyIDs_12);
        all_values.push_back(SettlParties_NoSettlPartyIDs_12);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_24;
          set_field(noSettlPartySubIDs_2_0_0_3_0, FIX::SettlPartySubID{"STRING_375132325"}, SettlPtysSubGrp_NoSettlPartySubIDs_24);
          set_field(noSettlPartySubIDs_2_0_0_3_0, FIX::SettlPartySubIDType{1979138986}, SettlPtysSubGrp_NoSettlPartySubIDs_24);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_24);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_0);
        }
        noDlvyInst_2_1_0.addGroup(noSettlPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_13;
        set_field(noSettlPartyIDs_2_0_2_1, FIX::SettlPartyID{"STRING_232792886"}, SettlParties_NoSettlPartyIDs_13);
        set_field(noSettlPartyIDs_2_0_2_1, FIX::SettlPartyIDSource{'9'}, SettlParties_NoSettlPartyIDs_13);
        set_field(noSettlPartyIDs_2_0_2_1, FIX::SettlPartyRole{733794752}, SettlParties_NoSettlPartyIDs_13);
        all_values.push_back(SettlParties_NoSettlPartyIDs_13);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_25;
          set_field(noSettlPartySubIDs_2_0_1_3_0, FIX::SettlPartySubID{"STRING_1876734550"}, SettlPtysSubGrp_NoSettlPartySubIDs_25);
          set_field(noSettlPartySubIDs_2_0_1_3_0, FIX::SettlPartySubIDType{1008644527}, SettlPtysSubGrp_NoSettlPartySubIDs_25);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_25);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_26;
          set_field(noSettlPartySubIDs_2_0_1_3_1, FIX::SettlPartySubID{"STRING_721272297"}, SettlPtysSubGrp_NoSettlPartySubIDs_26);
          set_field(noSettlPartySubIDs_2_0_1_3_1, FIX::SettlPartySubIDType{723773791}, SettlPtysSubGrp_NoSettlPartySubIDs_26);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_26);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_1);
        }
        noDlvyInst_2_1_0.addGroup(noSettlPartyIDs_2_0_2_1);
      }
      noAllocs_0_2.addGroup(noDlvyInst_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_2_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_9;
      set_field(noDlvyInst_2_1_1, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_9);
      set_field(noDlvyInst_2_1_1, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_9);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_9);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_14;
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyID{"STRING_2695637"}, SettlParties_NoSettlPartyIDs_14);
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_14);
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyRole{1803555465}, SettlParties_NoSettlPartyIDs_14);
        all_values.push_back(SettlParties_NoSettlPartyIDs_14);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_27;
          set_field(noSettlPartySubIDs_2_1_0_3_0, FIX::SettlPartySubID{"STRING_1601180625"}, SettlPtysSubGrp_NoSettlPartySubIDs_27);
          set_field(noSettlPartySubIDs_2_1_0_3_0, FIX::SettlPartySubIDType{1034586380}, SettlPtysSubGrp_NoSettlPartySubIDs_27);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_27);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_28;
          set_field(noSettlPartySubIDs_2_1_0_3_1, FIX::SettlPartySubID{"STRING_712642438"}, SettlPtysSubGrp_NoSettlPartySubIDs_28);
          set_field(noSettlPartySubIDs_2_1_0_3_1, FIX::SettlPartySubIDType{415756562}, SettlPtysSubGrp_NoSettlPartySubIDs_28);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_28);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_1);
        }
        noDlvyInst_2_1_1.addGroup(noSettlPartyIDs_2_1_2_0);
      }
      noAllocs_0_2.addGroup(noDlvyInst_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_2_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_10;
      set_field(noDlvyInst_2_1_2, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_10);
      set_field(noDlvyInst_2_1_2, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_10);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_10);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_15;
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyID{"STRING_698221021"}, SettlParties_NoSettlPartyIDs_15);
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyIDSource{'6'}, SettlParties_NoSettlPartyIDs_15);
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyRole{304760110}, SettlParties_NoSettlPartyIDs_15);
        all_values.push_back(SettlParties_NoSettlPartyIDs_15);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_29;
          set_field(noSettlPartySubIDs_2_2_0_3_0, FIX::SettlPartySubID{"STRING_2119195476"}, SettlPtysSubGrp_NoSettlPartySubIDs_29);
          set_field(noSettlPartySubIDs_2_2_0_3_0, FIX::SettlPartySubIDType{1543374834}, SettlPtysSubGrp_NoSettlPartySubIDs_29);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_29);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_30;
          set_field(noSettlPartySubIDs_2_2_0_3_1, FIX::SettlPartySubID{"STRING_2039471840"}, SettlPtysSubGrp_NoSettlPartySubIDs_30);
          set_field(noSettlPartySubIDs_2_2_0_3_1, FIX::SettlPartySubIDType{346844153}, SettlPtysSubGrp_NoSettlPartySubIDs_30);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_30);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_31;
          set_field(noSettlPartySubIDs_2_2_0_3_2, FIX::SettlPartySubID{"STRING_1375030172"}, SettlPtysSubGrp_NoSettlPartySubIDs_31);
          set_field(noSettlPartySubIDs_2_2_0_3_2, FIX::SettlPartySubIDType{124781078}, SettlPtysSubGrp_NoSettlPartySubIDs_31);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_31);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_2);
        }
        noDlvyInst_2_1_2.addGroup(noSettlPartyIDs_2_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_16;
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyID{"STRING_445583495"}, SettlParties_NoSettlPartyIDs_16);
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_16);
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyRole{1370675646}, SettlParties_NoSettlPartyIDs_16);
        all_values.push_back(SettlParties_NoSettlPartyIDs_16);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_32;
          set_field(noSettlPartySubIDs_2_2_1_3_0, FIX::SettlPartySubID{"STRING_969985803"}, SettlPtysSubGrp_NoSettlPartySubIDs_32);
          set_field(noSettlPartySubIDs_2_2_1_3_0, FIX::SettlPartySubIDType{2091947943}, SettlPtysSubGrp_NoSettlPartySubIDs_32);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_32);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_33;
          set_field(noSettlPartySubIDs_2_2_1_3_1, FIX::SettlPartySubID{"STRING_898608189"}, SettlPtysSubGrp_NoSettlPartySubIDs_33);
          set_field(noSettlPartySubIDs_2_2_1_3_1, FIX::SettlPartySubIDType{1245508727}, SettlPtysSubGrp_NoSettlPartySubIDs_33);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_33);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_1);
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
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_2;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_300981790"}, ExecAllocGrp_NoExecs_2);
    set_field(noExecs_0_0, FIX::FirmTradeID{"STRING_1248204364"}, ExecAllocGrp_NoExecs_2);
    set_field(noExecs_0_0, FIX::LastCapacity{'2'}, ExecAllocGrp_NoExecs_2);
    FIX::LastParPx LastParPx_2;
    LastParPx_2.setString("21045372");
set_field(noExecs_0_0, LastParPx_2, ExecAllocGrp_NoExecs_2);
    FIX::LastPx LastPx_2;
    LastPx_2.setString("10810796");
set_field(noExecs_0_0, LastPx_2, ExecAllocGrp_NoExecs_2);
    FIX::LastQty LastQty_2;
    LastQty_2.setString("583370");
set_field(noExecs_0_0, LastQty_2, ExecAllocGrp_NoExecs_2);
    set_field(noExecs_0_0, FIX::SecondaryExecID{"STRING_991639987"}, ExecAllocGrp_NoExecs_2);
    set_field(noExecs_0_0, FIX::TradeID{"STRING_1793722097"}, ExecAllocGrp_NoExecs_2);
    all_values.push_back(ExecAllocGrp_NoExecs_2);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_3;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_474093593"}, ExecAllocGrp_NoExecs_3);
    set_field(noExecs_0_1, FIX::FirmTradeID{"STRING_3852289"}, ExecAllocGrp_NoExecs_3);
    set_field(noExecs_0_1, FIX::LastCapacity{'4'}, ExecAllocGrp_NoExecs_3);
    FIX::LastParPx LastParPx_3;
    LastParPx_3.setString("2823191");
set_field(noExecs_0_1, LastParPx_3, ExecAllocGrp_NoExecs_3);
    FIX::LastPx LastPx_3;
    LastPx_3.setString("7020733");
set_field(noExecs_0_1, LastPx_3, ExecAllocGrp_NoExecs_3);
    FIX::LastQty LastQty_3;
    LastQty_3.setString("5153704");
set_field(noExecs_0_1, LastQty_3, ExecAllocGrp_NoExecs_3);
    set_field(noExecs_0_1, FIX::SecondaryExecID{"STRING_587079221"}, ExecAllocGrp_NoExecs_3);
    set_field(noExecs_0_1, FIX::TradeID{"STRING_345381882"}, ExecAllocGrp_NoExecs_3);
    all_values.push_back(ExecAllocGrp_NoExecs_3);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_1;
  set_field(msg, FIX::AgreementCurrency{"CAN"}, FinancingDetails_1);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_237370074"}, FinancingDetails_1);
  set_field(msg, FIX::AgreementDesc{"STRING_833926390"}, FinancingDetails_1);
  set_field(msg, FIX::AgreementID{"STRING_1358000580"}, FinancingDetails_1);
  set_field(msg, FIX::DeliveryType{0}, FinancingDetails_1);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1279509885"}, FinancingDetails_1);
  FIX::MarginRatio MarginRatio_1;
  MarginRatio_1.setString("18.560000");
set_field(msg, MarginRatio_1, FinancingDetails_1);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1732826799"}, FinancingDetails_1);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_1);
  all_values.push_back(FinancingDetails_1);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_5;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1677291094"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{205468823}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1387352739"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1271357338}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_506450613"}, InstrumentLeg_5);
    FIX::LegContractMultiplier LegContractMultiplier_5;
    LegContractMultiplier_5.setString("4880734");
set_field(noLegs_0_0, LegContractMultiplier_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1875997391}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_463504220"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1569153114"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1934334422"}, InstrumentLeg_5);
    FIX::LegCouponRate LegCouponRate_5;
    LegCouponRate_5.setString("42.080000");
set_field(noLegs_0_0, LegCouponRate_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1215391564"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1661818763"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{543263479}, InstrumentLeg_5);
    FIX::LegFactor LegFactor_5;
    LegFactor_5.setString("135861");
set_field(noLegs_0_0, LegFactor_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{29705523}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1130342700"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_358968042"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_516787760"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1113313108"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_596338116"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1350714150"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_323830040"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_958489269"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'4'}, InstrumentLeg_5);
    FIX::LegOptionRatio LegOptionRatio_5;
    LegOptionRatio_5.setString("16431718");
set_field(noLegs_0_0, LegOptionRatio_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_543832420"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1937084669"}, InstrumentLeg_5);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_5;
    LegPriceUnitOfMeasureQty_5.setString("17850159");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegProduct{73639866}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegPutOrCall{2142553493}, InstrumentLeg_5);
    FIX::LegRatioQty LegRatioQty_5;
    LegRatioQty_5.setString("10248849");
set_field(noLegs_0_0, LegRatioQty_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1344997204"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_501520458"}, InstrumentLeg_5);
    FIX::LegRepurchaseRate LegRepurchaseRate_5;
    LegRepurchaseRate_5.setString("84.550000");
set_field(noLegs_0_0, LegRepurchaseRate_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1073510948}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_965024679"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_934627921"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_860361722"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_272685239"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_2535837"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1121306090"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1664354600"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_5);
    FIX::LegStrikePrice LegStrikePrice_5;
    LegStrikePrice_5.setString("16940601");
set_field(noLegs_0_0, LegStrikePrice_5, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_647428621"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_2104235939"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_63364236"}, InstrumentLeg_5);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1760741729"}, InstrumentLeg_5);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_5;
    LegUnitOfMeasureQty_5.setString("5530904");
set_field(noLegs_0_0, LegUnitOfMeasureQty_5, InstrumentLeg_5);
    all_values.push_back(InstrumentLeg_5);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_10;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_2084571769"}, LegSecAltIDGrp_NoLegSecurityAltID_10);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1511579677"}, LegSecAltIDGrp_NoLegSecurityAltID_10);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_10);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_6;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1896818773"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1580260018}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_2055412097"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1686419794}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1217792278"}, InstrumentLeg_6);
    FIX::LegContractMultiplier LegContractMultiplier_6;
    LegContractMultiplier_6.setString("21290519");
set_field(noLegs_0_1, LegContractMultiplier_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1681489639}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_95193630"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1326565520"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_35526450"}, InstrumentLeg_6);
    FIX::LegCouponRate LegCouponRate_6;
    LegCouponRate_6.setString("20.850000");
set_field(noLegs_0_1, LegCouponRate_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_252592820"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegCurrency{"GBP"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1112954542"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1273236368}, InstrumentLeg_6);
    FIX::LegFactor LegFactor_6;
    LegFactor_6.setString("3978321");
set_field(noLegs_0_1, LegFactor_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{86776984}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_857434456"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2062186796"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1751346553"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_455218705"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1608763272"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_251291527"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_411970997"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1672127508"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'2'}, InstrumentLeg_6);
    FIX::LegOptionRatio LegOptionRatio_6;
    LegOptionRatio_6.setString("9650614");
set_field(noLegs_0_1, LegOptionRatio_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_938722246"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1949121378"}, InstrumentLeg_6);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_6;
    LegPriceUnitOfMeasureQty_6.setString("3291574");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegProduct{688057371}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1381897748}, InstrumentLeg_6);
    FIX::LegRatioQty LegRatioQty_6;
    LegRatioQty_6.setString("2370858");
set_field(noLegs_0_1, LegRatioQty_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_226993518"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_452206378"}, InstrumentLeg_6);
    FIX::LegRepurchaseRate LegRepurchaseRate_6;
    LegRepurchaseRate_6.setString("41.980000");
set_field(noLegs_0_1, LegRepurchaseRate_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1908483157}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_547400008"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1545219718"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1944009607"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_8068445"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1797812538"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_797077088"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSide{'4'}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_763283433"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_6);
    FIX::LegStrikePrice LegStrikePrice_6;
    LegStrikePrice_6.setString("8500604");
set_field(noLegs_0_1, LegStrikePrice_6, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_780264265"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_715900148"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_453923323"}, InstrumentLeg_6);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1235482970"}, InstrumentLeg_6);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_6;
    LegUnitOfMeasureQty_6.setString("1771797");
set_field(noLegs_0_1, LegUnitOfMeasureQty_6, InstrumentLeg_6);
    all_values.push_back(InstrumentLeg_6);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_11;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1647453967"}, LegSecAltIDGrp_NoLegSecurityAltID_11);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1849307281"}, LegSecAltIDGrp_NoLegSecurityAltID_11);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_11);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_12;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_569764458"}, LegSecAltIDGrp_NoLegSecurityAltID_12);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_465031724"}, LegSecAltIDGrp_NoLegSecurityAltID_12);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_12);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_13;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_640545880"}, LegSecAltIDGrp_NoLegSecurityAltID_13);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_371402188"}, LegSecAltIDGrp_NoLegSecurityAltID_13);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_13);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_5;
  FIX::AttachmentPoint AttachmentPoint_5;
  AttachmentPoint_5.setString("91.580000");
set_field(msg, AttachmentPoint_5, Instrument_5);
  set_field(msg, FIX::CFICode{"STRING_1328603251"}, Instrument_5);
  set_field(msg, FIX::CPProgram{1}, Instrument_5);
  set_field(msg, FIX::CPRegType{"STRING_1031275041"}, Instrument_5);
  FIX::CapPrice CapPrice_5;
  CapPrice_5.setString("15555967");
set_field(msg, CapPrice_5, Instrument_5);
  FIX::ContractMultiplier ContractMultiplier_5;
  ContractMultiplier_5.setString("580226");
set_field(msg, ContractMultiplier_5, Instrument_5);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_5);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1316596279"}, Instrument_5);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_605422675"}, Instrument_5);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_647665310"}, Instrument_5);
  FIX::CouponRate CouponRate_5;
  CouponRate_5.setString("22.380000");
set_field(msg, CouponRate_5, Instrument_5);
  set_field(msg, FIX::CreditRating{"STRING_613491121"}, Instrument_5);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_297994201"}, Instrument_5);
  FIX::DetachmentPoint DetachmentPoint_5;
  DetachmentPoint_5.setString("93.270000");
set_field(msg, DetachmentPoint_5, Instrument_5);
  set_field(msg, FIX::EncodedIssuer{"DATA_1016855925"}, Instrument_5);
  set_field(msg, FIX::EncodedIssuerLen{1061277634}, Instrument_5);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1833029135"}, Instrument_5);
  set_field(msg, FIX::EncodedSecurityDescLen{1818052925}, Instrument_5);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_5);
  FIX::Factor Factor_5;
  Factor_5.setString("4658097");
set_field(msg, Factor_5, Instrument_5);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_5);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_5);
  FIX::FloorPrice FloorPrice_5;
  FloorPrice_5.setString("17012927");
set_field(msg, FloorPrice_5, Instrument_5);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_5);
  set_field(msg, FIX::InstrRegistry{"STRING_922992576"}, Instrument_5);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_5);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_265472832"}, Instrument_5);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1492757035"}, Instrument_5);
  set_field(msg, FIX::Issuer{"STRING_1666294767"}, Instrument_5);
  set_field(msg, FIX::ListMethod{0}, Instrument_5);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1864159223"}, Instrument_5);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_313000277"}, Instrument_5);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_87138315"}, Instrument_5);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1469975512"}, Instrument_5);
  FIX::MinPriceIncrement MinPriceIncrement_5;
  MinPriceIncrement_5.setString("13442753");
set_field(msg, MinPriceIncrement_5, Instrument_5);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_5;
  MinPriceIncrementAmount_5.setString("16427350");
set_field(msg, MinPriceIncrementAmount_5, Instrument_5);
  set_field(msg, FIX::NTPositionLimit{1527998179}, Instrument_5);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_5;
  NotionalPercentageOutstanding_5.setString("9.110000");
set_field(msg, NotionalPercentageOutstanding_5, Instrument_5);
  set_field(msg, FIX::OptAttribute{'8'}, Instrument_5);
  FIX::OptPayoutAmount OptPayoutAmount_5;
  OptPayoutAmount_5.setString("21334208");
set_field(msg, OptPayoutAmount_5, Instrument_5);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_5);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_5;
  OriginalNotionalPercentageOutstanding_5.setString("99.540000");
set_field(msg, OriginalNotionalPercentageOutstanding_5, Instrument_5);
  set_field(msg, FIX::Pool{"STRING_599428327"}, Instrument_5);
  set_field(msg, FIX::PositionLimit{1392380422}, Instrument_5);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_5);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1616284252"}, Instrument_5);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_5;
  PriceUnitOfMeasureQty_5.setString("3061744");
set_field(msg, PriceUnitOfMeasureQty_5, Instrument_5);
  set_field(msg, FIX::Product{3}, Instrument_5);
  set_field(msg, FIX::ProductComplex{"STRING_1286853529"}, Instrument_5);
  set_field(msg, FIX::PutOrCall{0}, Instrument_5);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1839040873"}, Instrument_5);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1673322955"}, Instrument_5);
  FIX::RepurchaseRate RepurchaseRate_5;
  RepurchaseRate_5.setString("65.380000");
set_field(msg, RepurchaseRate_5, Instrument_5);
  set_field(msg, FIX::RepurchaseTerm{1392849948}, Instrument_5);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_5);
  set_field(msg, FIX::SecurityDesc{"STRING_1210799115"}, Instrument_5);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_446629343"}, Instrument_5);
  set_field(msg, FIX::SecurityGroup{"STRING_354961337"}, Instrument_5);
  set_field(msg, FIX::SecurityID{"STRING_556072502"}, Instrument_5);
  set_field(msg, FIX::SecurityIDSource{"STRING_1"}, Instrument_5);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_5);
  set_field(msg, FIX::SecuritySubType{"STRING_272748077"}, Instrument_5);
  set_field(msg, FIX::SecurityType{"STRING_CAN"}, Instrument_5);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_5);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_5);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1622716058"}, Instrument_5);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_843369802"}, Instrument_5);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_5);
  FIX::StrikeMultiplier StrikeMultiplier_5;
  StrikeMultiplier_5.setString("16552175");
set_field(msg, StrikeMultiplier_5, Instrument_5);
  FIX::StrikePrice StrikePrice_5;
  StrikePrice_5.setString("11091753");
set_field(msg, StrikePrice_5, Instrument_5);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_5);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_5;
  StrikePriceBoundaryPrecision_5.setString("38.240000");
set_field(msg, StrikePriceBoundaryPrecision_5, Instrument_5);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_5);
  FIX::StrikeValue StrikeValue_5;
  StrikeValue_5.setString("2612363");
set_field(msg, StrikeValue_5, Instrument_5);
  set_field(msg, FIX::Symbol{"STRING_972905810"}, Instrument_5);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_5);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_5);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_5);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Gal"}, Instrument_5);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_5;
  UnitOfMeasureQty_5.setString("6374395");
set_field(msg, UnitOfMeasureQty_5, Instrument_5);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_5);
  all_values.push_back(Instrument_5);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationInstructionAlert::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_10;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_10);
    FIX::ComplexEventPrice ComplexEventPrice_10;
    ComplexEventPrice_10.setString("12830604");
set_field(noComplexEvents_0_0, ComplexEventPrice_10, ComplexEvents_NoComplexEvents_10);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_10);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_10;
    ComplexEventPriceBoundaryPrecision_10.setString("51.910000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_10, ComplexEvents_NoComplexEvents_10);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_10);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_10);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_10;
    ComplexOptPayoutAmount_10.setString("5446340");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_10, ComplexEvents_NoComplexEvents_10);
    all_values.push_back(ComplexEvents_NoComplexEvents_10);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_23;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 1, 37, 8, 9, 2005)}, ComplexEventDates_NoComplexEventDates_23);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 29, 4, 24, 2, 2006)}, ComplexEventDates_NoComplexEventDates_23);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_23);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_37;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 52, 18)}, ComplexEventTimes_NoComplexEventTimes_37);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 27, 37)}, ComplexEventTimes_NoComplexEventTimes_37);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_37);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_38;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 30, 2)}, ComplexEventTimes_NoComplexEventTimes_38);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 7, 30)}, ComplexEventTimes_NoComplexEventTimes_38);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_38);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_39;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 23, 30)}, ComplexEventTimes_NoComplexEventTimes_39);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 21, 32)}, ComplexEventTimes_NoComplexEventTimes_39);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_39);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_24;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 36, 1, 15, 11, 2015)}, ComplexEventDates_NoComplexEventDates_24);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 19, 33, 2, 10, 2016)}, ComplexEventDates_NoComplexEventDates_24);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_24);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_40;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 30, 14)}, ComplexEventTimes_NoComplexEventTimes_40);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 21, 58)}, ComplexEventTimes_NoComplexEventTimes_40);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_40);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_41;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 14, 18)}, ComplexEventTimes_NoComplexEventTimes_41);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 31, 55)}, ComplexEventTimes_NoComplexEventTimes_41);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_41);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_25;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 23, 8, 24, 10, 2011)}, ComplexEventDates_NoComplexEventDates_25);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 47, 1, 19, 1, 2005)}, ComplexEventDates_NoComplexEventDates_25);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_25);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_42;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 1, 26)}, ComplexEventTimes_NoComplexEventTimes_42);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 48, 29)}, ComplexEventTimes_NoComplexEventTimes_42);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_42);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_43;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 35, 2)}, ComplexEventTimes_NoComplexEventTimes_43);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 33, 42)}, ComplexEventTimes_NoComplexEventTimes_43);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_43);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_11;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_11);
    FIX::ComplexEventPrice ComplexEventPrice_11;
    ComplexEventPrice_11.setString("1053264");
set_field(noComplexEvents_0_1, ComplexEventPrice_11, ComplexEvents_NoComplexEvents_11);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_11);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_11;
    ComplexEventPriceBoundaryPrecision_11.setString("12.510000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_11, ComplexEvents_NoComplexEvents_11);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_11);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_11);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_11;
    ComplexOptPayoutAmount_11.setString("8769709");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_11, ComplexEvents_NoComplexEvents_11);
    all_values.push_back(ComplexEvents_NoComplexEvents_11);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_26;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 27, 51, 18, 9, 2010)}, ComplexEventDates_NoComplexEventDates_26);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 15, 37, 21, 12, 2005)}, ComplexEventDates_NoComplexEventDates_26);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_26);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_44;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 41, 57)}, ComplexEventTimes_NoComplexEventTimes_44);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 22, 2)}, ComplexEventTimes_NoComplexEventTimes_44);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_44);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_27;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 7, 27, 15, 2, 2002)}, ComplexEventDates_NoComplexEventDates_27);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 35, 44, 9, 10, 2016)}, ComplexEventDates_NoComplexEventDates_27);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_27);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_45;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 7, 21)}, ComplexEventTimes_NoComplexEventTimes_45);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 30, 54)}, ComplexEventTimes_NoComplexEventTimes_45);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_45);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_13;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1880686751"}, EvntGrp_NoEvents_13);
    FIX::EventPx EventPx_13;
    EventPx_13.setString("21460645");
set_field(noEvents_0_0, EventPx_13, EvntGrp_NoEvents_13);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1515657603"}, EvntGrp_NoEvents_13);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(12, 18, 33, 5, 7, 2008)}, EvntGrp_NoEvents_13);
    set_field(noEvents_0_0, FIX::EventType{13}, EvntGrp_NoEvents_13);
    all_values.push_back(EvntGrp_NoEvents_13);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_14;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_356760181"}, EvntGrp_NoEvents_14);
    FIX::EventPx EventPx_14;
    EventPx_14.setString("15216899");
set_field(noEvents_0_1, EventPx_14, EvntGrp_NoEvents_14);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1534593430"}, EvntGrp_NoEvents_14);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(3, 46, 2, 0, 8, 2011)}, EvntGrp_NoEvents_14);
    set_field(noEvents_0_1, FIX::EventType{8}, EvntGrp_NoEvents_14);
    all_values.push_back(EvntGrp_NoEvents_14);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_15;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1882193703"}, EvntGrp_NoEvents_15);
    FIX::EventPx EventPx_15;
    EventPx_15.setString("17458843");
set_field(noEvents_0_2, EventPx_15, EvntGrp_NoEvents_15);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1935843534"}, EvntGrp_NoEvents_15);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(6, 5, 46, 8, 12, 2013)}, EvntGrp_NoEvents_15);
    set_field(noEvents_0_2, FIX::EventType{8}, EvntGrp_NoEvents_15);
    all_values.push_back(EvntGrp_NoEvents_15);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_8;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_257578692"}, InstrumentParties_NoInstrumentParties_8);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_8);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{966770244}, InstrumentParties_NoInstrumentParties_8);
    all_values.push_back(InstrumentParties_NoInstrumentParties_8);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_42077760"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{853242635}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_2116969869"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1236549273}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstructionAlert::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_9;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1491176211"}, SecAltIDGrp_NoSecurityAltID_9);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_623659055"}, SecAltIDGrp_NoSecurityAltID_9);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_9);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_10;
  set_field(msg, FIX::SecurityXML{"XMLDATA_2004830035"}, SecurityXML_10);
  set_field(msg, FIX::SecurityXMLLen{294892750}, SecurityXML_10);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_12153913"}, SecurityXML_10);
  all_values.push_back(SecurityXML_10);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_1;
  set_field(msg, FIX::DeliveryForm{2}, InstrumentExtension_1);
  FIX::PctAtRisk PctAtRisk_1;
  PctAtRisk_1.setString("85.860000");
set_field(msg, PctAtRisk_1, InstrumentExtension_1);
  all_values.push_back(InstrumentExtension_1);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_1;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{19}, AttrbGrp_NoInstrAttrib_1);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_2116169813"}, AttrbGrp_NoInstrAttrib_1);
    all_values.push_back(AttrbGrp_NoInstrAttrib_1);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_1;
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_936630058"}, OrdAllocGrp_NoOrders_1);
    set_field(noOrders_0_0, FIX::ListID{"STRING_1904529700"}, OrdAllocGrp_NoOrders_1);
    FIX::OrderAvgPx OrderAvgPx_1;
    OrderAvgPx_1.setString("1741914");
set_field(noOrders_0_0, OrderAvgPx_1, OrdAllocGrp_NoOrders_1);
    FIX::OrderBookingQty OrderBookingQty_1;
    OrderBookingQty_1.setString("13510467");
set_field(noOrders_0_0, OrderBookingQty_1, OrdAllocGrp_NoOrders_1);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_947644177"}, OrdAllocGrp_NoOrders_1);
    FIX::OrderQty OrderQty_1;
    OrderQty_1.setString("11937392");
set_field(noOrders_0_0, OrderQty_1, OrdAllocGrp_NoOrders_1);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_1873223164"}, OrdAllocGrp_NoOrders_1);
    set_field(noOrders_0_0, FIX::SecondaryOrderID{"STRING_1897838688"}, OrdAllocGrp_NoOrders_1);
    all_values.push_back(OrdAllocGrp_NoOrders_1);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_3;
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyID{"STRING_246496883"}, NestedParties2_NoNested2PartyIDs_3);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyIDSource{'6'}, NestedParties2_NoNested2PartyIDs_3);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyRole{56585177}, NestedParties2_NoNested2PartyIDs_3);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_3);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_8;
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubID{"STRING_1035493751"}, NstdPtys2SubGrp_NoNested2PartySubIDs_8);
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubIDType{309243235}, NstdPtys2SubGrp_NoNested2PartySubIDs_8);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_8);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_9;
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubID{"STRING_746815519"}, NstdPtys2SubGrp_NoNested2PartySubIDs_9);
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubIDType{1888736386}, NstdPtys2SubGrp_NoNested2PartySubIDs_9);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_9);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_4;
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyID{"STRING_278729456"}, NestedParties2_NoNested2PartyIDs_4);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_4);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyRole{951255554}, NestedParties2_NoNested2PartyIDs_4);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_4);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_10;
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubID{"STRING_459540200"}, NstdPtys2SubGrp_NoNested2PartySubIDs_10);
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubIDType{808601941}, NstdPtys2SubGrp_NoNested2PartySubIDs_10);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_10);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_11;
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubID{"STRING_2064798417"}, NstdPtys2SubGrp_NoNested2PartySubIDs_11);
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubIDType{471694113}, NstdPtys2SubGrp_NoNested2PartySubIDs_11);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_11);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_12;
        set_field(noNested2PartySubIDs_0_1_2_2, FIX::Nested2PartySubID{"STRING_1914899871"}, NstdPtys2SubGrp_NoNested2PartySubIDs_12);
        set_field(noNested2PartySubIDs_0_1_2_2, FIX::Nested2PartySubIDType{886773355}, NstdPtys2SubGrp_NoNested2PartySubIDs_12);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_12);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_2;
    set_field(noOrders_0_1, FIX::ClOrdID{"STRING_2044068726"}, OrdAllocGrp_NoOrders_2);
    set_field(noOrders_0_1, FIX::ListID{"STRING_1105645531"}, OrdAllocGrp_NoOrders_2);
    FIX::OrderAvgPx OrderAvgPx_2;
    OrderAvgPx_2.setString("8554595");
set_field(noOrders_0_1, OrderAvgPx_2, OrdAllocGrp_NoOrders_2);
    FIX::OrderBookingQty OrderBookingQty_2;
    OrderBookingQty_2.setString("12036697");
set_field(noOrders_0_1, OrderBookingQty_2, OrdAllocGrp_NoOrders_2);
    set_field(noOrders_0_1, FIX::OrderID{"STRING_2042275590"}, OrdAllocGrp_NoOrders_2);
    FIX::OrderQty OrderQty_2;
    OrderQty_2.setString("6125055");
set_field(noOrders_0_1, OrderQty_2, OrdAllocGrp_NoOrders_2);
    set_field(noOrders_0_1, FIX::SecondaryClOrdID{"STRING_1377861244"}, OrdAllocGrp_NoOrders_2);
    set_field(noOrders_0_1, FIX::SecondaryOrderID{"STRING_1245838646"}, OrdAllocGrp_NoOrders_2);
    all_values.push_back(OrdAllocGrp_NoOrders_2);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_5;
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyID{"STRING_424116859"}, NestedParties2_NoNested2PartyIDs_5);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyIDSource{'9'}, NestedParties2_NoNested2PartyIDs_5);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyRole{1310504790}, NestedParties2_NoNested2PartyIDs_5);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_5);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_13;
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubID{"STRING_1218075046"}, NstdPtys2SubGrp_NoNested2PartySubIDs_13);
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubIDType{1379228296}, NstdPtys2SubGrp_NoNested2PartySubIDs_13);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_13);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_6;
      set_field(noNested2PartyIDs_1_1_1, FIX::Nested2PartyID{"STRING_279708522"}, NestedParties2_NoNested2PartyIDs_6);
      set_field(noNested2PartyIDs_1_1_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_6);
      set_field(noNested2PartyIDs_1_1_1, FIX::Nested2PartyRole{267238399}, NestedParties2_NoNested2PartyIDs_6);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_6);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_14;
        set_field(noNested2PartySubIDs_1_1_2_0, FIX::Nested2PartySubID{"STRING_522144677"}, NstdPtys2SubGrp_NoNested2PartySubIDs_14);
        set_field(noNested2PartySubIDs_1_1_2_0, FIX::Nested2PartySubIDType{8491137}, NstdPtys2SubGrp_NoNested2PartySubIDs_14);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_14);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_15;
        set_field(noNested2PartySubIDs_1_1_2_1, FIX::Nested2PartySubID{"STRING_867681213"}, NstdPtys2SubGrp_NoNested2PartySubIDs_15);
        set_field(noNested2PartySubIDs_1_1_2_1, FIX::Nested2PartySubIDType{358025821}, NstdPtys2SubGrp_NoNested2PartySubIDs_15);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_15);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_1);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_7;
      set_field(noNested2PartyIDs_1_1_2, FIX::Nested2PartyID{"STRING_959746692"}, NestedParties2_NoNested2PartyIDs_7);
      set_field(noNested2PartyIDs_1_1_2, FIX::Nested2PartyIDSource{'4'}, NestedParties2_NoNested2PartyIDs_7);
      set_field(noNested2PartyIDs_1_1_2, FIX::Nested2PartyRole{817566021}, NestedParties2_NoNested2PartyIDs_7);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_7);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_16;
        set_field(noNested2PartySubIDs_1_2_2_0, FIX::Nested2PartySubID{"STRING_407418002"}, NstdPtys2SubGrp_NoNested2PartySubIDs_16);
        set_field(noNested2PartySubIDs_1_2_2_0, FIX::Nested2PartySubIDType{1289260135}, NstdPtys2SubGrp_NoNested2PartySubIDs_16);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_16);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_2.addGroup(noNested2PartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_17;
        set_field(noNested2PartySubIDs_1_2_2_1, FIX::Nested2PartySubID{"STRING_1535764856"}, NstdPtys2SubGrp_NoNested2PartySubIDs_17);
        set_field(noNested2PartySubIDs_1_2_2_1, FIX::Nested2PartySubIDType{1294191358}, NstdPtys2SubGrp_NoNested2PartySubIDs_17);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_17);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_2.addGroup(noNested2PartySubIDs_1_2_2_1);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_2);
    }
    msg.addGroup(noOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_5;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_493926740"}, Parties_NoPartyIDs_5);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_5);
    set_field(noPartyIDs_0_0, FIX::PartyRole{13}, Parties_NoPartyIDs_5);
    all_values.push_back(Parties_NoPartyIDs_5);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_10;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_614672804"}, PtysSubGrp_NoPartySubIDs_10);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_10);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_10);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_6;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1634557328"}, Parties_NoPartyIDs_6);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_6);
    set_field(noPartyIDs_0_1, FIX::PartyRole{38}, Parties_NoPartyIDs_6);
    all_values.push_back(Parties_NoPartyIDs_6);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_11;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1337843696"}, PtysSubGrp_NoPartySubIDs_11);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_11);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_11);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_12;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1676726890"}, PtysSubGrp_NoPartySubIDs_12);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_12);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_12);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_13;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_399357634"}, PtysSubGrp_NoPartySubIDs_13);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_13);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_13);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_7;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_836826744"}, Parties_NoPartyIDs_7);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_7);
    set_field(noPartyIDs_0_2, FIX::PartyRole{50}, Parties_NoPartyIDs_7);
    all_values.push_back(Parties_NoPartyIDs_7);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_14;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1855990605"}, PtysSubGrp_NoPartySubIDs_14);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_14);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_14);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationInstructionAlert::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_2;
    FIX::PosAmt PosAmt_2;
    PosAmt_2.setString("1986101");
set_field(noPosAmt_0_0, PosAmt_2, PositionAmountData_NoPosAmt_2);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_DLV"}, PositionAmountData_NoPosAmt_2);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_1425929559"}, PositionAmountData_NoPosAmt_2);
    all_values.push_back(PositionAmountData_NoPosAmt_2);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_1;
  set_field(msg, FIX::BenchmarkCurveCurrency{"GBP"}, SpreadOrBenchmarkCurveData_1);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_1);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1900219550"}, SpreadOrBenchmarkCurveData_1);
  FIX::BenchmarkPrice BenchmarkPrice_1;
  BenchmarkPrice_1.setString("13299306");
set_field(msg, BenchmarkPrice_1, SpreadOrBenchmarkCurveData_1);
  set_field(msg, FIX::BenchmarkPriceType{1308137507}, SpreadOrBenchmarkCurveData_1);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1902386781"}, SpreadOrBenchmarkCurveData_1);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1571961932"}, SpreadOrBenchmarkCurveData_1);
  FIX::Spread Spread_1;
  Spread_1.setString("16968561");
set_field(msg, Spread_1, SpreadOrBenchmarkCurveData_1);
  all_values.push_back(SpreadOrBenchmarkCurveData_1);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstructionAlert::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_2;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_SUBSLEFT"}, Stipulations_NoStipulations_2);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1183929870"}, Stipulations_NoStipulations_2);
    all_values.push_back(Stipulations_NoStipulations_2);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_4;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_940896609"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1642581713}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1734758539"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1060545721}, UnderlyingInstrument_4);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_4;
    UnderlyingAdjustedQuantity_4.setString("11718249");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_4, UnderlyingInstrument_4);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_4;
    UnderlyingAllocationPercent_4.setString("32.360000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_4, UnderlyingInstrument_4);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_4;
    UnderlyingAttachmentPoint_4.setString("33.560000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_476397355"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_993689980"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_300729099"}, UnderlyingInstrument_4);
    FIX::UnderlyingCapValue UnderlyingCapValue_4;
    UnderlyingCapValue_4.setString("3031144");
set_field(noUnderlyings_0_0, UnderlyingCapValue_4, UnderlyingInstrument_4);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_4;
    UnderlyingCashAmount_4.setString("18390078");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_4);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_4;
    UnderlyingContractMultiplier_4.setString("4878573");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1496588787}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_207846246"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1490166249"}, UnderlyingInstrument_4);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_4;
    UnderlyingCouponRate_4.setString("46.980000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_813874439"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_4);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_4;
    UnderlyingCurrentValue_4.setString("5666103");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_4, UnderlyingInstrument_4);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_4;
    UnderlyingDetachmentPoint_4.setString("86.270000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_4, UnderlyingInstrument_4);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_4;
    UnderlyingDirtyPrice_4.setString("7498993");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_4, UnderlyingInstrument_4);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_4;
    UnderlyingEndPrice_4.setString("3215134");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_4, UnderlyingInstrument_4);
    FIX::UnderlyingEndValue UnderlyingEndValue_4;
    UnderlyingEndValue_4.setString("2411769");
set_field(noUnderlyings_0_0, UnderlyingEndValue_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{299271866}, UnderlyingInstrument_4);
    FIX::UnderlyingFXRate UnderlyingFXRate_4;
    UnderlyingFXRate_4.setString("6910894");
set_field(noUnderlyings_0_0, UnderlyingFXRate_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_4);
    FIX::UnderlyingFactor UnderlyingFactor_4;
    UnderlyingFactor_4.setString("14832017");
set_field(noUnderlyings_0_0, UnderlyingFactor_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1088004256}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_78960714"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_978299802"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_675279147"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1139506435"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2641109"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_832142383"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_451926143"}, UnderlyingInstrument_4);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_4;
    UnderlyingNotionalPercentageOutstanding_4.setString("84.640000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_4);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_4;
    UnderlyingOriginalNotionalPercentageOutstanding_4.setString("52.430000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_782152896"}, UnderlyingInstrument_4);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_4;
    UnderlyingPriceUnitOfMeasureQty_4.setString("15173565");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{761891299}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1270010225}, UnderlyingInstrument_4);
    FIX::UnderlyingPx UnderlyingPx_4;
    UnderlyingPx_4.setString("8664617");
set_field(noUnderlyings_0_0, UnderlyingPx_4, UnderlyingInstrument_4);
    FIX::UnderlyingQty UnderlyingQty_4;
    UnderlyingQty_4.setString("9697375");
set_field(noUnderlyings_0_0, UnderlyingQty_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_612692826"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1641496414"}, UnderlyingInstrument_4);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_4;
    UnderlyingRepurchaseRate_4.setString("19.850000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{99460834}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1083258231"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_202738678"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_916159461"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1833157556"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_524252153"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1157336373"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_2132429423"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1215341566"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_295400478"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_4);
    FIX::UnderlyingStartValue UnderlyingStartValue_4;
    UnderlyingStartValue_4.setString("1558621");
set_field(noUnderlyings_0_0, UnderlyingStartValue_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_374361192"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_4);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_4;
    UnderlyingStrikePrice_4.setString("15138676");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_301604775"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1663283705"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1965793771"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_780643239"}, UnderlyingInstrument_4);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_4;
    UnderlyingUnitOfMeasureQty_4.setString("13416324");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_4, UnderlyingInstrument_4);
    all_values.push_back(UnderlyingInstrument_4);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_10;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1562796135"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_10);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_711505349"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_10);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_10);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_11;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1332856666"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_11);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_685322713"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_11);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_11);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_12;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1577967065"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_12);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_155110564"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_12);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_12);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_11;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1071979831"}, UnderlyingStipulations_NoUnderlyingStips_11);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1938722549"}, UnderlyingStipulations_NoUnderlyingStips_11);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_11);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_12;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1397476373"}, UnderlyingStipulations_NoUnderlyingStips_12);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_7754415"}, UnderlyingStipulations_NoUnderlyingStips_12);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_12);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_9;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_166152187"}, UndlyInstrumentParties_NoUndlyInstrumentParties_9);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_9);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{518229733}, UndlyInstrumentParties_NoUndlyInstrumentParties_9);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_9);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1825857746"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1733571299}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1618889039"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1146521610}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_5;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1889433473"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1993250231}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1445485275"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{573091146}, UnderlyingInstrument_5);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_5;
    UnderlyingAdjustedQuantity_5.setString("13596342");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_5, UnderlyingInstrument_5);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_5;
    UnderlyingAllocationPercent_5.setString("0.500000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_5, UnderlyingInstrument_5);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_5;
    UnderlyingAttachmentPoint_5.setString("12.030000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1177944335"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_380249642"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1430523624"}, UnderlyingInstrument_5);
    FIX::UnderlyingCapValue UnderlyingCapValue_5;
    UnderlyingCapValue_5.setString("17489097");
set_field(noUnderlyings_0_1, UnderlyingCapValue_5, UnderlyingInstrument_5);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_5;
    UnderlyingCashAmount_5.setString("19430457");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_5);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_5;
    UnderlyingContractMultiplier_5.setString("9342827");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{480884842}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1572512391"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1089393283"}, UnderlyingInstrument_5);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_5;
    UnderlyingCouponRate_5.setString("3.820000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_497008574"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_5);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_5;
    UnderlyingCurrentValue_5.setString("5047629");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_5, UnderlyingInstrument_5);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_5;
    UnderlyingDetachmentPoint_5.setString("97.640000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_5, UnderlyingInstrument_5);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_5;
    UnderlyingDirtyPrice_5.setString("11950452");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_5, UnderlyingInstrument_5);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_5;
    UnderlyingEndPrice_5.setString("1981913");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_5, UnderlyingInstrument_5);
    FIX::UnderlyingEndValue UnderlyingEndValue_5;
    UnderlyingEndValue_5.setString("13928394");
set_field(noUnderlyings_0_1, UnderlyingEndValue_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{371050207}, UnderlyingInstrument_5);
    FIX::UnderlyingFXRate UnderlyingFXRate_5;
    UnderlyingFXRate_5.setString("20240490");
set_field(noUnderlyings_0_1, UnderlyingFXRate_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_5);
    FIX::UnderlyingFactor UnderlyingFactor_5;
    UnderlyingFactor_5.setString("19899392");
set_field(noUnderlyings_0_1, UnderlyingFactor_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1023087021}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_720876973"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1835705829"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_321088649"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1293968119"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1047856393"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2068178699"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1382859323"}, UnderlyingInstrument_5);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_5;
    UnderlyingNotionalPercentageOutstanding_5.setString("70.800000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_5);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_5;
    UnderlyingOriginalNotionalPercentageOutstanding_5.setString("92.990000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1827226781"}, UnderlyingInstrument_5);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_5;
    UnderlyingPriceUnitOfMeasureQty_5.setString("965068");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{660444624}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{614025853}, UnderlyingInstrument_5);
    FIX::UnderlyingPx UnderlyingPx_5;
    UnderlyingPx_5.setString("5773916");
set_field(noUnderlyings_0_1, UnderlyingPx_5, UnderlyingInstrument_5);
    FIX::UnderlyingQty UnderlyingQty_5;
    UnderlyingQty_5.setString("854733");
set_field(noUnderlyings_0_1, UnderlyingQty_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1703419136"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_208808399"}, UnderlyingInstrument_5);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_5;
    UnderlyingRepurchaseRate_5.setString("19.420000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{436567673}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1237701507"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1087244931"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1311177437"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_285263153"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1285436244"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_556533286"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_656313360"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1162001656"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1535460434"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_5);
    FIX::UnderlyingStartValue UnderlyingStartValue_5;
    UnderlyingStartValue_5.setString("376050");
set_field(noUnderlyings_0_1, UnderlyingStartValue_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_108853759"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_5);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_5;
    UnderlyingStrikePrice_5.setString("14028218");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1234847533"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_279388730"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_638197553"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1313164613"}, UnderlyingInstrument_5);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_5;
    UnderlyingUnitOfMeasureQty_5.setString("5803334");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_5, UnderlyingInstrument_5);
    all_values.push_back(UnderlyingInstrument_5);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_13;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_992907746"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_13);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_676840246"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_13);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_13);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_14;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1964541477"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_14);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1606933599"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_14);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_14);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_15;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1254231912"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_15);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_2050014844"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_15);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_15);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_13;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1463040311"}, UnderlyingStipulations_NoUnderlyingStips_13);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_485013138"}, UnderlyingStipulations_NoUnderlyingStips_13);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_13);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_14;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1599436761"}, UnderlyingStipulations_NoUnderlyingStips_14);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_553258170"}, UnderlyingStipulations_NoUnderlyingStips_14);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_14);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_10;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_763130550"}, UndlyInstrumentParties_NoUndlyInstrumentParties_10);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_10);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{710210666}, UndlyInstrumentParties_NoUndlyInstrumentParties_10);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_10);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1494834684"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1872212322}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_707640622"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1993603643}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_11;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1909817352"}, UndlyInstrumentParties_NoUndlyInstrumentParties_11);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_11);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{33111135}, UndlyInstrumentParties_NoUndlyInstrumentParties_11);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_11);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_71832611"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1267958668}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_400416112"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{710030165}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_433639633"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{980749536}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_6;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_2014127017"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1426547379}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1657589782"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{1831184846}, UnderlyingInstrument_6);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_6;
    UnderlyingAdjustedQuantity_6.setString("8859973");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_6, UnderlyingInstrument_6);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_6;
    UnderlyingAllocationPercent_6.setString("80.460000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_6, UnderlyingInstrument_6);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_6;
    UnderlyingAttachmentPoint_6.setString("60.430000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_2048866419"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_79894710"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_71245533"}, UnderlyingInstrument_6);
    FIX::UnderlyingCapValue UnderlyingCapValue_6;
    UnderlyingCapValue_6.setString("15008195");
set_field(noUnderlyings_0_2, UnderlyingCapValue_6, UnderlyingInstrument_6);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_6;
    UnderlyingCashAmount_6.setString("6331528");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_6);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_6;
    UnderlyingContractMultiplier_6.setString("1164664");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1471674204}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_206230622"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1436130270"}, UnderlyingInstrument_6);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_6;
    UnderlyingCouponRate_6.setString("52.410000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_2078442944"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_6);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_6;
    UnderlyingCurrentValue_6.setString("18407766");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_6, UnderlyingInstrument_6);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_6;
    UnderlyingDetachmentPoint_6.setString("16.250000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_6, UnderlyingInstrument_6);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_6;
    UnderlyingDirtyPrice_6.setString("6982563");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_6, UnderlyingInstrument_6);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_6;
    UnderlyingEndPrice_6.setString("19618040");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_6, UnderlyingInstrument_6);
    FIX::UnderlyingEndValue UnderlyingEndValue_6;
    UnderlyingEndValue_6.setString("8846142");
set_field(noUnderlyings_0_2, UnderlyingEndValue_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{1966215039}, UnderlyingInstrument_6);
    FIX::UnderlyingFXRate UnderlyingFXRate_6;
    UnderlyingFXRate_6.setString("2147364");
set_field(noUnderlyings_0_2, UnderlyingFXRate_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_6);
    FIX::UnderlyingFactor UnderlyingFactor_6;
    UnderlyingFactor_6.setString("2523710");
set_field(noUnderlyings_0_2, UnderlyingFactor_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1195486031}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1461287771"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1678918403"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_705592166"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_1144988969"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_417432086"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1469930212"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_731221364"}, UnderlyingInstrument_6);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_6;
    UnderlyingNotionalPercentageOutstanding_6.setString("48.570000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_6);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_6;
    UnderlyingOriginalNotionalPercentageOutstanding_6.setString("68.980000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1819634389"}, UnderlyingInstrument_6);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_6;
    UnderlyingPriceUnitOfMeasureQty_6.setString("354941");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{298486853}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1936100823}, UnderlyingInstrument_6);
    FIX::UnderlyingPx UnderlyingPx_6;
    UnderlyingPx_6.setString("15071683");
set_field(noUnderlyings_0_2, UnderlyingPx_6, UnderlyingInstrument_6);
    FIX::UnderlyingQty UnderlyingQty_6;
    UnderlyingQty_6.setString("5047174");
set_field(noUnderlyings_0_2, UnderlyingQty_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1224747445"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_178709952"}, UnderlyingInstrument_6);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_6;
    UnderlyingRepurchaseRate_6.setString("67.720000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1221034689}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_843855188"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_128969772"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_2033816314"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1542111559"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_2090773803"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_770946903"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1360842950"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_158026651"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_218107656"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_6);
    FIX::UnderlyingStartValue UnderlyingStartValue_6;
    UnderlyingStartValue_6.setString("13535126");
set_field(noUnderlyings_0_2, UnderlyingStartValue_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1679395427"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_6);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_6;
    UnderlyingStrikePrice_6.setString("6769007");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1562080816"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_1381551413"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_1408122113"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1880895674"}, UnderlyingInstrument_6);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_6;
    UnderlyingUnitOfMeasureQty_6.setString("7838926");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_6, UnderlyingInstrument_6);
    all_values.push_back(UnderlyingInstrument_6);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_16;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1553046415"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_16);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_819386842"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_16);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_16);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_15;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_1341663591"}, UnderlyingStipulations_NoUnderlyingStips_15);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_179071554"}, UnderlyingStipulations_NoUnderlyingStips_15);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_15);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_12;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_418927388"}, UndlyInstrumentParties_NoUndlyInstrumentParties_12);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_12);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1301986464}, UndlyInstrumentParties_NoUndlyInstrumentParties_12);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_12);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1201636695"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1430956237}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_13;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1526294744"}, UndlyInstrumentParties_NoUndlyInstrumentParties_13);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_13);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{1374246392}, UndlyInstrumentParties_NoUndlyInstrumentParties_13);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_13);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1957107557"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1532273043}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_1;
  FIX::Yield Yield_1;
  Yield_1.setString("56.560000");
set_field(msg, Yield_1, YieldData_1);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1422837883"}, YieldData_1);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_738302078"}, YieldData_1);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_1;
  YieldRedemptionPrice_1.setString("20472610");
set_field(msg, YieldRedemptionPrice_1, YieldData_1);
  set_field(msg, FIX::YieldRedemptionPriceType{420002965}, YieldData_1);
  set_field(msg, FIX::YieldType{"STRING_LONGAVGLIFE"}, YieldData_1);
  all_values.push_back(YieldData_1);
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
