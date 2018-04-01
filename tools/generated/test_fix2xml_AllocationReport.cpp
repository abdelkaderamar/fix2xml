#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::AllocationReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReport_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_2;
  AccruedInterestAmt_2.setString("5766781");
set_field(msg, AccruedInterestAmt_2, AllocationReport_0);
  FIX::AccruedInterestRate AccruedInterestRate_2;
  AccruedInterestRate_2.setString("37.820000");
set_field(msg, AccruedInterestRate_2, AllocationReport_0);
  set_field(msg, FIX::AllocCancReplaceReason{2}, AllocationReport_0);
  set_field(msg, FIX::AllocID{"STRING_1984800298"}, AllocationReport_0);
  set_field(msg, FIX::AllocIntermedReqType{1}, AllocationReport_0);
  set_field(msg, FIX::AllocLinkID{"STRING_667883731"}, AllocationReport_0);
  set_field(msg, FIX::AllocLinkType{1}, AllocationReport_0);
  set_field(msg, FIX::AllocNoOrdersType{1}, AllocationReport_0);
  set_field(msg, FIX::AllocRejCode{8}, AllocationReport_0);
  set_field(msg, FIX::AllocReportID{"STRING_262014230"}, AllocationReport_0);
  set_field(msg, FIX::AllocReportRefID{"STRING_315238518"}, AllocationReport_0);
  set_field(msg, FIX::AllocReportType{11}, AllocationReport_0);
  set_field(msg, FIX::AllocStatus{3}, AllocationReport_0);
  set_field(msg, FIX::AllocTransType{'6'}, AllocationReport_0);
  set_field(msg, FIX::AutoAcceptIndicator{true}, AllocationReport_0);
  FIX::AvgParPx AvgParPx_2;
  AvgParPx_2.setString("2828267");
set_field(msg, AvgParPx_2, AllocationReport_0);
  FIX::AvgPx AvgPx_2;
  AvgPx_2.setString("2266443");
set_field(msg, AvgPx_2, AllocationReport_0);
  set_field(msg, FIX::AvgPxIndicator{1}, AllocationReport_0);
  set_field(msg, FIX::AvgPxPrecision{1713782976}, AllocationReport_0);
  set_field(msg, FIX::BookingRefID{"STRING_1752939081"}, AllocationReport_0);
  set_field(msg, FIX::BookingType{0}, AllocationReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_940545721"}, AllocationReport_0);
  FIX::Concession Concession_2;
  Concession_2.setString("19026970");
set_field(msg, Concession_2, AllocationReport_0);
  set_field(msg, FIX::Currency{"GBP"}, AllocationReport_0);
  set_field(msg, FIX::CustOrderCapacity{2}, AllocationReport_0);
  set_field(msg, FIX::EncodedText{"DATA_759519432"}, AllocationReport_0);
  set_field(msg, FIX::EncodedTextLen{1063637194}, AllocationReport_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_2;
  EndAccruedInterestAmt_2.setString("228565");
set_field(msg, EndAccruedInterestAmt_2, AllocationReport_0);
  FIX::EndCash EndCash_2;
  EndCash_2.setString("11795223");
set_field(msg, EndCash_2, AllocationReport_0);
  FIX::GrossTradeAmt GrossTradeAmt_2;
  GrossTradeAmt_2.setString("17135604");
set_field(msg, GrossTradeAmt_2, AllocationReport_0);
  FIX::InterestAtMaturity InterestAtMaturity_2;
  InterestAtMaturity_2.setString("5995347");
set_field(msg, InterestAtMaturity_2, AllocationReport_0);
  set_field(msg, FIX::LastFragment{false}, AllocationReport_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_1597551516"}, AllocationReport_0);
  set_field(msg, FIX::LegalConfirm{false}, AllocationReport_0);
  set_field(msg, FIX::MatchType{"STRING_S4"}, AllocationReport_0);
  set_field(msg, FIX::MessageEventSource{"STRING_117951599"}, AllocationReport_0);
  set_field(msg, FIX::MultiLegReportingType{'2'}, AllocationReport_0);
  FIX::NetMoney NetMoney_2;
  NetMoney_2.setString("17031932");
set_field(msg, NetMoney_2, AllocationReport_0);
  set_field(msg, FIX::NumDaysInterest{1605222173}, AllocationReport_0);
  set_field(msg, FIX::PositionEffect{'F'}, AllocationReport_0);
  set_field(msg, FIX::PreviouslyReported{false}, AllocationReport_0);
  set_field(msg, FIX::PriceType{3}, AllocationReport_0);
  set_field(msg, FIX::QtyType{2}, AllocationReport_0);
  FIX::Quantity Quantity_3;
  Quantity_3.setString("6051140");
set_field(msg, Quantity_3, AllocationReport_0);
  set_field(msg, FIX::RefAllocID{"STRING_1000720638"}, AllocationReport_0);
  set_field(msg, FIX::ReversalIndicator{false}, AllocationReport_0);
  FIX::RndPx RndPx_2;
  RndPx_2.setString("8317583");
set_field(msg, RndPx_2, AllocationReport_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_2078997319"}, AllocationReport_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1576737594"}, AllocationReport_0);
  set_field(msg, FIX::SettlType{"STRING_7"}, AllocationReport_0);
  set_field(msg, FIX::Side{'G'}, AllocationReport_0);
  FIX::StartCash StartCash_2;
  StartCash_2.setString("3697996");
set_field(msg, StartCash_2, AllocationReport_0);
  set_field(msg, FIX::Text{"STRING_192427248"}, AllocationReport_0);
  set_field(msg, FIX::TotNoAllocs{942736507}, AllocationReport_0);
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_2;
  TotalAccruedInterestAmt_2.setString("6951347");
set_field(msg, TotalAccruedInterestAmt_2, AllocationReport_0);
  FIX::TotalTakedown TotalTakedown_2;
  TotalTakedown_2.setString("3155063");
set_field(msg, TotalTakedown_2, AllocationReport_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1702255939"}, AllocationReport_0);
  set_field(msg, FIX::TradeInputDevice{"STRING_1758771978"}, AllocationReport_0);
  set_field(msg, FIX::TradeInputSource{"STRING_338362861"}, AllocationReport_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_734294689"}, AllocationReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_6"}, AllocationReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_2"}, AllocationReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(15, 9, 44, 15, 3, 2005)}, AllocationReport_0);
  set_field(msg, FIX::TrdSubType{22}, AllocationReport_0);
  set_field(msg, FIX::TrdType{12}, AllocationReport_0);
  all_values.push_back(AllocationReport_0);

  all_compo_names.insert("AllocationReport");

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationReport::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_4;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1474687448"}, AllocGrp_NoAllocs_4);
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_4;
    AllocAccruedInterestAmt_4.setString("18914377");
set_field(noAllocs_0_0, AllocAccruedInterestAmt_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{214840065}, AllocGrp_NoAllocs_4);
    FIX::AllocAvgPx AllocAvgPx_4;
    AllocAvgPx_4.setString("3279244");
set_field(noAllocs_0_0, AllocAvgPx_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::AllocCustomerCapacity{"STRING_1754392400"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::AllocHandlInst{3}, AllocGrp_NoAllocs_4);
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_4;
    AllocInterestAtMaturity_4.setString("2594381");
set_field(noAllocs_0_0, AllocInterestAtMaturity_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::AllocMethod{1}, AllocGrp_NoAllocs_4);
    FIX::AllocNetMoney AllocNetMoney_4;
    AllocNetMoney_4.setString("14838122");
set_field(noAllocs_0_0, AllocNetMoney_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::AllocPositionEffect{'C'}, AllocGrp_NoAllocs_4);
    FIX::AllocPrice AllocPrice_6;
    AllocPrice_6.setString("15534460");
set_field(noAllocs_0_0, AllocPrice_6, AllocGrp_NoAllocs_4);
    FIX::AllocQty AllocQty_6;
    AllocQty_6.setString("16762395");
set_field(noAllocs_0_0, AllocQty_6, AllocGrp_NoAllocs_4);
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_4;
    AllocSettlCurrAmt_4.setString("6607459");
set_field(noAllocs_0_0, AllocSettlCurrAmt_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"USD"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::AllocSettlInstType{0}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::AllocText{"STRING_1859869127"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::ClearingFeeIndicator{"STRING_3"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::EncodedAllocText{"DATA_949812909"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::EncodedAllocTextLen{1037234282}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_1120522630"}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::IndividualAllocType{1}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::MatchStatus{'2'}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::NotifyBrokerOfCredit{true}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::ProcessCode{'0'}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::SecondaryIndividualAllocID{"STRING_557535576"}, AllocGrp_NoAllocs_4);
    FIX::SettlCurrAmt SettlCurrAmt_4;
    SettlCurrAmt_4.setString("20598102");
set_field(noAllocs_0_0, SettlCurrAmt_4, AllocGrp_NoAllocs_4);
    FIX::SettlCurrFxRate SettlCurrFxRate_4;
    SettlCurrFxRate_4.setString("4725926");
set_field(noAllocs_0_0, SettlCurrFxRate_4, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::SettlCurrFxRateCalc{'M'}, AllocGrp_NoAllocs_4);
    set_field(noAllocs_0_0, FIX::SettlCurrency{"CAN"}, AllocGrp_NoAllocs_4);
    all_values.push_back(AllocGrp_NoAllocs_4);
    all_compo_names.insert("...NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_8;
      set_field(noClearingInstructions_0_1_0, FIX::ClearingInstruction{2}, ClrInstGrp_NoClearingInstructions_8);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_8);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_9;
      set_field(noClearingInstructions_0_1_1, FIX::ClearingInstruction{6}, ClrInstGrp_NoClearingInstructions_9);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_9);
      all_compo_names.insert("...NoAllocs...NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_4;
    set_field(noAllocs_0_0, FIX::CommCurrency{"JPY"}, CommissionData_4);
    set_field(noAllocs_0_0, FIX::CommType{'6'}, CommissionData_4);
    FIX::Commission Commission_4;
    Commission_4.setString("8227087");
set_field(noAllocs_0_0, Commission_4, CommissionData_4);
    set_field(noAllocs_0_0, FIX::FundRenewWaiv{'Y'}, CommissionData_4);
    all_values.push_back(CommissionData_4);
    all_compo_names.insert("...NoAllocs.");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_8;
      FIX::MiscFeeAmt MiscFeeAmt_8;
      MiscFeeAmt_8.setString("5407181");
set_field(noMiscFees_0_1_0, MiscFeeAmt_8, MiscFeesGrp_NoMiscFees_8);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_8);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeCurr{"EUR"}, MiscFeesGrp_NoMiscFees_8);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeType{"STRING_10"}, MiscFeesGrp_NoMiscFees_8);
      all_values.push_back(MiscFeesGrp_NoMiscFees_8);
      all_compo_names.insert("...NoAllocs...NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_18;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1416982293"}, NestedParties_NoNestedPartyIDs_18);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_18);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{235728894}, NestedParties_NoNestedPartyIDs_18);
      all_values.push_back(NestedParties_NoNestedPartyIDs_18);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_38;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_867341332"}, NstdPtysSubGrp_NoNestedPartySubIDs_38);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1356251525}, NstdPtysSubGrp_NoNestedPartySubIDs_38);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_38);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_39;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_770058037"}, NstdPtysSubGrp_NoNestedPartySubIDs_39);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{532008638}, NstdPtysSubGrp_NoNestedPartySubIDs_39);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_39);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_40;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_1704039437"}, NstdPtysSubGrp_NoNestedPartySubIDs_40);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{1503872783}, NstdPtysSubGrp_NoNestedPartySubIDs_40);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_40);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_4;
    set_field(noAllocs_0_0, FIX::SettlDeliveryType{2}, SettlInstructionsData_4);
    set_field(noAllocs_0_0, FIX::StandInstDbID{"STRING_1616366003"}, SettlInstructionsData_4);
    set_field(noAllocs_0_0, FIX::StandInstDbName{"STRING_1976465412"}, SettlInstructionsData_4);
    set_field(noAllocs_0_0, FIX::StandInstDbType{2}, SettlInstructionsData_4);
    all_values.push_back(SettlInstructionsData_4);
    all_compo_names.insert("...NoAllocs.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_11;
      set_field(noDlvyInst_0_1_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_11);
      set_field(noDlvyInst_0_1_0, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_11);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_11);
      all_compo_names.insert("...NoAllocs....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_17;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_208459128"}, SettlParties_NoSettlPartyIDs_17);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'6'}, SettlParties_NoSettlPartyIDs_17);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{939641494}, SettlParties_NoSettlPartyIDs_17);
        all_values.push_back(SettlParties_NoSettlPartyIDs_17);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_34;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_1471528446"}, SettlPtysSubGrp_NoSettlPartySubIDs_34);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{1550303551}, SettlPtysSubGrp_NoSettlPartySubIDs_34);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_34);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_35;
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubID{"STRING_84818415"}, SettlPtysSubGrp_NoSettlPartySubIDs_35);
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubIDType{2012246590}, SettlPtysSubGrp_NoSettlPartySubIDs_35);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_35);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_36;
          set_field(noSettlPartySubIDs_0_0_0_3_2, FIX::SettlPartySubID{"STRING_1566927974"}, SettlPtysSubGrp_NoSettlPartySubIDs_36);
          set_field(noSettlPartySubIDs_0_0_0_3_2, FIX::SettlPartySubIDType{293660051}, SettlPtysSubGrp_NoSettlPartySubIDs_36);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_36);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_18;
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyID{"STRING_1066227015"}, SettlParties_NoSettlPartyIDs_18);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_18);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyRole{346763886}, SettlParties_NoSettlPartyIDs_18);
        all_values.push_back(SettlParties_NoSettlPartyIDs_18);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_37;
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubID{"STRING_1514756596"}, SettlPtysSubGrp_NoSettlPartySubIDs_37);
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubIDType{582492780}, SettlPtysSubGrp_NoSettlPartySubIDs_37);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_37);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_38;
          set_field(noSettlPartySubIDs_0_0_1_3_1, FIX::SettlPartySubID{"STRING_555037216"}, SettlPtysSubGrp_NoSettlPartySubIDs_38);
          set_field(noSettlPartySubIDs_0_0_1_3_1, FIX::SettlPartySubIDType{234614280}, SettlPtysSubGrp_NoSettlPartySubIDs_38);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_38);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_39;
          set_field(noSettlPartySubIDs_0_0_1_3_2, FIX::SettlPartySubID{"STRING_1938744305"}, SettlPtysSubGrp_NoSettlPartySubIDs_39);
          set_field(noSettlPartySubIDs_0_0_1_3_2, FIX::SettlPartySubIDType{1325095253}, SettlPtysSubGrp_NoSettlPartySubIDs_39);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_39);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_19;
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyID{"STRING_766622918"}, SettlParties_NoSettlPartyIDs_19);
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_19);
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyRole{681484388}, SettlParties_NoSettlPartyIDs_19);
        all_values.push_back(SettlParties_NoSettlPartyIDs_19);
        all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_40;
          set_field(noSettlPartySubIDs_0_0_2_3_0, FIX::SettlPartySubID{"STRING_964182449"}, SettlPtysSubGrp_NoSettlPartySubIDs_40);
          set_field(noSettlPartySubIDs_0_0_2_3_0, FIX::SettlPartySubIDType{510466152}, SettlPtysSubGrp_NoSettlPartySubIDs_40);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_40);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_41;
          set_field(noSettlPartySubIDs_0_0_2_3_1, FIX::SettlPartySubID{"STRING_1706370072"}, SettlPtysSubGrp_NoSettlPartySubIDs_41);
          set_field(noSettlPartySubIDs_0_0_2_3_1, FIX::SettlPartySubIDType{509217627}, SettlPtysSubGrp_NoSettlPartySubIDs_41);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_41);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_42;
          set_field(noSettlPartySubIDs_0_0_2_3_2, FIX::SettlPartySubID{"STRING_421766565"}, SettlPtysSubGrp_NoSettlPartySubIDs_42);
          set_field(noSettlPartySubIDs_0_0_2_3_2, FIX::SettlPartySubIDType{1791919184}, SettlPtysSubGrp_NoSettlPartySubIDs_42);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_42);
          all_compo_names.insert("...NoAllocs....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_4;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_630225693"}, ExecAllocGrp_NoExecs_4);
    set_field(noExecs_0_0, FIX::FirmTradeID{"STRING_293255260"}, ExecAllocGrp_NoExecs_4);
    set_field(noExecs_0_0, FIX::LastCapacity{'3'}, ExecAllocGrp_NoExecs_4);
    FIX::LastParPx LastParPx_4;
    LastParPx_4.setString("349583");
set_field(noExecs_0_0, LastParPx_4, ExecAllocGrp_NoExecs_4);
    FIX::LastPx LastPx_4;
    LastPx_4.setString("17647837");
set_field(noExecs_0_0, LastPx_4, ExecAllocGrp_NoExecs_4);
    FIX::LastQty LastQty_4;
    LastQty_4.setString("2168211");
set_field(noExecs_0_0, LastQty_4, ExecAllocGrp_NoExecs_4);
    set_field(noExecs_0_0, FIX::SecondaryExecID{"STRING_119776750"}, ExecAllocGrp_NoExecs_4);
    set_field(noExecs_0_0, FIX::TradeID{"STRING_1629546649"}, ExecAllocGrp_NoExecs_4);
    all_values.push_back(ExecAllocGrp_NoExecs_4);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_5;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_1783749135"}, ExecAllocGrp_NoExecs_5);
    set_field(noExecs_0_1, FIX::FirmTradeID{"STRING_413436801"}, ExecAllocGrp_NoExecs_5);
    set_field(noExecs_0_1, FIX::LastCapacity{'1'}, ExecAllocGrp_NoExecs_5);
    FIX::LastParPx LastParPx_5;
    LastParPx_5.setString("13209150");
set_field(noExecs_0_1, LastParPx_5, ExecAllocGrp_NoExecs_5);
    FIX::LastPx LastPx_5;
    LastPx_5.setString("7602006");
set_field(noExecs_0_1, LastPx_5, ExecAllocGrp_NoExecs_5);
    FIX::LastQty LastQty_5;
    LastQty_5.setString("8840156");
set_field(noExecs_0_1, LastQty_5, ExecAllocGrp_NoExecs_5);
    set_field(noExecs_0_1, FIX::SecondaryExecID{"STRING_688187981"}, ExecAllocGrp_NoExecs_5);
    set_field(noExecs_0_1, FIX::TradeID{"STRING_1342693468"}, ExecAllocGrp_NoExecs_5);
    all_values.push_back(ExecAllocGrp_NoExecs_5);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_2;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_6;
    set_field(noExecs_0_2, FIX::ExecID{"STRING_1439052893"}, ExecAllocGrp_NoExecs_6);
    set_field(noExecs_0_2, FIX::FirmTradeID{"STRING_922802261"}, ExecAllocGrp_NoExecs_6);
    set_field(noExecs_0_2, FIX::LastCapacity{'2'}, ExecAllocGrp_NoExecs_6);
    FIX::LastParPx LastParPx_6;
    LastParPx_6.setString("6166644");
set_field(noExecs_0_2, LastParPx_6, ExecAllocGrp_NoExecs_6);
    FIX::LastPx LastPx_6;
    LastPx_6.setString("16894251");
set_field(noExecs_0_2, LastPx_6, ExecAllocGrp_NoExecs_6);
    FIX::LastQty LastQty_6;
    LastQty_6.setString("4817705");
set_field(noExecs_0_2, LastQty_6, ExecAllocGrp_NoExecs_6);
    set_field(noExecs_0_2, FIX::SecondaryExecID{"STRING_1298148886"}, ExecAllocGrp_NoExecs_6);
    set_field(noExecs_0_2, FIX::TradeID{"STRING_1398108665"}, ExecAllocGrp_NoExecs_6);
    all_values.push_back(ExecAllocGrp_NoExecs_6);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_2;
  set_field(msg, FIX::AgreementCurrency{"JPY"}, FinancingDetails_2);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_956995089"}, FinancingDetails_2);
  set_field(msg, FIX::AgreementDesc{"STRING_1955170649"}, FinancingDetails_2);
  set_field(msg, FIX::AgreementID{"STRING_82897956"}, FinancingDetails_2);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_2);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1829530412"}, FinancingDetails_2);
  FIX::MarginRatio MarginRatio_2;
  MarginRatio_2.setString("36.490000");
set_field(msg, MarginRatio_2, FinancingDetails_2);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_894685885"}, FinancingDetails_2);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_2);
  all_values.push_back(FinancingDetails_2);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_7;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_511985943"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{712869184}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_867858734"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{2141532592}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_349134671"}, InstrumentLeg_7);
    FIX::LegContractMultiplier LegContractMultiplier_7;
    LegContractMultiplier_7.setString("12812955");
set_field(noLegs_0_0, LegContractMultiplier_7, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{542338961}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1670049704"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_2041496223"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1426354638"}, InstrumentLeg_7);
    FIX::LegCouponRate LegCouponRate_7;
    LegCouponRate_7.setString("40.370000");
set_field(noLegs_0_0, LegCouponRate_7, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1236706043"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_223176520"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1334588382}, InstrumentLeg_7);
    FIX::LegFactor LegFactor_7;
    LegFactor_7.setString("6754978");
set_field(noLegs_0_0, LegFactor_7, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{704947092}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_485253621"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2073606496"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_3416466"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_146385011"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_883117937"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1958587115"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_229282967"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1484548562"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_7);
    FIX::LegOptionRatio LegOptionRatio_7;
    LegOptionRatio_7.setString("9424066");
set_field(noLegs_0_0, LegOptionRatio_7, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_231750799"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_2136681902"}, InstrumentLeg_7);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_7;
    LegPriceUnitOfMeasureQty_7.setString("16904886");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_7, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegProduct{743736742}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegPutOrCall{702067438}, InstrumentLeg_7);
    FIX::LegRatioQty LegRatioQty_7;
    LegRatioQty_7.setString("4108636");
set_field(noLegs_0_0, LegRatioQty_7, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_737785687"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1051202109"}, InstrumentLeg_7);
    FIX::LegRepurchaseRate LegRepurchaseRate_7;
    LegRepurchaseRate_7.setString("92.220000");
set_field(noLegs_0_0, LegRepurchaseRate_7, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1280124648}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_573768166"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1586171797"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_558995638"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_784522203"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_675394192"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1276919522"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_898570713"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_7);
    FIX::LegStrikePrice LegStrikePrice_7;
    LegStrikePrice_7.setString("16035178");
set_field(noLegs_0_0, LegStrikePrice_7, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_949277878"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_372215533"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1606934271"}, InstrumentLeg_7);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1095662889"}, InstrumentLeg_7);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_7;
    LegUnitOfMeasureQty_7.setString("12553334");
set_field(noLegs_0_0, LegUnitOfMeasureQty_7, InstrumentLeg_7);
    all_values.push_back(InstrumentLeg_7);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_14;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1324945857"}, LegSecAltIDGrp_NoLegSecurityAltID_14);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_592398384"}, LegSecAltIDGrp_NoLegSecurityAltID_14);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_14);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_8;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_911187970"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{119868826}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_824149183"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{900386224}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1810357427"}, InstrumentLeg_8);
    FIX::LegContractMultiplier LegContractMultiplier_8;
    LegContractMultiplier_8.setString("15678859");
set_field(noLegs_0_1, LegContractMultiplier_8, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1602453662}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_73737466"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_158187965"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_506172123"}, InstrumentLeg_8);
    FIX::LegCouponRate LegCouponRate_8;
    LegCouponRate_8.setString("66.880000");
set_field(noLegs_0_1, LegCouponRate_8, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1438312613"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1997308251"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1864462493}, InstrumentLeg_8);
    FIX::LegFactor LegFactor_8;
    LegFactor_8.setString("18799790");
set_field(noLegs_0_1, LegFactor_8, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1126744126}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1635057347"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_631066095"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1590768383"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_2081150033"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_87100253"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_392562613"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_305881918"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1694034524"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_8);
    FIX::LegOptionRatio LegOptionRatio_8;
    LegOptionRatio_8.setString("15612153");
set_field(noLegs_0_1, LegOptionRatio_8, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_964588615"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_665687711"}, InstrumentLeg_8);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_8;
    LegPriceUnitOfMeasureQty_8.setString("61301");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_8, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegProduct{1875776585}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegPutOrCall{785556537}, InstrumentLeg_8);
    FIX::LegRatioQty LegRatioQty_8;
    LegRatioQty_8.setString("8302793");
set_field(noLegs_0_1, LegRatioQty_8, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_628679161"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_448430316"}, InstrumentLeg_8);
    FIX::LegRepurchaseRate LegRepurchaseRate_8;
    LegRepurchaseRate_8.setString("15.870000");
set_field(noLegs_0_1, LegRepurchaseRate_8, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{83649175}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_522167782"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_408869552"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_589821298"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_140580823"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1847182165"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1669761588"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1697006768"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_8);
    FIX::LegStrikePrice LegStrikePrice_8;
    LegStrikePrice_8.setString("6762672");
set_field(noLegs_0_1, LegStrikePrice_8, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_874314132"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1708727139"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_119551981"}, InstrumentLeg_8);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_807980517"}, InstrumentLeg_8);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_8;
    LegUnitOfMeasureQty_8.setString("17958273");
set_field(noLegs_0_1, LegUnitOfMeasureQty_8, InstrumentLeg_8);
    all_values.push_back(InstrumentLeg_8);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_15;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1113862436"}, LegSecAltIDGrp_NoLegSecurityAltID_15);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1342378268"}, LegSecAltIDGrp_NoLegSecurityAltID_15);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_15);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_16;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_2000340097"}, LegSecAltIDGrp_NoLegSecurityAltID_16);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_527594177"}, LegSecAltIDGrp_NoLegSecurityAltID_16);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_16);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_17;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_159483235"}, LegSecAltIDGrp_NoLegSecurityAltID_17);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_518544160"}, LegSecAltIDGrp_NoLegSecurityAltID_17);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_17);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_6;
  FIX::AttachmentPoint AttachmentPoint_6;
  AttachmentPoint_6.setString("43.020000");
set_field(msg, AttachmentPoint_6, Instrument_6);
  set_field(msg, FIX::CFICode{"STRING_2035259820"}, Instrument_6);
  set_field(msg, FIX::CPProgram{99}, Instrument_6);
  set_field(msg, FIX::CPRegType{"STRING_1364003611"}, Instrument_6);
  FIX::CapPrice CapPrice_6;
  CapPrice_6.setString("5164553");
set_field(msg, CapPrice_6, Instrument_6);
  FIX::ContractMultiplier ContractMultiplier_6;
  ContractMultiplier_6.setString("17525310");
set_field(msg, ContractMultiplier_6, Instrument_6);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_6);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_600104508"}, Instrument_6);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_127215149"}, Instrument_6);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_2023554750"}, Instrument_6);
  FIX::CouponRate CouponRate_6;
  CouponRate_6.setString("58.070000");
set_field(msg, CouponRate_6, Instrument_6);
  set_field(msg, FIX::CreditRating{"STRING_267795972"}, Instrument_6);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1723253267"}, Instrument_6);
  FIX::DetachmentPoint DetachmentPoint_6;
  DetachmentPoint_6.setString("37.470000");
set_field(msg, DetachmentPoint_6, Instrument_6);
  set_field(msg, FIX::EncodedIssuer{"DATA_1612961633"}, Instrument_6);
  set_field(msg, FIX::EncodedIssuerLen{1272776388}, Instrument_6);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_2098944180"}, Instrument_6);
  set_field(msg, FIX::EncodedSecurityDescLen{543139028}, Instrument_6);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_6);
  FIX::Factor Factor_6;
  Factor_6.setString("8257746");
set_field(msg, Factor_6, Instrument_6);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_6);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_6);
  FIX::FloorPrice FloorPrice_6;
  FloorPrice_6.setString("16337551");
set_field(msg, FloorPrice_6, Instrument_6);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_6);
  set_field(msg, FIX::InstrRegistry{"STRING_433226562"}, Instrument_6);
  set_field(msg, FIX::InstrmtAssignmentMethod{'6'}, Instrument_6);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1095104532"}, Instrument_6);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_286083011"}, Instrument_6);
  set_field(msg, FIX::Issuer{"STRING_1127728147"}, Instrument_6);
  set_field(msg, FIX::ListMethod{1}, Instrument_6);
  set_field(msg, FIX::LocaleOfIssue{"STRING_804627172"}, Instrument_6);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1661452449"}, Instrument_6);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1142363940"}, Instrument_6);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_2108727870"}, Instrument_6);
  FIX::MinPriceIncrement MinPriceIncrement_6;
  MinPriceIncrement_6.setString("8779724");
set_field(msg, MinPriceIncrement_6, Instrument_6);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_6;
  MinPriceIncrementAmount_6.setString("16588192");
set_field(msg, MinPriceIncrementAmount_6, Instrument_6);
  set_field(msg, FIX::NTPositionLimit{1713775236}, Instrument_6);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_6;
  NotionalPercentageOutstanding_6.setString("39.630000");
set_field(msg, NotionalPercentageOutstanding_6, Instrument_6);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_6);
  FIX::OptPayoutAmount OptPayoutAmount_6;
  OptPayoutAmount_6.setString("18409903");
set_field(msg, OptPayoutAmount_6, Instrument_6);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_6);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_6;
  OriginalNotionalPercentageOutstanding_6.setString("59.410000");
set_field(msg, OriginalNotionalPercentageOutstanding_6, Instrument_6);
  set_field(msg, FIX::Pool{"STRING_2108786357"}, Instrument_6);
  set_field(msg, FIX::PositionLimit{1944498333}, Instrument_6);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_6);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1574264342"}, Instrument_6);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_6;
  PriceUnitOfMeasureQty_6.setString("10697910");
set_field(msg, PriceUnitOfMeasureQty_6, Instrument_6);
  set_field(msg, FIX::Product{11}, Instrument_6);
  set_field(msg, FIX::ProductComplex{"STRING_2117403371"}, Instrument_6);
  set_field(msg, FIX::PutOrCall{0}, Instrument_6);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_643321236"}, Instrument_6);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_74302242"}, Instrument_6);
  FIX::RepurchaseRate RepurchaseRate_6;
  RepurchaseRate_6.setString("30.280000");
set_field(msg, RepurchaseRate_6, Instrument_6);
  set_field(msg, FIX::RepurchaseTerm{129592770}, Instrument_6);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_6);
  set_field(msg, FIX::SecurityDesc{"STRING_1225689590"}, Instrument_6);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_729726740"}, Instrument_6);
  set_field(msg, FIX::SecurityGroup{"STRING_922133038"}, Instrument_6);
  set_field(msg, FIX::SecurityID{"STRING_1511772602"}, Instrument_6);
  set_field(msg, FIX::SecurityIDSource{"STRING_E"}, Instrument_6);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_6);
  set_field(msg, FIX::SecuritySubType{"STRING_168916126"}, Instrument_6);
  set_field(msg, FIX::SecurityType{"STRING_TLQN"}, Instrument_6);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_6);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_6);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_101912454"}, Instrument_6);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_682936723"}, Instrument_6);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_6);
  FIX::StrikeMultiplier StrikeMultiplier_6;
  StrikeMultiplier_6.setString("7943768");
set_field(msg, StrikeMultiplier_6, Instrument_6);
  FIX::StrikePrice StrikePrice_6;
  StrikePrice_6.setString("15374423");
set_field(msg, StrikePrice_6, Instrument_6);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_6);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_6;
  StrikePriceBoundaryPrecision_6.setString("27.980000");
set_field(msg, StrikePriceBoundaryPrecision_6, Instrument_6);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_6);
  FIX::StrikeValue StrikeValue_6;
  StrikeValue_6.setString("4653461");
set_field(msg, StrikeValue_6, Instrument_6);
  set_field(msg, FIX::Symbol{"STRING_1961828838"}, Instrument_6);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_6);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_6);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_6);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_6);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_6;
  UnitOfMeasureQty_6.setString("2590046");
set_field(msg, UnitOfMeasureQty_6, Instrument_6);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_6);
  all_values.push_back(Instrument_6);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_12;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_12);
    FIX::ComplexEventPrice ComplexEventPrice_12;
    ComplexEventPrice_12.setString("4048057");
set_field(noComplexEvents_0_0, ComplexEventPrice_12, ComplexEvents_NoComplexEvents_12);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_12);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_12;
    ComplexEventPriceBoundaryPrecision_12.setString("36.250000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_12, ComplexEvents_NoComplexEvents_12);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_12);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_12);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_12;
    ComplexOptPayoutAmount_12.setString("16414462");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_12, ComplexEvents_NoComplexEvents_12);
    all_values.push_back(ComplexEvents_NoComplexEvents_12);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_28;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 50, 2, 5, 9, 2015)}, ComplexEventDates_NoComplexEventDates_28);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 54, 11, 5, 1, 2007)}, ComplexEventDates_NoComplexEventDates_28);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_28);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_46;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 8, 24)}, ComplexEventTimes_NoComplexEventTimes_46);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 43, 53)}, ComplexEventTimes_NoComplexEventTimes_46);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_46);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_47;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 11, 42)}, ComplexEventTimes_NoComplexEventTimes_47);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 49, 54)}, ComplexEventTimes_NoComplexEventTimes_47);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_47);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_29;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 44, 26, 11, 5, 2009)}, ComplexEventDates_NoComplexEventDates_29);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 58, 8, 7, 11, 2001)}, ComplexEventDates_NoComplexEventDates_29);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_29);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_48;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 1, 13)}, ComplexEventTimes_NoComplexEventTimes_48);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 48, 44)}, ComplexEventTimes_NoComplexEventTimes_48);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_48);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_49;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 47, 36)}, ComplexEventTimes_NoComplexEventTimes_49);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 18, 40)}, ComplexEventTimes_NoComplexEventTimes_49);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_49);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_30;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 25, 39, 8, 10, 2012)}, ComplexEventDates_NoComplexEventDates_30);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 32, 1, 10, 8, 2009)}, ComplexEventDates_NoComplexEventDates_30);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_30);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_50;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 37, 57)}, ComplexEventTimes_NoComplexEventTimes_50);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 46, 0)}, ComplexEventTimes_NoComplexEventTimes_50);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_50);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_51;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 47, 16)}, ComplexEventTimes_NoComplexEventTimes_51);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 34, 9)}, ComplexEventTimes_NoComplexEventTimes_51);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_51);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_52;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 26, 44)}, ComplexEventTimes_NoComplexEventTimes_52);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 27, 23)}, ComplexEventTimes_NoComplexEventTimes_52);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_52);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_13;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_13);
    FIX::ComplexEventPrice ComplexEventPrice_13;
    ComplexEventPrice_13.setString("14754898");
set_field(noComplexEvents_0_1, ComplexEventPrice_13, ComplexEvents_NoComplexEvents_13);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_13);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_13;
    ComplexEventPriceBoundaryPrecision_13.setString("94.610000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_13, ComplexEvents_NoComplexEvents_13);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_13);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_13);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_13;
    ComplexOptPayoutAmount_13.setString("11034254");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_13, ComplexEvents_NoComplexEvents_13);
    all_values.push_back(ComplexEvents_NoComplexEvents_13);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_31;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 28, 55, 27, 7, 2007)}, ComplexEventDates_NoComplexEventDates_31);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 42, 55, 5, 4, 2005)}, ComplexEventDates_NoComplexEventDates_31);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_31);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_53;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 0, 17)}, ComplexEventTimes_NoComplexEventTimes_53);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 36, 17)}, ComplexEventTimes_NoComplexEventTimes_53);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_53);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_54;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 34, 24)}, ComplexEventTimes_NoComplexEventTimes_54);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 1, 44)}, ComplexEventTimes_NoComplexEventTimes_54);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_54);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_16;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_169505759"}, EvntGrp_NoEvents_16);
    FIX::EventPx EventPx_16;
    EventPx_16.setString("12781716");
set_field(noEvents_0_0, EventPx_16, EvntGrp_NoEvents_16);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1741800803"}, EvntGrp_NoEvents_16);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(14, 11, 29, 7, 6, 2012)}, EvntGrp_NoEvents_16);
    set_field(noEvents_0_0, FIX::EventType{5}, EvntGrp_NoEvents_16);
    all_values.push_back(EvntGrp_NoEvents_16);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_17;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_220580652"}, EvntGrp_NoEvents_17);
    FIX::EventPx EventPx_17;
    EventPx_17.setString("8389468");
set_field(noEvents_0_1, EventPx_17, EvntGrp_NoEvents_17);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1266428998"}, EvntGrp_NoEvents_17);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(13, 50, 54, 19, 6, 2000)}, EvntGrp_NoEvents_17);
    set_field(noEvents_0_1, FIX::EventType{17}, EvntGrp_NoEvents_17);
    all_values.push_back(EvntGrp_NoEvents_17);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_9;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1364944677"}, InstrumentParties_NoInstrumentParties_9);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_9);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{980374352}, InstrumentParties_NoInstrumentParties_9);
    all_values.push_back(InstrumentParties_NoInstrumentParties_9);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1482547499"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{947597245}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_19);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1485799548"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{608082019}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1117103004"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{616487564}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_10;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_202399175"}, InstrumentParties_NoInstrumentParties_10);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_10);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{636965747}, InstrumentParties_NoInstrumentParties_10);
    all_values.push_back(InstrumentParties_NoInstrumentParties_10);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_884638604"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1153337386}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1920870639"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{2141590568}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_10;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_2141451292"}, SecAltIDGrp_NoSecurityAltID_10);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_833053726"}, SecAltIDGrp_NoSecurityAltID_10);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_10);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_11;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_586730040"}, SecAltIDGrp_NoSecurityAltID_11);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1403593409"}, SecAltIDGrp_NoSecurityAltID_11);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_11);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_12;
  set_field(msg, FIX::SecurityXML{"XMLDATA_122802963"}, SecurityXML_12);
  set_field(msg, FIX::SecurityXMLLen{1592408330}, SecurityXML_12);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_2117786603"}, SecurityXML_12);
  all_values.push_back(SecurityXML_12);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_2;
  set_field(msg, FIX::DeliveryForm{1}, InstrumentExtension_2);
  FIX::PctAtRisk PctAtRisk_2;
  PctAtRisk_2.setString("0.150000");
set_field(msg, PctAtRisk_2, InstrumentExtension_2);
  all_values.push_back(InstrumentExtension_2);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_2;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{29}, AttrbGrp_NoInstrAttrib_2);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1121503303"}, AttrbGrp_NoInstrAttrib_2);
    all_values.push_back(AttrbGrp_NoInstrAttrib_2);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationReport::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_3;
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_350332501"}, OrdAllocGrp_NoOrders_3);
    set_field(noOrders_0_0, FIX::ListID{"STRING_2101877655"}, OrdAllocGrp_NoOrders_3);
    FIX::OrderAvgPx OrderAvgPx_3;
    OrderAvgPx_3.setString("4395823");
set_field(noOrders_0_0, OrderAvgPx_3, OrdAllocGrp_NoOrders_3);
    FIX::OrderBookingQty OrderBookingQty_3;
    OrderBookingQty_3.setString("18328800");
set_field(noOrders_0_0, OrderBookingQty_3, OrdAllocGrp_NoOrders_3);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_901991252"}, OrdAllocGrp_NoOrders_3);
    FIX::OrderQty OrderQty_3;
    OrderQty_3.setString("19253819");
set_field(noOrders_0_0, OrderQty_3, OrdAllocGrp_NoOrders_3);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_293478372"}, OrdAllocGrp_NoOrders_3);
    set_field(noOrders_0_0, FIX::SecondaryOrderID{"STRING_2019094256"}, OrdAllocGrp_NoOrders_3);
    all_values.push_back(OrdAllocGrp_NoOrders_3);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_8;
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyID{"STRING_495877547"}, NestedParties2_NoNested2PartyIDs_8);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyIDSource{'4'}, NestedParties2_NoNested2PartyIDs_8);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyRole{1031351569}, NestedParties2_NoNested2PartyIDs_8);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_8);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_18;
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubID{"STRING_1339398167"}, NstdPtys2SubGrp_NoNested2PartySubIDs_18);
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubIDType{37205307}, NstdPtys2SubGrp_NoNested2PartySubIDs_18);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_18);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_9;
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyID{"STRING_771634085"}, NestedParties2_NoNested2PartyIDs_9);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_9);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyRole{1504989997}, NestedParties2_NoNested2PartyIDs_9);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_9);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_19;
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubID{"STRING_19075165"}, NstdPtys2SubGrp_NoNested2PartySubIDs_19);
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubIDType{2091720037}, NstdPtys2SubGrp_NoNested2PartySubIDs_19);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_19);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_20;
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubID{"STRING_21711490"}, NstdPtys2SubGrp_NoNested2PartySubIDs_20);
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubIDType{141878128}, NstdPtys2SubGrp_NoNested2PartySubIDs_20);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_20);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_10;
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyID{"STRING_1536644719"}, NestedParties2_NoNested2PartyIDs_10);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_10);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyRole{792599270}, NestedParties2_NoNested2PartyIDs_10);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_10);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_21;
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubID{"STRING_1337883250"}, NstdPtys2SubGrp_NoNested2PartySubIDs_21);
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubIDType{196205921}, NstdPtys2SubGrp_NoNested2PartySubIDs_21);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_21);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_22;
        set_field(noNested2PartySubIDs_0_2_2_1, FIX::Nested2PartySubID{"STRING_1663074390"}, NstdPtys2SubGrp_NoNested2PartySubIDs_22);
        set_field(noNested2PartySubIDs_0_2_2_1, FIX::Nested2PartySubIDType{1901213084}, NstdPtys2SubGrp_NoNested2PartySubIDs_22);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_22);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_23;
        set_field(noNested2PartySubIDs_0_2_2_2, FIX::Nested2PartySubID{"STRING_546538422"}, NstdPtys2SubGrp_NoNested2PartySubIDs_23);
        set_field(noNested2PartySubIDs_0_2_2_2, FIX::Nested2PartySubIDType{1617468398}, NstdPtys2SubGrp_NoNested2PartySubIDs_23);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_23);
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
    multiset<string> OrdAllocGrp_NoOrders_4;
    set_field(noOrders_0_1, FIX::ClOrdID{"STRING_193311794"}, OrdAllocGrp_NoOrders_4);
    set_field(noOrders_0_1, FIX::ListID{"STRING_231934775"}, OrdAllocGrp_NoOrders_4);
    FIX::OrderAvgPx OrderAvgPx_4;
    OrderAvgPx_4.setString("3719760");
set_field(noOrders_0_1, OrderAvgPx_4, OrdAllocGrp_NoOrders_4);
    FIX::OrderBookingQty OrderBookingQty_4;
    OrderBookingQty_4.setString("21186937");
set_field(noOrders_0_1, OrderBookingQty_4, OrdAllocGrp_NoOrders_4);
    set_field(noOrders_0_1, FIX::OrderID{"STRING_525413148"}, OrdAllocGrp_NoOrders_4);
    FIX::OrderQty OrderQty_4;
    OrderQty_4.setString("2435866");
set_field(noOrders_0_1, OrderQty_4, OrdAllocGrp_NoOrders_4);
    set_field(noOrders_0_1, FIX::SecondaryClOrdID{"STRING_365595875"}, OrdAllocGrp_NoOrders_4);
    set_field(noOrders_0_1, FIX::SecondaryOrderID{"STRING_1021290695"}, OrdAllocGrp_NoOrders_4);
    all_values.push_back(OrdAllocGrp_NoOrders_4);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_11;
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyID{"STRING_1396947444"}, NestedParties2_NoNested2PartyIDs_11);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_11);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyRole{2037744341}, NestedParties2_NoNested2PartyIDs_11);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_11);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_24;
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubID{"STRING_643688226"}, NstdPtys2SubGrp_NoNested2PartySubIDs_24);
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubIDType{1223765780}, NstdPtys2SubGrp_NoNested2PartySubIDs_24);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_24);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_25;
        set_field(noNested2PartySubIDs_1_0_2_1, FIX::Nested2PartySubID{"STRING_791659101"}, NstdPtys2SubGrp_NoNested2PartySubIDs_25);
        set_field(noNested2PartySubIDs_1_0_2_1, FIX::Nested2PartySubIDType{1409289955}, NstdPtys2SubGrp_NoNested2PartySubIDs_25);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_25);
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
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_8;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_735895491"}, Parties_NoPartyIDs_8);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_8);
    set_field(noPartyIDs_0_0, FIX::PartyRole{76}, Parties_NoPartyIDs_8);
    all_values.push_back(Parties_NoPartyIDs_8);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_15;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1423015890"}, PtysSubGrp_NoPartySubIDs_15);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_15);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_15);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_16;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_666627649"}, PtysSubGrp_NoPartySubIDs_16);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_16);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_16);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_17;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_226040618"}, PtysSubGrp_NoPartySubIDs_17);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_17);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_17);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_9;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_367144928"}, Parties_NoPartyIDs_9);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_9);
    set_field(noPartyIDs_0_1, FIX::PartyRole{64}, Parties_NoPartyIDs_9);
    all_values.push_back(Parties_NoPartyIDs_9);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_18;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1004513816"}, PtysSubGrp_NoPartySubIDs_18);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_18);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_18);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_19;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_531666775"}, PtysSubGrp_NoPartySubIDs_19);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_19);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_19);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_20;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_267765755"}, PtysSubGrp_NoPartySubIDs_20);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_20);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_20);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_3;
    FIX::PosAmt PosAmt_3;
    PosAmt_3.setString("9661119");
set_field(noPosAmt_0_0, PosAmt_3, PositionAmountData_NoPosAmt_3);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_SMTM"}, PositionAmountData_NoPosAmt_3);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_275788152"}, PositionAmountData_NoPosAmt_3);
    all_values.push_back(PositionAmountData_NoPosAmt_3);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_4;
    FIX::PosAmt PosAmt_4;
    PosAmt_4.setString("8563726");
set_field(noPosAmt_0_1, PosAmt_4, PositionAmountData_NoPosAmt_4);
    set_field(noPosAmt_0_1, FIX::PosAmtType{"STRING_IMTM"}, PositionAmountData_NoPosAmt_4);
    set_field(noPosAmt_0_1, FIX::PositionCurrency{"STRING_919476378"}, PositionAmountData_NoPosAmt_4);
    all_values.push_back(PositionAmountData_NoPosAmt_4);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_5;
    FIX::PosAmt PosAmt_5;
    PosAmt_5.setString("20801384");
set_field(noPosAmt_0_2, PosAmt_5, PositionAmountData_NoPosAmt_5);
    set_field(noPosAmt_0_2, FIX::PosAmtType{"STRING_PREM"}, PositionAmountData_NoPosAmt_5);
    set_field(noPosAmt_0_2, FIX::PositionCurrency{"STRING_181282685"}, PositionAmountData_NoPosAmt_5);
    all_values.push_back(PositionAmountData_NoPosAmt_5);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_2);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_3;
    set_field(noRateSources_0_0, FIX::RateSource{99}, RateSource_NoRateSources_3);
    set_field(noRateSources_0_0, FIX::RateSourceType{0}, RateSource_NoRateSources_3);
    set_field(noRateSources_0_0, FIX::ReferencePage{"STRING_412731127"}, RateSource_NoRateSources_3);
    all_values.push_back(RateSource_NoRateSources_3);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_4;
    set_field(noRateSources_0_1, FIX::RateSource{2}, RateSource_NoRateSources_4);
    set_field(noRateSources_0_1, FIX::RateSourceType{0}, RateSource_NoRateSources_4);
    set_field(noRateSources_0_1, FIX::ReferencePage{"STRING_442565824"}, RateSource_NoRateSources_4);
    all_values.push_back(RateSource_NoRateSources_4);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_2;
  set_field(msg, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_2);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_MuniAAA"}, SpreadOrBenchmarkCurveData_2);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1934852747"}, SpreadOrBenchmarkCurveData_2);
  FIX::BenchmarkPrice BenchmarkPrice_2;
  BenchmarkPrice_2.setString("18683767");
set_field(msg, BenchmarkPrice_2, SpreadOrBenchmarkCurveData_2);
  set_field(msg, FIX::BenchmarkPriceType{1441185483}, SpreadOrBenchmarkCurveData_2);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1587055889"}, SpreadOrBenchmarkCurveData_2);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_281349868"}, SpreadOrBenchmarkCurveData_2);
  FIX::Spread Spread_2;
  Spread_2.setString("2982156");
set_field(msg, Spread_2, SpreadOrBenchmarkCurveData_2);
  all_values.push_back(SpreadOrBenchmarkCurveData_2);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_3;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_BGNCON"}, Stipulations_NoStipulations_3);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1828142615"}, Stipulations_NoStipulations_3);
    all_values.push_back(Stipulations_NoStipulations_3);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_4;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_YTM"}, Stipulations_NoStipulations_4);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1710279294"}, Stipulations_NoStipulations_4);
    all_values.push_back(Stipulations_NoStipulations_4);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_5;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_MAXSUBS"}, Stipulations_NoStipulations_5);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_697629071"}, Stipulations_NoStipulations_5);
    all_values.push_back(Stipulations_NoStipulations_5);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_7;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_360181131"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1554001693}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1290401292"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1279657509}, UnderlyingInstrument_7);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_7;
    UnderlyingAdjustedQuantity_7.setString("14866564");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_7, UnderlyingInstrument_7);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_7;
    UnderlyingAllocationPercent_7.setString("59.440000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_7, UnderlyingInstrument_7);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_7;
    UnderlyingAttachmentPoint_7.setString("1.950000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_514668501"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_328922440"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_925740677"}, UnderlyingInstrument_7);
    FIX::UnderlyingCapValue UnderlyingCapValue_7;
    UnderlyingCapValue_7.setString("9273996");
set_field(noUnderlyings_0_0, UnderlyingCapValue_7, UnderlyingInstrument_7);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_7;
    UnderlyingCashAmount_7.setString("14149291");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_7);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_7;
    UnderlyingContractMultiplier_7.setString("13699654");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1020079853}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1167305266"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2038571896"}, UnderlyingInstrument_7);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_7;
    UnderlyingCouponRate_7.setString("89.530000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_888198411"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_7);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_7;
    UnderlyingCurrentValue_7.setString("11695482");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_7, UnderlyingInstrument_7);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_7;
    UnderlyingDetachmentPoint_7.setString("93.820000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_7, UnderlyingInstrument_7);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_7;
    UnderlyingDirtyPrice_7.setString("18582562");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_7, UnderlyingInstrument_7);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_7;
    UnderlyingEndPrice_7.setString("19825649");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_7, UnderlyingInstrument_7);
    FIX::UnderlyingEndValue UnderlyingEndValue_7;
    UnderlyingEndValue_7.setString("13111483");
set_field(noUnderlyings_0_0, UnderlyingEndValue_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1589773370}, UnderlyingInstrument_7);
    FIX::UnderlyingFXRate UnderlyingFXRate_7;
    UnderlyingFXRate_7.setString("15453605");
set_field(noUnderlyings_0_0, UnderlyingFXRate_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_7);
    FIX::UnderlyingFactor UnderlyingFactor_7;
    UnderlyingFactor_7.setString("1399187");
set_field(noUnderlyings_0_0, UnderlyingFactor_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1254882662}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1755722458"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1693920486"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_397800306"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_887896320"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1033093287"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1913256250"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_201352867"}, UnderlyingInstrument_7);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_7;
    UnderlyingNotionalPercentageOutstanding_7.setString("17.880000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_7);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_7;
    UnderlyingOriginalNotionalPercentageOutstanding_7.setString("35.440000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_327677769"}, UnderlyingInstrument_7);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_7;
    UnderlyingPriceUnitOfMeasureQty_7.setString("15096241");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{793166946}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1697643223}, UnderlyingInstrument_7);
    FIX::UnderlyingPx UnderlyingPx_7;
    UnderlyingPx_7.setString("3822203");
set_field(noUnderlyings_0_0, UnderlyingPx_7, UnderlyingInstrument_7);
    FIX::UnderlyingQty UnderlyingQty_7;
    UnderlyingQty_7.setString("19604722");
set_field(noUnderlyings_0_0, UnderlyingQty_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1588731471"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1189669347"}, UnderlyingInstrument_7);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_7;
    UnderlyingRepurchaseRate_7.setString("69.760000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{773521554}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1436690541"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1870735256"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_256527288"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1147463122"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1705816531"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1567675637"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_589752844"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1103693452"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_815733316"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_7);
    FIX::UnderlyingStartValue UnderlyingStartValue_7;
    UnderlyingStartValue_7.setString("2110924");
set_field(noUnderlyings_0_0, UnderlyingStartValue_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_423972127"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_7);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_7;
    UnderlyingStrikePrice_7.setString("13118684");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_7, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1309201762"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_374665374"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1513221314"}, UnderlyingInstrument_7);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_709479903"}, UnderlyingInstrument_7);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_7;
    UnderlyingUnitOfMeasureQty_7.setString("4693604");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_7, UnderlyingInstrument_7);
    all_values.push_back(UnderlyingInstrument_7);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_17;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1037157672"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_17);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1978984605"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_17);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_17);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_16;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_587317247"}, UnderlyingStipulations_NoUnderlyingStips_16);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_213721351"}, UnderlyingStipulations_NoUnderlyingStips_16);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_16);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_17;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1098986722"}, UnderlyingStipulations_NoUnderlyingStips_17);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_28565070"}, UnderlyingStipulations_NoUnderlyingStips_17);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_17);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_14;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1800173698"}, UndlyInstrumentParties_NoUndlyInstrumentParties_14);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_14);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{692597592}, UndlyInstrumentParties_NoUndlyInstrumentParties_14);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_14);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1058613912"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1840060714}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1081758189"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{478805901}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_15;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_282329910"}, UndlyInstrumentParties_NoUndlyInstrumentParties_15);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_15);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1294539218}, UndlyInstrumentParties_NoUndlyInstrumentParties_15);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_15);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_249060459"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1718511345}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_8;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1288110022"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{857953231}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_882896144"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{449828137}, UnderlyingInstrument_8);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_8;
    UnderlyingAdjustedQuantity_8.setString("12326186");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_8, UnderlyingInstrument_8);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_8;
    UnderlyingAllocationPercent_8.setString("38.100000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_8, UnderlyingInstrument_8);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_8;
    UnderlyingAttachmentPoint_8.setString("80.400000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1701979023"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_741465020"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_48982064"}, UnderlyingInstrument_8);
    FIX::UnderlyingCapValue UnderlyingCapValue_8;
    UnderlyingCapValue_8.setString("15334799");
set_field(noUnderlyings_0_1, UnderlyingCapValue_8, UnderlyingInstrument_8);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_8;
    UnderlyingCashAmount_8.setString("20274631");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_8);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_8;
    UnderlyingContractMultiplier_8.setString("17472013");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{978966251}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_664864382"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1003108382"}, UnderlyingInstrument_8);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_8;
    UnderlyingCouponRate_8.setString("63.020000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1466951007"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_8);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_8;
    UnderlyingCurrentValue_8.setString("3780812");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_8, UnderlyingInstrument_8);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_8;
    UnderlyingDetachmentPoint_8.setString("30.400000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_8, UnderlyingInstrument_8);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_8;
    UnderlyingDirtyPrice_8.setString("10893561");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_8, UnderlyingInstrument_8);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_8;
    UnderlyingEndPrice_8.setString("8568871");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_8, UnderlyingInstrument_8);
    FIX::UnderlyingEndValue UnderlyingEndValue_8;
    UnderlyingEndValue_8.setString("16706129");
set_field(noUnderlyings_0_1, UnderlyingEndValue_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1127324143}, UnderlyingInstrument_8);
    FIX::UnderlyingFXRate UnderlyingFXRate_8;
    UnderlyingFXRate_8.setString("39427");
set_field(noUnderlyings_0_1, UnderlyingFXRate_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_8);
    FIX::UnderlyingFactor UnderlyingFactor_8;
    UnderlyingFactor_8.setString("13763846");
set_field(noUnderlyings_0_1, UnderlyingFactor_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1722454088}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1823240872"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_86854186"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_457866584"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_125585361"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1319472792"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_706500394"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1284893401"}, UnderlyingInstrument_8);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_8;
    UnderlyingNotionalPercentageOutstanding_8.setString("81.670000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_8);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_8;
    UnderlyingOriginalNotionalPercentageOutstanding_8.setString("54.650000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_259964500"}, UnderlyingInstrument_8);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_8;
    UnderlyingPriceUnitOfMeasureQty_8.setString("13279449");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1970174777}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{2007165832}, UnderlyingInstrument_8);
    FIX::UnderlyingPx UnderlyingPx_8;
    UnderlyingPx_8.setString("1594275");
set_field(noUnderlyings_0_1, UnderlyingPx_8, UnderlyingInstrument_8);
    FIX::UnderlyingQty UnderlyingQty_8;
    UnderlyingQty_8.setString("4875555");
set_field(noUnderlyings_0_1, UnderlyingQty_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_862790566"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_791083849"}, UnderlyingInstrument_8);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_8;
    UnderlyingRepurchaseRate_8.setString("65.190000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{411012893}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_798681810"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_185104142"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1799295933"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1888037960"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1041991315"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1322425236"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_867878455"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1045934058"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1857556085"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_8);
    FIX::UnderlyingStartValue UnderlyingStartValue_8;
    UnderlyingStartValue_8.setString("6209044");
set_field(noUnderlyings_0_1, UnderlyingStartValue_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1533313309"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_8);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_8;
    UnderlyingStrikePrice_8.setString("16588986");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_8, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1503106389"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1785271476"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_796308423"}, UnderlyingInstrument_8);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_229590909"}, UnderlyingInstrument_8);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_8;
    UnderlyingUnitOfMeasureQty_8.setString("10857532");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_8, UnderlyingInstrument_8);
    all_values.push_back(UnderlyingInstrument_8);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_18;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_489555409"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_18);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_266214539"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_18);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_18);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_19;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1952875018"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_19);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_349237593"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_19);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_19);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_18;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_292946882"}, UnderlyingStipulations_NoUnderlyingStips_18);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1212028159"}, UnderlyingStipulations_NoUnderlyingStips_18);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_18);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_19;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1216725936"}, UnderlyingStipulations_NoUnderlyingStips_19);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_99969753"}, UnderlyingStipulations_NoUnderlyingStips_19);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_19);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_16;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2015407746"}, UndlyInstrumentParties_NoUndlyInstrumentParties_16);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_16);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1274853338}, UndlyInstrumentParties_NoUndlyInstrumentParties_16);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_16);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1327065211"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{449794926}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_28);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_9;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_476356865"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{225515622}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_159867363"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{573136276}, UnderlyingInstrument_9);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_9;
    UnderlyingAdjustedQuantity_9.setString("8464201");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_9, UnderlyingInstrument_9);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_9;
    UnderlyingAllocationPercent_9.setString("6.730000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_9, UnderlyingInstrument_9);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_9;
    UnderlyingAttachmentPoint_9.setString("98.730000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1925191203"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_1204595695"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_112392614"}, UnderlyingInstrument_9);
    FIX::UnderlyingCapValue UnderlyingCapValue_9;
    UnderlyingCapValue_9.setString("15629790");
set_field(noUnderlyings_0_2, UnderlyingCapValue_9, UnderlyingInstrument_9);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_9;
    UnderlyingCashAmount_9.setString("20009041");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_9);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_9;
    UnderlyingContractMultiplier_9.setString("5012486");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1983604360}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_831538932"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_767463165"}, UnderlyingInstrument_9);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_9;
    UnderlyingCouponRate_9.setString("57.300000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1180776525"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_9);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_9;
    UnderlyingCurrentValue_9.setString("2453210");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_9, UnderlyingInstrument_9);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_9;
    UnderlyingDetachmentPoint_9.setString("75.400000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_9, UnderlyingInstrument_9);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_9;
    UnderlyingDirtyPrice_9.setString("344287");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_9, UnderlyingInstrument_9);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_9;
    UnderlyingEndPrice_9.setString("18683620");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_9, UnderlyingInstrument_9);
    FIX::UnderlyingEndValue UnderlyingEndValue_9;
    UnderlyingEndValue_9.setString("1302716");
set_field(noUnderlyings_0_2, UnderlyingEndValue_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{319502614}, UnderlyingInstrument_9);
    FIX::UnderlyingFXRate UnderlyingFXRate_9;
    UnderlyingFXRate_9.setString("9957317");
set_field(noUnderlyings_0_2, UnderlyingFXRate_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_9);
    FIX::UnderlyingFactor UnderlyingFactor_9;
    UnderlyingFactor_9.setString("16465678");
set_field(noUnderlyings_0_2, UnderlyingFactor_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1445526705}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_215106913"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1872083448"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_1605394069"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_788243189"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_571019920"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1151091094"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1545013062"}, UnderlyingInstrument_9);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_9;
    UnderlyingNotionalPercentageOutstanding_9.setString("74.750000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_9);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_9;
    UnderlyingOriginalNotionalPercentageOutstanding_9.setString("56.770000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1911706507"}, UnderlyingInstrument_9);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_9;
    UnderlyingPriceUnitOfMeasureQty_9.setString("616236");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{1999389200}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{265471485}, UnderlyingInstrument_9);
    FIX::UnderlyingPx UnderlyingPx_9;
    UnderlyingPx_9.setString("20452279");
set_field(noUnderlyings_0_2, UnderlyingPx_9, UnderlyingInstrument_9);
    FIX::UnderlyingQty UnderlyingQty_9;
    UnderlyingQty_9.setString("6834444");
set_field(noUnderlyings_0_2, UnderlyingQty_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1032934651"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1686740055"}, UnderlyingInstrument_9);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_9;
    UnderlyingRepurchaseRate_9.setString("10.100000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{78556255}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_1621199020"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_2109542047"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_340903795"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1655627738"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1830420489"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_471175433"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1975130353"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_678668620"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_209925481"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_9);
    FIX::UnderlyingStartValue UnderlyingStartValue_9;
    UnderlyingStartValue_9.setString("21241953");
set_field(noUnderlyings_0_2, UnderlyingStartValue_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_425032394"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_9);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_9;
    UnderlyingStrikePrice_9.setString("12132755");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_9, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1769834251"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_585713193"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_610804998"}, UnderlyingInstrument_9);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_2118561727"}, UnderlyingInstrument_9);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_9;
    UnderlyingUnitOfMeasureQty_9.setString("7939163");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_9, UnderlyingInstrument_9);
    all_values.push_back(UnderlyingInstrument_9);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_20;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1882784586"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_20);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_855539947"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_20);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_20);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_21;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_2120116228"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_21);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_772423"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_21);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_21);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_20;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_656077065"}, UnderlyingStipulations_NoUnderlyingStips_20);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_1033707074"}, UnderlyingStipulations_NoUnderlyingStips_20);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_20);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_17;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_372814427"}, UndlyInstrumentParties_NoUndlyInstrumentParties_17);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_17);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1913739698}, UndlyInstrumentParties_NoUndlyInstrumentParties_17);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_17);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1453167124"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1421883789}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_17809668"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1924342557}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1249530494"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{696478288}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_18;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2134268038"}, UndlyInstrumentParties_NoUndlyInstrumentParties_18);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_18);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{673189966}, UndlyInstrumentParties_NoUndlyInstrumentParties_18);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_18);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1775075708"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{107812065}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1625092369"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1397426311}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_33);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_693525258"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{88413719}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_34);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_2;
  FIX::Yield Yield_2;
  Yield_2.setString("43.900000");
set_field(msg, Yield_2, YieldData_2);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1487441593"}, YieldData_2);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_209140747"}, YieldData_2);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_2;
  YieldRedemptionPrice_2.setString("11038053");
set_field(msg, YieldRedemptionPrice_2, YieldData_2);
  set_field(msg, FIX::YieldRedemptionPriceType{195497892}, YieldData_2);
  set_field(msg, FIX::YieldType{"STRING_GROSS"}, YieldData_2);
  all_values.push_back(YieldData_2);
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
