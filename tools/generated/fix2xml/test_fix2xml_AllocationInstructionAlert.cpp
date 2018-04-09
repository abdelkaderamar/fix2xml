#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::AllocationInstructionAlert msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAlert_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_1;
  AccruedInterestAmt_1.setString("16729196");
set_field(msg, AccruedInterestAmt_1, AllocationInstructionAlert_0);
  FIX::AccruedInterestRate AccruedInterestRate_1;
  AccruedInterestRate_1.setString("52.230000");
set_field(msg, AccruedInterestRate_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocCancReplaceReason{2}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocID{"STRING_1763798457"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocIntermedReqType{6}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocLinkID{"STRING_94737971"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocLinkType{1}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocNoOrdersType{1}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocTransType{'6'}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AllocType{5}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AutoAcceptIndicator{false}, AllocationInstructionAlert_0);
  FIX::AvgParPx AvgParPx_1;
  AvgParPx_1.setString("1218508");
set_field(msg, AvgParPx_1, AllocationInstructionAlert_0);
  FIX::AvgPx AvgPx_1;
  AvgPx_1.setString("5017867");
set_field(msg, AvgPx_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::AvgPxIndicator{2}, AllocationInstructionAlert_0);
  set_field(msg, FIX::AvgPxPrecision{1830391994}, AllocationInstructionAlert_0);
  set_field(msg, FIX::BookingRefID{"STRING_405139685"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::BookingType{1}, AllocationInstructionAlert_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_717835986"}, AllocationInstructionAlert_0);
  FIX::Concession Concession_1;
  Concession_1.setString("9849404");
set_field(msg, Concession_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::Currency{"CHF"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::CustOrderCapacity{4}, AllocationInstructionAlert_0);
  set_field(msg, FIX::EncodedText{"DATA_1963522666"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::EncodedTextLen{1871072234}, AllocationInstructionAlert_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_1;
  EndAccruedInterestAmt_1.setString("10172972");
set_field(msg, EndAccruedInterestAmt_1, AllocationInstructionAlert_0);
  FIX::EndCash EndCash_1;
  EndCash_1.setString("21171562");
set_field(msg, EndCash_1, AllocationInstructionAlert_0);
  FIX::GrossTradeAmt GrossTradeAmt_1;
  GrossTradeAmt_1.setString("11462364");
set_field(msg, GrossTradeAmt_1, AllocationInstructionAlert_0);
  FIX::InterestAtMaturity InterestAtMaturity_1;
  InterestAtMaturity_1.setString("2804428");
set_field(msg, InterestAtMaturity_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::LastFragment{false}, AllocationInstructionAlert_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_1169846139"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::LegalConfirm{true}, AllocationInstructionAlert_0);
  set_field(msg, FIX::MatchType{"STRING_A4"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::MessageEventSource{"STRING_2027871362"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::MultiLegReportingType{'1'}, AllocationInstructionAlert_0);
  FIX::NetMoney NetMoney_1;
  NetMoney_1.setString("467480");
set_field(msg, NetMoney_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::NumDaysInterest{110146296}, AllocationInstructionAlert_0);
  set_field(msg, FIX::PositionEffect{'O'}, AllocationInstructionAlert_0);
  set_field(msg, FIX::PreviouslyReported{false}, AllocationInstructionAlert_0);
  set_field(msg, FIX::PriceType{10}, AllocationInstructionAlert_0);
  set_field(msg, FIX::QtyType{2}, AllocationInstructionAlert_0);
  FIX::Quantity Quantity_2;
  Quantity_2.setString("1149191");
set_field(msg, Quantity_2, AllocationInstructionAlert_0);
  set_field(msg, FIX::RefAllocID{"STRING_1697954003"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::ReversalIndicator{true}, AllocationInstructionAlert_0);
  FIX::RndPx RndPx_1;
  RndPx_1.setString("6167059");
set_field(msg, RndPx_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_1421258192"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1757070596"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::SettlType{"STRING_3"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::Side{'E'}, AllocationInstructionAlert_0);
  FIX::StartCash StartCash_1;
  StartCash_1.setString("3274229");
set_field(msg, StartCash_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::Text{"STRING_2006786117"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TotNoAllocs{182083258}, AllocationInstructionAlert_0);
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_1;
  TotalAccruedInterestAmt_1.setString("2612945");
set_field(msg, TotalAccruedInterestAmt_1, AllocationInstructionAlert_0);
  FIX::TotalTakedown TotalTakedown_1;
  TotalTakedown_1.setString("6266621");
set_field(msg, TotalTakedown_1, AllocationInstructionAlert_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_2145605924"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TradeInputSource{"STRING_2132366823"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_1643959379"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_4"}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(6, 38, 3, 23, 10, 2006)}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TrdSubType{19}, AllocationInstructionAlert_0);
  set_field(msg, FIX::TrdType{19}, AllocationInstructionAlert_0);
  all_values.push_back(AllocationInstructionAlert_0);

  all_compo_names.insert("AllocationInstructionAlert");

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_3;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_76316811"}, AllocGrp_NoAllocs_3);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_3;
    AllocAccruedInterestAmt_3.setString("5522292");
set_field(noAllocs_0_0, AllocAccruedInterestAmt_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{817226863}, AllocGrp_NoAllocs_3);
    FIX::AllocAvgPx AllocAvgPx_3;
    AllocAvgPx_3.setString("1912359");
set_field(noAllocs_0_0, AllocAvgPx_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocCustomerCapacity{"STRING_102699633"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocHandlInst{2}, AllocGrp_NoAllocs_3);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_3;
    AllocInterestAtMaturity_3.setString("8079419");
set_field(noAllocs_0_0, AllocInterestAtMaturity_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocMethod{3}, AllocGrp_NoAllocs_3);
    FIX::AllocNetMoney AllocNetMoney_3;
    AllocNetMoney_3.setString("3534924");
set_field(noAllocs_0_0, AllocNetMoney_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocPositionEffect{'R'}, AllocGrp_NoAllocs_3);
    FIX::AllocPrice AllocPrice_5;
    AllocPrice_5.setString("11388611");
set_field(noAllocs_0_0, AllocPrice_5, AllocGrp_NoAllocs_3);
    FIX::AllocQty AllocQty_5;
    AllocQty_5.setString("6809153");
set_field(noAllocs_0_0, AllocQty_5, AllocGrp_NoAllocs_3);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_3;
    AllocSettlCurrAmt_3.setString("16890900");
set_field(noAllocs_0_0, AllocSettlCurrAmt_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"GBP"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocSettlInstType{2}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocText{"STRING_1319066669"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::ClearingFeeIndicator{"STRING_E"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::EncodedAllocText{"DATA_1812227896"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::EncodedAllocTextLen{1286861596}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_2058212699"}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::IndividualAllocType{2}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::MatchStatus{'2'}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::NotifyBrokerOfCredit{false}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::ProcessCode{'0'}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::SecondaryIndividualAllocID{"STRING_1315395398"}, AllocGrp_NoAllocs_3);
    FIX::SettlCurrAmt SettlCurrAmt_3;
    SettlCurrAmt_3.setString("980809");
set_field(noAllocs_0_0, SettlCurrAmt_3, AllocGrp_NoAllocs_3);
    FIX::SettlCurrFxRate SettlCurrFxRate_3;
    SettlCurrFxRate_3.setString("889845");
set_field(noAllocs_0_0, SettlCurrFxRate_3, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::SettlCurrFxRateCalc{'D'}, AllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::SettlCurrency{"JPY"}, AllocGrp_NoAllocs_3);
    all_values.push_back(AllocGrp_NoAllocs_3);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_4;
      set_field(noClearingInstructions_0_1_0, FIX::ClearingInstruction{2}, ClrInstGrp_NoClearingInstructions_4);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_4);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_5;
      set_field(noClearingInstructions_0_1_1, FIX::ClearingInstruction{3}, ClrInstGrp_NoClearingInstructions_5);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_5);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_6;
      set_field(noClearingInstructions_0_1_2, FIX::ClearingInstruction{9}, ClrInstGrp_NoClearingInstructions_6);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_6);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_3;
    set_field(noAllocs_0_0, FIX::CommCurrency{"CAN"}, CommissionData_3);
    set_field(noAllocs_0_0, FIX::CommType{'5'}, CommissionData_3);
    FIX::Commission Commission_3;
    Commission_3.setString("2735001");
set_field(noAllocs_0_0, Commission_3, CommissionData_3);
    set_field(noAllocs_0_0, FIX::FundRenewWaiv{'N'}, CommissionData_3);
    all_values.push_back(CommissionData_3);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_8;
      FIX::MiscFeeAmt MiscFeeAmt_8;
      MiscFeeAmt_8.setString("14123612");
set_field(noMiscFees_0_1_0, MiscFeeAmt_8, MiscFeesGrp_NoMiscFees_8);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_8);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_8);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeType{"STRING_1"}, MiscFeesGrp_NoMiscFees_8);
      all_values.push_back(MiscFeesGrp_NoMiscFees_8);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_9;
      FIX::MiscFeeAmt MiscFeeAmt_9;
      MiscFeeAmt_9.setString("9855585");
set_field(noMiscFees_0_1_1, MiscFeeAmt_9, MiscFeesGrp_NoMiscFees_9);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_9);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeCurr{"CAN"}, MiscFeesGrp_NoMiscFees_9);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeType{"STRING_4"}, MiscFeesGrp_NoMiscFees_9);
      all_values.push_back(MiscFeesGrp_NoMiscFees_9);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_0_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_10;
      FIX::MiscFeeAmt MiscFeeAmt_10;
      MiscFeeAmt_10.setString("11819885");
set_field(noMiscFees_0_1_2, MiscFeeAmt_10, MiscFeesGrp_NoMiscFees_10);
      set_field(noMiscFees_0_1_2, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_10);
      set_field(noMiscFees_0_1_2, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_10);
      set_field(noMiscFees_0_1_2, FIX::MiscFeeType{"STRING_12"}, MiscFeesGrp_NoMiscFees_10);
      all_values.push_back(MiscFeesGrp_NoMiscFees_10);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_13;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1344280583"}, NestedParties_NoNestedPartyIDs_13);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_13);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{742233517}, NestedParties_NoNestedPartyIDs_13);
      all_values.push_back(NestedParties_NoNestedPartyIDs_13);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_28;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1565485290"}, NstdPtysSubGrp_NoNestedPartySubIDs_28);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1336435431}, NstdPtysSubGrp_NoNestedPartySubIDs_28);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_28);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_29;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_233220237"}, NstdPtysSubGrp_NoNestedPartySubIDs_29);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1336612143}, NstdPtysSubGrp_NoNestedPartySubIDs_29);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_29);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_30;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_2121873310"}, NstdPtysSubGrp_NoNestedPartySubIDs_30);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{1130246160}, NstdPtysSubGrp_NoNestedPartySubIDs_30);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_30);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_14;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1851644462"}, NestedParties_NoNestedPartyIDs_14);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_14);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1403746261}, NestedParties_NoNestedPartyIDs_14);
      all_values.push_back(NestedParties_NoNestedPartyIDs_14);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_31;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_695969473"}, NstdPtysSubGrp_NoNestedPartySubIDs_31);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{668623849}, NstdPtysSubGrp_NoNestedPartySubIDs_31);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_31);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_32;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_2122125627"}, NstdPtysSubGrp_NoNestedPartySubIDs_32);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{1513259501}, NstdPtysSubGrp_NoNestedPartySubIDs_32);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_32);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_3;
    set_field(noAllocs_0_0, FIX::SettlDeliveryType{1}, SettlInstructionsData_3);
    set_field(noAllocs_0_0, FIX::StandInstDbID{"STRING_318808347"}, SettlInstructionsData_3);
    set_field(noAllocs_0_0, FIX::StandInstDbName{"STRING_351334399"}, SettlInstructionsData_3);
    set_field(noAllocs_0_0, FIX::StandInstDbType{0}, SettlInstructionsData_3);
    all_values.push_back(SettlInstructionsData_3);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_5;
      set_field(noDlvyInst_0_1_0, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_5);
      set_field(noDlvyInst_0_1_0, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_5);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_5);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_7;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_1093602853"}, SettlParties_NoSettlPartyIDs_7);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'9'}, SettlParties_NoSettlPartyIDs_7);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{1870772372}, SettlParties_NoSettlPartyIDs_7);
        all_values.push_back(SettlParties_NoSettlPartyIDs_7);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_14;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_1189418856"}, SettlPtysSubGrp_NoSettlPartySubIDs_14);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{1067569308}, SettlPtysSubGrp_NoSettlPartySubIDs_14);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_14);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_8;
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyID{"STRING_1932821636"}, SettlParties_NoSettlPartyIDs_8);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_8);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyRole{506463255}, SettlParties_NoSettlPartyIDs_8);
        all_values.push_back(SettlParties_NoSettlPartyIDs_8);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_15;
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubID{"STRING_1120604156"}, SettlPtysSubGrp_NoSettlPartySubIDs_15);
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubIDType{739683492}, SettlPtysSubGrp_NoSettlPartySubIDs_15);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_15);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_9;
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyID{"STRING_539951773"}, SettlParties_NoSettlPartyIDs_9);
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_9);
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyRole{1869929652}, SettlParties_NoSettlPartyIDs_9);
        all_values.push_back(SettlParties_NoSettlPartyIDs_9);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_16;
          set_field(noSettlPartySubIDs_0_0_2_3_0, FIX::SettlPartySubID{"STRING_515279619"}, SettlPtysSubGrp_NoSettlPartySubIDs_16);
          set_field(noSettlPartySubIDs_0_0_2_3_0, FIX::SettlPartySubIDType{1126192266}, SettlPtysSubGrp_NoSettlPartySubIDs_16);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_16);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_17;
          set_field(noSettlPartySubIDs_0_0_2_3_1, FIX::SettlPartySubID{"STRING_816798135"}, SettlPtysSubGrp_NoSettlPartySubIDs_17);
          set_field(noSettlPartySubIDs_0_0_2_3_1, FIX::SettlPartySubIDType{1211249092}, SettlPtysSubGrp_NoSettlPartySubIDs_17);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_17);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_18;
          set_field(noSettlPartySubIDs_0_0_2_3_2, FIX::SettlPartySubID{"STRING_1794816115"}, SettlPtysSubGrp_NoSettlPartySubIDs_18);
          set_field(noSettlPartySubIDs_0_0_2_3_2, FIX::SettlPartySubIDType{791440114}, SettlPtysSubGrp_NoSettlPartySubIDs_18);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_18);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_0_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_6;
      set_field(noDlvyInst_0_1_1, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_6);
      set_field(noDlvyInst_0_1_1, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_6);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_6);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_10;
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyID{"STRING_928359345"}, SettlParties_NoSettlPartyIDs_10);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_10);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyRole{552832641}, SettlParties_NoSettlPartyIDs_10);
        all_values.push_back(SettlParties_NoSettlPartyIDs_10);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_19;
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubID{"STRING_1822262905"}, SettlPtysSubGrp_NoSettlPartySubIDs_19);
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubIDType{1177405353}, SettlPtysSubGrp_NoSettlPartySubIDs_19);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_19);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_11;
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyID{"STRING_876115742"}, SettlParties_NoSettlPartyIDs_11);
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyIDSource{'6'}, SettlParties_NoSettlPartyIDs_11);
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyRole{900694077}, SettlParties_NoSettlPartyIDs_11);
        all_values.push_back(SettlParties_NoSettlPartyIDs_11);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_20;
          set_field(noSettlPartySubIDs_0_1_1_3_0, FIX::SettlPartySubID{"STRING_1829268555"}, SettlPtysSubGrp_NoSettlPartySubIDs_20);
          set_field(noSettlPartySubIDs_0_1_1_3_0, FIX::SettlPartySubIDType{1968263385}, SettlPtysSubGrp_NoSettlPartySubIDs_20);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_20);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoAllocs noAllocs_0_1;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_4;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_2130173714"}, AllocGrp_NoAllocs_4);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_4;
    AllocAccruedInterestAmt_4.setString("16134372");
set_field(noAllocs_0_1, AllocAccruedInterestAmt_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{327242992}, AllocGrp_NoAllocs_4);
    FIX::AllocAvgPx AllocAvgPx_4;
    AllocAvgPx_4.setString("13335133");
set_field(noAllocs_0_1, AllocAvgPx_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocCustomerCapacity{"STRING_586557789"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocHandlInst{2}, AllocGrp_NoAllocs_4);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_4;
    AllocInterestAtMaturity_4.setString("18734651");
set_field(noAllocs_0_1, AllocInterestAtMaturity_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocMethod{3}, AllocGrp_NoAllocs_4);
    FIX::AllocNetMoney AllocNetMoney_4;
    AllocNetMoney_4.setString("7893724");
set_field(noAllocs_0_1, AllocNetMoney_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocPositionEffect{'R'}, AllocGrp_NoAllocs_4);
    FIX::AllocPrice AllocPrice_6;
    AllocPrice_6.setString("493475");
set_field(noAllocs_0_1, AllocPrice_6, AllocGrp_NoAllocs_4);
    FIX::AllocQty AllocQty_6;
    AllocQty_6.setString("19155647");
set_field(noAllocs_0_1, AllocQty_6, AllocGrp_NoAllocs_4);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_4;
    AllocSettlCurrAmt_4.setString("7868921");
set_field(noAllocs_0_1, AllocSettlCurrAmt_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocSettlCurrency{"GBP"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocSettlInstType{2}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocText{"STRING_1837621618"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::ClearingFeeIndicator{"STRING_3"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::EncodedAllocText{"DATA_541097120"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::EncodedAllocTextLen{618497315}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_83337348"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::IndividualAllocType{1}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::MatchStatus{'0'}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::NotifyBrokerOfCredit{false}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::ProcessCode{'5'}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::SecondaryIndividualAllocID{"STRING_1277125947"}, AllocGrp_NoAllocs_4);
    FIX::SettlCurrAmt SettlCurrAmt_4;
    SettlCurrAmt_4.setString("3979663");
set_field(noAllocs_0_1, SettlCurrAmt_4, AllocGrp_NoAllocs_4);
    FIX::SettlCurrFxRate SettlCurrFxRate_4;
    SettlCurrFxRate_4.setString("10245455");
set_field(noAllocs_0_1, SettlCurrFxRate_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::SettlCurrFxRateCalc{'D'}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::SettlCurrency{"USD"}, AllocGrp_NoAllocs_4);
    all_values.push_back(AllocGrp_NoAllocs_4);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_7;
      set_field(noClearingInstructions_1_1_0, FIX::ClearingInstruction{2}, ClrInstGrp_NoClearingInstructions_7);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_7);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_8;
      set_field(noClearingInstructions_1_1_1, FIX::ClearingInstruction{10}, ClrInstGrp_NoClearingInstructions_8);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_8);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_4;
    set_field(noAllocs_0_1, FIX::CommCurrency{"EUR"}, CommissionData_4);
    set_field(noAllocs_0_1, FIX::CommType{'2'}, CommissionData_4);
    FIX::Commission Commission_4;
    Commission_4.setString("3691792");
set_field(noAllocs_0_1, Commission_4, CommissionData_4);
    set_field(noAllocs_0_1, FIX::FundRenewWaiv{'Y'}, CommissionData_4);
    all_values.push_back(CommissionData_4);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_11;
      FIX::MiscFeeAmt MiscFeeAmt_11;
      MiscFeeAmt_11.setString("3392733");
set_field(noMiscFees_1_1_0, MiscFeeAmt_11, MiscFeesGrp_NoMiscFees_11);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_11);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_11);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeType{"STRING_8"}, MiscFeesGrp_NoMiscFees_11);
      all_values.push_back(MiscFeesGrp_NoMiscFees_11);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_1.addGroup(noMiscFees_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoMiscFees noMiscFees_1_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_12;
      FIX::MiscFeeAmt MiscFeeAmt_12;
      MiscFeeAmt_12.setString("648782");
set_field(noMiscFees_1_1_1, MiscFeeAmt_12, MiscFeesGrp_NoMiscFees_12);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_12);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_12);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeType{"STRING_10"}, MiscFeesGrp_NoMiscFees_12);
      all_values.push_back(MiscFeesGrp_NoMiscFees_12);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_1.addGroup(noMiscFees_1_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_15;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_465407499"}, NestedParties_NoNestedPartyIDs_15);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_15);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1685920334}, NestedParties_NoNestedPartyIDs_15);
      all_values.push_back(NestedParties_NoNestedPartyIDs_15);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_33;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_168408870"}, NstdPtysSubGrp_NoNestedPartySubIDs_33);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{815562633}, NstdPtysSubGrp_NoNestedPartySubIDs_33);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_33);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_34;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_621490408"}, NstdPtysSubGrp_NoNestedPartySubIDs_34);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{1192954414}, NstdPtysSubGrp_NoNestedPartySubIDs_34);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_34);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_35;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_142557011"}, NstdPtysSubGrp_NoNestedPartySubIDs_35);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{701241620}, NstdPtysSubGrp_NoNestedPartySubIDs_35);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_35);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_16;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_2038279696"}, NestedParties_NoNestedPartyIDs_16);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_16);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{246946465}, NestedParties_NoNestedPartyIDs_16);
      all_values.push_back(NestedParties_NoNestedPartyIDs_16);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_36;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_95439243"}, NstdPtysSubGrp_NoNestedPartySubIDs_36);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{379209098}, NstdPtysSubGrp_NoNestedPartySubIDs_36);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_36);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_37;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_1155375434"}, NstdPtysSubGrp_NoNestedPartySubIDs_37);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{464618502}, NstdPtysSubGrp_NoNestedPartySubIDs_37);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_37);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_17;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_45539692"}, NestedParties_NoNestedPartyIDs_17);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_17);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{803891818}, NestedParties_NoNestedPartyIDs_17);
      all_values.push_back(NestedParties_NoNestedPartyIDs_17);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_38;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_538740093"}, NstdPtysSubGrp_NoNestedPartySubIDs_38);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{1930057328}, NstdPtysSubGrp_NoNestedPartySubIDs_38);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_38);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_39;
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubID{"STRING_737492710"}, NstdPtysSubGrp_NoNestedPartySubIDs_39);
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubIDType{603618374}, NstdPtysSubGrp_NoNestedPartySubIDs_39);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_39);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_40;
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubID{"STRING_339587848"}, NstdPtysSubGrp_NoNestedPartySubIDs_40);
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubIDType{1403905525}, NstdPtysSubGrp_NoNestedPartySubIDs_40);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_40);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_4;
    set_field(noAllocs_0_1, FIX::SettlDeliveryType{1}, SettlInstructionsData_4);
    set_field(noAllocs_0_1, FIX::StandInstDbID{"STRING_1437699137"}, SettlInstructionsData_4);
    set_field(noAllocs_0_1, FIX::StandInstDbName{"STRING_541332007"}, SettlInstructionsData_4);
    set_field(noAllocs_0_1, FIX::StandInstDbType{4}, SettlInstructionsData_4);
    all_values.push_back(SettlInstructionsData_4);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_7;
      set_field(noDlvyInst_1_1_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_7);
      set_field(noDlvyInst_1_1_0, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_7);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_7);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_12;
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyID{"STRING_895331327"}, SettlParties_NoSettlPartyIDs_12);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_12);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyRole{696136177}, SettlParties_NoSettlPartyIDs_12);
        all_values.push_back(SettlParties_NoSettlPartyIDs_12);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_21;
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubID{"STRING_849868509"}, SettlPtysSubGrp_NoSettlPartySubIDs_21);
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubIDType{586932225}, SettlPtysSubGrp_NoSettlPartySubIDs_21);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_21);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_22;
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubID{"STRING_490129793"}, SettlPtysSubGrp_NoSettlPartySubIDs_22);
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubIDType{1096814974}, SettlPtysSubGrp_NoSettlPartySubIDs_22);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_22);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_13;
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyID{"STRING_1650296548"}, SettlParties_NoSettlPartyIDs_13);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyIDSource{'5'}, SettlParties_NoSettlPartyIDs_13);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyRole{1476024072}, SettlParties_NoSettlPartyIDs_13);
        all_values.push_back(SettlParties_NoSettlPartyIDs_13);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_23;
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubID{"STRING_1050187538"}, SettlPtysSubGrp_NoSettlPartySubIDs_23);
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubIDType{1521563764}, SettlPtysSubGrp_NoSettlPartySubIDs_23);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_23);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_24;
          set_field(noSettlPartySubIDs_1_0_1_3_1, FIX::SettlPartySubID{"STRING_547463720"}, SettlPtysSubGrp_NoSettlPartySubIDs_24);
          set_field(noSettlPartySubIDs_1_0_1_3_1, FIX::SettlPartySubIDType{1854079357}, SettlPtysSubGrp_NoSettlPartySubIDs_24);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_24);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_1);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst noDlvyInst_1_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_8;
      set_field(noDlvyInst_1_1_1, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_8);
      set_field(noDlvyInst_1_1_1, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_8);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_8);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_14;
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyID{"STRING_2020274339"}, SettlParties_NoSettlPartyIDs_14);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_14);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyRole{1976240885}, SettlParties_NoSettlPartyIDs_14);
        all_values.push_back(SettlParties_NoSettlPartyIDs_14);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_25;
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubID{"STRING_528027064"}, SettlPtysSubGrp_NoSettlPartySubIDs_25);
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubIDType{1266456375}, SettlPtysSubGrp_NoSettlPartySubIDs_25);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_25);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_26;
          set_field(noSettlPartySubIDs_1_1_0_3_1, FIX::SettlPartySubID{"STRING_1818028223"}, SettlPtysSubGrp_NoSettlPartySubIDs_26);
          set_field(noSettlPartySubIDs_1_1_0_3_1, FIX::SettlPartySubIDType{1979123088}, SettlPtysSubGrp_NoSettlPartySubIDs_26);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_26);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_1);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_15;
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyID{"STRING_601229267"}, SettlParties_NoSettlPartyIDs_15);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_15);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyRole{1506259568}, SettlParties_NoSettlPartyIDs_15);
        all_values.push_back(SettlParties_NoSettlPartyIDs_15);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_27;
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubID{"STRING_645644596"}, SettlPtysSubGrp_NoSettlPartySubIDs_27);
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubIDType{1654886457}, SettlPtysSubGrp_NoSettlPartySubIDs_27);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_27);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_28;
          set_field(noSettlPartySubIDs_1_1_1_3_1, FIX::SettlPartySubID{"STRING_800547207"}, SettlPtysSubGrp_NoSettlPartySubIDs_28);
          set_field(noSettlPartySubIDs_1_1_1_3_1, FIX::SettlPartySubIDType{1683532934}, SettlPtysSubGrp_NoSettlPartySubIDs_28);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_28);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::AllocationInstructionAlert::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_29;
          set_field(noSettlPartySubIDs_1_1_1_3_2, FIX::SettlPartySubID{"STRING_357271318"}, SettlPtysSubGrp_NoSettlPartySubIDs_29);
          set_field(noSettlPartySubIDs_1_1_1_3_2, FIX::SettlPartySubIDType{1387479432}, SettlPtysSubGrp_NoSettlPartySubIDs_29);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_29);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_2);
        }
        noDlvyInst_1_1_1.addGroup(noSettlPartyIDs_1_1_2_1);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_1;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_1454086292"}, ExecAllocGrp_NoExecs_1);
    set_field(noExecs_0_0, FIX::FirmTradeID{"STRING_890292333"}, ExecAllocGrp_NoExecs_1);
    set_field(noExecs_0_0, FIX::LastCapacity{'4'}, ExecAllocGrp_NoExecs_1);
    FIX::LastParPx LastParPx_1;
    LastParPx_1.setString("7826267");
set_field(noExecs_0_0, LastParPx_1, ExecAllocGrp_NoExecs_1);
    FIX::LastPx LastPx_1;
    LastPx_1.setString("15484806");
set_field(noExecs_0_0, LastPx_1, ExecAllocGrp_NoExecs_1);
    FIX::LastQty LastQty_1;
    LastQty_1.setString("16619356");
set_field(noExecs_0_0, LastQty_1, ExecAllocGrp_NoExecs_1);
    set_field(noExecs_0_0, FIX::SecondaryExecID{"STRING_156706833"}, ExecAllocGrp_NoExecs_1);
    set_field(noExecs_0_0, FIX::TradeID{"STRING_2095944388"}, ExecAllocGrp_NoExecs_1);
    all_values.push_back(ExecAllocGrp_NoExecs_1);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_2;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_1368531363"}, ExecAllocGrp_NoExecs_2);
    set_field(noExecs_0_1, FIX::FirmTradeID{"STRING_1439488462"}, ExecAllocGrp_NoExecs_2);
    set_field(noExecs_0_1, FIX::LastCapacity{'2'}, ExecAllocGrp_NoExecs_2);
    FIX::LastParPx LastParPx_2;
    LastParPx_2.setString("8577007");
set_field(noExecs_0_1, LastParPx_2, ExecAllocGrp_NoExecs_2);
    FIX::LastPx LastPx_2;
    LastPx_2.setString("13122791");
set_field(noExecs_0_1, LastPx_2, ExecAllocGrp_NoExecs_2);
    FIX::LastQty LastQty_2;
    LastQty_2.setString("5770030");
set_field(noExecs_0_1, LastQty_2, ExecAllocGrp_NoExecs_2);
    set_field(noExecs_0_1, FIX::SecondaryExecID{"STRING_686457989"}, ExecAllocGrp_NoExecs_2);
    set_field(noExecs_0_1, FIX::TradeID{"STRING_441491722"}, ExecAllocGrp_NoExecs_2);
    all_values.push_back(ExecAllocGrp_NoExecs_2);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoExecs noExecs_0_2;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_3;
    set_field(noExecs_0_2, FIX::ExecID{"STRING_1105030157"}, ExecAllocGrp_NoExecs_3);
    set_field(noExecs_0_2, FIX::FirmTradeID{"STRING_1952914364"}, ExecAllocGrp_NoExecs_3);
    set_field(noExecs_0_2, FIX::LastCapacity{'3'}, ExecAllocGrp_NoExecs_3);
    FIX::LastParPx LastParPx_3;
    LastParPx_3.setString("9366695");
set_field(noExecs_0_2, LastParPx_3, ExecAllocGrp_NoExecs_3);
    FIX::LastPx LastPx_3;
    LastPx_3.setString("4066599");
set_field(noExecs_0_2, LastPx_3, ExecAllocGrp_NoExecs_3);
    FIX::LastQty LastQty_3;
    LastQty_3.setString("20098332");
set_field(noExecs_0_2, LastQty_3, ExecAllocGrp_NoExecs_3);
    set_field(noExecs_0_2, FIX::SecondaryExecID{"STRING_295445518"}, ExecAllocGrp_NoExecs_3);
    set_field(noExecs_0_2, FIX::TradeID{"STRING_511071014"}, ExecAllocGrp_NoExecs_3);
    all_values.push_back(ExecAllocGrp_NoExecs_3);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_1;
  set_field(msg, FIX::AgreementCurrency{"EUR"}, FinancingDetails_1);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1311618221"}, FinancingDetails_1);
  set_field(msg, FIX::AgreementDesc{"STRING_44043449"}, FinancingDetails_1);
  set_field(msg, FIX::AgreementID{"STRING_160119645"}, FinancingDetails_1);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_1);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_70222528"}, FinancingDetails_1);
  FIX::MarginRatio MarginRatio_1;
  MarginRatio_1.setString("59.370000");
set_field(msg, MarginRatio_1, FinancingDetails_1);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1441906338"}, FinancingDetails_1);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_1);
  all_values.push_back(FinancingDetails_1);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_3;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_842903358"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{196422649}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_406055839"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{791364098}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1564954012"}, InstrumentLeg_3);
    FIX::LegContractMultiplier LegContractMultiplier_3;
    LegContractMultiplier_3.setString("18455443");
set_field(noLegs_0_0, LegContractMultiplier_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1826028651}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_275171116"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1010339807"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_255548096"}, InstrumentLeg_3);
    FIX::LegCouponRate LegCouponRate_3;
    LegCouponRate_3.setString("91.060000");
set_field(noLegs_0_0, LegCouponRate_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1451831530"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1563867828"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{149764204}, InstrumentLeg_3);
    FIX::LegFactor LegFactor_3;
    LegFactor_3.setString("11737198");
set_field(noLegs_0_0, LegFactor_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1426217395}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_445209722"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1684790820"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1934211558"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_248058050"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_848925393"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1978255007"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_408177695"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1400539399"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_3);
    FIX::LegOptionRatio LegOptionRatio_3;
    LegOptionRatio_3.setString("20223836");
set_field(noLegs_0_0, LegOptionRatio_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_694962089"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_582964530"}, InstrumentLeg_3);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_3;
    LegPriceUnitOfMeasureQty_3.setString("1242489");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegProduct{1537865447}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegPutOrCall{779387180}, InstrumentLeg_3);
    FIX::LegRatioQty LegRatioQty_3;
    LegRatioQty_3.setString("5303048");
set_field(noLegs_0_0, LegRatioQty_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_181745897"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_196857544"}, InstrumentLeg_3);
    FIX::LegRepurchaseRate LegRepurchaseRate_3;
    LegRepurchaseRate_3.setString("54.830000");
set_field(noLegs_0_0, LegRepurchaseRate_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{2007774549}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_472028661"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1238705291"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_115838997"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1433657767"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_543053173"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1476417251"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSide{'5'}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_2106921001"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_3);
    FIX::LegStrikePrice LegStrikePrice_3;
    LegStrikePrice_3.setString("13856547");
set_field(noLegs_0_0, LegStrikePrice_3, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_2071391178"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_764260920"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1172382658"}, InstrumentLeg_3);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_171965580"}, InstrumentLeg_3);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_3;
    LegUnitOfMeasureQty_3.setString("16131863");
set_field(noLegs_0_0, LegUnitOfMeasureQty_3, InstrumentLeg_3);
    all_values.push_back(InstrumentLeg_3);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_4;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_580143275"}, LegSecAltIDGrp_NoLegSecurityAltID_4);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_866242065"}, LegSecAltIDGrp_NoLegSecurityAltID_4);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_4);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_5;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_904147904"}, LegSecAltIDGrp_NoLegSecurityAltID_5);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_455043260"}, LegSecAltIDGrp_NoLegSecurityAltID_5);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_5);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_4;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1561204154"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1487112434}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_579292251"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{951585954}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_119015966"}, InstrumentLeg_4);
    FIX::LegContractMultiplier LegContractMultiplier_4;
    LegContractMultiplier_4.setString("11095970");
set_field(noLegs_0_1, LegContractMultiplier_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1133331851}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_315873511"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1337962565"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_993622752"}, InstrumentLeg_4);
    FIX::LegCouponRate LegCouponRate_4;
    LegCouponRate_4.setString("21.720000");
set_field(noLegs_0_1, LegCouponRate_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_429184208"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegCurrency{"CHF"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_972237381"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{438395353}, InstrumentLeg_4);
    FIX::LegFactor LegFactor_4;
    LegFactor_4.setString("1273102");
set_field(noLegs_0_1, LegFactor_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{931674734}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_2064576809"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1354263980"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_169845834"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1988484339"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_2118524901"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1342228492"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_12966271"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1584227567"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_4);
    FIX::LegOptionRatio LegOptionRatio_4;
    LegOptionRatio_4.setString("5931095");
set_field(noLegs_0_1, LegOptionRatio_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_302985984"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1102046765"}, InstrumentLeg_4);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_4;
    LegPriceUnitOfMeasureQty_4.setString("10481528");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegProduct{1864190138}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegPutOrCall{441675551}, InstrumentLeg_4);
    FIX::LegRatioQty LegRatioQty_4;
    LegRatioQty_4.setString("16274450");
set_field(noLegs_0_1, LegRatioQty_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_668292444"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_560691518"}, InstrumentLeg_4);
    FIX::LegRepurchaseRate LegRepurchaseRate_4;
    LegRepurchaseRate_4.setString("84.920000");
set_field(noLegs_0_1, LegRepurchaseRate_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1801624296}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_876565029"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1927521057"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_647763400"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1664467201"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_209221617"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1757225150"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1181458998"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_4);
    FIX::LegStrikePrice LegStrikePrice_4;
    LegStrikePrice_4.setString("21131337");
set_field(noLegs_0_1, LegStrikePrice_4, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_2112713665"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1072634057"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_135495918"}, InstrumentLeg_4);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1953714356"}, InstrumentLeg_4);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_4;
    LegUnitOfMeasureQty_4.setString("10436753");
set_field(noLegs_0_1, LegUnitOfMeasureQty_4, InstrumentLeg_4);
    all_values.push_back(InstrumentLeg_4);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_6;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1966680627"}, LegSecAltIDGrp_NoLegSecurityAltID_6);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_480419229"}, LegSecAltIDGrp_NoLegSecurityAltID_6);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_6);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_7;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1675623271"}, LegSecAltIDGrp_NoLegSecurityAltID_7);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_412306525"}, LegSecAltIDGrp_NoLegSecurityAltID_7);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_7);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_5;
  FIX::AttachmentPoint AttachmentPoint_5;
  AttachmentPoint_5.setString("52.130000");
set_field(msg, AttachmentPoint_5, Instrument_5);
  set_field(msg, FIX::CFICode{"STRING_630186388"}, Instrument_5);
  set_field(msg, FIX::CPProgram{2}, Instrument_5);
  set_field(msg, FIX::CPRegType{"STRING_500111703"}, Instrument_5);
  FIX::CapPrice CapPrice_5;
  CapPrice_5.setString("10718619");
set_field(msg, CapPrice_5, Instrument_5);
  FIX::ContractMultiplier ContractMultiplier_5;
  ContractMultiplier_5.setString("9404207");
set_field(msg, ContractMultiplier_5, Instrument_5);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_5);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1632553457"}, Instrument_5);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1529979235"}, Instrument_5);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_822544796"}, Instrument_5);
  FIX::CouponRate CouponRate_5;
  CouponRate_5.setString("48.380000");
set_field(msg, CouponRate_5, Instrument_5);
  set_field(msg, FIX::CreditRating{"STRING_1310016644"}, Instrument_5);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1470308196"}, Instrument_5);
  FIX::DetachmentPoint DetachmentPoint_5;
  DetachmentPoint_5.setString("20.390000");
set_field(msg, DetachmentPoint_5, Instrument_5);
  set_field(msg, FIX::EncodedIssuer{"DATA_1519238261"}, Instrument_5);
  set_field(msg, FIX::EncodedIssuerLen{1080049699}, Instrument_5);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1617161883"}, Instrument_5);
  set_field(msg, FIX::EncodedSecurityDescLen{553213611}, Instrument_5);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_5);
  FIX::Factor Factor_5;
  Factor_5.setString("13355319");
set_field(msg, Factor_5, Instrument_5);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_5);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_5);
  FIX::FloorPrice FloorPrice_5;
  FloorPrice_5.setString("2606823");
set_field(msg, FloorPrice_5, Instrument_5);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_5);
  set_field(msg, FIX::InstrRegistry{"STRING_899647280"}, Instrument_5);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_5);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2132084023"}, Instrument_5);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_718844259"}, Instrument_5);
  set_field(msg, FIX::Issuer{"STRING_1784776908"}, Instrument_5);
  set_field(msg, FIX::ListMethod{0}, Instrument_5);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1131150784"}, Instrument_5);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_420698473"}, Instrument_5);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_142926386"}, Instrument_5);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_444126469"}, Instrument_5);
  FIX::MinPriceIncrement MinPriceIncrement_5;
  MinPriceIncrement_5.setString("9208101");
set_field(msg, MinPriceIncrement_5, Instrument_5);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_5;
  MinPriceIncrementAmount_5.setString("12147883");
set_field(msg, MinPriceIncrementAmount_5, Instrument_5);
  set_field(msg, FIX::NTPositionLimit{1384547212}, Instrument_5);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_5;
  NotionalPercentageOutstanding_5.setString("43.240000");
set_field(msg, NotionalPercentageOutstanding_5, Instrument_5);
  set_field(msg, FIX::OptAttribute{'6'}, Instrument_5);
  FIX::OptPayoutAmount OptPayoutAmount_5;
  OptPayoutAmount_5.setString("7670427");
set_field(msg, OptPayoutAmount_5, Instrument_5);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_5);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_5;
  OriginalNotionalPercentageOutstanding_5.setString("29.730000");
set_field(msg, OriginalNotionalPercentageOutstanding_5, Instrument_5);
  set_field(msg, FIX::Pool{"STRING_2077059443"}, Instrument_5);
  set_field(msg, FIX::PositionLimit{87100021}, Instrument_5);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_5);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1448814056"}, Instrument_5);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_5;
  PriceUnitOfMeasureQty_5.setString("11671497");
set_field(msg, PriceUnitOfMeasureQty_5, Instrument_5);
  set_field(msg, FIX::Product{13}, Instrument_5);
  set_field(msg, FIX::ProductComplex{"STRING_2002027667"}, Instrument_5);
  set_field(msg, FIX::PutOrCall{1}, Instrument_5);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1745321560"}, Instrument_5);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_373407714"}, Instrument_5);
  FIX::RepurchaseRate RepurchaseRate_5;
  RepurchaseRate_5.setString("91.990000");
set_field(msg, RepurchaseRate_5, Instrument_5);
  set_field(msg, FIX::RepurchaseTerm{2006003929}, Instrument_5);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_5);
  set_field(msg, FIX::SecurityDesc{"STRING_2140916479"}, Instrument_5);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1162877960"}, Instrument_5);
  set_field(msg, FIX::SecurityGroup{"STRING_1012367702"}, Instrument_5);
  set_field(msg, FIX::SecurityID{"STRING_712277090"}, Instrument_5);
  set_field(msg, FIX::SecurityIDSource{"STRING_3"}, Instrument_5);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_5);
  set_field(msg, FIX::SecuritySubType{"STRING_1843427874"}, Instrument_5);
  set_field(msg, FIX::SecurityType{"STRING_TINT"}, Instrument_5);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_5);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_5);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_2141679870"}, Instrument_5);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1882822411"}, Instrument_5);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_5);
  FIX::StrikeMultiplier StrikeMultiplier_5;
  StrikeMultiplier_5.setString("4351968");
set_field(msg, StrikeMultiplier_5, Instrument_5);
  FIX::StrikePrice StrikePrice_5;
  StrikePrice_5.setString("1441770");
set_field(msg, StrikePrice_5, Instrument_5);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_5);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_5;
  StrikePriceBoundaryPrecision_5.setString("98.720000");
set_field(msg, StrikePriceBoundaryPrecision_5, Instrument_5);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_5);
  FIX::StrikeValue StrikeValue_5;
  StrikeValue_5.setString("7873023");
set_field(msg, StrikeValue_5, Instrument_5);
  set_field(msg, FIX::Symbol{"STRING_289317589"}, Instrument_5);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_5);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_5);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_5);
  set_field(msg, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_5);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_5;
  UnitOfMeasureQty_5.setString("21023047");
set_field(msg, UnitOfMeasureQty_5, Instrument_5);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_5);
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
    ComplexEventPrice_10.setString("1554653");
set_field(noComplexEvents_0_0, ComplexEventPrice_10, ComplexEvents_NoComplexEvents_10);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_10);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_10;
    ComplexEventPriceBoundaryPrecision_10.setString("31.210000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_10, ComplexEvents_NoComplexEvents_10);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_10);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_10);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_10;
    ComplexOptPayoutAmount_10.setString("19018002");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_10, ComplexEvents_NoComplexEvents_10);
    all_values.push_back(ComplexEvents_NoComplexEvents_10);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_21;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 10, 21, 5, 9, 2003)}, ComplexEventDates_NoComplexEventDates_21);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 23, 51, 17, 4, 2004)}, ComplexEventDates_NoComplexEventDates_21);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_21);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_54;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 9, 46)}, ComplexEventTimes_NoComplexEventTimes_54);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 48, 29)}, ComplexEventTimes_NoComplexEventTimes_54);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_54);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_55;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 22, 43)}, ComplexEventTimes_NoComplexEventTimes_55);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 46, 24)}, ComplexEventTimes_NoComplexEventTimes_55);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_55);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_22;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 34, 35, 17, 11, 2008)}, ComplexEventDates_NoComplexEventDates_22);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 43, 44, 10, 12, 2005)}, ComplexEventDates_NoComplexEventDates_22);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_22);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationInstructionAlert::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_56;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 49, 5)}, ComplexEventTimes_NoComplexEventTimes_56);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 45, 54)}, ComplexEventTimes_NoComplexEventTimes_56);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_56);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_12;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_264613329"}, EvntGrp_NoEvents_12);
    FIX::EventPx EventPx_12;
    EventPx_12.setString("11739489");
set_field(noEvents_0_0, EventPx_12, EvntGrp_NoEvents_12);
    set_field(noEvents_0_0, FIX::EventText{"STRING_360390015"}, EvntGrp_NoEvents_12);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(23, 2, 0, 4, 3, 2008)}, EvntGrp_NoEvents_12);
    set_field(noEvents_0_0, FIX::EventType{4}, EvntGrp_NoEvents_12);
    all_values.push_back(EvntGrp_NoEvents_12);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_13;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1647568907"}, EvntGrp_NoEvents_13);
    FIX::EventPx EventPx_13;
    EventPx_13.setString("5862132");
set_field(noEvents_0_1, EventPx_13, EvntGrp_NoEvents_13);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1706608543"}, EvntGrp_NoEvents_13);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(1, 19, 17, 23, 11, 2014)}, EvntGrp_NoEvents_13);
    set_field(noEvents_0_1, FIX::EventType{11}, EvntGrp_NoEvents_13);
    all_values.push_back(EvntGrp_NoEvents_13);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_9;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1696024417"}, InstrumentParties_NoInstrumentParties_9);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_9);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{428736639}, InstrumentParties_NoInstrumentParties_9);
    all_values.push_back(InstrumentParties_NoInstrumentParties_9);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1414927589"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1191428304}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_2012959437"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1313353441}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1456041633"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1039424706}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_10;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1673743456"}, InstrumentParties_NoInstrumentParties_10);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_10);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1880487161}, InstrumentParties_NoInstrumentParties_10);
    all_values.push_back(InstrumentParties_NoInstrumentParties_10);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_122126934"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{261973581}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_346142808"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1834014081}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_11;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1167679425"}, InstrumentParties_NoInstrumentParties_11);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_11);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{272743649}, InstrumentParties_NoInstrumentParties_11);
    all_values.push_back(InstrumentParties_NoInstrumentParties_11);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1865619368"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{855306666}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_1946195739"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{1220992217}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_24);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25;
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubID{"STRING_1108961937"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25);
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubIDType{739456433}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationInstructionAlert::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_12;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1495754308"}, SecAltIDGrp_NoSecurityAltID_12);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1899441335"}, SecAltIDGrp_NoSecurityAltID_12);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_12);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_13;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_941250336"}, SecAltIDGrp_NoSecurityAltID_13);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_137213439"}, SecAltIDGrp_NoSecurityAltID_13);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_13);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_10;
  set_field(msg, FIX::SecurityXML{"XMLDATA_180694326"}, SecurityXML_10);
  set_field(msg, FIX::SecurityXMLLen{1951688018}, SecurityXML_10);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1552141028"}, SecurityXML_10);
  all_values.push_back(SecurityXML_10);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_1;
  set_field(msg, FIX::DeliveryForm{1}, InstrumentExtension_1);
  FIX::PctAtRisk PctAtRisk_1;
  PctAtRisk_1.setString("38.070000");
set_field(msg, PctAtRisk_1, InstrumentExtension_1);
  all_values.push_back(InstrumentExtension_1);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_1;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{27}, AttrbGrp_NoInstrAttrib_1);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_709104865"}, AttrbGrp_NoInstrAttrib_1);
    all_values.push_back(AttrbGrp_NoInstrAttrib_1);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_2;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{11}, AttrbGrp_NoInstrAttrib_2);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_1074116938"}, AttrbGrp_NoInstrAttrib_2);
    all_values.push_back(AttrbGrp_NoInstrAttrib_2);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_2;
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_347201180"}, OrdAllocGrp_NoOrders_2);
    set_field(noOrders_0_0, FIX::ListID{"STRING_1196243872"}, OrdAllocGrp_NoOrders_2);
    FIX::OrderAvgPx OrderAvgPx_2;
    OrderAvgPx_2.setString("7040819");
set_field(noOrders_0_0, OrderAvgPx_2, OrdAllocGrp_NoOrders_2);
    FIX::OrderBookingQty OrderBookingQty_2;
    OrderBookingQty_2.setString("6933439");
set_field(noOrders_0_0, OrderBookingQty_2, OrdAllocGrp_NoOrders_2);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_882774305"}, OrdAllocGrp_NoOrders_2);
    FIX::OrderQty OrderQty_2;
    OrderQty_2.setString("18717613");
set_field(noOrders_0_0, OrderQty_2, OrdAllocGrp_NoOrders_2);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_539572056"}, OrdAllocGrp_NoOrders_2);
    set_field(noOrders_0_0, FIX::SecondaryOrderID{"STRING_1155517955"}, OrdAllocGrp_NoOrders_2);
    all_values.push_back(OrdAllocGrp_NoOrders_2);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_3;
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyID{"STRING_257707776"}, NestedParties2_NoNested2PartyIDs_3);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_3);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyRole{249794149}, NestedParties2_NoNested2PartyIDs_3);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_3);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_6;
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubID{"STRING_972302911"}, NstdPtys2SubGrp_NoNested2PartySubIDs_6);
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubIDType{989250582}, NstdPtys2SubGrp_NoNested2PartySubIDs_6);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_6);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_7;
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubID{"STRING_723925912"}, NstdPtys2SubGrp_NoNested2PartySubIDs_7);
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubIDType{320573571}, NstdPtys2SubGrp_NoNested2PartySubIDs_7);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_7);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_8;
        set_field(noNested2PartySubIDs_0_0_2_2, FIX::Nested2PartySubID{"STRING_741208269"}, NstdPtys2SubGrp_NoNested2PartySubIDs_8);
        set_field(noNested2PartySubIDs_0_0_2_2, FIX::Nested2PartySubIDType{1665176248}, NstdPtys2SubGrp_NoNested2PartySubIDs_8);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_8);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_4;
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyID{"STRING_457787010"}, NestedParties2_NoNested2PartyIDs_4);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyIDSource{'9'}, NestedParties2_NoNested2PartyIDs_4);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyRole{1469380619}, NestedParties2_NoNested2PartyIDs_4);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_4);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_9;
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubID{"STRING_146541578"}, NstdPtys2SubGrp_NoNested2PartySubIDs_9);
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubIDType{1139060778}, NstdPtys2SubGrp_NoNested2PartySubIDs_9);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_9);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_5;
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyID{"STRING_580455212"}, NestedParties2_NoNested2PartyIDs_5);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_5);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyRole{1848165644}, NestedParties2_NoNested2PartyIDs_5);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_5);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_10;
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubID{"STRING_1901339132"}, NstdPtys2SubGrp_NoNested2PartySubIDs_10);
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubIDType{142790374}, NstdPtys2SubGrp_NoNested2PartySubIDs_10);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_10);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_3;
    set_field(noOrders_0_1, FIX::ClOrdID{"STRING_1171927023"}, OrdAllocGrp_NoOrders_3);
    set_field(noOrders_0_1, FIX::ListID{"STRING_950099356"}, OrdAllocGrp_NoOrders_3);
    FIX::OrderAvgPx OrderAvgPx_3;
    OrderAvgPx_3.setString("8468723");
set_field(noOrders_0_1, OrderAvgPx_3, OrdAllocGrp_NoOrders_3);
    FIX::OrderBookingQty OrderBookingQty_3;
    OrderBookingQty_3.setString("18652710");
set_field(noOrders_0_1, OrderBookingQty_3, OrdAllocGrp_NoOrders_3);
    set_field(noOrders_0_1, FIX::OrderID{"STRING_1832873662"}, OrdAllocGrp_NoOrders_3);
    FIX::OrderQty OrderQty_3;
    OrderQty_3.setString("5711500");
set_field(noOrders_0_1, OrderQty_3, OrdAllocGrp_NoOrders_3);
    set_field(noOrders_0_1, FIX::SecondaryClOrdID{"STRING_257359420"}, OrdAllocGrp_NoOrders_3);
    set_field(noOrders_0_1, FIX::SecondaryOrderID{"STRING_840907969"}, OrdAllocGrp_NoOrders_3);
    all_values.push_back(OrdAllocGrp_NoOrders_3);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_6;
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyID{"STRING_515067197"}, NestedParties2_NoNested2PartyIDs_6);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyIDSource{'7'}, NestedParties2_NoNested2PartyIDs_6);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyRole{1272026278}, NestedParties2_NoNested2PartyIDs_6);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_6);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_11;
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubID{"STRING_1676551853"}, NstdPtys2SubGrp_NoNested2PartySubIDs_11);
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubIDType{113793212}, NstdPtys2SubGrp_NoNested2PartySubIDs_11);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_11);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_12;
        set_field(noNested2PartySubIDs_1_0_2_1, FIX::Nested2PartySubID{"STRING_570209455"}, NstdPtys2SubGrp_NoNested2PartySubIDs_12);
        set_field(noNested2PartySubIDs_1_0_2_1, FIX::Nested2PartySubIDType{1997125424}, NstdPtys2SubGrp_NoNested2PartySubIDs_12);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_12);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    msg.addGroup(noOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstructionAlert::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_7;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_87902055"}, Parties_NoPartyIDs_7);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_7);
    set_field(noPartyIDs_0_0, FIX::PartyRole{83}, Parties_NoPartyIDs_7);
    all_values.push_back(Parties_NoPartyIDs_7);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_17;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_169873178"}, PtysSubGrp_NoPartySubIDs_17);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_17);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_17);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_18;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_548859805"}, PtysSubGrp_NoPartySubIDs_18);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_18);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_18);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_19;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_603184201"}, PtysSubGrp_NoPartySubIDs_19);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_19);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_19);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationInstructionAlert::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_3;
    FIX::PosAmt PosAmt_3;
    PosAmt_3.setString("3570396");
set_field(noPosAmt_0_0, PosAmt_3, PositionAmountData_NoPosAmt_3);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_COLAT"}, PositionAmountData_NoPosAmt_3);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_599497608"}, PositionAmountData_NoPosAmt_3);
    all_values.push_back(PositionAmountData_NoPosAmt_3);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_4;
    FIX::PosAmt PosAmt_4;
    PosAmt_4.setString("13071390");
set_field(noPosAmt_0_1, PosAmt_4, PositionAmountData_NoPosAmt_4);
    set_field(noPosAmt_0_1, FIX::PosAmtType{"STRING_CASH"}, PositionAmountData_NoPosAmt_4);
    set_field(noPosAmt_0_1, FIX::PositionCurrency{"STRING_317284972"}, PositionAmountData_NoPosAmt_4);
    all_values.push_back(PositionAmountData_NoPosAmt_4);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_5;
    FIX::PosAmt PosAmt_5;
    PosAmt_5.setString("9925290");
set_field(noPosAmt_0_2, PosAmt_5, PositionAmountData_NoPosAmt_5);
    set_field(noPosAmt_0_2, FIX::PosAmtType{"STRING_ICPN"}, PositionAmountData_NoPosAmt_5);
    set_field(noPosAmt_0_2, FIX::PositionCurrency{"STRING_574644392"}, PositionAmountData_NoPosAmt_5);
    all_values.push_back(PositionAmountData_NoPosAmt_5);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_1;
  set_field(msg, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_1);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_EUREPO"}, SpreadOrBenchmarkCurveData_1);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_390202319"}, SpreadOrBenchmarkCurveData_1);
  FIX::BenchmarkPrice BenchmarkPrice_1;
  BenchmarkPrice_1.setString("19571293");
set_field(msg, BenchmarkPrice_1, SpreadOrBenchmarkCurveData_1);
  set_field(msg, FIX::BenchmarkPriceType{935995132}, SpreadOrBenchmarkCurveData_1);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_2066754173"}, SpreadOrBenchmarkCurveData_1);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_2070922553"}, SpreadOrBenchmarkCurveData_1);
  FIX::Spread Spread_1;
  Spread_1.setString("15062045");
set_field(msg, Spread_1, SpreadOrBenchmarkCurveData_1);
  all_values.push_back(SpreadOrBenchmarkCurveData_1);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationInstructionAlert::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_1;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_TRADERCREDIT"}, Stipulations_NoStipulations_1);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1594106642"}, Stipulations_NoStipulations_1);
    all_values.push_back(Stipulations_NoStipulations_1);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_2;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_WHOLE"}, Stipulations_NoStipulations_2);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_407860816"}, Stipulations_NoStipulations_2);
    all_values.push_back(Stipulations_NoStipulations_2);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_3;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_YTM"}, Stipulations_NoStipulations_3);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_246214266"}, Stipulations_NoStipulations_3);
    all_values.push_back(Stipulations_NoStipulations_3);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_4;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1552765474"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{996542657}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_787007025"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1802307275}, UnderlyingInstrument_4);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_4;
    UnderlyingAdjustedQuantity_4.setString("4241132");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_4, UnderlyingInstrument_4);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_4;
    UnderlyingAllocationPercent_4.setString("67.110000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_4, UnderlyingInstrument_4);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_4;
    UnderlyingAttachmentPoint_4.setString("58.020000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1023610850"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_303702105"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1286360312"}, UnderlyingInstrument_4);
    FIX::UnderlyingCapValue UnderlyingCapValue_4;
    UnderlyingCapValue_4.setString("13408958");
set_field(noUnderlyings_0_0, UnderlyingCapValue_4, UnderlyingInstrument_4);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_4;
    UnderlyingCashAmount_4.setString("12962311");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_4);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_4;
    UnderlyingContractMultiplier_4.setString("19155402");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{982184538}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1634334308"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_857768156"}, UnderlyingInstrument_4);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_4;
    UnderlyingCouponRate_4.setString("68.570000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1443980001"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_4);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_4;
    UnderlyingCurrentValue_4.setString("13674189");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_4, UnderlyingInstrument_4);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_4;
    UnderlyingDetachmentPoint_4.setString("42.270000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_4, UnderlyingInstrument_4);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_4;
    UnderlyingDirtyPrice_4.setString("10605696");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_4, UnderlyingInstrument_4);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_4;
    UnderlyingEndPrice_4.setString("21458592");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_4, UnderlyingInstrument_4);
    FIX::UnderlyingEndValue UnderlyingEndValue_4;
    UnderlyingEndValue_4.setString("5991072");
set_field(noUnderlyings_0_0, UnderlyingEndValue_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1136910772}, UnderlyingInstrument_4);
    FIX::UnderlyingFXRate UnderlyingFXRate_4;
    UnderlyingFXRate_4.setString("4062364");
set_field(noUnderlyings_0_0, UnderlyingFXRate_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_4);
    FIX::UnderlyingFactor UnderlyingFactor_4;
    UnderlyingFactor_4.setString("13831250");
set_field(noUnderlyings_0_0, UnderlyingFactor_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{590059285}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1008294716"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_232184048"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1377066311"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_663118343"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_656297290"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_373629374"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_710274146"}, UnderlyingInstrument_4);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_4;
    UnderlyingNotionalPercentageOutstanding_4.setString("81.400000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'6'}, UnderlyingInstrument_4);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_4;
    UnderlyingOriginalNotionalPercentageOutstanding_4.setString("44.580000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_873320314"}, UnderlyingInstrument_4);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_4;
    UnderlyingPriceUnitOfMeasureQty_4.setString("19735626");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{798382056}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{641376880}, UnderlyingInstrument_4);
    FIX::UnderlyingPx UnderlyingPx_4;
    UnderlyingPx_4.setString("8082635");
set_field(noUnderlyings_0_0, UnderlyingPx_4, UnderlyingInstrument_4);
    FIX::UnderlyingQty UnderlyingQty_4;
    UnderlyingQty_4.setString("2852327");
set_field(noUnderlyings_0_0, UnderlyingQty_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1499145036"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_33166739"}, UnderlyingInstrument_4);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_4;
    UnderlyingRepurchaseRate_4.setString("27.180000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1145424676}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1324824122"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_949147976"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_150425255"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_237910158"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_947523621"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_749532477"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1374820930"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1353760082"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_205061719"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_4);
    FIX::UnderlyingStartValue UnderlyingStartValue_4;
    UnderlyingStartValue_4.setString("19438193");
set_field(noUnderlyings_0_0, UnderlyingStartValue_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1213356436"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_4);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_4;
    UnderlyingStrikePrice_4.setString("18764747");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_4, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1498943659"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1547031405"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_439265277"}, UnderlyingInstrument_4);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1031368151"}, UnderlyingInstrument_4);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_4;
    UnderlyingUnitOfMeasureQty_4.setString("768792");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_4, UnderlyingInstrument_4);
    all_values.push_back(UnderlyingInstrument_4);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_9;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1904688465"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_9);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2050441876"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_9);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_9);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_7;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_398581698"}, UnderlyingStipulations_NoUnderlyingStips_7);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_711221758"}, UnderlyingStipulations_NoUnderlyingStips_7);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_7);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_10;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1897726734"}, UndlyInstrumentParties_NoUndlyInstrumentParties_10);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_10);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{953759931}, UndlyInstrumentParties_NoUndlyInstrumentParties_10);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_10);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2069212619"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1902907907}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_19);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_11;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1046093018"}, UndlyInstrumentParties_NoUndlyInstrumentParties_11);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_11);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{702947880}, UndlyInstrumentParties_NoUndlyInstrumentParties_11);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_11);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1534460060"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{2056707963}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_20);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2000687215"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{2144922381}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1853043683"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1066560003}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAlert::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_5;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_840085103"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{878962066}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_795551134"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{191545114}, UnderlyingInstrument_5);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_5;
    UnderlyingAdjustedQuantity_5.setString("2785098");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_5, UnderlyingInstrument_5);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_5;
    UnderlyingAllocationPercent_5.setString("64.120000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_5, UnderlyingInstrument_5);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_5;
    UnderlyingAttachmentPoint_5.setString("32.660000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_355389059"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1523232500"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_980118083"}, UnderlyingInstrument_5);
    FIX::UnderlyingCapValue UnderlyingCapValue_5;
    UnderlyingCapValue_5.setString("2583472");
set_field(noUnderlyings_0_1, UnderlyingCapValue_5, UnderlyingInstrument_5);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_5;
    UnderlyingCashAmount_5.setString("4625469");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_5);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_5;
    UnderlyingContractMultiplier_5.setString("9695690");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1834577858}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1128942868"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1713957542"}, UnderlyingInstrument_5);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_5;
    UnderlyingCouponRate_5.setString("41.410000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_2024610631"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_5);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_5;
    UnderlyingCurrentValue_5.setString("9232200");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_5, UnderlyingInstrument_5);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_5;
    UnderlyingDetachmentPoint_5.setString("56.430000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_5, UnderlyingInstrument_5);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_5;
    UnderlyingDirtyPrice_5.setString("10992262");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_5, UnderlyingInstrument_5);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_5;
    UnderlyingEndPrice_5.setString("5713618");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_5, UnderlyingInstrument_5);
    FIX::UnderlyingEndValue UnderlyingEndValue_5;
    UnderlyingEndValue_5.setString("11823020");
set_field(noUnderlyings_0_1, UnderlyingEndValue_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1008450596}, UnderlyingInstrument_5);
    FIX::UnderlyingFXRate UnderlyingFXRate_5;
    UnderlyingFXRate_5.setString("4245654");
set_field(noUnderlyings_0_1, UnderlyingFXRate_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_5);
    FIX::UnderlyingFactor UnderlyingFactor_5;
    UnderlyingFactor_5.setString("7140106");
set_field(noUnderlyings_0_1, UnderlyingFactor_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1491125419}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_2019825892"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1592972697"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_139192905"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_63887358"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1871482520"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1374009317"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1286800624"}, UnderlyingInstrument_5);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_5;
    UnderlyingNotionalPercentageOutstanding_5.setString("79.310000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_5);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_5;
    UnderlyingOriginalNotionalPercentageOutstanding_5.setString("50.600000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_337735218"}, UnderlyingInstrument_5);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_5;
    UnderlyingPriceUnitOfMeasureQty_5.setString("12123051");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1498134841}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1307304263}, UnderlyingInstrument_5);
    FIX::UnderlyingPx UnderlyingPx_5;
    UnderlyingPx_5.setString("8993993");
set_field(noUnderlyings_0_1, UnderlyingPx_5, UnderlyingInstrument_5);
    FIX::UnderlyingQty UnderlyingQty_5;
    UnderlyingQty_5.setString("4795940");
set_field(noUnderlyings_0_1, UnderlyingQty_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_873778158"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1540253517"}, UnderlyingInstrument_5);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_5;
    UnderlyingRepurchaseRate_5.setString("10.440000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{361981024}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1936531918"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1279941046"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_9823019"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_888274552"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1851302895"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1192125075"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1896725148"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_128384663"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_224382216"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_5);
    FIX::UnderlyingStartValue UnderlyingStartValue_5;
    UnderlyingStartValue_5.setString("16195100");
set_field(noUnderlyings_0_1, UnderlyingStartValue_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_96724460"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_5);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_5;
    UnderlyingStrikePrice_5.setString("1606118");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_5, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1780223702"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_985228657"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1447412443"}, UnderlyingInstrument_5);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1859611633"}, UnderlyingInstrument_5);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_5;
    UnderlyingUnitOfMeasureQty_5.setString("17349868");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_5, UnderlyingInstrument_5);
    all_values.push_back(UnderlyingInstrument_5);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_10;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_49863204"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_10);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_799808344"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_10);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_10);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_8;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1357167467"}, UnderlyingStipulations_NoUnderlyingStips_8);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1699207720"}, UnderlyingStipulations_NoUnderlyingStips_8);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_8);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_9;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1397092758"}, UnderlyingStipulations_NoUnderlyingStips_9);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_83461977"}, UnderlyingStipulations_NoUnderlyingStips_9);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_9);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_10;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_1091977590"}, UnderlyingStipulations_NoUnderlyingStips_10);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1753813802"}, UnderlyingStipulations_NoUnderlyingStips_10);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_10);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_12;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_881025860"}, UndlyInstrumentParties_NoUndlyInstrumentParties_12);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_12);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{455266021}, UndlyInstrumentParties_NoUndlyInstrumentParties_12);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_12);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_590090447"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1647391096}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_13;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1518541913"}, UndlyInstrumentParties_NoUndlyInstrumentParties_13);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_13);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1871773312}, UndlyInstrumentParties_NoUndlyInstrumentParties_13);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_13);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_190501544"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1968497772}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
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
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1890535226"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1949204532}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_2129109590"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{1523275280}, UnderlyingInstrument_6);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_6;
    UnderlyingAdjustedQuantity_6.setString("7869495");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_6, UnderlyingInstrument_6);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_6;
    UnderlyingAllocationPercent_6.setString("83.850000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_6, UnderlyingInstrument_6);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_6;
    UnderlyingAttachmentPoint_6.setString("32.660000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_374452719"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_848402240"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1285266470"}, UnderlyingInstrument_6);
    FIX::UnderlyingCapValue UnderlyingCapValue_6;
    UnderlyingCapValue_6.setString("11742610");
set_field(noUnderlyings_0_2, UnderlyingCapValue_6, UnderlyingInstrument_6);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_6;
    UnderlyingCashAmount_6.setString("17659009");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_6);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_6;
    UnderlyingContractMultiplier_6.setString("7259851");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1015510047}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_578412267"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1817962726"}, UnderlyingInstrument_6);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_6;
    UnderlyingCouponRate_6.setString("2.010000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1023855268"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_6);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_6;
    UnderlyingCurrentValue_6.setString("14791212");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_6, UnderlyingInstrument_6);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_6;
    UnderlyingDetachmentPoint_6.setString("17.030000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_6, UnderlyingInstrument_6);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_6;
    UnderlyingDirtyPrice_6.setString("20982018");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_6, UnderlyingInstrument_6);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_6;
    UnderlyingEndPrice_6.setString("9790287");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_6, UnderlyingInstrument_6);
    FIX::UnderlyingEndValue UnderlyingEndValue_6;
    UnderlyingEndValue_6.setString("16918636");
set_field(noUnderlyings_0_2, UnderlyingEndValue_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{669193312}, UnderlyingInstrument_6);
    FIX::UnderlyingFXRate UnderlyingFXRate_6;
    UnderlyingFXRate_6.setString("7033184");
set_field(noUnderlyings_0_2, UnderlyingFXRate_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_6);
    FIX::UnderlyingFactor UnderlyingFactor_6;
    UnderlyingFactor_6.setString("8596948");
set_field(noUnderlyings_0_2, UnderlyingFactor_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{524332525}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1269225592"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_661415740"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_505958468"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_645017224"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1448365281"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1934996853"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1880420490"}, UnderlyingInstrument_6);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_6;
    UnderlyingNotionalPercentageOutstanding_6.setString("80.010000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'6'}, UnderlyingInstrument_6);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_6;
    UnderlyingOriginalNotionalPercentageOutstanding_6.setString("33.120000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_849595417"}, UnderlyingInstrument_6);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_6;
    UnderlyingPriceUnitOfMeasureQty_6.setString("2543327");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{1513153602}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1575580553}, UnderlyingInstrument_6);
    FIX::UnderlyingPx UnderlyingPx_6;
    UnderlyingPx_6.setString("12698427");
set_field(noUnderlyings_0_2, UnderlyingPx_6, UnderlyingInstrument_6);
    FIX::UnderlyingQty UnderlyingQty_6;
    UnderlyingQty_6.setString("20915658");
set_field(noUnderlyings_0_2, UnderlyingQty_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1246059632"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1891682983"}, UnderlyingInstrument_6);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_6;
    UnderlyingRepurchaseRate_6.setString("74.890000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1797564571}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_1252310737"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_299575131"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1970886274"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1203028939"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1278603868"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1515266243"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1872222251"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1981922270"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_893956608"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_6);
    FIX::UnderlyingStartValue UnderlyingStartValue_6;
    UnderlyingStartValue_6.setString("3587711");
set_field(noUnderlyings_0_2, UnderlyingStartValue_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_15698552"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_6);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_6;
    UnderlyingStrikePrice_6.setString("6607157");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_6, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_546730833"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_652242821"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_393652619"}, UnderlyingInstrument_6);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_222065186"}, UnderlyingInstrument_6);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_6;
    UnderlyingUnitOfMeasureQty_6.setString("12881582");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_6, UnderlyingInstrument_6);
    all_values.push_back(UnderlyingInstrument_6);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_11;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1071660603"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_11);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1542491002"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_11);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_11);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_11;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_499757509"}, UnderlyingStipulations_NoUnderlyingStips_11);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_664850136"}, UnderlyingStipulations_NoUnderlyingStips_11);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_11);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_12;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_721608107"}, UnderlyingStipulations_NoUnderlyingStips_12);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_1745817141"}, UnderlyingStipulations_NoUnderlyingStips_12);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_12);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_14;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1689545596"}, UndlyInstrumentParties_NoUndlyInstrumentParties_14);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_14);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1661360209}, UndlyInstrumentParties_NoUndlyInstrumentParties_14);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_14);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1219300690"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{716905500}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1120240948"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{587083285}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_15;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_441644103"}, UndlyInstrumentParties_NoUndlyInstrumentParties_15);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_15);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{1481039894}, UndlyInstrumentParties_NoUndlyInstrumentParties_15);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_15);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1313450717"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1496738446}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_16;
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_124443114"}, UndlyInstrumentParties_NoUndlyInstrumentParties_16);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_16);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyRole{9970575}, UndlyInstrumentParties_NoUndlyInstrumentParties_16);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_16);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_682939506"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{403623195}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAlert::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_893239134"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1971097773}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_1;
  FIX::Yield Yield_1;
  Yield_1.setString("91.270000");
set_field(msg, Yield_1, YieldData_1);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1964899738"}, YieldData_1);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1366105127"}, YieldData_1);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_1;
  YieldRedemptionPrice_1.setString("4455213");
set_field(msg, YieldRedemptionPrice_1, YieldData_1);
  set_field(msg, FIX::YieldRedemptionPriceType{317173599}, YieldData_1);
  set_field(msg, FIX::YieldType{"STRING_GROSS"}, YieldData_1);
  all_values.push_back(YieldData_1);
  all_compo_names.insert(".");

  // header
  multiset<string> header_4;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_4);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_2062990740"}, header_4);
  set_header_field(msg.getHeader(), FIX::BodyLength{292521086}, header_4);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_709191420"}, header_4);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1311405156"}, header_4);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1953881295"}, header_4);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_550828500"}, header_4);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{383222198}, header_4);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_4);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1671069448}, header_4);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_970305484"}, header_4);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_964947250"}, header_4);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_478265370"}, header_4);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(5, 47, 56, 27, 1, 2000)}, header_4);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_4);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_4);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_66710299"}, header_4);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1532397362}, header_4);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_181482755"}, header_4);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1882189426"}, header_4);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1349813452"}, header_4);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(7, 31, 37, 3, 12, 2016)}, header_4);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_2056548035"}, header_4);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_746415651"}, header_4);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1529978231"}, header_4);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_459892887"}, header_4);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1129637849}, header_4);
  all_values.push_back(header_4);
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
