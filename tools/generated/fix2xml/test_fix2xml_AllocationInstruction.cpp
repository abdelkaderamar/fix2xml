#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::AllocationInstruction msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstruction_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_0;
  AccruedInterestAmt_0.setString("3493067");
set_field(msg, AccruedInterestAmt_0, AllocationInstruction_0);
  FIX::AccruedInterestRate AccruedInterestRate_0;
  AccruedInterestRate_0.setString("59.360000");
set_field(msg, AccruedInterestRate_0, AllocationInstruction_0);
  set_field(msg, FIX::AllocCancReplaceReason{1}, AllocationInstruction_0);
  set_field(msg, FIX::AllocID{"STRING_816905176"}, AllocationInstruction_0);
  set_field(msg, FIX::AllocIntermedReqType{6}, AllocationInstruction_0);
  set_field(msg, FIX::AllocLinkID{"STRING_1980967629"}, AllocationInstruction_0);
  set_field(msg, FIX::AllocLinkType{1}, AllocationInstruction_0);
  set_field(msg, FIX::AllocNoOrdersType{0}, AllocationInstruction_0);
  set_field(msg, FIX::AllocTransType{'3'}, AllocationInstruction_0);
  set_field(msg, FIX::AllocType{1}, AllocationInstruction_0);
  set_field(msg, FIX::AutoAcceptIndicator{true}, AllocationInstruction_0);
  FIX::AvgParPx AvgParPx_0;
  AvgParPx_0.setString("2309669");
set_field(msg, AvgParPx_0, AllocationInstruction_0);
  FIX::AvgPx AvgPx_0;
  AvgPx_0.setString("12878035");
set_field(msg, AvgPx_0, AllocationInstruction_0);
  set_field(msg, FIX::AvgPxIndicator{0}, AllocationInstruction_0);
  set_field(msg, FIX::AvgPxPrecision{1073466049}, AllocationInstruction_0);
  set_field(msg, FIX::BookingRefID{"STRING_1376972217"}, AllocationInstruction_0);
  set_field(msg, FIX::BookingType{1}, AllocationInstruction_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_246855967"}, AllocationInstruction_0);
  FIX::Concession Concession_0;
  Concession_0.setString("20871975");
set_field(msg, Concession_0, AllocationInstruction_0);
  set_field(msg, FIX::Currency{"CAN"}, AllocationInstruction_0);
  set_field(msg, FIX::CustOrderCapacity{1}, AllocationInstruction_0);
  set_field(msg, FIX::EncodedText{"DATA_418176550"}, AllocationInstruction_0);
  set_field(msg, FIX::EncodedTextLen{12270673}, AllocationInstruction_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_0;
  EndAccruedInterestAmt_0.setString("10598364");
set_field(msg, EndAccruedInterestAmt_0, AllocationInstruction_0);
  FIX::EndCash EndCash_0;
  EndCash_0.setString("5020300");
set_field(msg, EndCash_0, AllocationInstruction_0);
  FIX::GrossTradeAmt GrossTradeAmt_0;
  GrossTradeAmt_0.setString("8606572");
set_field(msg, GrossTradeAmt_0, AllocationInstruction_0);
  FIX::InterestAtMaturity InterestAtMaturity_0;
  InterestAtMaturity_0.setString("11636503");
set_field(msg, InterestAtMaturity_0, AllocationInstruction_0);
  set_field(msg, FIX::LastFragment{true}, AllocationInstruction_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_1028097249"}, AllocationInstruction_0);
  set_field(msg, FIX::LegalConfirm{true}, AllocationInstruction_0);
  set_field(msg, FIX::MatchType{"STRING_A1"}, AllocationInstruction_0);
  set_field(msg, FIX::MessageEventSource{"STRING_1201313186"}, AllocationInstruction_0);
  set_field(msg, FIX::MultiLegReportingType{'2'}, AllocationInstruction_0);
  FIX::NetMoney NetMoney_0;
  NetMoney_0.setString("9000005");
set_field(msg, NetMoney_0, AllocationInstruction_0);
  set_field(msg, FIX::NumDaysInterest{311279717}, AllocationInstruction_0);
  set_field(msg, FIX::PositionEffect{'C'}, AllocationInstruction_0);
  set_field(msg, FIX::PreviouslyReported{false}, AllocationInstruction_0);
  set_field(msg, FIX::PriceType{4}, AllocationInstruction_0);
  set_field(msg, FIX::QtyType{0}, AllocationInstruction_0);
  FIX::Quantity Quantity_1;
  Quantity_1.setString("1271200");
set_field(msg, Quantity_1, AllocationInstruction_0);
  set_field(msg, FIX::RefAllocID{"STRING_866969297"}, AllocationInstruction_0);
  set_field(msg, FIX::ReversalIndicator{true}, AllocationInstruction_0);
  FIX::RndPx RndPx_0;
  RndPx_0.setString("14149236");
set_field(msg, RndPx_0, AllocationInstruction_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_1277470187"}, AllocationInstruction_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_365910129"}, AllocationInstruction_0);
  set_field(msg, FIX::SettlType{"STRING_2"}, AllocationInstruction_0);
  set_field(msg, FIX::Side{'8'}, AllocationInstruction_0);
  FIX::StartCash StartCash_0;
  StartCash_0.setString("6127660");
set_field(msg, StartCash_0, AllocationInstruction_0);
  set_field(msg, FIX::Text{"STRING_584126063"}, AllocationInstruction_0);
  set_field(msg, FIX::TotNoAllocs{2029133521}, AllocationInstruction_0);
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_0;
  TotalAccruedInterestAmt_0.setString("17010841");
set_field(msg, TotalAccruedInterestAmt_0, AllocationInstruction_0);
  FIX::TotalTakedown TotalTakedown_0;
  TotalTakedown_0.setString("8795392");
set_field(msg, TotalTakedown_0, AllocationInstruction_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_299826423"}, AllocationInstruction_0);
  set_field(msg, FIX::TradeInputSource{"STRING_1713354827"}, AllocationInstruction_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_1939375654"}, AllocationInstruction_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, AllocationInstruction_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_1"}, AllocationInstruction_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(11, 46, 18, 9, 5, 2002)}, AllocationInstruction_0);
  set_field(msg, FIX::TrdSubType{8}, AllocationInstruction_0);
  set_field(msg, FIX::TrdType{44}, AllocationInstruction_0);
  all_values.push_back(AllocationInstruction_0);

  all_compo_names.insert("AllocationInstruction");

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstruction::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_0;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1963701171"}, AllocGrp_NoAllocs_0);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_0;
    AllocAccruedInterestAmt_0.setString("13761690");
set_field(noAllocs_0_0, AllocAccruedInterestAmt_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{843742819}, AllocGrp_NoAllocs_0);
    FIX::AllocAvgPx AllocAvgPx_0;
    AllocAvgPx_0.setString("20908212");
set_field(noAllocs_0_0, AllocAvgPx_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocCustomerCapacity{"STRING_95654733"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocHandlInst{1}, AllocGrp_NoAllocs_0);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_0;
    AllocInterestAtMaturity_0.setString("13582612");
set_field(noAllocs_0_0, AllocInterestAtMaturity_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocMethod{3}, AllocGrp_NoAllocs_0);
    FIX::AllocNetMoney AllocNetMoney_0;
    AllocNetMoney_0.setString("5020970");
set_field(noAllocs_0_0, AllocNetMoney_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocPositionEffect{'F'}, AllocGrp_NoAllocs_0);
    FIX::AllocPrice AllocPrice_0;
    AllocPrice_0.setString("3869027");
set_field(noAllocs_0_0, AllocPrice_0, AllocGrp_NoAllocs_0);
    FIX::AllocQty AllocQty_0;
    AllocQty_0.setString("11148631");
set_field(noAllocs_0_0, AllocQty_0, AllocGrp_NoAllocs_0);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_0;
    AllocSettlCurrAmt_0.setString("4393158");
set_field(noAllocs_0_0, AllocSettlCurrAmt_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"USD"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocSettlInstType{1}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocText{"STRING_568379000"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::ClearingFeeIndicator{"STRING_H"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::EncodedAllocText{"DATA_1110747112"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::EncodedAllocTextLen{1370235520}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_660863206"}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocType{1}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::MatchStatus{'0'}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::NotifyBrokerOfCredit{true}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::ProcessCode{'3'}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::SecondaryIndividualAllocID{"STRING_377137417"}, AllocGrp_NoAllocs_0);
    FIX::SettlCurrAmt SettlCurrAmt_0;
    SettlCurrAmt_0.setString("4764603");
set_field(noAllocs_0_0, SettlCurrAmt_0, AllocGrp_NoAllocs_0);
    FIX::SettlCurrFxRate SettlCurrFxRate_0;
    SettlCurrFxRate_0.setString("3864215");
set_field(noAllocs_0_0, SettlCurrFxRate_0, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::SettlCurrFxRateCalc{'D'}, AllocGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::SettlCurrency{"CHF"}, AllocGrp_NoAllocs_0);
    all_values.push_back(AllocGrp_NoAllocs_0);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_0;
      set_field(noClearingInstructions_0_1_0, FIX::ClearingInstruction{5}, ClrInstGrp_NoClearingInstructions_0);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_0);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_0;
    set_field(noAllocs_0_0, FIX::CommCurrency{"USD"}, CommissionData_0);
    set_field(noAllocs_0_0, FIX::CommType{'3'}, CommissionData_0);
    FIX::Commission Commission_0;
    Commission_0.setString("10011332");
set_field(noAllocs_0_0, Commission_0, CommissionData_0);
    set_field(noAllocs_0_0, FIX::FundRenewWaiv{'Y'}, CommissionData_0);
    all_values.push_back(CommissionData_0);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_0;
      FIX::MiscFeeAmt MiscFeeAmt_0;
      MiscFeeAmt_0.setString("15032302");
set_field(noMiscFees_0_1_0, MiscFeeAmt_0, MiscFeesGrp_NoMiscFees_0);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_0);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_0);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeType{"STRING_12"}, MiscFeesGrp_NoMiscFees_0);
      all_values.push_back(MiscFeesGrp_NoMiscFees_0);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_1;
      FIX::MiscFeeAmt MiscFeeAmt_1;
      MiscFeeAmt_1.setString("5016320");
set_field(noMiscFees_0_1_1, MiscFeeAmt_1, MiscFeesGrp_NoMiscFees_1);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_1);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_1);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeType{"STRING_3"}, MiscFeesGrp_NoMiscFees_1);
      all_values.push_back(MiscFeesGrp_NoMiscFees_1);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_0_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_2;
      FIX::MiscFeeAmt MiscFeeAmt_2;
      MiscFeeAmt_2.setString("14428354");
set_field(noMiscFees_0_1_2, MiscFeeAmt_2, MiscFeesGrp_NoMiscFees_2);
      set_field(noMiscFees_0_1_2, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_2);
      set_field(noMiscFees_0_1_2, FIX::MiscFeeCurr{"CAN"}, MiscFeesGrp_NoMiscFees_2);
      set_field(noMiscFees_0_1_2, FIX::MiscFeeType{"STRING_12"}, MiscFeesGrp_NoMiscFees_2);
      all_values.push_back(MiscFeesGrp_NoMiscFees_2);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_2;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1658424899"}, NestedParties_NoNestedPartyIDs_2);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_2);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{331253343}, NestedParties_NoNestedPartyIDs_2);
      all_values.push_back(NestedParties_NoNestedPartyIDs_2);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_6;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_176692025"}, NstdPtysSubGrp_NoNestedPartySubIDs_6);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1627448633}, NstdPtysSubGrp_NoNestedPartySubIDs_6);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_6);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_7;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_2066049940"}, NstdPtysSubGrp_NoNestedPartySubIDs_7);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1888787958}, NstdPtysSubGrp_NoNestedPartySubIDs_7);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_7);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_3;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_4845710"}, NestedParties_NoNestedPartyIDs_3);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_3);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1396737862}, NestedParties_NoNestedPartyIDs_3);
      all_values.push_back(NestedParties_NoNestedPartyIDs_3);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_8;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1784645887"}, NstdPtysSubGrp_NoNestedPartySubIDs_8);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{115465375}, NstdPtysSubGrp_NoNestedPartySubIDs_8);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_8);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_9;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_471557900"}, NstdPtysSubGrp_NoNestedPartySubIDs_9);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{1140392514}, NstdPtysSubGrp_NoNestedPartySubIDs_9);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_9);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_10;
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubID{"STRING_836866351"}, NstdPtysSubGrp_NoNestedPartySubIDs_10);
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubIDType{704637334}, NstdPtysSubGrp_NoNestedPartySubIDs_10);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_10);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_0;
    set_field(noAllocs_0_0, FIX::SettlDeliveryType{2}, SettlInstructionsData_0);
    set_field(noAllocs_0_0, FIX::StandInstDbID{"STRING_1997583206"}, SettlInstructionsData_0);
    set_field(noAllocs_0_0, FIX::StandInstDbName{"STRING_1206269346"}, SettlInstructionsData_0);
    set_field(noAllocs_0_0, FIX::StandInstDbType{0}, SettlInstructionsData_0);
    all_values.push_back(SettlInstructionsData_0);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_0;
      set_field(noDlvyInst_0_1_0, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_0);
      set_field(noDlvyInst_0_1_0, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_0);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_0);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_0;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_421559594"}, SettlParties_NoSettlPartyIDs_0);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_0);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{839180931}, SettlParties_NoSettlPartyIDs_0);
        all_values.push_back(SettlParties_NoSettlPartyIDs_0);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_0;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_1717580897"}, SettlPtysSubGrp_NoSettlPartySubIDs_0);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{350122182}, SettlPtysSubGrp_NoSettlPartySubIDs_0);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_0);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
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
      set_field(noDlvyInst_0_1_1, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_1);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_1);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_1;
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyID{"STRING_1077708731"}, SettlParties_NoSettlPartyIDs_1);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_1);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyRole{166051238}, SettlParties_NoSettlPartyIDs_1);
        all_values.push_back(SettlParties_NoSettlPartyIDs_1);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_1;
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubID{"STRING_1533644936"}, SettlPtysSubGrp_NoSettlPartySubIDs_1);
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubIDType{949563879}, SettlPtysSubGrp_NoSettlPartySubIDs_1);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_1);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoAllocs noAllocs_0_1;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_1;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_68267255"}, AllocGrp_NoAllocs_1);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_1;
    AllocAccruedInterestAmt_1.setString("115424");
set_field(noAllocs_0_1, AllocAccruedInterestAmt_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{586726118}, AllocGrp_NoAllocs_1);
    FIX::AllocAvgPx AllocAvgPx_1;
    AllocAvgPx_1.setString("1837326");
set_field(noAllocs_0_1, AllocAvgPx_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocCustomerCapacity{"STRING_483100357"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocHandlInst{1}, AllocGrp_NoAllocs_1);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_1;
    AllocInterestAtMaturity_1.setString("10205989");
set_field(noAllocs_0_1, AllocInterestAtMaturity_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocMethod{1}, AllocGrp_NoAllocs_1);
    FIX::AllocNetMoney AllocNetMoney_1;
    AllocNetMoney_1.setString("11906372");
set_field(noAllocs_0_1, AllocNetMoney_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocPositionEffect{'O'}, AllocGrp_NoAllocs_1);
    FIX::AllocPrice AllocPrice_1;
    AllocPrice_1.setString("2465233");
set_field(noAllocs_0_1, AllocPrice_1, AllocGrp_NoAllocs_1);
    FIX::AllocQty AllocQty_1;
    AllocQty_1.setString("17932292");
set_field(noAllocs_0_1, AllocQty_1, AllocGrp_NoAllocs_1);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_1;
    AllocSettlCurrAmt_1.setString("10528864");
set_field(noAllocs_0_1, AllocSettlCurrAmt_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocSettlCurrency{"CAN"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocSettlInstType{0}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocText{"STRING_796879694"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::ClearingFeeIndicator{"STRING_I"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::EncodedAllocText{"DATA_1369606992"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::EncodedAllocTextLen{1269599135}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_907147339"}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::IndividualAllocType{1}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::MatchStatus{'0'}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::NotifyBrokerOfCredit{true}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::ProcessCode{'4'}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::SecondaryIndividualAllocID{"STRING_1100840925"}, AllocGrp_NoAllocs_1);
    FIX::SettlCurrAmt SettlCurrAmt_1;
    SettlCurrAmt_1.setString("1898135");
set_field(noAllocs_0_1, SettlCurrAmt_1, AllocGrp_NoAllocs_1);
    FIX::SettlCurrFxRate SettlCurrFxRate_1;
    SettlCurrFxRate_1.setString("21332653");
set_field(noAllocs_0_1, SettlCurrFxRate_1, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::SettlCurrFxRateCalc{'M'}, AllocGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::SettlCurrency{"JPY"}, AllocGrp_NoAllocs_1);
    all_values.push_back(AllocGrp_NoAllocs_1);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_1;
      set_field(noClearingInstructions_1_1_0, FIX::ClearingInstruction{0}, ClrInstGrp_NoClearingInstructions_1);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_1);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_1;
    set_field(noAllocs_0_1, FIX::CommCurrency{"JPY"}, CommissionData_1);
    set_field(noAllocs_0_1, FIX::CommType{'2'}, CommissionData_1);
    FIX::Commission Commission_1;
    Commission_1.setString("11017066");
set_field(noAllocs_0_1, Commission_1, CommissionData_1);
    set_field(noAllocs_0_1, FIX::FundRenewWaiv{'N'}, CommissionData_1);
    all_values.push_back(CommissionData_1);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_3;
      FIX::MiscFeeAmt MiscFeeAmt_3;
      MiscFeeAmt_3.setString("1448602");
set_field(noMiscFees_1_1_0, MiscFeeAmt_3, MiscFeesGrp_NoMiscFees_3);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_3);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_3);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeType{"STRING_4"}, MiscFeesGrp_NoMiscFees_3);
      all_values.push_back(MiscFeesGrp_NoMiscFees_3);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_1.addGroup(noMiscFees_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_1_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_4;
      FIX::MiscFeeAmt MiscFeeAmt_4;
      MiscFeeAmt_4.setString("18801987");
set_field(noMiscFees_1_1_1, MiscFeeAmt_4, MiscFeesGrp_NoMiscFees_4);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_4);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeCurr{"CAN"}, MiscFeesGrp_NoMiscFees_4);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeType{"STRING_9"}, MiscFeesGrp_NoMiscFees_4);
      all_values.push_back(MiscFeesGrp_NoMiscFees_4);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_1.addGroup(noMiscFees_1_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_4;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1799193977"}, NestedParties_NoNestedPartyIDs_4);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_4);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{145865422}, NestedParties_NoNestedPartyIDs_4);
      all_values.push_back(NestedParties_NoNestedPartyIDs_4);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_11;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_170079759"}, NstdPtysSubGrp_NoNestedPartySubIDs_11);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{2113079542}, NstdPtysSubGrp_NoNestedPartySubIDs_11);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_11);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_12;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_775683447"}, NstdPtysSubGrp_NoNestedPartySubIDs_12);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{359893269}, NstdPtysSubGrp_NoNestedPartySubIDs_12);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_12);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_13;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_2098861253"}, NstdPtysSubGrp_NoNestedPartySubIDs_13);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{548053766}, NstdPtysSubGrp_NoNestedPartySubIDs_13);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_13);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_5;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_2083351715"}, NestedParties_NoNestedPartyIDs_5);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_5);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{388691340}, NestedParties_NoNestedPartyIDs_5);
      all_values.push_back(NestedParties_NoNestedPartyIDs_5);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_14;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_261311256"}, NstdPtysSubGrp_NoNestedPartySubIDs_14);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{413061544}, NstdPtysSubGrp_NoNestedPartySubIDs_14);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_14);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_15;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_1741486585"}, NstdPtysSubGrp_NoNestedPartySubIDs_15);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{1363017949}, NstdPtysSubGrp_NoNestedPartySubIDs_15);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_15);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_16;
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubID{"STRING_1458030731"}, NstdPtysSubGrp_NoNestedPartySubIDs_16);
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubIDType{852358242}, NstdPtysSubGrp_NoNestedPartySubIDs_16);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_16);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_6;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_1507878246"}, NestedParties_NoNestedPartyIDs_6);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_6);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{209753290}, NestedParties_NoNestedPartyIDs_6);
      all_values.push_back(NestedParties_NoNestedPartyIDs_6);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_17;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_2047285301"}, NstdPtysSubGrp_NoNestedPartySubIDs_17);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{2089952085}, NstdPtysSubGrp_NoNestedPartySubIDs_17);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_17);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_18;
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubID{"STRING_563352192"}, NstdPtysSubGrp_NoNestedPartySubIDs_18);
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubIDType{1251298204}, NstdPtysSubGrp_NoNestedPartySubIDs_18);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_18);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_1;
    set_field(noAllocs_0_1, FIX::SettlDeliveryType{3}, SettlInstructionsData_1);
    set_field(noAllocs_0_1, FIX::StandInstDbID{"STRING_1165270328"}, SettlInstructionsData_1);
    set_field(noAllocs_0_1, FIX::StandInstDbName{"STRING_1824918100"}, SettlInstructionsData_1);
    set_field(noAllocs_0_1, FIX::StandInstDbType{3}, SettlInstructionsData_1);
    all_values.push_back(SettlInstructionsData_1);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_2;
      set_field(noDlvyInst_1_1_0, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_2);
      set_field(noDlvyInst_1_1_0, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_2);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_2);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_2;
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyID{"STRING_1936379416"}, SettlParties_NoSettlPartyIDs_2);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyIDSource{'5'}, SettlParties_NoSettlPartyIDs_2);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyRole{1056825183}, SettlParties_NoSettlPartyIDs_2);
        all_values.push_back(SettlParties_NoSettlPartyIDs_2);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_2;
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubID{"STRING_1122353344"}, SettlPtysSubGrp_NoSettlPartySubIDs_2);
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubIDType{992693250}, SettlPtysSubGrp_NoSettlPartySubIDs_2);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_2);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_3;
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubID{"STRING_626996569"}, SettlPtysSubGrp_NoSettlPartySubIDs_3);
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubIDType{1511044684}, SettlPtysSubGrp_NoSettlPartySubIDs_3);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_3);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_4;
          set_field(noSettlPartySubIDs_1_0_0_3_2, FIX::SettlPartySubID{"STRING_516078574"}, SettlPtysSubGrp_NoSettlPartySubIDs_4);
          set_field(noSettlPartySubIDs_1_0_0_3_2, FIX::SettlPartySubIDType{888307825}, SettlPtysSubGrp_NoSettlPartySubIDs_4);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_4);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_2);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_0);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoAllocs noAllocs_0_2;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_2;
    set_field(noAllocs_0_2, FIX::AllocAccount{"STRING_1924106228"}, AllocGrp_NoAllocs_2);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_2;
    AllocAccruedInterestAmt_2.setString("1100815");
set_field(noAllocs_0_2, AllocAccruedInterestAmt_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::AllocAcctIDSource{103842127}, AllocGrp_NoAllocs_2);
    FIX::AllocAvgPx AllocAvgPx_2;
    AllocAvgPx_2.setString("12346533");
set_field(noAllocs_0_2, AllocAvgPx_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::AllocCustomerCapacity{"STRING_962439753"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::AllocHandlInst{2}, AllocGrp_NoAllocs_2);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_2;
    AllocInterestAtMaturity_2.setString("3133844");
set_field(noAllocs_0_2, AllocInterestAtMaturity_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::AllocMethod{2}, AllocGrp_NoAllocs_2);
    FIX::AllocNetMoney AllocNetMoney_2;
    AllocNetMoney_2.setString("7627208");
set_field(noAllocs_0_2, AllocNetMoney_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::AllocPositionEffect{'R'}, AllocGrp_NoAllocs_2);
    FIX::AllocPrice AllocPrice_2;
    AllocPrice_2.setString("11146614");
set_field(noAllocs_0_2, AllocPrice_2, AllocGrp_NoAllocs_2);
    FIX::AllocQty AllocQty_2;
    AllocQty_2.setString("13260730");
set_field(noAllocs_0_2, AllocQty_2, AllocGrp_NoAllocs_2);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_2;
    AllocSettlCurrAmt_2.setString("14644843");
set_field(noAllocs_0_2, AllocSettlCurrAmt_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::AllocSettlCurrency{"USD"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::AllocSettlInstType{3}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::AllocText{"STRING_1710498368"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::ClearingFeeIndicator{"STRING_M"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::EncodedAllocText{"DATA_965218657"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::EncodedAllocTextLen{1509114498}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::IndividualAllocID{"STRING_1567643811"}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::IndividualAllocType{2}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::MatchStatus{'2'}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::NotifyBrokerOfCredit{true}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::ProcessCode{'3'}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::SecondaryIndividualAllocID{"STRING_1058283772"}, AllocGrp_NoAllocs_2);
    FIX::SettlCurrAmt SettlCurrAmt_2;
    SettlCurrAmt_2.setString("14696785");
set_field(noAllocs_0_2, SettlCurrAmt_2, AllocGrp_NoAllocs_2);
    FIX::SettlCurrFxRate SettlCurrFxRate_2;
    SettlCurrFxRate_2.setString("11213843");
set_field(noAllocs_0_2, SettlCurrFxRate_2, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::SettlCurrFxRateCalc{'M'}, AllocGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::SettlCurrency{"USD"}, AllocGrp_NoAllocs_2);
    all_values.push_back(AllocGrp_NoAllocs_2);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_2_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_2;
      set_field(noClearingInstructions_2_1_0, FIX::ClearingInstruction{0}, ClrInstGrp_NoClearingInstructions_2);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_2);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_2.addGroup(noClearingInstructions_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoClearingInstructions noClearingInstructions_2_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_3;
      set_field(noClearingInstructions_2_1_1, FIX::ClearingInstruction{3}, ClrInstGrp_NoClearingInstructions_3);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_3);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_2.addGroup(noClearingInstructions_2_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_2;
    set_field(noAllocs_0_2, FIX::CommCurrency{"EUR"}, CommissionData_2);
    set_field(noAllocs_0_2, FIX::CommType{'1'}, CommissionData_2);
    FIX::Commission Commission_2;
    Commission_2.setString("17465051");
set_field(noAllocs_0_2, Commission_2, CommissionData_2);
    set_field(noAllocs_0_2, FIX::FundRenewWaiv{'Y'}, CommissionData_2);
    all_values.push_back(CommissionData_2);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_2_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_5;
      FIX::MiscFeeAmt MiscFeeAmt_5;
      MiscFeeAmt_5.setString("19596913");
set_field(noMiscFees_2_1_0, MiscFeeAmt_5, MiscFeesGrp_NoMiscFees_5);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_5);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeCurr{"EUR"}, MiscFeesGrp_NoMiscFees_5);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeType{"STRING_13"}, MiscFeesGrp_NoMiscFees_5);
      all_values.push_back(MiscFeesGrp_NoMiscFees_5);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_2.addGroup(noMiscFees_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_2_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_6;
      FIX::MiscFeeAmt MiscFeeAmt_6;
      MiscFeeAmt_6.setString("18629410");
set_field(noMiscFees_2_1_1, MiscFeeAmt_6, MiscFeesGrp_NoMiscFees_6);
      set_field(noMiscFees_2_1_1, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_6);
      set_field(noMiscFees_2_1_1, FIX::MiscFeeCurr{"EUR"}, MiscFeesGrp_NoMiscFees_6);
      set_field(noMiscFees_2_1_1, FIX::MiscFeeType{"STRING_8"}, MiscFeesGrp_NoMiscFees_6);
      all_values.push_back(MiscFeesGrp_NoMiscFees_6);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_2.addGroup(noMiscFees_2_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoMiscFees noMiscFees_2_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_7;
      FIX::MiscFeeAmt MiscFeeAmt_7;
      MiscFeeAmt_7.setString("15615359");
set_field(noMiscFees_2_1_2, MiscFeeAmt_7, MiscFeesGrp_NoMiscFees_7);
      set_field(noMiscFees_2_1_2, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_7);
      set_field(noMiscFees_2_1_2, FIX::MiscFeeCurr{"EUR"}, MiscFeesGrp_NoMiscFees_7);
      set_field(noMiscFees_2_1_2, FIX::MiscFeeType{"STRING_2"}, MiscFeesGrp_NoMiscFees_7);
      all_values.push_back(MiscFeesGrp_NoMiscFees_7);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_2.addGroup(noMiscFees_2_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_7;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_408266547"}, NestedParties_NoNestedPartyIDs_7);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_7);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{1458748721}, NestedParties_NoNestedPartyIDs_7);
      all_values.push_back(NestedParties_NoNestedPartyIDs_7);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_19;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1791266953"}, NstdPtysSubGrp_NoNestedPartySubIDs_19);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{1320957268}, NstdPtysSubGrp_NoNestedPartySubIDs_19);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_19);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_20;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_1028578745"}, NstdPtysSubGrp_NoNestedPartySubIDs_20);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{1739621987}, NstdPtysSubGrp_NoNestedPartySubIDs_20);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_20);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_2;
    set_field(noAllocs_0_2, FIX::SettlDeliveryType{1}, SettlInstructionsData_2);
    set_field(noAllocs_0_2, FIX::StandInstDbID{"STRING_314215797"}, SettlInstructionsData_2);
    set_field(noAllocs_0_2, FIX::StandInstDbName{"STRING_502933127"}, SettlInstructionsData_2);
    set_field(noAllocs_0_2, FIX::StandInstDbType{0}, SettlInstructionsData_2);
    all_values.push_back(SettlInstructionsData_2);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_2_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_3;
      set_field(noDlvyInst_2_1_0, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_3);
      set_field(noDlvyInst_2_1_0, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_3);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_3);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_3;
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyID{"STRING_1488602974"}, SettlParties_NoSettlPartyIDs_3);
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_3);
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyRole{1002136959}, SettlParties_NoSettlPartyIDs_3);
        all_values.push_back(SettlParties_NoSettlPartyIDs_3);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_5;
          set_field(noSettlPartySubIDs_2_0_0_3_0, FIX::SettlPartySubID{"STRING_2144842366"}, SettlPtysSubGrp_NoSettlPartySubIDs_5);
          set_field(noSettlPartySubIDs_2_0_0_3_0, FIX::SettlPartySubIDType{1273264078}, SettlPtysSubGrp_NoSettlPartySubIDs_5);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_5);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_6;
          set_field(noSettlPartySubIDs_2_0_0_3_1, FIX::SettlPartySubID{"STRING_2030431246"}, SettlPtysSubGrp_NoSettlPartySubIDs_6);
          set_field(noSettlPartySubIDs_2_0_0_3_1, FIX::SettlPartySubIDType{583528042}, SettlPtysSubGrp_NoSettlPartySubIDs_6);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_6);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_1);
        }
        noDlvyInst_2_1_0.addGroup(noSettlPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_4;
        set_field(noSettlPartyIDs_2_0_2_1, FIX::SettlPartyID{"STRING_362126205"}, SettlParties_NoSettlPartyIDs_4);
        set_field(noSettlPartyIDs_2_0_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_4);
        set_field(noSettlPartyIDs_2_0_2_1, FIX::SettlPartyRole{589857529}, SettlParties_NoSettlPartyIDs_4);
        all_values.push_back(SettlParties_NoSettlPartyIDs_4);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_7;
          set_field(noSettlPartySubIDs_2_0_1_3_0, FIX::SettlPartySubID{"STRING_794466367"}, SettlPtysSubGrp_NoSettlPartySubIDs_7);
          set_field(noSettlPartySubIDs_2_0_1_3_0, FIX::SettlPartySubIDType{1073172362}, SettlPtysSubGrp_NoSettlPartySubIDs_7);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_7);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_1.addGroup(noSettlPartySubIDs_2_0_1_3_0);
        }
        noDlvyInst_2_1_0.addGroup(noSettlPartyIDs_2_0_2_1);
      }
      noAllocs_0_2.addGroup(noDlvyInst_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst noDlvyInst_2_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_4;
      set_field(noDlvyInst_2_1_1, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_4);
      set_field(noDlvyInst_2_1_1, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_4);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_4);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_5;
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyID{"STRING_2001215832"}, SettlParties_NoSettlPartyIDs_5);
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_5);
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyRole{522465450}, SettlParties_NoSettlPartyIDs_5);
        all_values.push_back(SettlParties_NoSettlPartyIDs_5);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_8;
          set_field(noSettlPartySubIDs_2_1_0_3_0, FIX::SettlPartySubID{"STRING_913939368"}, SettlPtysSubGrp_NoSettlPartySubIDs_8);
          set_field(noSettlPartySubIDs_2_1_0_3_0, FIX::SettlPartySubIDType{114603790}, SettlPtysSubGrp_NoSettlPartySubIDs_8);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_8);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_9;
          set_field(noSettlPartySubIDs_2_1_0_3_1, FIX::SettlPartySubID{"STRING_314213746"}, SettlPtysSubGrp_NoSettlPartySubIDs_9);
          set_field(noSettlPartySubIDs_2_1_0_3_1, FIX::SettlPartySubIDType{1228155165}, SettlPtysSubGrp_NoSettlPartySubIDs_9);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_9);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_10;
          set_field(noSettlPartySubIDs_2_1_0_3_2, FIX::SettlPartySubID{"STRING_617536917"}, SettlPtysSubGrp_NoSettlPartySubIDs_10);
          set_field(noSettlPartySubIDs_2_1_0_3_2, FIX::SettlPartySubIDType{1031509086}, SettlPtysSubGrp_NoSettlPartySubIDs_10);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_10);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_2);
        }
        noDlvyInst_2_1_1.addGroup(noSettlPartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_6;
        set_field(noSettlPartyIDs_2_1_2_1, FIX::SettlPartyID{"STRING_1141392489"}, SettlParties_NoSettlPartyIDs_6);
        set_field(noSettlPartyIDs_2_1_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_6);
        set_field(noSettlPartyIDs_2_1_2_1, FIX::SettlPartyRole{1941812695}, SettlParties_NoSettlPartyIDs_6);
        all_values.push_back(SettlParties_NoSettlPartyIDs_6);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_11;
          set_field(noSettlPartySubIDs_2_1_1_3_0, FIX::SettlPartySubID{"STRING_397093553"}, SettlPtysSubGrp_NoSettlPartySubIDs_11);
          set_field(noSettlPartySubIDs_2_1_1_3_0, FIX::SettlPartySubIDType{76230339}, SettlPtysSubGrp_NoSettlPartySubIDs_11);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_11);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_1.addGroup(noSettlPartySubIDs_2_1_1_3_0);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_12;
          set_field(noSettlPartySubIDs_2_1_1_3_1, FIX::SettlPartySubID{"STRING_1868974424"}, SettlPtysSubGrp_NoSettlPartySubIDs_12);
          set_field(noSettlPartySubIDs_2_1_1_3_1, FIX::SettlPartySubIDType{227619655}, SettlPtysSubGrp_NoSettlPartySubIDs_12);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_12);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_1.addGroup(noSettlPartySubIDs_2_1_1_3_1);
        }
        {
          FIX50SP2::AllocationInstruction::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_13;
          set_field(noSettlPartySubIDs_2_1_1_3_2, FIX::SettlPartySubID{"STRING_73589058"}, SettlPtysSubGrp_NoSettlPartySubIDs_13);
          set_field(noSettlPartySubIDs_2_1_1_3_2, FIX::SettlPartySubIDType{994754854}, SettlPtysSubGrp_NoSettlPartySubIDs_13);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_13);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_1.addGroup(noSettlPartySubIDs_2_1_1_3_2);
        }
        noDlvyInst_2_1_1.addGroup(noSettlPartyIDs_2_1_2_1);
      }
      noAllocs_0_2.addGroup(noDlvyInst_2_1_1);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationInstruction::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_0;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_657117100"}, ExecAllocGrp_NoExecs_0);
    set_field(noExecs_0_0, FIX::FirmTradeID{"STRING_1356881060"}, ExecAllocGrp_NoExecs_0);
    set_field(noExecs_0_0, FIX::LastCapacity{'2'}, ExecAllocGrp_NoExecs_0);
    FIX::LastParPx LastParPx_0;
    LastParPx_0.setString("12469746");
set_field(noExecs_0_0, LastParPx_0, ExecAllocGrp_NoExecs_0);
    FIX::LastPx LastPx_0;
    LastPx_0.setString("15619838");
set_field(noExecs_0_0, LastPx_0, ExecAllocGrp_NoExecs_0);
    FIX::LastQty LastQty_0;
    LastQty_0.setString("2020335");
set_field(noExecs_0_0, LastQty_0, ExecAllocGrp_NoExecs_0);
    set_field(noExecs_0_0, FIX::SecondaryExecID{"STRING_172663343"}, ExecAllocGrp_NoExecs_0);
    set_field(noExecs_0_0, FIX::TradeID{"STRING_2104450929"}, ExecAllocGrp_NoExecs_0);
    all_values.push_back(ExecAllocGrp_NoExecs_0);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_0;
  set_field(msg, FIX::AgreementCurrency{"USD"}, FinancingDetails_0);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1958183114"}, FinancingDetails_0);
  set_field(msg, FIX::AgreementDesc{"STRING_1290127103"}, FinancingDetails_0);
  set_field(msg, FIX::AgreementID{"STRING_1573810939"}, FinancingDetails_0);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_0);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_56582823"}, FinancingDetails_0);
  FIX::MarginRatio MarginRatio_0;
  MarginRatio_0.setString("47.290000");
set_field(msg, MarginRatio_0, FinancingDetails_0);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1299602664"}, FinancingDetails_0);
  set_field(msg, FIX::TerminationType{1}, FinancingDetails_0);
  all_values.push_back(FinancingDetails_0);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationInstruction::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_2;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_183628102"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{278646829}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1214442225"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{2125440797}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1145484294"}, InstrumentLeg_2);
    FIX::LegContractMultiplier LegContractMultiplier_2;
    LegContractMultiplier_2.setString("16115357");
set_field(noLegs_0_0, LegContractMultiplier_2, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{54187489}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_866975071"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1839155433"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_127776547"}, InstrumentLeg_2);
    FIX::LegCouponRate LegCouponRate_2;
    LegCouponRate_2.setString("99.250000");
set_field(noLegs_0_0, LegCouponRate_2, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1949722686"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1357289883"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{2031868276}, InstrumentLeg_2);
    FIX::LegFactor LegFactor_2;
    LegFactor_2.setString("4856275");
set_field(noLegs_0_0, LegFactor_2, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1559323448}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_57047971"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_442594789"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_816606280"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1108393460"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_253294255"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_2106733383"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_534720751"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1238683174"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_2);
    FIX::LegOptionRatio LegOptionRatio_2;
    LegOptionRatio_2.setString("756518");
set_field(noLegs_0_0, LegOptionRatio_2, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_390802190"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1300570547"}, InstrumentLeg_2);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_2;
    LegPriceUnitOfMeasureQty_2.setString("2341198");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_2, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegProduct{574430293}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1579217376}, InstrumentLeg_2);
    FIX::LegRatioQty LegRatioQty_2;
    LegRatioQty_2.setString("14485620");
set_field(noLegs_0_0, LegRatioQty_2, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_552387442"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_577218023"}, InstrumentLeg_2);
    FIX::LegRepurchaseRate LegRepurchaseRate_2;
    LegRepurchaseRate_2.setString("41.850000");
set_field(noLegs_0_0, LegRepurchaseRate_2, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{606574931}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1444193094"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_604285970"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_734351478"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1158439371"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_406525008"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1519245125"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegSide{'8'}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1763814891"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_2);
    FIX::LegStrikePrice LegStrikePrice_2;
    LegStrikePrice_2.setString("11756546");
set_field(noLegs_0_0, LegStrikePrice_2, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1460677725"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1010305358"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1992260972"}, InstrumentLeg_2);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_421587537"}, InstrumentLeg_2);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_2;
    LegUnitOfMeasureQty_2.setString("12635996");
set_field(noLegs_0_0, LegUnitOfMeasureQty_2, InstrumentLeg_2);
    all_values.push_back(InstrumentLeg_2);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_2;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_956308288"}, LegSecAltIDGrp_NoLegSecurityAltID_2);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_354799140"}, LegSecAltIDGrp_NoLegSecurityAltID_2);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_2);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_3;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1967343266"}, LegSecAltIDGrp_NoLegSecurityAltID_3);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1031960120"}, LegSecAltIDGrp_NoLegSecurityAltID_3);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_3);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_4;
  FIX::AttachmentPoint AttachmentPoint_4;
  AttachmentPoint_4.setString("13.300000");
set_field(msg, AttachmentPoint_4, Instrument_4);
  set_field(msg, FIX::CFICode{"STRING_1120430165"}, Instrument_4);
  set_field(msg, FIX::CPProgram{1}, Instrument_4);
  set_field(msg, FIX::CPRegType{"STRING_1320031623"}, Instrument_4);
  FIX::CapPrice CapPrice_4;
  CapPrice_4.setString("5521638");
set_field(msg, CapPrice_4, Instrument_4);
  FIX::ContractMultiplier ContractMultiplier_4;
  ContractMultiplier_4.setString("5671583");
set_field(msg, ContractMultiplier_4, Instrument_4);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_4);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1129381917"}, Instrument_4);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1479772542"}, Instrument_4);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_331510349"}, Instrument_4);
  FIX::CouponRate CouponRate_4;
  CouponRate_4.setString("13.630000");
set_field(msg, CouponRate_4, Instrument_4);
  set_field(msg, FIX::CreditRating{"STRING_2084058512"}, Instrument_4);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1065861828"}, Instrument_4);
  FIX::DetachmentPoint DetachmentPoint_4;
  DetachmentPoint_4.setString("7.340000");
set_field(msg, DetachmentPoint_4, Instrument_4);
  set_field(msg, FIX::EncodedIssuer{"DATA_343099872"}, Instrument_4);
  set_field(msg, FIX::EncodedIssuerLen{437623305}, Instrument_4);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1666613795"}, Instrument_4);
  set_field(msg, FIX::EncodedSecurityDescLen{2106914763}, Instrument_4);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_4);
  FIX::Factor Factor_4;
  Factor_4.setString("868407");
set_field(msg, Factor_4, Instrument_4);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_4);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_4);
  FIX::FloorPrice FloorPrice_4;
  FloorPrice_4.setString("10971460");
set_field(msg, FloorPrice_4, Instrument_4);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_4);
  set_field(msg, FIX::InstrRegistry{"STRING_1576034673"}, Instrument_4);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_4);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_783890192"}, Instrument_4);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_384859313"}, Instrument_4);
  set_field(msg, FIX::Issuer{"STRING_568061181"}, Instrument_4);
  set_field(msg, FIX::ListMethod{0}, Instrument_4);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1416819433"}, Instrument_4);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1313662511"}, Instrument_4);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1724179976"}, Instrument_4);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_535415735"}, Instrument_4);
  FIX::MinPriceIncrement MinPriceIncrement_4;
  MinPriceIncrement_4.setString("4862104");
set_field(msg, MinPriceIncrement_4, Instrument_4);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_4;
  MinPriceIncrementAmount_4.setString("1288602");
set_field(msg, MinPriceIncrementAmount_4, Instrument_4);
  set_field(msg, FIX::NTPositionLimit{1102574092}, Instrument_4);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_4;
  NotionalPercentageOutstanding_4.setString("59.050000");
set_field(msg, NotionalPercentageOutstanding_4, Instrument_4);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_4);
  FIX::OptPayoutAmount OptPayoutAmount_4;
  OptPayoutAmount_4.setString("4348629");
set_field(msg, OptPayoutAmount_4, Instrument_4);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_4);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_4;
  OriginalNotionalPercentageOutstanding_4.setString("35.020000");
set_field(msg, OriginalNotionalPercentageOutstanding_4, Instrument_4);
  set_field(msg, FIX::Pool{"STRING_371437850"}, Instrument_4);
  set_field(msg, FIX::PositionLimit{1608518082}, Instrument_4);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_4);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_714537722"}, Instrument_4);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_4;
  PriceUnitOfMeasureQty_4.setString("20461413");
set_field(msg, PriceUnitOfMeasureQty_4, Instrument_4);
  set_field(msg, FIX::Product{9}, Instrument_4);
  set_field(msg, FIX::ProductComplex{"STRING_673968837"}, Instrument_4);
  set_field(msg, FIX::PutOrCall{1}, Instrument_4);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_727351452"}, Instrument_4);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1809054645"}, Instrument_4);
  FIX::RepurchaseRate RepurchaseRate_4;
  RepurchaseRate_4.setString("42.870000");
set_field(msg, RepurchaseRate_4, Instrument_4);
  set_field(msg, FIX::RepurchaseTerm{1824497527}, Instrument_4);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_4);
  set_field(msg, FIX::SecurityDesc{"STRING_175425312"}, Instrument_4);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_2037759568"}, Instrument_4);
  set_field(msg, FIX::SecurityGroup{"STRING_1425324321"}, Instrument_4);
  set_field(msg, FIX::SecurityID{"STRING_560284625"}, Instrument_4);
  set_field(msg, FIX::SecurityIDSource{"STRING_E"}, Instrument_4);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_4);
  set_field(msg, FIX::SecuritySubType{"STRING_1977104058"}, Instrument_4);
  set_field(msg, FIX::SecurityType{"STRING_TAXA"}, Instrument_4);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_4);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_4);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_110726452"}, Instrument_4);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1734630681"}, Instrument_4);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_4);
  FIX::StrikeMultiplier StrikeMultiplier_4;
  StrikeMultiplier_4.setString("8453891");
set_field(msg, StrikeMultiplier_4, Instrument_4);
  FIX::StrikePrice StrikePrice_4;
  StrikePrice_4.setString("19024732");
set_field(msg, StrikePrice_4, Instrument_4);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_4);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_4;
  StrikePriceBoundaryPrecision_4.setString("90.260000");
set_field(msg, StrikePriceBoundaryPrecision_4, Instrument_4);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_4);
  FIX::StrikeValue StrikeValue_4;
  StrikeValue_4.setString("3255630");
set_field(msg, StrikeValue_4, Instrument_4);
  set_field(msg, FIX::Symbol{"STRING_1503619615"}, Instrument_4);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_4);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_4);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_4);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_4);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_4;
  UnitOfMeasureQty_4.setString("19641315");
set_field(msg, UnitOfMeasureQty_4, Instrument_4);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_4);
  all_values.push_back(Instrument_4);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationInstruction::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_9;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_9);
    FIX::ComplexEventPrice ComplexEventPrice_9;
    ComplexEventPrice_9.setString("4010120");
set_field(noComplexEvents_0_0, ComplexEventPrice_9, ComplexEvents_NoComplexEvents_9);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_9);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_9;
    ComplexEventPriceBoundaryPrecision_9.setString("75.360000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_9, ComplexEvents_NoComplexEvents_9);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_9);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_9);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_9;
    ComplexOptPayoutAmount_9.setString("12992321");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_9, ComplexEvents_NoComplexEvents_9);
    all_values.push_back(ComplexEvents_NoComplexEvents_9);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_20;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 42, 18, 12, 11, 2002)}, ComplexEventDates_NoComplexEventDates_20);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 4, 40, 18, 8, 2001)}, ComplexEventDates_NoComplexEventDates_20);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_20);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstruction::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_53;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 46, 1)}, ComplexEventTimes_NoComplexEventTimes_53);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 56, 10)}, ComplexEventTimes_NoComplexEventTimes_53);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_53);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationInstruction::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_10;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1728225171"}, EvntGrp_NoEvents_10);
    FIX::EventPx EventPx_10;
    EventPx_10.setString("17508082");
set_field(noEvents_0_0, EventPx_10, EvntGrp_NoEvents_10);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1192686323"}, EvntGrp_NoEvents_10);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(16, 36, 56, 3, 8, 2008)}, EvntGrp_NoEvents_10);
    set_field(noEvents_0_0, FIX::EventType{14}, EvntGrp_NoEvents_10);
    all_values.push_back(EvntGrp_NoEvents_10);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_11;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_819692475"}, EvntGrp_NoEvents_11);
    FIX::EventPx EventPx_11;
    EventPx_11.setString("14806630");
set_field(noEvents_0_1, EventPx_11, EvntGrp_NoEvents_11);
    set_field(noEvents_0_1, FIX::EventText{"STRING_2134935825"}, EvntGrp_NoEvents_11);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(7, 42, 32, 13, 2, 2009)}, EvntGrp_NoEvents_11);
    set_field(noEvents_0_1, FIX::EventType{19}, EvntGrp_NoEvents_11);
    all_values.push_back(EvntGrp_NoEvents_11);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_6;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_139575121"}, InstrumentParties_NoInstrumentParties_6);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_6);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1168377384}, InstrumentParties_NoInstrumentParties_6);
    all_values.push_back(InstrumentParties_NoInstrumentParties_6);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1624320688"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{348106872}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_13);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_976292032"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{2078059475}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_2076332044"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{579616616}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_7;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1123262151"}, InstrumentParties_NoInstrumentParties_7);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_7);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1278720984}, InstrumentParties_NoInstrumentParties_7);
    all_values.push_back(InstrumentParties_NoInstrumentParties_7);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_422532411"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{807711971}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_8;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_793500747"}, InstrumentParties_NoInstrumentParties_8);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_8);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{772360037}, InstrumentParties_NoInstrumentParties_8);
    all_values.push_back(InstrumentParties_NoInstrumentParties_8);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_751507353"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{759812214}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstruction::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_9;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_891426568"}, SecAltIDGrp_NoSecurityAltID_9);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1615457676"}, SecAltIDGrp_NoSecurityAltID_9);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_9);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_10;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1154646367"}, SecAltIDGrp_NoSecurityAltID_10);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_555130577"}, SecAltIDGrp_NoSecurityAltID_10);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_10);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_11;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1574051801"}, SecAltIDGrp_NoSecurityAltID_11);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1905307685"}, SecAltIDGrp_NoSecurityAltID_11);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_11);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_8;
  set_field(msg, FIX::SecurityXML{"XMLDATA_68182427"}, SecurityXML_8);
  set_field(msg, FIX::SecurityXMLLen{2139214204}, SecurityXML_8);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_2044882806"}, SecurityXML_8);
  all_values.push_back(SecurityXML_8);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_0;
  set_field(msg, FIX::DeliveryForm{1}, InstrumentExtension_0);
  FIX::PctAtRisk PctAtRisk_0;
  PctAtRisk_0.setString("79.400000");
set_field(msg, PctAtRisk_0, InstrumentExtension_0);
  all_values.push_back(InstrumentExtension_0);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstruction::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_0;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{3}, AttrbGrp_NoInstrAttrib_0);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1508214813"}, AttrbGrp_NoInstrAttrib_0);
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
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_1209699419"}, OrdAllocGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ListID{"STRING_1437063209"}, OrdAllocGrp_NoOrders_0);
    FIX::OrderAvgPx OrderAvgPx_0;
    OrderAvgPx_0.setString("3492470");
set_field(noOrders_0_0, OrderAvgPx_0, OrdAllocGrp_NoOrders_0);
    FIX::OrderBookingQty OrderBookingQty_0;
    OrderBookingQty_0.setString("1854779");
set_field(noOrders_0_0, OrderBookingQty_0, OrdAllocGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_1237941084"}, OrdAllocGrp_NoOrders_0);
    FIX::OrderQty OrderQty_0;
    OrderQty_0.setString("16279680");
set_field(noOrders_0_0, OrderQty_0, OrdAllocGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_1653174910"}, OrdAllocGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SecondaryOrderID{"STRING_1660473495"}, OrdAllocGrp_NoOrders_0);
    all_values.push_back(OrdAllocGrp_NoOrders_0);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_0;
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyID{"STRING_299192009"}, NestedParties2_NoNested2PartyIDs_0);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyIDSource{'9'}, NestedParties2_NoNested2PartyIDs_0);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyRole{1060556414}, NestedParties2_NoNested2PartyIDs_0);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_0);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_0;
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubID{"STRING_1682825169"}, NstdPtys2SubGrp_NoNested2PartySubIDs_0);
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubIDType{1820368628}, NstdPtys2SubGrp_NoNested2PartySubIDs_0);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_0);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_1;
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubID{"STRING_864318938"}, NstdPtys2SubGrp_NoNested2PartySubIDs_1);
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubIDType{426768089}, NstdPtys2SubGrp_NoNested2PartySubIDs_1);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_1);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_2;
        set_field(noNested2PartySubIDs_0_0_2_2, FIX::Nested2PartySubID{"STRING_1288342657"}, NstdPtys2SubGrp_NoNested2PartySubIDs_2);
        set_field(noNested2PartySubIDs_0_0_2_2, FIX::Nested2PartySubIDType{2018965306}, NstdPtys2SubGrp_NoNested2PartySubIDs_2);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_2);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_1;
    set_field(noOrders_0_1, FIX::ClOrdID{"STRING_981898666"}, OrdAllocGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ListID{"STRING_714910810"}, OrdAllocGrp_NoOrders_1);
    FIX::OrderAvgPx OrderAvgPx_1;
    OrderAvgPx_1.setString("17767893");
set_field(noOrders_0_1, OrderAvgPx_1, OrdAllocGrp_NoOrders_1);
    FIX::OrderBookingQty OrderBookingQty_1;
    OrderBookingQty_1.setString("10500810");
set_field(noOrders_0_1, OrderBookingQty_1, OrdAllocGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::OrderID{"STRING_706641367"}, OrdAllocGrp_NoOrders_1);
    FIX::OrderQty OrderQty_1;
    OrderQty_1.setString("16741885");
set_field(noOrders_0_1, OrderQty_1, OrdAllocGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::SecondaryClOrdID{"STRING_704883998"}, OrdAllocGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::SecondaryOrderID{"STRING_1866749307"}, OrdAllocGrp_NoOrders_1);
    all_values.push_back(OrdAllocGrp_NoOrders_1);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_1;
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyID{"STRING_1984007590"}, NestedParties2_NoNested2PartyIDs_1);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_1);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyRole{237157374}, NestedParties2_NoNested2PartyIDs_1);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_1);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_3;
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubID{"STRING_517060033"}, NstdPtys2SubGrp_NoNested2PartySubIDs_3);
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubIDType{586404443}, NstdPtys2SubGrp_NoNested2PartySubIDs_3);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_3);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_4;
        set_field(noNested2PartySubIDs_1_0_2_1, FIX::Nested2PartySubID{"STRING_1231701284"}, NstdPtys2SubGrp_NoNested2PartySubIDs_4);
        set_field(noNested2PartySubIDs_1_0_2_1, FIX::Nested2PartySubIDType{1755001117}, NstdPtys2SubGrp_NoNested2PartySubIDs_4);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_4);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_2;
      set_field(noNested2PartyIDs_1_1_1, FIX::Nested2PartyID{"STRING_66888849"}, NestedParties2_NoNested2PartyIDs_2);
      set_field(noNested2PartyIDs_1_1_1, FIX::Nested2PartyIDSource{'7'}, NestedParties2_NoNested2PartyIDs_2);
      set_field(noNested2PartyIDs_1_1_1, FIX::Nested2PartyRole{1267990964}, NestedParties2_NoNested2PartyIDs_2);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_2);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_5;
        set_field(noNested2PartySubIDs_1_1_2_0, FIX::Nested2PartySubID{"STRING_1036584555"}, NstdPtys2SubGrp_NoNested2PartySubIDs_5);
        set_field(noNested2PartySubIDs_1_1_2_0, FIX::Nested2PartySubIDType{51825132}, NstdPtys2SubGrp_NoNested2PartySubIDs_5);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_5);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_0);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_1);
    }
    msg.addGroup(noOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_2;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_801486138"}, Parties_NoPartyIDs_2);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_2);
    set_field(noPartyIDs_0_0, FIX::PartyRole{21}, Parties_NoPartyIDs_2);
    all_values.push_back(Parties_NoPartyIDs_2);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_6;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_13934742"}, PtysSubGrp_NoPartySubIDs_6);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_6);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_6);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_3;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1537286735"}, Parties_NoPartyIDs_3);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_3);
    set_field(noPartyIDs_0_1, FIX::PartyRole{26}, Parties_NoPartyIDs_3);
    all_values.push_back(Parties_NoPartyIDs_3);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_7;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_2045914503"}, PtysSubGrp_NoPartySubIDs_7);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_7);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_7);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_8;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_693297283"}, PtysSubGrp_NoPartySubIDs_8);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_8);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_8);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_4;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1370203466"}, Parties_NoPartyIDs_4);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_4);
    set_field(noPartyIDs_0_2, FIX::PartyRole{12}, Parties_NoPartyIDs_4);
    all_values.push_back(Parties_NoPartyIDs_4);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_9;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1397981580"}, PtysSubGrp_NoPartySubIDs_9);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_9);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_9);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_10;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_967260324"}, PtysSubGrp_NoPartySubIDs_10);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_10);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_10);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_11;
      set_field(noPartySubIDs_2_1_2, FIX::PartySubID{"STRING_570279792"}, PtysSubGrp_NoPartySubIDs_11);
      set_field(noPartySubIDs_2_1_2, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_11);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_11);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationInstruction::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_0;
    FIX::PosAmt PosAmt_0;
    PosAmt_0.setString("13076723");
set_field(noPosAmt_0_0, PosAmt_0, PositionAmountData_NoPosAmt_0);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_FMTM"}, PositionAmountData_NoPosAmt_0);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_258876450"}, PositionAmountData_NoPosAmt_0);
    all_values.push_back(PositionAmountData_NoPosAmt_0);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_1;
    FIX::PosAmt PosAmt_1;
    PosAmt_1.setString("1967732");
set_field(noPosAmt_0_1, PosAmt_1, PositionAmountData_NoPosAmt_1);
    set_field(noPosAmt_0_1, FIX::PosAmtType{"STRING_IMTM"}, PositionAmountData_NoPosAmt_1);
    set_field(noPosAmt_0_1, FIX::PositionCurrency{"STRING_1674518090"}, PositionAmountData_NoPosAmt_1);
    all_values.push_back(PositionAmountData_NoPosAmt_1);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::AllocationInstruction::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_2;
    FIX::PosAmt PosAmt_2;
    PosAmt_2.setString("9982593");
set_field(noPosAmt_0_2, PosAmt_2, PositionAmountData_NoPosAmt_2);
    set_field(noPosAmt_0_2, FIX::PosAmtType{"STRING_PREM"}, PositionAmountData_NoPosAmt_2);
    set_field(noPosAmt_0_2, FIX::PositionCurrency{"STRING_615561063"}, PositionAmountData_NoPosAmt_2);
    all_values.push_back(PositionAmountData_NoPosAmt_2);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_2);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_0;
    set_field(noRateSources_0_0, FIX::RateSource{99}, RateSource_NoRateSources_0);
    set_field(noRateSources_0_0, FIX::RateSourceType{0}, RateSource_NoRateSources_0);
    set_field(noRateSources_0_0, FIX::ReferencePage{"STRING_2053867548"}, RateSource_NoRateSources_0);
    all_values.push_back(RateSource_NoRateSources_0);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_1;
    set_field(noRateSources_0_1, FIX::RateSource{0}, RateSource_NoRateSources_1);
    set_field(noRateSources_0_1, FIX::RateSourceType{0}, RateSource_NoRateSources_1);
    set_field(noRateSources_0_1, FIX::ReferencePage{"STRING_1072976330"}, RateSource_NoRateSources_1);
    all_values.push_back(RateSource_NoRateSources_1);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_0;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CHF"}, SpreadOrBenchmarkCurveData_0);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_SONIA"}, SpreadOrBenchmarkCurveData_0);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_845790756"}, SpreadOrBenchmarkCurveData_0);
  FIX::BenchmarkPrice BenchmarkPrice_0;
  BenchmarkPrice_0.setString("5154171");
set_field(msg, BenchmarkPrice_0, SpreadOrBenchmarkCurveData_0);
  set_field(msg, FIX::BenchmarkPriceType{779614171}, SpreadOrBenchmarkCurveData_0);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1285629551"}, SpreadOrBenchmarkCurveData_0);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_965617401"}, SpreadOrBenchmarkCurveData_0);
  FIX::Spread Spread_0;
  Spread_0.setString("301121");
set_field(msg, Spread_0, SpreadOrBenchmarkCurveData_0);
  all_values.push_back(SpreadOrBenchmarkCurveData_0);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstruction::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_0;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_WAL"}, Stipulations_NoStipulations_0);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_2014498126"}, Stipulations_NoStipulations_0);
    all_values.push_back(Stipulations_NoStipulations_0);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_2;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_360171871"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1918289351}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_354676542"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{55456982}, UnderlyingInstrument_2);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_2;
    UnderlyingAdjustedQuantity_2.setString("296821");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_2, UnderlyingInstrument_2);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_2;
    UnderlyingAllocationPercent_2.setString("97.880000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_2, UnderlyingInstrument_2);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_2;
    UnderlyingAttachmentPoint_2.setString("8.730000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1704200244"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1549709172"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1284327769"}, UnderlyingInstrument_2);
    FIX::UnderlyingCapValue UnderlyingCapValue_2;
    UnderlyingCapValue_2.setString("1722776");
set_field(noUnderlyings_0_0, UnderlyingCapValue_2, UnderlyingInstrument_2);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_2;
    UnderlyingCashAmount_2.setString("20662899");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_2);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_2;
    UnderlyingContractMultiplier_2.setString("10172243");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1972673885}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_976584456"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_658983836"}, UnderlyingInstrument_2);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_2;
    UnderlyingCouponRate_2.setString("65.670000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1219060359"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_2);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_2;
    UnderlyingCurrentValue_2.setString("20648511");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_2, UnderlyingInstrument_2);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_2;
    UnderlyingDetachmentPoint_2.setString("45.890000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_2, UnderlyingInstrument_2);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_2;
    UnderlyingDirtyPrice_2.setString("12965707");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_2, UnderlyingInstrument_2);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_2;
    UnderlyingEndPrice_2.setString("12029970");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_2, UnderlyingInstrument_2);
    FIX::UnderlyingEndValue UnderlyingEndValue_2;
    UnderlyingEndValue_2.setString("12852319");
set_field(noUnderlyings_0_0, UnderlyingEndValue_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1326682806}, UnderlyingInstrument_2);
    FIX::UnderlyingFXRate UnderlyingFXRate_2;
    UnderlyingFXRate_2.setString("18272050");
set_field(noUnderlyings_0_0, UnderlyingFXRate_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_2);
    FIX::UnderlyingFactor UnderlyingFactor_2;
    UnderlyingFactor_2.setString("11936972");
set_field(noUnderlyings_0_0, UnderlyingFactor_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{874209282}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1430797939"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_964502988"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1228885824"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1486254921"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_994185141"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1780335612"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1288822146"}, UnderlyingInstrument_2);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_2;
    UnderlyingNotionalPercentageOutstanding_2.setString("17.370000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_2);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_2;
    UnderlyingOriginalNotionalPercentageOutstanding_2.setString("62.680000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_723179396"}, UnderlyingInstrument_2);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_2;
    UnderlyingPriceUnitOfMeasureQty_2.setString("11013674");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1058205676}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1740403748}, UnderlyingInstrument_2);
    FIX::UnderlyingPx UnderlyingPx_2;
    UnderlyingPx_2.setString("9265577");
set_field(noUnderlyings_0_0, UnderlyingPx_2, UnderlyingInstrument_2);
    FIX::UnderlyingQty UnderlyingQty_2;
    UnderlyingQty_2.setString("20347901");
set_field(noUnderlyings_0_0, UnderlyingQty_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_251903936"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1824724277"}, UnderlyingInstrument_2);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_2;
    UnderlyingRepurchaseRate_2.setString("68.440000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{56101415}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_194197162"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1023734312"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_375716005"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1490767865"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_79247682"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1660947995"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_669967024"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1906452760"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_584090415"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_2);
    FIX::UnderlyingStartValue UnderlyingStartValue_2;
    UnderlyingStartValue_2.setString("6331783");
set_field(noUnderlyings_0_0, UnderlyingStartValue_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2014888355"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_2);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_2;
    UnderlyingStrikePrice_2.setString("13536596");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_2, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1674868790"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1494916183"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_494998127"}, UnderlyingInstrument_2);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_78286880"}, UnderlyingInstrument_2);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_2;
    UnderlyingUnitOfMeasureQty_2.setString("5299936");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_2, UnderlyingInstrument_2);
    all_values.push_back(UnderlyingInstrument_2);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_4;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_801466276"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_4);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1631361145"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_4);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_4);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_5;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1978870071"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_5);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_394386376"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_5);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_5);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_6;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_410435208"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_6);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1866176556"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_6);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_6);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_3;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_87675837"}, UnderlyingStipulations_NoUnderlyingStips_3);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_825059753"}, UnderlyingStipulations_NoUnderlyingStips_3);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_3);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_6;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_281872999"}, UndlyInstrumentParties_NoUndlyInstrumentParties_6);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_6);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1078107733}, UndlyInstrumentParties_NoUndlyInstrumentParties_6);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_6);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1928041747"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{591572080}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_12);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_295124241"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1687010860}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_13);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationInstruction::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_3;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1175662496"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{11304902}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_172705606"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1043067203}, UnderlyingInstrument_3);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_3;
    UnderlyingAdjustedQuantity_3.setString("6919885");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_3, UnderlyingInstrument_3);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_3;
    UnderlyingAllocationPercent_3.setString("98.250000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_3, UnderlyingInstrument_3);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_3;
    UnderlyingAttachmentPoint_3.setString("31.830000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_219373693"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1382202361"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_744241310"}, UnderlyingInstrument_3);
    FIX::UnderlyingCapValue UnderlyingCapValue_3;
    UnderlyingCapValue_3.setString("2976605");
set_field(noUnderlyings_0_1, UnderlyingCapValue_3, UnderlyingInstrument_3);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_3;
    UnderlyingCashAmount_3.setString("19121960");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_3);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_3;
    UnderlyingContractMultiplier_3.setString("10991268");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1396073530}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1496292129"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1493513226"}, UnderlyingInstrument_3);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_3;
    UnderlyingCouponRate_3.setString("87.380000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1214985037"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_3);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_3;
    UnderlyingCurrentValue_3.setString("20400447");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_3, UnderlyingInstrument_3);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_3;
    UnderlyingDetachmentPoint_3.setString("16.190000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_3, UnderlyingInstrument_3);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_3;
    UnderlyingDirtyPrice_3.setString("285739");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_3, UnderlyingInstrument_3);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_3;
    UnderlyingEndPrice_3.setString("17413552");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_3, UnderlyingInstrument_3);
    FIX::UnderlyingEndValue UnderlyingEndValue_3;
    UnderlyingEndValue_3.setString("17728193");
set_field(noUnderlyings_0_1, UnderlyingEndValue_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1801214792}, UnderlyingInstrument_3);
    FIX::UnderlyingFXRate UnderlyingFXRate_3;
    UnderlyingFXRate_3.setString("15219133");
set_field(noUnderlyings_0_1, UnderlyingFXRate_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_3);
    FIX::UnderlyingFactor UnderlyingFactor_3;
    UnderlyingFactor_3.setString("20963390");
set_field(noUnderlyings_0_1, UnderlyingFactor_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1061440519}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1392570280"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2107643935"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1234146125"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_288153835"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_652148838"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1121432303"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_537397019"}, UnderlyingInstrument_3);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_3;
    UnderlyingNotionalPercentageOutstanding_3.setString("25.320000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_3);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_3;
    UnderlyingOriginalNotionalPercentageOutstanding_3.setString("83.290000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1169183105"}, UnderlyingInstrument_3);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_3;
    UnderlyingPriceUnitOfMeasureQty_3.setString("1208634");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{799060387}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{120826307}, UnderlyingInstrument_3);
    FIX::UnderlyingPx UnderlyingPx_3;
    UnderlyingPx_3.setString("15169369");
set_field(noUnderlyings_0_1, UnderlyingPx_3, UnderlyingInstrument_3);
    FIX::UnderlyingQty UnderlyingQty_3;
    UnderlyingQty_3.setString("1478688");
set_field(noUnderlyings_0_1, UnderlyingQty_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1614339534"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1175962022"}, UnderlyingInstrument_3);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_3;
    UnderlyingRepurchaseRate_3.setString("39.050000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1606659425}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_922662950"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1255415048"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_153887396"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_951236877"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_849286607"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1926706748"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_604968022"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_223716266"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_2143614532"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_3);
    FIX::UnderlyingStartValue UnderlyingStartValue_3;
    UnderlyingStartValue_3.setString("12851567");
set_field(noUnderlyings_0_1, UnderlyingStartValue_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1388701165"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_3);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_3;
    UnderlyingStrikePrice_3.setString("16768550");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_3, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1166132533"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1493251566"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_66768371"}, UnderlyingInstrument_3);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_2037655065"}, UnderlyingInstrument_3);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_3;
    UnderlyingUnitOfMeasureQty_3.setString("18494025");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_3, UnderlyingInstrument_3);
    all_values.push_back(UnderlyingInstrument_3);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_7;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1059354523"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_7);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1970265983"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_7);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_7);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_8;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_2147467088"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_8);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1180180830"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_8);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_8);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_4;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_147852308"}, UnderlyingStipulations_NoUnderlyingStips_4);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_647036716"}, UnderlyingStipulations_NoUnderlyingStips_4);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_4);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_5;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_368197640"}, UnderlyingStipulations_NoUnderlyingStips_5);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1510706213"}, UnderlyingStipulations_NoUnderlyingStips_5);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_5);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_6;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_106212493"}, UnderlyingStipulations_NoUnderlyingStips_6);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1290860590"}, UnderlyingStipulations_NoUnderlyingStips_6);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_6);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_7;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_260099889"}, UndlyInstrumentParties_NoUndlyInstrumentParties_7);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_7);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1467924221}, UndlyInstrumentParties_NoUndlyInstrumentParties_7);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_7);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_699581842"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1691640487}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_14);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_8;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_35453874"}, UndlyInstrumentParties_NoUndlyInstrumentParties_8);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_8);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{829313625}, UndlyInstrumentParties_NoUndlyInstrumentParties_8);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_8);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1767388944"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1201132888}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_15);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_953526391"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{786037830}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_16);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_9;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_546900806"}, UndlyInstrumentParties_NoUndlyInstrumentParties_9);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_9);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{676209247}, UndlyInstrumentParties_NoUndlyInstrumentParties_9);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_9);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_221217816"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1735563770}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_17);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AllocationInstruction::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_71602075"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{221201256}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_18);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_0;
  FIX::Yield Yield_0;
  Yield_0.setString("9.530000");
set_field(msg, Yield_0, YieldData_0);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1411321341"}, YieldData_0);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_369053564"}, YieldData_0);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_0;
  YieldRedemptionPrice_0.setString("14152976");
set_field(msg, YieldRedemptionPrice_0, YieldData_0);
  set_field(msg, FIX::YieldRedemptionPriceType{1779518982}, YieldData_0);
  set_field(msg, FIX::YieldType{"STRING_CURRENT"}, YieldData_0);
  all_values.push_back(YieldData_0);
  all_compo_names.insert(".");

  // header
  multiset<string> header_2;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_3"}, header_2);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_922895924"}, header_2);
  set_header_field(msg.getHeader(), FIX::BodyLength{350913743}, header_2);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1781610052"}, header_2);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1017509744"}, header_2);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1818837964"}, header_2);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1820933042"}, header_2);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1717091586}, header_2);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_2);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1856386916}, header_2);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_823013188"}, header_2);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_44824780"}, header_2);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1133058307"}, header_2);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(20, 38, 14, 22, 2, 2004)}, header_2);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_2);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_2);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1493245684"}, header_2);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{2113280289}, header_2);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1401814885"}, header_2);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_114022989"}, header_2);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1377117983"}, header_2);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(3, 57, 39, 2, 6, 2002)}, header_2);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_537473578"}, header_2);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_802075338"}, header_2);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1525412638"}, header_2);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_210922972"}, header_2);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{371683276}, header_2);
  all_values.push_back(header_2);
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
