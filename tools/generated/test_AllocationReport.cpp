#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

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
  AccruedInterestAmt_2.setString("20940661");
  msg.set(AccruedInterestAmt_2);
  AllocationReport_0.insert(AccruedInterestAmt_2.getString());
  FIX::AccruedInterestRate AccruedInterestRate_2;
  AccruedInterestRate_2.setString("29.230000");
  msg.set(AccruedInterestRate_2);
  AllocationReport_0.insert(AccruedInterestRate_2.getString());
  FIX::AllocCancReplaceReason AllocCancReplaceReason_2(99);
  msg.set(AllocCancReplaceReason_2);
  AllocationReport_0.insert(AllocCancReplaceReason_2.getString());
  FIX::AllocID AllocID_3("STRING_588370824");
  msg.set(AllocID_3);
  AllocationReport_0.insert(AllocID_3.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_3(3);
  msg.set(AllocIntermedReqType_3);
  AllocationReport_0.insert(AllocIntermedReqType_3.getString());
  FIX::AllocLinkID AllocLinkID_2("STRING_707382073");
  msg.set(AllocLinkID_2);
  AllocationReport_0.insert(AllocLinkID_2.getString());
  FIX::AllocLinkType AllocLinkType_2(1);
  msg.set(AllocLinkType_2);
  AllocationReport_0.insert(AllocLinkType_2.getString());
  FIX::AllocNoOrdersType AllocNoOrdersType_2(0);
  msg.set(AllocNoOrdersType_2);
  AllocationReport_0.insert(AllocNoOrdersType_2.getString());
  FIX::AllocRejCode AllocRejCode_1(10);
  msg.set(AllocRejCode_1);
  AllocationReport_0.insert(AllocRejCode_1.getString());
  FIX::AllocReportID AllocReportID_0("STRING_728825879");
  msg.set(AllocReportID_0);
  AllocationReport_0.insert(AllocReportID_0.getString());
  FIX::AllocReportRefID AllocReportRefID_0("STRING_674943427");
  msg.set(AllocReportRefID_0);
  AllocationReport_0.insert(AllocReportRefID_0.getString());
  FIX::AllocReportType AllocReportType_0(10);
  msg.set(AllocReportType_0);
  AllocationReport_0.insert(AllocReportType_0.getString());
  FIX::AllocStatus AllocStatus_1(7);
  msg.set(AllocStatus_1);
  AllocationReport_0.insert(AllocStatus_1.getString());
  FIX::AllocTransType AllocTransType_2('3');
  msg.set(AllocTransType_2);
  AllocationReport_0.insert(AllocTransType_2.getString());
  FIX::AutoAcceptIndicator AutoAcceptIndicator_2(true);
  msg.set(AutoAcceptIndicator_2);
  AllocationReport_0.insert(AutoAcceptIndicator_2.getString());
  FIX::AvgParPx AvgParPx_2;
  AvgParPx_2.setString("17016849");
  msg.set(AvgParPx_2);
  AllocationReport_0.insert(AvgParPx_2.getString());
  FIX::AvgPx AvgPx_2;
  AvgPx_2.setString("7075540");
  msg.set(AvgPx_2);
  AllocationReport_0.insert(AvgPx_2.getString());
  FIX::AvgPxIndicator AvgPxIndicator_2(1);
  msg.set(AvgPxIndicator_2);
  AllocationReport_0.insert(AvgPxIndicator_2.getString());
  FIX::AvgPxPrecision AvgPxPrecision_2(373240367);
  msg.set(AvgPxPrecision_2);
  AllocationReport_0.insert(AvgPxPrecision_2.getString());
  FIX::BookingRefID BookingRefID_2("STRING_932096027");
  msg.set(BookingRefID_2);
  AllocationReport_0.insert(BookingRefID_2.getString());
  FIX::BookingType BookingType_2(2);
  msg.set(BookingType_2);
  AllocationReport_0.insert(BookingType_2.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_3("LOCALMKTDATE_1034981581");
  msg.set(ClearingBusinessDate_3);
  AllocationReport_0.insert(ClearingBusinessDate_3.getString());
  FIX::Concession Concession_2;
  Concession_2.setString("15075095");
  msg.set(Concession_2);
  AllocationReport_0.insert(Concession_2.getString());
  FIX::Currency Currency_3("CHF");
  msg.set(Currency_3);
  AllocationReport_0.insert(Currency_3.getString());
  FIX::CustOrderCapacity CustOrderCapacity_2(4);
  msg.set(CustOrderCapacity_2);
  AllocationReport_0.insert(CustOrderCapacity_2.getString());
  FIX::EncodedText EncodedText_4("DATA_816040990");
  msg.set(EncodedText_4);
  AllocationReport_0.insert(EncodedText_4.getString());
  FIX::EncodedTextLen EncodedTextLen_4(1511709908);
  msg.set(EncodedTextLen_4);
  AllocationReport_0.insert(EncodedTextLen_4.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_2;
  EndAccruedInterestAmt_2.setString("10748931");
  msg.set(EndAccruedInterestAmt_2);
  AllocationReport_0.insert(EndAccruedInterestAmt_2.getString());
  FIX::EndCash EndCash_2;
  EndCash_2.setString("9701703");
  msg.set(EndCash_2);
  AllocationReport_0.insert(EndCash_2.getString());
  FIX::GrossTradeAmt GrossTradeAmt_2;
  GrossTradeAmt_2.setString("4810634");
  msg.set(GrossTradeAmt_2);
  AllocationReport_0.insert(GrossTradeAmt_2.getString());
  FIX::InterestAtMaturity InterestAtMaturity_2;
  InterestAtMaturity_2.setString("10214756");
  msg.set(InterestAtMaturity_2);
  AllocationReport_0.insert(InterestAtMaturity_2.getString());
  FIX::LastFragment LastFragment_2(false);
  msg.set(LastFragment_2);
  AllocationReport_0.insert(LastFragment_2.getString());
  FIX::LastMkt LastMkt_3("EXCHANGE_1117953490");
  msg.set(LastMkt_3);
  AllocationReport_0.insert(LastMkt_3.getString());
  FIX::LegalConfirm LegalConfirm_2(true);
  msg.set(LegalConfirm_2);
  AllocationReport_0.insert(LegalConfirm_2.getString());
  FIX::MatchType MatchType_2("STRING_S2");
  msg.set(MatchType_2);
  AllocationReport_0.insert(MatchType_2.getString());
  FIX::MessageEventSource MessageEventSource_2("STRING_1825335563");
  msg.set(MessageEventSource_2);
  AllocationReport_0.insert(MessageEventSource_2.getString());
  FIX::MultiLegReportingType MultiLegReportingType_2('2');
  msg.set(MultiLegReportingType_2);
  AllocationReport_0.insert(MultiLegReportingType_2.getString());
  FIX::NetMoney NetMoney_2;
  NetMoney_2.setString("1249421");
  msg.set(NetMoney_2);
  AllocationReport_0.insert(NetMoney_2.getString());
  FIX::NumDaysInterest NumDaysInterest_2(1264983130);
  msg.set(NumDaysInterest_2);
  AllocationReport_0.insert(NumDaysInterest_2.getString());
  FIX::PositionEffect PositionEffect_2('F');
  msg.set(PositionEffect_2);
  AllocationReport_0.insert(PositionEffect_2.getString());
  FIX::PreviouslyReported PreviouslyReported_2(false);
  msg.set(PreviouslyReported_2);
  AllocationReport_0.insert(PreviouslyReported_2.getString());
  FIX::PriceType PriceType_2(14);
  msg.set(PriceType_2);
  AllocationReport_0.insert(PriceType_2.getString());
  FIX::QtyType QtyType_3(0);
  msg.set(QtyType_3);
  AllocationReport_0.insert(QtyType_3.getString());
  FIX::Quantity Quantity_3;
  Quantity_3.setString("5060473");
  msg.set(Quantity_3);
  AllocationReport_0.insert(Quantity_3.getString());
  FIX::RefAllocID RefAllocID_2("STRING_1785263722");
  msg.set(RefAllocID_2);
  AllocationReport_0.insert(RefAllocID_2.getString());
  FIX::ReversalIndicator ReversalIndicator_2(true);
  msg.set(ReversalIndicator_2);
  AllocationReport_0.insert(ReversalIndicator_2.getString());
  FIX::RndPx RndPx_2;
  RndPx_2.setString("12136013");
  msg.set(RndPx_2);
  AllocationReport_0.insert(RndPx_2.getString());
  FIX::SecondaryAllocID SecondaryAllocID_3("STRING_2120343998");
  msg.set(SecondaryAllocID_3);
  AllocationReport_0.insert(SecondaryAllocID_3.getString());
  FIX::SettlDate SettlDate_2("LOCALMKTDATE_2065015007");
  msg.set(SettlDate_2);
  AllocationReport_0.insert(SettlDate_2.getString());
  FIX::SettlType SettlType_2("STRING_5");
  msg.set(SettlType_2);
  AllocationReport_0.insert(SettlType_2.getString());
  FIX::Side Side_2('6');
  msg.set(Side_2);
  AllocationReport_0.insert(Side_2.getString());
  FIX::StartCash StartCash_2;
  StartCash_2.setString("9525129");
  msg.set(StartCash_2);
  AllocationReport_0.insert(StartCash_2.getString());
  FIX::Text Text_4("STRING_1505723214");
  msg.set(Text_4);
  AllocationReport_0.insert(Text_4.getString());
  FIX::TotNoAllocs TotNoAllocs_2(1607217993);
  msg.set(TotNoAllocs_2);
  AllocationReport_0.insert(TotNoAllocs_2.getString());
  FIX::TotalAccruedInterestAmt TotalAccruedInterestAmt_2;
  TotalAccruedInterestAmt_2.setString("3982417");
  msg.set(TotalAccruedInterestAmt_2);
  AllocationReport_0.insert(TotalAccruedInterestAmt_2.getString());
  FIX::TotalTakedown TotalTakedown_2;
  TotalTakedown_2.setString("20128034");
  msg.set(TotalTakedown_2);
  AllocationReport_0.insert(TotalTakedown_2.getString());
  FIX::TradeDate TradeDate_4("LOCALMKTDATE_275775336");
  msg.set(TradeDate_4);
  AllocationReport_0.insert(TradeDate_4.getString());
  FIX::TradeInputDevice TradeInputDevice_0("STRING_1909951623");
  msg.set(TradeInputDevice_0);
  AllocationReport_0.insert(TradeInputDevice_0.getString());
  FIX::TradeInputSource TradeInputSource_2("STRING_940213000");
  msg.set(TradeInputSource_2);
  AllocationReport_0.insert(TradeInputSource_2.getString());
  FIX::TradeOriginationDate TradeOriginationDate_2("LOCALMKTDATE_1245945724");
  msg.set(TradeOriginationDate_2);
  AllocationReport_0.insert(TradeOriginationDate_2.getString());
  FIX::TradingSessionID TradingSessionID_3("STRING_3");
  msg.set(TradingSessionID_3);
  AllocationReport_0.insert(TradingSessionID_3.getString());
  FIX::TradingSessionSubID TradingSessionSubID_3("STRING_2");
  msg.set(TradingSessionSubID_3);
  AllocationReport_0.insert(TradingSessionSubID_3.getString());
  FIX::TransactTime TransactTime_4(FIX::UTCTIMESTAMP(18, 45, 19, 9, 9, 2009));
  msg.set(TransactTime_4);
  AllocationReport_0.insert(TransactTime_4.getString());
  FIX::TrdSubType TrdSubType_2(17);
  msg.set(TrdSubType_2);
  AllocationReport_0.insert(TrdSubType_2.getString());
  FIX::TrdType TrdType_2(50);
  msg.set(TrdType_2);
  AllocationReport_0.insert(TrdType_2.getString());
  all_values.push_back(AllocationReport_0);

  all_compo_names.insert("AllocationReport");

  // AllocGrp
  // Group AllocGrp.NoAllocs
  {
    FIX50SP2::AllocationReport::NoAllocs noAllocs_0_0;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_4("STRING_1102826507");
    noAllocs_0_0.set(AllocAccount_4);
    AllocGrp_NoAllocs_2.insert(AllocAccount_4.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_2;
    AllocAccruedInterestAmt_2.setString("6496669");
    noAllocs_0_0.set(AllocAccruedInterestAmt_2);
    AllocGrp_NoAllocs_2.insert(AllocAccruedInterestAmt_2.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_4(1120547266);
    noAllocs_0_0.set(AllocAcctIDSource_4);
    AllocGrp_NoAllocs_2.insert(AllocAcctIDSource_4.getString());
    FIX::AllocAvgPx AllocAvgPx_2;
    AllocAvgPx_2.setString("7406065");
    noAllocs_0_0.set(AllocAvgPx_2);
    AllocGrp_NoAllocs_2.insert(AllocAvgPx_2.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_4("STRING_193957942");
    noAllocs_0_0.set(AllocCustomerCapacity_4);
    AllocGrp_NoAllocs_2.insert(AllocCustomerCapacity_4.getString());
    FIX::AllocHandlInst AllocHandlInst_2(3);
    noAllocs_0_0.set(AllocHandlInst_2);
    AllocGrp_NoAllocs_2.insert(AllocHandlInst_2.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_2;
    AllocInterestAtMaturity_2.setString("7134669");
    noAllocs_0_0.set(AllocInterestAtMaturity_2);
    AllocGrp_NoAllocs_2.insert(AllocInterestAtMaturity_2.getString());
    FIX::AllocMethod AllocMethod_2(2);
    noAllocs_0_0.set(AllocMethod_2);
    AllocGrp_NoAllocs_2.insert(AllocMethod_2.getString());
    FIX::AllocNetMoney AllocNetMoney_2;
    AllocNetMoney_2.setString("1848786");
    noAllocs_0_0.set(AllocNetMoney_2);
    AllocGrp_NoAllocs_2.insert(AllocNetMoney_2.getString());
    FIX::AllocPositionEffect AllocPositionEffect_4('C');
    noAllocs_0_0.set(AllocPositionEffect_4);
    AllocGrp_NoAllocs_2.insert(AllocPositionEffect_4.getString());
    FIX::AllocPrice AllocPrice_4;
    AllocPrice_4.setString("10640022");
    noAllocs_0_0.set(AllocPrice_4);
    AllocGrp_NoAllocs_2.insert(AllocPrice_4.getString());
    FIX::AllocQty AllocQty_4;
    AllocQty_4.setString("16906018");
    noAllocs_0_0.set(AllocQty_4);
    AllocGrp_NoAllocs_2.insert(AllocQty_4.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_2;
    AllocSettlCurrAmt_2.setString("942069");
    noAllocs_0_0.set(AllocSettlCurrAmt_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlCurrAmt_2.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_2("EUR");
    noAllocs_0_0.set(AllocSettlCurrency_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlCurrency_2.getString());
    FIX::AllocSettlInstType AllocSettlInstType_2(1);
    noAllocs_0_0.set(AllocSettlInstType_2);
    AllocGrp_NoAllocs_2.insert(AllocSettlInstType_2.getString());
    FIX::AllocText AllocText_4("STRING_1224711932");
    noAllocs_0_0.set(AllocText_4);
    AllocGrp_NoAllocs_2.insert(AllocText_4.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_2("STRING_M");
    noAllocs_0_0.set(ClearingFeeIndicator_2);
    AllocGrp_NoAllocs_2.insert(ClearingFeeIndicator_2.getString());
    FIX::EncodedAllocText EncodedAllocText_4("DATA_1615928055");
    noAllocs_0_0.set(EncodedAllocText_4);
    AllocGrp_NoAllocs_2.insert(EncodedAllocText_4.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_4(1468243324);
    noAllocs_0_0.set(EncodedAllocTextLen_4);
    AllocGrp_NoAllocs_2.insert(EncodedAllocTextLen_4.getString());
    FIX::IndividualAllocID IndividualAllocID_4("STRING_162856014");
    noAllocs_0_0.set(IndividualAllocID_4);
    AllocGrp_NoAllocs_2.insert(IndividualAllocID_4.getString());
    FIX::IndividualAllocType IndividualAllocType_4(1);
    noAllocs_0_0.set(IndividualAllocType_4);
    AllocGrp_NoAllocs_2.insert(IndividualAllocType_4.getString());
    FIX::MatchStatus MatchStatus_3('0');
    noAllocs_0_0.set(MatchStatus_3);
    AllocGrp_NoAllocs_2.insert(MatchStatus_3.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_2(false);
    noAllocs_0_0.set(NotifyBrokerOfCredit_2);
    AllocGrp_NoAllocs_2.insert(NotifyBrokerOfCredit_2.getString());
    FIX::ProcessCode ProcessCode_2('5');
    noAllocs_0_0.set(ProcessCode_2);
    AllocGrp_NoAllocs_2.insert(ProcessCode_2.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_4("STRING_1721581356");
    noAllocs_0_0.set(SecondaryIndividualAllocID_4);
    AllocGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_4.getString());
    FIX::SettlCurrAmt SettlCurrAmt_2;
    SettlCurrAmt_2.setString("1168251");
    noAllocs_0_0.set(SettlCurrAmt_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrAmt_2.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_2;
    SettlCurrFxRate_2.setString("16012599");
    noAllocs_0_0.set(SettlCurrFxRate_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrFxRate_2.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_2('M');
    noAllocs_0_0.set(SettlCurrFxRateCalc_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrFxRateCalc_2.getString());
    FIX::SettlCurrency SettlCurrency_2("EUR");
    noAllocs_0_0.set(SettlCurrency_2);
    AllocGrp_NoAllocs_2.insert(SettlCurrency_2.getString());
    all_values.push_back(AllocGrp_NoAllocs_2);
    all_compo_names.insert("AllocGrp.NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_5;
      FIX::ClearingInstruction ClearingInstruction_5(11);
      noClearingInstructions_0_1_0.set(ClearingInstruction_5);
      ClrInstGrp_NoClearingInstructions_5.insert(ClearingInstruction_5.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_5);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noAllocs_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_2;
    FIX::CommCurrency CommCurrency_2("CAN");
    noAllocs_0_0.set(CommCurrency_2);
    CommissionData_2.insert(CommCurrency_2.getString());
    FIX::CommType CommType_2('4');
    noAllocs_0_0.set(CommType_2);
    CommissionData_2.insert(CommType_2.getString());
    FIX::Commission Commission_2;
    Commission_2.setString("13754884");
    noAllocs_0_0.set(Commission_2);
    CommissionData_2.insert(Commission_2.getString());
    FIX::FundRenewWaiv FundRenewWaiv_2('N');
    noAllocs_0_0.set(FundRenewWaiv_2);
    CommissionData_2.insert(FundRenewWaiv_2.getString());
    all_values.push_back(CommissionData_2);
    all_compo_names.insert("CommissionData");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_4;
      FIX::MiscFeeAmt MiscFeeAmt_4;
      MiscFeeAmt_4.setString("15603670");
      noMiscFees_0_1_0.set(MiscFeeAmt_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeAmt_4.getString());
      FIX::MiscFeeBasis MiscFeeBasis_4(0);
      noMiscFees_0_1_0.set(MiscFeeBasis_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeBasis_4.getString());
      FIX::MiscFeeCurr MiscFeeCurr_4("CHF");
      noMiscFees_0_1_0.set(MiscFeeCurr_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeCurr_4.getString());
      FIX::MiscFeeType MiscFeeType_4("STRING_13");
      noMiscFees_0_1_0.set(MiscFeeType_4);
      MiscFeesGrp_NoMiscFees_4.insert(MiscFeeType_4.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_4);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_5;
      FIX::MiscFeeAmt MiscFeeAmt_5;
      MiscFeeAmt_5.setString("21102791");
      noMiscFees_0_1_1.set(MiscFeeAmt_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeAmt_5.getString());
      FIX::MiscFeeBasis MiscFeeBasis_5(2);
      noMiscFees_0_1_1.set(MiscFeeBasis_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeBasis_5.getString());
      FIX::MiscFeeCurr MiscFeeCurr_5("JPY");
      noMiscFees_0_1_1.set(MiscFeeCurr_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeCurr_5.getString());
      FIX::MiscFeeType MiscFeeType_5("STRING_11");
      noMiscFees_0_1_1.set(MiscFeeType_5);
      MiscFeesGrp_NoMiscFees_5.insert(MiscFeeType_5.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_5);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noAllocs_0_0.addGroup(noMiscFees_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_10;
      FIX::NestedPartyID NestedPartyID_10("STRING_508267152");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyID_10.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_10('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyIDSource_10.getString());
      FIX::NestedPartyRole NestedPartyRole_10(656946539);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_10);
      NestedParties_NoNestedPartyIDs_10.insert(NestedPartyRole_10.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_10);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_21;
        FIX::NestedPartySubID NestedPartySubID_21("STRING_462854161");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_21);
        NstdPtysSubGrp_NoNestedPartySubIDs_21.insert(NestedPartySubID_21.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_21(296108484);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_21);
        NstdPtysSubGrp_NoNestedPartySubIDs_21.insert(NestedPartySubIDType_21.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_21);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_11;
      FIX::NestedPartyID NestedPartyID_11("STRING_764609420");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyID_11.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_11('5');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyIDSource_11.getString());
      FIX::NestedPartyRole NestedPartyRole_11(1897368413);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_11);
      NestedParties_NoNestedPartyIDs_11.insert(NestedPartyRole_11.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_11);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_22;
        FIX::NestedPartySubID NestedPartySubID_22("STRING_1356081759");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_22);
        NstdPtysSubGrp_NoNestedPartySubIDs_22.insert(NestedPartySubID_22.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_22(1965644640);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_22);
        NstdPtysSubGrp_NoNestedPartySubIDs_22.insert(NestedPartySubIDType_22.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_22);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_12;
      FIX::NestedPartyID NestedPartyID_12("STRING_1329303903");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyID_12.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_12('6');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyIDSource_12.getString());
      FIX::NestedPartyRole NestedPartyRole_12(1006984485);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyRole_12.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_12);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_23;
        FIX::NestedPartySubID NestedPartySubID_23("STRING_107211199");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_23);
        NstdPtysSubGrp_NoNestedPartySubIDs_23.insert(NestedPartySubID_23.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_23(234989270);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_23);
        NstdPtysSubGrp_NoNestedPartySubIDs_23.insert(NestedPartySubIDType_23.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_23);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_24;
        FIX::NestedPartySubID NestedPartySubID_24("STRING_896537695");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_24);
        NstdPtysSubGrp_NoNestedPartySubIDs_24.insert(NestedPartySubID_24.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_24(1838727840);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_24);
        NstdPtysSubGrp_NoNestedPartySubIDs_24.insert(NestedPartySubIDType_24.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_24);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_2;
    FIX::SettlDeliveryType SettlDeliveryType_2(0);
    noAllocs_0_0.set(SettlDeliveryType_2);
    SettlInstructionsData_2.insert(SettlDeliveryType_2.getString());
    FIX::StandInstDbID StandInstDbID_2("STRING_1671360706");
    noAllocs_0_0.set(StandInstDbID_2);
    SettlInstructionsData_2.insert(StandInstDbID_2.getString());
    FIX::StandInstDbName StandInstDbName_2("STRING_339279427");
    noAllocs_0_0.set(StandInstDbName_2);
    SettlInstructionsData_2.insert(StandInstDbName_2.getString());
    FIX::StandInstDbType StandInstDbType_2(2);
    noAllocs_0_0.set(StandInstDbType_2);
    SettlInstructionsData_2.insert(StandInstDbType_2.getString());
    all_values.push_back(SettlInstructionsData_2);
    all_compo_names.insert("SettlInstructionsData");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_3;
      FIX::DlvyInstType DlvyInstType_3('S');
      noDlvyInst_0_1_0.set(DlvyInstType_3);
      DlvyInstGrp_NoDlvyInst_3.insert(DlvyInstType_3.getString());
      FIX::SettlInstSource SettlInstSource_3('1');
      noDlvyInst_0_1_0.set(SettlInstSource_3);
      DlvyInstGrp_NoDlvyInst_3.insert(SettlInstSource_3.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_3);
      all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_5;
        FIX::SettlPartyID SettlPartyID_5("STRING_1489582447");
        noSettlPartyIDs_0_0_2_0.set(SettlPartyID_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyID_5.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_5('2');
        noSettlPartyIDs_0_0_2_0.set(SettlPartyIDSource_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyIDSource_5.getString());
        FIX::SettlPartyRole SettlPartyRole_5(191892499);
        noSettlPartyIDs_0_0_2_0.set(SettlPartyRole_5);
        SettlParties_NoSettlPartyIDs_5.insert(SettlPartyRole_5.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_5);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_10;
          FIX::SettlPartySubID SettlPartySubID_10("STRING_999802474");
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubID_10);
          SettlPtysSubGrp_NoSettlPartySubIDs_10.insert(SettlPartySubID_10.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_10(848839038);
          noSettlPartySubIDs_0_0_0_3_0.set(SettlPartySubIDType_10);
          SettlPtysSubGrp_NoSettlPartySubIDs_10.insert(SettlPartySubIDType_10.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_10);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_11;
          FIX::SettlPartySubID SettlPartySubID_11("STRING_1040877663");
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubID_11);
          SettlPtysSubGrp_NoSettlPartySubIDs_11.insert(SettlPartySubID_11.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_11(1462656635);
          noSettlPartySubIDs_0_0_0_3_1.set(SettlPartySubIDType_11);
          SettlPtysSubGrp_NoSettlPartySubIDs_11.insert(SettlPartySubIDType_11.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_11);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_0_1_1;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_4;
      FIX::DlvyInstType DlvyInstType_4('C');
      noDlvyInst_0_1_1.set(DlvyInstType_4);
      DlvyInstGrp_NoDlvyInst_4.insert(DlvyInstType_4.getString());
      FIX::SettlInstSource SettlInstSource_4('3');
      noDlvyInst_0_1_1.set(SettlInstSource_4);
      DlvyInstGrp_NoDlvyInst_4.insert(SettlInstSource_4.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_4);
      all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_6;
        FIX::SettlPartyID SettlPartyID_6("STRING_894832287");
        noSettlPartyIDs_0_1_2_0.set(SettlPartyID_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyID_6.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_6('1');
        noSettlPartyIDs_0_1_2_0.set(SettlPartyIDSource_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyIDSource_6.getString());
        FIX::SettlPartyRole SettlPartyRole_6(1250934059);
        noSettlPartyIDs_0_1_2_0.set(SettlPartyRole_6);
        SettlParties_NoSettlPartyIDs_6.insert(SettlPartyRole_6.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_6);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_12;
          FIX::SettlPartySubID SettlPartySubID_12("STRING_1482850746");
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubID_12);
          SettlPtysSubGrp_NoSettlPartySubIDs_12.insert(SettlPartySubID_12.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_12(1885601567);
          noSettlPartySubIDs_0_1_0_3_0.set(SettlPartySubIDType_12);
          SettlPtysSubGrp_NoSettlPartySubIDs_12.insert(SettlPartySubIDType_12.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_12);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_13;
          FIX::SettlPartySubID SettlPartySubID_13("STRING_1719977764");
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubID_13);
          SettlPtysSubGrp_NoSettlPartySubIDs_13.insert(SettlPartySubID_13.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_13(91554431);
          noSettlPartySubIDs_0_1_0_3_1.set(SettlPartySubIDType_13);
          SettlPtysSubGrp_NoSettlPartySubIDs_13.insert(SettlPartySubIDType_13.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_13);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        noDlvyInst_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_0_1_2;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_5;
      FIX::DlvyInstType DlvyInstType_5('S');
      noDlvyInst_0_1_2.set(DlvyInstType_5);
      DlvyInstGrp_NoDlvyInst_5.insert(DlvyInstType_5.getString());
      FIX::SettlInstSource SettlInstSource_5('1');
      noDlvyInst_0_1_2.set(SettlInstSource_5);
      DlvyInstGrp_NoDlvyInst_5.insert(SettlInstSource_5.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_5);
      all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_7;
        FIX::SettlPartyID SettlPartyID_7("STRING_1684056959");
        noSettlPartyIDs_0_2_2_0.set(SettlPartyID_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyID_7.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_7('1');
        noSettlPartyIDs_0_2_2_0.set(SettlPartyIDSource_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyIDSource_7.getString());
        FIX::SettlPartyRole SettlPartyRole_7(511969185);
        noSettlPartyIDs_0_2_2_0.set(SettlPartyRole_7);
        SettlParties_NoSettlPartyIDs_7.insert(SettlPartyRole_7.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_7);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_14;
          FIX::SettlPartySubID SettlPartySubID_14("STRING_206714060");
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubID_14);
          SettlPtysSubGrp_NoSettlPartySubIDs_14.insert(SettlPartySubID_14.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_14(904876250);
          noSettlPartySubIDs_0_2_0_3_0.set(SettlPartySubIDType_14);
          SettlPtysSubGrp_NoSettlPartySubIDs_14.insert(SettlPartySubIDType_14.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_14);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_0);
        }
        noDlvyInst_0_1_2.addGroup(noSettlPartyIDs_0_2_2_0);
      }
      noAllocs_0_0.addGroup(noDlvyInst_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoAllocs noAllocs_0_1;
    // AllocGrp.NoAllocs
    multiset<string> AllocGrp_NoAllocs_3;
    FIX::AllocAccount AllocAccount_5("STRING_177927709");
    noAllocs_0_1.set(AllocAccount_5);
    AllocGrp_NoAllocs_3.insert(AllocAccount_5.getString());
    FIX::AllocAccruedInterestAmt AllocAccruedInterestAmt_3;
    AllocAccruedInterestAmt_3.setString("14699953");
    noAllocs_0_1.set(AllocAccruedInterestAmt_3);
    AllocGrp_NoAllocs_3.insert(AllocAccruedInterestAmt_3.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_5(389312004);
    noAllocs_0_1.set(AllocAcctIDSource_5);
    AllocGrp_NoAllocs_3.insert(AllocAcctIDSource_5.getString());
    FIX::AllocAvgPx AllocAvgPx_3;
    AllocAvgPx_3.setString("16675101");
    noAllocs_0_1.set(AllocAvgPx_3);
    AllocGrp_NoAllocs_3.insert(AllocAvgPx_3.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_5("STRING_1446367440");
    noAllocs_0_1.set(AllocCustomerCapacity_5);
    AllocGrp_NoAllocs_3.insert(AllocCustomerCapacity_5.getString());
    FIX::AllocHandlInst AllocHandlInst_3(2);
    noAllocs_0_1.set(AllocHandlInst_3);
    AllocGrp_NoAllocs_3.insert(AllocHandlInst_3.getString());
    FIX::AllocInterestAtMaturity AllocInterestAtMaturity_3;
    AllocInterestAtMaturity_3.setString("15178761");
    noAllocs_0_1.set(AllocInterestAtMaturity_3);
    AllocGrp_NoAllocs_3.insert(AllocInterestAtMaturity_3.getString());
    FIX::AllocMethod AllocMethod_3(3);
    noAllocs_0_1.set(AllocMethod_3);
    AllocGrp_NoAllocs_3.insert(AllocMethod_3.getString());
    FIX::AllocNetMoney AllocNetMoney_3;
    AllocNetMoney_3.setString("14300435");
    noAllocs_0_1.set(AllocNetMoney_3);
    AllocGrp_NoAllocs_3.insert(AllocNetMoney_3.getString());
    FIX::AllocPositionEffect AllocPositionEffect_5('R');
    noAllocs_0_1.set(AllocPositionEffect_5);
    AllocGrp_NoAllocs_3.insert(AllocPositionEffect_5.getString());
    FIX::AllocPrice AllocPrice_5;
    AllocPrice_5.setString("17613429");
    noAllocs_0_1.set(AllocPrice_5);
    AllocGrp_NoAllocs_3.insert(AllocPrice_5.getString());
    FIX::AllocQty AllocQty_5;
    AllocQty_5.setString("4275074");
    noAllocs_0_1.set(AllocQty_5);
    AllocGrp_NoAllocs_3.insert(AllocQty_5.getString());
    FIX::AllocSettlCurrAmt AllocSettlCurrAmt_3;
    AllocSettlCurrAmt_3.setString("692735");
    noAllocs_0_1.set(AllocSettlCurrAmt_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlCurrAmt_3.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_3("CHF");
    noAllocs_0_1.set(AllocSettlCurrency_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlCurrency_3.getString());
    FIX::AllocSettlInstType AllocSettlInstType_3(0);
    noAllocs_0_1.set(AllocSettlInstType_3);
    AllocGrp_NoAllocs_3.insert(AllocSettlInstType_3.getString());
    FIX::AllocText AllocText_5("STRING_759645611");
    noAllocs_0_1.set(AllocText_5);
    AllocGrp_NoAllocs_3.insert(AllocText_5.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_3("STRING_9");
    noAllocs_0_1.set(ClearingFeeIndicator_3);
    AllocGrp_NoAllocs_3.insert(ClearingFeeIndicator_3.getString());
    FIX::EncodedAllocText EncodedAllocText_5("DATA_1705671147");
    noAllocs_0_1.set(EncodedAllocText_5);
    AllocGrp_NoAllocs_3.insert(EncodedAllocText_5.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_5(497763531);
    noAllocs_0_1.set(EncodedAllocTextLen_5);
    AllocGrp_NoAllocs_3.insert(EncodedAllocTextLen_5.getString());
    FIX::IndividualAllocID IndividualAllocID_5("STRING_1607827099");
    noAllocs_0_1.set(IndividualAllocID_5);
    AllocGrp_NoAllocs_3.insert(IndividualAllocID_5.getString());
    FIX::IndividualAllocType IndividualAllocType_5(1);
    noAllocs_0_1.set(IndividualAllocType_5);
    AllocGrp_NoAllocs_3.insert(IndividualAllocType_5.getString());
    FIX::MatchStatus MatchStatus_4('2');
    noAllocs_0_1.set(MatchStatus_4);
    AllocGrp_NoAllocs_3.insert(MatchStatus_4.getString());
    FIX::NotifyBrokerOfCredit NotifyBrokerOfCredit_3(true);
    noAllocs_0_1.set(NotifyBrokerOfCredit_3);
    AllocGrp_NoAllocs_3.insert(NotifyBrokerOfCredit_3.getString());
    FIX::ProcessCode ProcessCode_3('0');
    noAllocs_0_1.set(ProcessCode_3);
    AllocGrp_NoAllocs_3.insert(ProcessCode_3.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_5("STRING_2027149609");
    noAllocs_0_1.set(SecondaryIndividualAllocID_5);
    AllocGrp_NoAllocs_3.insert(SecondaryIndividualAllocID_5.getString());
    FIX::SettlCurrAmt SettlCurrAmt_3;
    SettlCurrAmt_3.setString("8706665");
    noAllocs_0_1.set(SettlCurrAmt_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrAmt_3.getString());
    FIX::SettlCurrFxRate SettlCurrFxRate_3;
    SettlCurrFxRate_3.setString("11498032");
    noAllocs_0_1.set(SettlCurrFxRate_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrFxRate_3.getString());
    FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_3('D');
    noAllocs_0_1.set(SettlCurrFxRateCalc_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrFxRateCalc_3.getString());
    FIX::SettlCurrency SettlCurrency_3("USD");
    noAllocs_0_1.set(SettlCurrency_3);
    AllocGrp_NoAllocs_3.insert(SettlCurrency_3.getString());
    all_values.push_back(AllocGrp_NoAllocs_3);
    all_compo_names.insert("AllocGrp.NoAllocs");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::AllocationReport::NoAllocs::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_6;
      FIX::ClearingInstruction ClearingInstruction_6(10);
      noClearingInstructions_1_1_0.set(ClearingInstruction_6);
      ClrInstGrp_NoClearingInstructions_6.insert(ClearingInstruction_6.getString());
      all_values.push_back(ClrInstGrp_NoClearingInstructions_6);
      all_compo_names.insert("ClrInstGrp.NoClearingInstructions");

      noAllocs_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_3;
    FIX::CommCurrency CommCurrency_3("USD");
    noAllocs_0_1.set(CommCurrency_3);
    CommissionData_3.insert(CommCurrency_3.getString());
    FIX::CommType CommType_3('1');
    noAllocs_0_1.set(CommType_3);
    CommissionData_3.insert(CommType_3.getString());
    FIX::Commission Commission_3;
    Commission_3.setString("8777123");
    noAllocs_0_1.set(Commission_3);
    CommissionData_3.insert(Commission_3.getString());
    FIX::FundRenewWaiv FundRenewWaiv_3('Y');
    noAllocs_0_1.set(FundRenewWaiv_3);
    CommissionData_3.insert(FundRenewWaiv_3.getString());
    all_values.push_back(CommissionData_3);
    all_compo_names.insert("CommissionData");

    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_6;
      FIX::MiscFeeAmt MiscFeeAmt_6;
      MiscFeeAmt_6.setString("1602722");
      noMiscFees_1_1_0.set(MiscFeeAmt_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeAmt_6.getString());
      FIX::MiscFeeBasis MiscFeeBasis_6(2);
      noMiscFees_1_1_0.set(MiscFeeBasis_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeBasis_6.getString());
      FIX::MiscFeeCurr MiscFeeCurr_6("CAN");
      noMiscFees_1_1_0.set(MiscFeeCurr_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeCurr_6.getString());
      FIX::MiscFeeType MiscFeeType_6("STRING_10");
      noMiscFees_1_1_0.set(MiscFeeType_6);
      MiscFeesGrp_NoMiscFees_6.insert(MiscFeeType_6.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_6);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noAllocs_0_1.addGroup(noMiscFees_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_1_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_7;
      FIX::MiscFeeAmt MiscFeeAmt_7;
      MiscFeeAmt_7.setString("12675168");
      noMiscFees_1_1_1.set(MiscFeeAmt_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeAmt_7.getString());
      FIX::MiscFeeBasis MiscFeeBasis_7(0);
      noMiscFees_1_1_1.set(MiscFeeBasis_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeBasis_7.getString());
      FIX::MiscFeeCurr MiscFeeCurr_7("EUR");
      noMiscFees_1_1_1.set(MiscFeeCurr_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeCurr_7.getString());
      FIX::MiscFeeType MiscFeeType_7("STRING_11");
      noMiscFees_1_1_1.set(MiscFeeType_7);
      MiscFeesGrp_NoMiscFees_7.insert(MiscFeeType_7.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_7);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noAllocs_0_1.addGroup(noMiscFees_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoAllocs::NoMiscFees noMiscFees_1_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_8;
      FIX::MiscFeeAmt MiscFeeAmt_8;
      MiscFeeAmt_8.setString("12329006");
      noMiscFees_1_1_2.set(MiscFeeAmt_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeAmt_8.getString());
      FIX::MiscFeeBasis MiscFeeBasis_8(2);
      noMiscFees_1_1_2.set(MiscFeeBasis_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeBasis_8.getString());
      FIX::MiscFeeCurr MiscFeeCurr_8("CAN");
      noMiscFees_1_1_2.set(MiscFeeCurr_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeCurr_8.getString());
      FIX::MiscFeeType MiscFeeType_8("STRING_9");
      noMiscFees_1_1_2.set(MiscFeeType_8);
      MiscFeesGrp_NoMiscFees_8.insert(MiscFeeType_8.getString());
      all_values.push_back(MiscFeesGrp_NoMiscFees_8);
      all_compo_names.insert("MiscFeesGrp.NoMiscFees");

      noAllocs_0_1.addGroup(noMiscFees_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_13;
      FIX::NestedPartyID NestedPartyID_13("STRING_1520476590");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyID_13.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_13('6');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyIDSource_13.getString());
      FIX::NestedPartyRole NestedPartyRole_13(1396805558);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyRole_13.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_13);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_25;
        FIX::NestedPartySubID NestedPartySubID_25("STRING_355719672");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_25);
        NstdPtysSubGrp_NoNestedPartySubIDs_25.insert(NestedPartySubID_25.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_25(326702538);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_25);
        NstdPtysSubGrp_NoNestedPartySubIDs_25.insert(NestedPartySubIDType_25.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_25);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_26;
        FIX::NestedPartySubID NestedPartySubID_26("STRING_429992028");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_26);
        NstdPtysSubGrp_NoNestedPartySubIDs_26.insert(NestedPartySubID_26.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_26(289166080);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_26);
        NstdPtysSubGrp_NoNestedPartySubIDs_26.insert(NestedPartySubIDType_26.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_26);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_27;
        FIX::NestedPartySubID NestedPartySubID_27("STRING_726594895");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_27);
        NstdPtysSubGrp_NoNestedPartySubIDs_27.insert(NestedPartySubID_27.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_27(726499877);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_27);
        NstdPtysSubGrp_NoNestedPartySubIDs_27.insert(NestedPartySubIDType_27.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_27);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_3;
    FIX::SettlDeliveryType SettlDeliveryType_3(0);
    noAllocs_0_1.set(SettlDeliveryType_3);
    SettlInstructionsData_3.insert(SettlDeliveryType_3.getString());
    FIX::StandInstDbID StandInstDbID_3("STRING_425371043");
    noAllocs_0_1.set(StandInstDbID_3);
    SettlInstructionsData_3.insert(StandInstDbID_3.getString());
    FIX::StandInstDbName StandInstDbName_3("STRING_1604212229");
    noAllocs_0_1.set(StandInstDbName_3);
    SettlInstructionsData_3.insert(StandInstDbName_3.getString());
    FIX::StandInstDbType StandInstDbType_3(0);
    noAllocs_0_1.set(StandInstDbType_3);
    SettlInstructionsData_3.insert(StandInstDbType_3.getString());
    all_values.push_back(SettlInstructionsData_3);
    all_compo_names.insert("SettlInstructionsData");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst noDlvyInst_1_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_6;
      FIX::DlvyInstType DlvyInstType_6('C');
      noDlvyInst_1_1_0.set(DlvyInstType_6);
      DlvyInstGrp_NoDlvyInst_6.insert(DlvyInstType_6.getString());
      FIX::SettlInstSource SettlInstSource_6('2');
      noDlvyInst_1_1_0.set(SettlInstSource_6);
      DlvyInstGrp_NoDlvyInst_6.insert(SettlInstSource_6.getString());
      all_values.push_back(DlvyInstGrp_NoDlvyInst_6);
      all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_8;
        FIX::SettlPartyID SettlPartyID_8("STRING_204780488");
        noSettlPartyIDs_1_0_2_0.set(SettlPartyID_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyID_8.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_8('1');
        noSettlPartyIDs_1_0_2_0.set(SettlPartyIDSource_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyIDSource_8.getString());
        FIX::SettlPartyRole SettlPartyRole_8(1301671993);
        noSettlPartyIDs_1_0_2_0.set(SettlPartyRole_8);
        SettlParties_NoSettlPartyIDs_8.insert(SettlPartyRole_8.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_8);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_15;
          FIX::SettlPartySubID SettlPartySubID_15("STRING_928245677");
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubID_15);
          SettlPtysSubGrp_NoSettlPartySubIDs_15.insert(SettlPartySubID_15.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_15(1181350825);
          noSettlPartySubIDs_1_0_0_3_0.set(SettlPartySubIDType_15);
          SettlPtysSubGrp_NoSettlPartySubIDs_15.insert(SettlPartySubIDType_15.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_15);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_16;
          FIX::SettlPartySubID SettlPartySubID_16("STRING_1765384905");
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubID_16);
          SettlPtysSubGrp_NoSettlPartySubIDs_16.insert(SettlPartySubID_16.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_16(13662632);
          noSettlPartySubIDs_1_0_0_3_1.set(SettlPartySubIDType_16);
          SettlPtysSubGrp_NoSettlPartySubIDs_16.insert(SettlPartySubIDType_16.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_16);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_17;
          FIX::SettlPartySubID SettlPartySubID_17("STRING_1558793187");
          noSettlPartySubIDs_1_0_0_3_2.set(SettlPartySubID_17);
          SettlPtysSubGrp_NoSettlPartySubIDs_17.insert(SettlPartySubID_17.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_17(876213408);
          noSettlPartySubIDs_1_0_0_3_2.set(SettlPartySubIDType_17);
          SettlPtysSubGrp_NoSettlPartySubIDs_17.insert(SettlPartySubIDType_17.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_17);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_2);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_9;
        FIX::SettlPartyID SettlPartyID_9("STRING_896305166");
        noSettlPartyIDs_1_0_2_1.set(SettlPartyID_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyID_9.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_9('1');
        noSettlPartyIDs_1_0_2_1.set(SettlPartyIDSource_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyIDSource_9.getString());
        FIX::SettlPartyRole SettlPartyRole_9(1402352398);
        noSettlPartyIDs_1_0_2_1.set(SettlPartyRole_9);
        SettlParties_NoSettlPartyIDs_9.insert(SettlPartyRole_9.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_9);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_18;
          FIX::SettlPartySubID SettlPartySubID_18("STRING_732045525");
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubID_18);
          SettlPtysSubGrp_NoSettlPartySubIDs_18.insert(SettlPartySubID_18.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_18(651674308);
          noSettlPartySubIDs_1_0_1_3_0.set(SettlPartySubIDType_18);
          SettlPtysSubGrp_NoSettlPartySubIDs_18.insert(SettlPartySubIDType_18.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_18);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_10;
        FIX::SettlPartyID SettlPartyID_10("STRING_792094293");
        noSettlPartyIDs_1_0_2_2.set(SettlPartyID_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyID_10.getString());
        FIX::SettlPartyIDSource SettlPartyIDSource_10('1');
        noSettlPartyIDs_1_0_2_2.set(SettlPartyIDSource_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyIDSource_10.getString());
        FIX::SettlPartyRole SettlPartyRole_10(978376846);
        noSettlPartyIDs_1_0_2_2.set(SettlPartyRole_10);
        SettlParties_NoSettlPartyIDs_10.insert(SettlPartyRole_10.getString());
        all_values.push_back(SettlParties_NoSettlPartyIDs_10);
        all_compo_names.insert("SettlParties.NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::AllocationReport::NoAllocs::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_19;
          FIX::SettlPartySubID SettlPartySubID_19("STRING_1376931278");
          noSettlPartySubIDs_1_0_2_3_0.set(SettlPartySubID_19);
          SettlPtysSubGrp_NoSettlPartySubIDs_19.insert(SettlPartySubID_19.getString());
          FIX::SettlPartySubIDType SettlPartySubIDType_19(1704971741);
          noSettlPartySubIDs_1_0_2_3_0.set(SettlPartySubIDType_19);
          SettlPtysSubGrp_NoSettlPartySubIDs_19.insert(SettlPartySubIDType_19.getString());
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_19);
          all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_0);
        }
        noDlvyInst_1_1_0.addGroup(noSettlPartyIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noDlvyInst_1_1_0);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // ExecAllocGrp
  // Group ExecAllocGrp.NoExecs
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_0;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_3;
    FIX::ExecID ExecID_3("STRING_1119570275");
    noExecs_0_0.set(ExecID_3);
    ExecAllocGrp_NoExecs_3.insert(ExecID_3.getString());
    FIX::FirmTradeID FirmTradeID_3("STRING_2130342785");
    noExecs_0_0.set(FirmTradeID_3);
    ExecAllocGrp_NoExecs_3.insert(FirmTradeID_3.getString());
    FIX::LastCapacity LastCapacity_3('4');
    noExecs_0_0.set(LastCapacity_3);
    ExecAllocGrp_NoExecs_3.insert(LastCapacity_3.getString());
    FIX::LastParPx LastParPx_3;
    LastParPx_3.setString("18335582");
    noExecs_0_0.set(LastParPx_3);
    ExecAllocGrp_NoExecs_3.insert(LastParPx_3.getString());
    FIX::LastPx LastPx_3;
    LastPx_3.setString("4056925");
    noExecs_0_0.set(LastPx_3);
    ExecAllocGrp_NoExecs_3.insert(LastPx_3.getString());
    FIX::LastQty LastQty_3;
    LastQty_3.setString("10223156");
    noExecs_0_0.set(LastQty_3);
    ExecAllocGrp_NoExecs_3.insert(LastQty_3.getString());
    FIX::SecondaryExecID SecondaryExecID_3("STRING_1782681813");
    noExecs_0_0.set(SecondaryExecID_3);
    ExecAllocGrp_NoExecs_3.insert(SecondaryExecID_3.getString());
    FIX::TradeID TradeID_3("STRING_439847720");
    noExecs_0_0.set(TradeID_3);
    ExecAllocGrp_NoExecs_3.insert(TradeID_3.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_3);
    all_compo_names.insert("ExecAllocGrp.NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_1;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_4;
    FIX::ExecID ExecID_4("STRING_1227096094");
    noExecs_0_1.set(ExecID_4);
    ExecAllocGrp_NoExecs_4.insert(ExecID_4.getString());
    FIX::FirmTradeID FirmTradeID_4("STRING_1036214386");
    noExecs_0_1.set(FirmTradeID_4);
    ExecAllocGrp_NoExecs_4.insert(FirmTradeID_4.getString());
    FIX::LastCapacity LastCapacity_4('3');
    noExecs_0_1.set(LastCapacity_4);
    ExecAllocGrp_NoExecs_4.insert(LastCapacity_4.getString());
    FIX::LastParPx LastParPx_4;
    LastParPx_4.setString("11945122");
    noExecs_0_1.set(LastParPx_4);
    ExecAllocGrp_NoExecs_4.insert(LastParPx_4.getString());
    FIX::LastPx LastPx_4;
    LastPx_4.setString("19644600");
    noExecs_0_1.set(LastPx_4);
    ExecAllocGrp_NoExecs_4.insert(LastPx_4.getString());
    FIX::LastQty LastQty_4;
    LastQty_4.setString("7753868");
    noExecs_0_1.set(LastQty_4);
    ExecAllocGrp_NoExecs_4.insert(LastQty_4.getString());
    FIX::SecondaryExecID SecondaryExecID_4("STRING_812413556");
    noExecs_0_1.set(SecondaryExecID_4);
    ExecAllocGrp_NoExecs_4.insert(SecondaryExecID_4.getString());
    FIX::TradeID TradeID_4("STRING_1978122696");
    noExecs_0_1.set(TradeID_4);
    ExecAllocGrp_NoExecs_4.insert(TradeID_4.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_4);
    all_compo_names.insert("ExecAllocGrp.NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoExecs noExecs_0_2;
    // ExecAllocGrp.NoExecs
    multiset<string> ExecAllocGrp_NoExecs_5;
    FIX::ExecID ExecID_5("STRING_186696430");
    noExecs_0_2.set(ExecID_5);
    ExecAllocGrp_NoExecs_5.insert(ExecID_5.getString());
    FIX::FirmTradeID FirmTradeID_5("STRING_1688626964");
    noExecs_0_2.set(FirmTradeID_5);
    ExecAllocGrp_NoExecs_5.insert(FirmTradeID_5.getString());
    FIX::LastCapacity LastCapacity_5('3');
    noExecs_0_2.set(LastCapacity_5);
    ExecAllocGrp_NoExecs_5.insert(LastCapacity_5.getString());
    FIX::LastParPx LastParPx_5;
    LastParPx_5.setString("3185409");
    noExecs_0_2.set(LastParPx_5);
    ExecAllocGrp_NoExecs_5.insert(LastParPx_5.getString());
    FIX::LastPx LastPx_5;
    LastPx_5.setString("9434957");
    noExecs_0_2.set(LastPx_5);
    ExecAllocGrp_NoExecs_5.insert(LastPx_5.getString());
    FIX::LastQty LastQty_5;
    LastQty_5.setString("9962423");
    noExecs_0_2.set(LastQty_5);
    ExecAllocGrp_NoExecs_5.insert(LastQty_5.getString());
    FIX::SecondaryExecID SecondaryExecID_5("STRING_1050586508");
    noExecs_0_2.set(SecondaryExecID_5);
    ExecAllocGrp_NoExecs_5.insert(SecondaryExecID_5.getString());
    FIX::TradeID TradeID_5("STRING_1595170022");
    noExecs_0_2.set(TradeID_5);
    ExecAllocGrp_NoExecs_5.insert(TradeID_5.getString());
    all_values.push_back(ExecAllocGrp_NoExecs_5);
    all_compo_names.insert("ExecAllocGrp.NoExecs");

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_2;
  FIX::AgreementCurrency AgreementCurrency_2("USD");
  msg.set(AgreementCurrency_2);
  FinancingDetails_2.insert(AgreementCurrency_2.getString());
  FIX::AgreementDate AgreementDate_2("LOCALMKTDATE_426063221");
  msg.set(AgreementDate_2);
  FinancingDetails_2.insert(AgreementDate_2.getString());
  FIX::AgreementDesc AgreementDesc_2("STRING_862939289");
  msg.set(AgreementDesc_2);
  FinancingDetails_2.insert(AgreementDesc_2.getString());
  FIX::AgreementID AgreementID_2("STRING_1367799336");
  msg.set(AgreementID_2);
  FinancingDetails_2.insert(AgreementID_2.getString());
  FIX::DeliveryType DeliveryType_2(2);
  msg.set(DeliveryType_2);
  FinancingDetails_2.insert(DeliveryType_2.getString());
  FIX::EndDate EndDate_2("LOCALMKTDATE_664041840");
  msg.set(EndDate_2);
  FinancingDetails_2.insert(EndDate_2.getString());
  FIX::MarginRatio MarginRatio_2;
  MarginRatio_2.setString("59.630000");
  msg.set(MarginRatio_2);
  FinancingDetails_2.insert(MarginRatio_2.getString());
  FIX::StartDate StartDate_2("LOCALMKTDATE_2113894099");
  msg.set(StartDate_2);
  FinancingDetails_2.insert(StartDate_2.getString());
  FIX::TerminationType TerminationType_2(4);
  msg.set(TerminationType_2);
  FinancingDetails_2.insert(TerminationType_2.getString());
  all_values.push_back(FinancingDetails_2);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_8;
    FIX::EncodedLegIssuer EncodedLegIssuer_8("DATA_372103046");
    noLegs_0_0.set(EncodedLegIssuer_8);
    InstrumentLeg_8.insert(EncodedLegIssuer_8.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_8(944188577);
    noLegs_0_0.set(EncodedLegIssuerLen_8);
    InstrumentLeg_8.insert(EncodedLegIssuerLen_8.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_8("DATA_1808642423");
    noLegs_0_0.set(EncodedLegSecurityDesc_8);
    InstrumentLeg_8.insert(EncodedLegSecurityDesc_8.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_8(811950767);
    noLegs_0_0.set(EncodedLegSecurityDescLen_8);
    InstrumentLeg_8.insert(EncodedLegSecurityDescLen_8.getString());
    FIX::LegCFICode LegCFICode_8("STRING_23801023");
    noLegs_0_0.set(LegCFICode_8);
    InstrumentLeg_8.insert(LegCFICode_8.getString());
    FIX::LegContractMultiplier LegContractMultiplier_8;
    LegContractMultiplier_8.setString("6973731");
    noLegs_0_0.set(LegContractMultiplier_8);
    InstrumentLeg_8.insert(LegContractMultiplier_8.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_8(405986833);
    noLegs_0_0.set(LegContractMultiplierUnit_8);
    InstrumentLeg_8.insert(LegContractMultiplierUnit_8.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_8("MONTHYEAR_1218313322");
    noLegs_0_0.set(LegContractSettlMonth_8);
    InstrumentLeg_8.insert(LegContractSettlMonth_8.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_8("COUNTRY_514349578");
    noLegs_0_0.set(LegCountryOfIssue_8);
    InstrumentLeg_8.insert(LegCountryOfIssue_8.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_8("LOCALMKTDATE_1181373724");
    noLegs_0_0.set(LegCouponPaymentDate_8);
    InstrumentLeg_8.insert(LegCouponPaymentDate_8.getString());
    FIX::LegCouponRate LegCouponRate_8;
    LegCouponRate_8.setString("68.780000");
    noLegs_0_0.set(LegCouponRate_8);
    InstrumentLeg_8.insert(LegCouponRate_8.getString());
    FIX::LegCreditRating LegCreditRating_8("STRING_344988626");
    noLegs_0_0.set(LegCreditRating_8);
    InstrumentLeg_8.insert(LegCreditRating_8.getString());
    FIX::LegCurrency LegCurrency_8("CAN");
    noLegs_0_0.set(LegCurrency_8);
    InstrumentLeg_8.insert(LegCurrency_8.getString());
    FIX::LegDatedDate LegDatedDate_8("LOCALMKTDATE_1071932841");
    noLegs_0_0.set(LegDatedDate_8);
    InstrumentLeg_8.insert(LegDatedDate_8.getString());
    FIX::LegExerciseStyle LegExerciseStyle_8(1686611137);
    noLegs_0_0.set(LegExerciseStyle_8);
    InstrumentLeg_8.insert(LegExerciseStyle_8.getString());
    FIX::LegFactor LegFactor_8;
    LegFactor_8.setString("3678822");
    noLegs_0_0.set(LegFactor_8);
    InstrumentLeg_8.insert(LegFactor_8.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_8(2068175164);
    noLegs_0_0.set(LegFlowScheduleType_8);
    InstrumentLeg_8.insert(LegFlowScheduleType_8.getString());
    FIX::LegInstrRegistry LegInstrRegistry_8("STRING_589713997");
    noLegs_0_0.set(LegInstrRegistry_8);
    InstrumentLeg_8.insert(LegInstrRegistry_8.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_8("LOCALMKTDATE_1963052284");
    noLegs_0_0.set(LegInterestAccrualDate_8);
    InstrumentLeg_8.insert(LegInterestAccrualDate_8.getString());
    FIX::LegIssueDate LegIssueDate_8("LOCALMKTDATE_1709028132");
    noLegs_0_0.set(LegIssueDate_8);
    InstrumentLeg_8.insert(LegIssueDate_8.getString());
    FIX::LegIssuer LegIssuer_8("STRING_580582055");
    noLegs_0_0.set(LegIssuer_8);
    InstrumentLeg_8.insert(LegIssuer_8.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_8("STRING_241631857");
    noLegs_0_0.set(LegLocaleOfIssue_8);
    InstrumentLeg_8.insert(LegLocaleOfIssue_8.getString());
    FIX::LegMaturityDate LegMaturityDate_8("LOCALMKTDATE_424483773");
    noLegs_0_0.set(LegMaturityDate_8);
    InstrumentLeg_8.insert(LegMaturityDate_8.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_8("MONTHYEAR_1948381391");
    noLegs_0_0.set(LegMaturityMonthYear_8);
    InstrumentLeg_8.insert(LegMaturityMonthYear_8.getString());
    FIX::LegMaturityTime LegMaturityTime_8("TZTIMEONLY_225183171");
    noLegs_0_0.set(LegMaturityTime_8);
    InstrumentLeg_8.insert(LegMaturityTime_8.getString());
    FIX::LegOptAttribute LegOptAttribute_8('1');
    noLegs_0_0.set(LegOptAttribute_8);
    InstrumentLeg_8.insert(LegOptAttribute_8.getString());
    FIX::LegOptionRatio LegOptionRatio_8;
    LegOptionRatio_8.setString("1407837");
    noLegs_0_0.set(LegOptionRatio_8);
    InstrumentLeg_8.insert(LegOptionRatio_8.getString());
    FIX::LegPool LegPool_8("STRING_191593623");
    noLegs_0_0.set(LegPool_8);
    InstrumentLeg_8.insert(LegPool_8.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_8("STRING_1010398585");
    noLegs_0_0.set(LegPriceUnitOfMeasure_8);
    InstrumentLeg_8.insert(LegPriceUnitOfMeasure_8.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_8;
    LegPriceUnitOfMeasureQty_8.setString("1667443");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_8);
    InstrumentLeg_8.insert(LegPriceUnitOfMeasureQty_8.getString());
    FIX::LegProduct LegProduct_8(563696669);
    noLegs_0_0.set(LegProduct_8);
    InstrumentLeg_8.insert(LegProduct_8.getString());
    FIX::LegPutOrCall LegPutOrCall_8(1954587162);
    noLegs_0_0.set(LegPutOrCall_8);
    InstrumentLeg_8.insert(LegPutOrCall_8.getString());
    FIX::LegRatioQty LegRatioQty_8;
    LegRatioQty_8.setString("19753867");
    noLegs_0_0.set(LegRatioQty_8);
    InstrumentLeg_8.insert(LegRatioQty_8.getString());
    FIX::LegRedemptionDate LegRedemptionDate_8("LOCALMKTDATE_1375647436");
    noLegs_0_0.set(LegRedemptionDate_8);
    InstrumentLeg_8.insert(LegRedemptionDate_8.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_8("STRING_1978388186");
    noLegs_0_0.set(LegRepoCollateralSecurityType_8);
    InstrumentLeg_8.insert(LegRepoCollateralSecurityType_8.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_8;
    LegRepurchaseRate_8.setString("62.550000");
    noLegs_0_0.set(LegRepurchaseRate_8);
    InstrumentLeg_8.insert(LegRepurchaseRate_8.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_8(1781634269);
    noLegs_0_0.set(LegRepurchaseTerm_8);
    InstrumentLeg_8.insert(LegRepurchaseTerm_8.getString());
    FIX::LegSecurityDesc LegSecurityDesc_8("STRING_1049217860");
    noLegs_0_0.set(LegSecurityDesc_8);
    InstrumentLeg_8.insert(LegSecurityDesc_8.getString());
    FIX::LegSecurityExchange LegSecurityExchange_8("EXCHANGE_1039625833");
    noLegs_0_0.set(LegSecurityExchange_8);
    InstrumentLeg_8.insert(LegSecurityExchange_8.getString());
    FIX::LegSecurityID LegSecurityID_8("STRING_815524345");
    noLegs_0_0.set(LegSecurityID_8);
    InstrumentLeg_8.insert(LegSecurityID_8.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_8("STRING_932461091");
    noLegs_0_0.set(LegSecurityIDSource_8);
    InstrumentLeg_8.insert(LegSecurityIDSource_8.getString());
    FIX::LegSecuritySubType LegSecuritySubType_8("STRING_1384614459");
    noLegs_0_0.set(LegSecuritySubType_8);
    InstrumentLeg_8.insert(LegSecuritySubType_8.getString());
    FIX::LegSecurityType LegSecurityType_8("STRING_36110852");
    noLegs_0_0.set(LegSecurityType_8);
    InstrumentLeg_8.insert(LegSecurityType_8.getString());
    FIX::LegSide LegSide_8('3');
    noLegs_0_0.set(LegSide_8);
    InstrumentLeg_8.insert(LegSide_8.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_8("STRING_309063652");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_8);
    InstrumentLeg_8.insert(LegStateOrProvinceOfIssue_8.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_8("CHF");
    noLegs_0_0.set(LegStrikeCurrency_8);
    InstrumentLeg_8.insert(LegStrikeCurrency_8.getString());
    FIX::LegStrikePrice LegStrikePrice_8;
    LegStrikePrice_8.setString("2297551");
    noLegs_0_0.set(LegStrikePrice_8);
    InstrumentLeg_8.insert(LegStrikePrice_8.getString());
    FIX::LegSymbol LegSymbol_8("STRING_164952338");
    noLegs_0_0.set(LegSymbol_8);
    InstrumentLeg_8.insert(LegSymbol_8.getString());
    FIX::LegSymbolSfx LegSymbolSfx_8("STRING_540298535");
    noLegs_0_0.set(LegSymbolSfx_8);
    InstrumentLeg_8.insert(LegSymbolSfx_8.getString());
    FIX::LegTimeUnit LegTimeUnit_8("STRING_1938783300");
    noLegs_0_0.set(LegTimeUnit_8);
    InstrumentLeg_8.insert(LegTimeUnit_8.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_8("STRING_745534393");
    noLegs_0_0.set(LegUnitOfMeasure_8);
    InstrumentLeg_8.insert(LegUnitOfMeasure_8.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_8;
    LegUnitOfMeasureQty_8.setString("7819303");
    noLegs_0_0.set(LegUnitOfMeasureQty_8);
    InstrumentLeg_8.insert(LegUnitOfMeasureQty_8.getString());
    all_values.push_back(InstrumentLeg_8);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_15;
      FIX::LegSecurityAltID LegSecurityAltID_15("STRING_546432136");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_15);
      LegSecAltIDGrp_NoLegSecurityAltID_15.insert(LegSecurityAltID_15.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_15("STRING_1007113564");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_15);
      LegSecAltIDGrp_NoLegSecurityAltID_15.insert(LegSecurityAltIDSource_15.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_15);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_16;
      FIX::LegSecurityAltID LegSecurityAltID_16("STRING_1304309039");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_16);
      LegSecAltIDGrp_NoLegSecurityAltID_16.insert(LegSecurityAltID_16.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_16("STRING_687215843");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_16);
      LegSecAltIDGrp_NoLegSecurityAltID_16.insert(LegSecurityAltIDSource_16.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_16);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_17;
      FIX::LegSecurityAltID LegSecurityAltID_17("STRING_1198707187");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_17);
      LegSecAltIDGrp_NoLegSecurityAltID_17.insert(LegSecurityAltID_17.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_17("STRING_167223976");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_17);
      LegSecAltIDGrp_NoLegSecurityAltID_17.insert(LegSecurityAltIDSource_17.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_17);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_9;
    FIX::EncodedLegIssuer EncodedLegIssuer_9("DATA_853960161");
    noLegs_0_1.set(EncodedLegIssuer_9);
    InstrumentLeg_9.insert(EncodedLegIssuer_9.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_9(1762403856);
    noLegs_0_1.set(EncodedLegIssuerLen_9);
    InstrumentLeg_9.insert(EncodedLegIssuerLen_9.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_9("DATA_2121811139");
    noLegs_0_1.set(EncodedLegSecurityDesc_9);
    InstrumentLeg_9.insert(EncodedLegSecurityDesc_9.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_9(681863254);
    noLegs_0_1.set(EncodedLegSecurityDescLen_9);
    InstrumentLeg_9.insert(EncodedLegSecurityDescLen_9.getString());
    FIX::LegCFICode LegCFICode_9("STRING_990567645");
    noLegs_0_1.set(LegCFICode_9);
    InstrumentLeg_9.insert(LegCFICode_9.getString());
    FIX::LegContractMultiplier LegContractMultiplier_9;
    LegContractMultiplier_9.setString("19527156");
    noLegs_0_1.set(LegContractMultiplier_9);
    InstrumentLeg_9.insert(LegContractMultiplier_9.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_9(1207139509);
    noLegs_0_1.set(LegContractMultiplierUnit_9);
    InstrumentLeg_9.insert(LegContractMultiplierUnit_9.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_9("MONTHYEAR_624718266");
    noLegs_0_1.set(LegContractSettlMonth_9);
    InstrumentLeg_9.insert(LegContractSettlMonth_9.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_9("COUNTRY_854449889");
    noLegs_0_1.set(LegCountryOfIssue_9);
    InstrumentLeg_9.insert(LegCountryOfIssue_9.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_9("LOCALMKTDATE_99281694");
    noLegs_0_1.set(LegCouponPaymentDate_9);
    InstrumentLeg_9.insert(LegCouponPaymentDate_9.getString());
    FIX::LegCouponRate LegCouponRate_9;
    LegCouponRate_9.setString("26.120000");
    noLegs_0_1.set(LegCouponRate_9);
    InstrumentLeg_9.insert(LegCouponRate_9.getString());
    FIX::LegCreditRating LegCreditRating_9("STRING_1786910980");
    noLegs_0_1.set(LegCreditRating_9);
    InstrumentLeg_9.insert(LegCreditRating_9.getString());
    FIX::LegCurrency LegCurrency_9("JPY");
    noLegs_0_1.set(LegCurrency_9);
    InstrumentLeg_9.insert(LegCurrency_9.getString());
    FIX::LegDatedDate LegDatedDate_9("LOCALMKTDATE_2143758618");
    noLegs_0_1.set(LegDatedDate_9);
    InstrumentLeg_9.insert(LegDatedDate_9.getString());
    FIX::LegExerciseStyle LegExerciseStyle_9(1792959806);
    noLegs_0_1.set(LegExerciseStyle_9);
    InstrumentLeg_9.insert(LegExerciseStyle_9.getString());
    FIX::LegFactor LegFactor_9;
    LegFactor_9.setString("10515918");
    noLegs_0_1.set(LegFactor_9);
    InstrumentLeg_9.insert(LegFactor_9.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_9(721004870);
    noLegs_0_1.set(LegFlowScheduleType_9);
    InstrumentLeg_9.insert(LegFlowScheduleType_9.getString());
    FIX::LegInstrRegistry LegInstrRegistry_9("STRING_2022714974");
    noLegs_0_1.set(LegInstrRegistry_9);
    InstrumentLeg_9.insert(LegInstrRegistry_9.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_9("LOCALMKTDATE_1216544143");
    noLegs_0_1.set(LegInterestAccrualDate_9);
    InstrumentLeg_9.insert(LegInterestAccrualDate_9.getString());
    FIX::LegIssueDate LegIssueDate_9("LOCALMKTDATE_1261303405");
    noLegs_0_1.set(LegIssueDate_9);
    InstrumentLeg_9.insert(LegIssueDate_9.getString());
    FIX::LegIssuer LegIssuer_9("STRING_1814014627");
    noLegs_0_1.set(LegIssuer_9);
    InstrumentLeg_9.insert(LegIssuer_9.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_9("STRING_1962078536");
    noLegs_0_1.set(LegLocaleOfIssue_9);
    InstrumentLeg_9.insert(LegLocaleOfIssue_9.getString());
    FIX::LegMaturityDate LegMaturityDate_9("LOCALMKTDATE_2043233798");
    noLegs_0_1.set(LegMaturityDate_9);
    InstrumentLeg_9.insert(LegMaturityDate_9.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_9("MONTHYEAR_2029798053");
    noLegs_0_1.set(LegMaturityMonthYear_9);
    InstrumentLeg_9.insert(LegMaturityMonthYear_9.getString());
    FIX::LegMaturityTime LegMaturityTime_9("TZTIMEONLY_361027024");
    noLegs_0_1.set(LegMaturityTime_9);
    InstrumentLeg_9.insert(LegMaturityTime_9.getString());
    FIX::LegOptAttribute LegOptAttribute_9('9');
    noLegs_0_1.set(LegOptAttribute_9);
    InstrumentLeg_9.insert(LegOptAttribute_9.getString());
    FIX::LegOptionRatio LegOptionRatio_9;
    LegOptionRatio_9.setString("11866234");
    noLegs_0_1.set(LegOptionRatio_9);
    InstrumentLeg_9.insert(LegOptionRatio_9.getString());
    FIX::LegPool LegPool_9("STRING_1048242868");
    noLegs_0_1.set(LegPool_9);
    InstrumentLeg_9.insert(LegPool_9.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_9("STRING_2101570901");
    noLegs_0_1.set(LegPriceUnitOfMeasure_9);
    InstrumentLeg_9.insert(LegPriceUnitOfMeasure_9.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_9;
    LegPriceUnitOfMeasureQty_9.setString("13538474");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_9);
    InstrumentLeg_9.insert(LegPriceUnitOfMeasureQty_9.getString());
    FIX::LegProduct LegProduct_9(1902203029);
    noLegs_0_1.set(LegProduct_9);
    InstrumentLeg_9.insert(LegProduct_9.getString());
    FIX::LegPutOrCall LegPutOrCall_9(1716491109);
    noLegs_0_1.set(LegPutOrCall_9);
    InstrumentLeg_9.insert(LegPutOrCall_9.getString());
    FIX::LegRatioQty LegRatioQty_9;
    LegRatioQty_9.setString("13281749");
    noLegs_0_1.set(LegRatioQty_9);
    InstrumentLeg_9.insert(LegRatioQty_9.getString());
    FIX::LegRedemptionDate LegRedemptionDate_9("LOCALMKTDATE_436582635");
    noLegs_0_1.set(LegRedemptionDate_9);
    InstrumentLeg_9.insert(LegRedemptionDate_9.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_9("STRING_559575106");
    noLegs_0_1.set(LegRepoCollateralSecurityType_9);
    InstrumentLeg_9.insert(LegRepoCollateralSecurityType_9.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_9;
    LegRepurchaseRate_9.setString("69.410000");
    noLegs_0_1.set(LegRepurchaseRate_9);
    InstrumentLeg_9.insert(LegRepurchaseRate_9.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_9(1643722144);
    noLegs_0_1.set(LegRepurchaseTerm_9);
    InstrumentLeg_9.insert(LegRepurchaseTerm_9.getString());
    FIX::LegSecurityDesc LegSecurityDesc_9("STRING_1184293373");
    noLegs_0_1.set(LegSecurityDesc_9);
    InstrumentLeg_9.insert(LegSecurityDesc_9.getString());
    FIX::LegSecurityExchange LegSecurityExchange_9("EXCHANGE_1987856830");
    noLegs_0_1.set(LegSecurityExchange_9);
    InstrumentLeg_9.insert(LegSecurityExchange_9.getString());
    FIX::LegSecurityID LegSecurityID_9("STRING_1743003838");
    noLegs_0_1.set(LegSecurityID_9);
    InstrumentLeg_9.insert(LegSecurityID_9.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_9("STRING_477052337");
    noLegs_0_1.set(LegSecurityIDSource_9);
    InstrumentLeg_9.insert(LegSecurityIDSource_9.getString());
    FIX::LegSecuritySubType LegSecuritySubType_9("STRING_1627284163");
    noLegs_0_1.set(LegSecuritySubType_9);
    InstrumentLeg_9.insert(LegSecuritySubType_9.getString());
    FIX::LegSecurityType LegSecurityType_9("STRING_1079416343");
    noLegs_0_1.set(LegSecurityType_9);
    InstrumentLeg_9.insert(LegSecurityType_9.getString());
    FIX::LegSide LegSide_9('1');
    noLegs_0_1.set(LegSide_9);
    InstrumentLeg_9.insert(LegSide_9.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_9("STRING_1623559133");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_9);
    InstrumentLeg_9.insert(LegStateOrProvinceOfIssue_9.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_9("USD");
    noLegs_0_1.set(LegStrikeCurrency_9);
    InstrumentLeg_9.insert(LegStrikeCurrency_9.getString());
    FIX::LegStrikePrice LegStrikePrice_9;
    LegStrikePrice_9.setString("1970803");
    noLegs_0_1.set(LegStrikePrice_9);
    InstrumentLeg_9.insert(LegStrikePrice_9.getString());
    FIX::LegSymbol LegSymbol_9("STRING_600123828");
    noLegs_0_1.set(LegSymbol_9);
    InstrumentLeg_9.insert(LegSymbol_9.getString());
    FIX::LegSymbolSfx LegSymbolSfx_9("STRING_2074058101");
    noLegs_0_1.set(LegSymbolSfx_9);
    InstrumentLeg_9.insert(LegSymbolSfx_9.getString());
    FIX::LegTimeUnit LegTimeUnit_9("STRING_1458383761");
    noLegs_0_1.set(LegTimeUnit_9);
    InstrumentLeg_9.insert(LegTimeUnit_9.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_9("STRING_266654807");
    noLegs_0_1.set(LegUnitOfMeasure_9);
    InstrumentLeg_9.insert(LegUnitOfMeasure_9.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_9;
    LegUnitOfMeasureQty_9.setString("18886529");
    noLegs_0_1.set(LegUnitOfMeasureQty_9);
    InstrumentLeg_9.insert(LegUnitOfMeasureQty_9.getString());
    all_values.push_back(InstrumentLeg_9);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_18;
      FIX::LegSecurityAltID LegSecurityAltID_18("STRING_148969212");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_18);
      LegSecAltIDGrp_NoLegSecurityAltID_18.insert(LegSecurityAltID_18.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_18("STRING_102196365");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_18);
      LegSecAltIDGrp_NoLegSecurityAltID_18.insert(LegSecurityAltIDSource_18.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_18);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_19;
      FIX::LegSecurityAltID LegSecurityAltID_19("STRING_109513977");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_19);
      LegSecAltIDGrp_NoLegSecurityAltID_19.insert(LegSecurityAltID_19.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_19("STRING_1335592656");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_19);
      LegSecAltIDGrp_NoLegSecurityAltID_19.insert(LegSecurityAltIDSource_19.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_19);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_10;
    FIX::EncodedLegIssuer EncodedLegIssuer_10("DATA_1150439233");
    noLegs_0_2.set(EncodedLegIssuer_10);
    InstrumentLeg_10.insert(EncodedLegIssuer_10.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_10(63601230);
    noLegs_0_2.set(EncodedLegIssuerLen_10);
    InstrumentLeg_10.insert(EncodedLegIssuerLen_10.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_10("DATA_541956429");
    noLegs_0_2.set(EncodedLegSecurityDesc_10);
    InstrumentLeg_10.insert(EncodedLegSecurityDesc_10.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_10(905158614);
    noLegs_0_2.set(EncodedLegSecurityDescLen_10);
    InstrumentLeg_10.insert(EncodedLegSecurityDescLen_10.getString());
    FIX::LegCFICode LegCFICode_10("STRING_1780092339");
    noLegs_0_2.set(LegCFICode_10);
    InstrumentLeg_10.insert(LegCFICode_10.getString());
    FIX::LegContractMultiplier LegContractMultiplier_10;
    LegContractMultiplier_10.setString("18701313");
    noLegs_0_2.set(LegContractMultiplier_10);
    InstrumentLeg_10.insert(LegContractMultiplier_10.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_10(1341741249);
    noLegs_0_2.set(LegContractMultiplierUnit_10);
    InstrumentLeg_10.insert(LegContractMultiplierUnit_10.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_10("MONTHYEAR_192183798");
    noLegs_0_2.set(LegContractSettlMonth_10);
    InstrumentLeg_10.insert(LegContractSettlMonth_10.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_10("COUNTRY_856054634");
    noLegs_0_2.set(LegCountryOfIssue_10);
    InstrumentLeg_10.insert(LegCountryOfIssue_10.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_10("LOCALMKTDATE_837979745");
    noLegs_0_2.set(LegCouponPaymentDate_10);
    InstrumentLeg_10.insert(LegCouponPaymentDate_10.getString());
    FIX::LegCouponRate LegCouponRate_10;
    LegCouponRate_10.setString("71.710000");
    noLegs_0_2.set(LegCouponRate_10);
    InstrumentLeg_10.insert(LegCouponRate_10.getString());
    FIX::LegCreditRating LegCreditRating_10("STRING_696427817");
    noLegs_0_2.set(LegCreditRating_10);
    InstrumentLeg_10.insert(LegCreditRating_10.getString());
    FIX::LegCurrency LegCurrency_10("JPY");
    noLegs_0_2.set(LegCurrency_10);
    InstrumentLeg_10.insert(LegCurrency_10.getString());
    FIX::LegDatedDate LegDatedDate_10("LOCALMKTDATE_176228332");
    noLegs_0_2.set(LegDatedDate_10);
    InstrumentLeg_10.insert(LegDatedDate_10.getString());
    FIX::LegExerciseStyle LegExerciseStyle_10(1512916279);
    noLegs_0_2.set(LegExerciseStyle_10);
    InstrumentLeg_10.insert(LegExerciseStyle_10.getString());
    FIX::LegFactor LegFactor_10;
    LegFactor_10.setString("16594516");
    noLegs_0_2.set(LegFactor_10);
    InstrumentLeg_10.insert(LegFactor_10.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_10(1799787465);
    noLegs_0_2.set(LegFlowScheduleType_10);
    InstrumentLeg_10.insert(LegFlowScheduleType_10.getString());
    FIX::LegInstrRegistry LegInstrRegistry_10("STRING_90325132");
    noLegs_0_2.set(LegInstrRegistry_10);
    InstrumentLeg_10.insert(LegInstrRegistry_10.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_10("LOCALMKTDATE_369481971");
    noLegs_0_2.set(LegInterestAccrualDate_10);
    InstrumentLeg_10.insert(LegInterestAccrualDate_10.getString());
    FIX::LegIssueDate LegIssueDate_10("LOCALMKTDATE_1996867821");
    noLegs_0_2.set(LegIssueDate_10);
    InstrumentLeg_10.insert(LegIssueDate_10.getString());
    FIX::LegIssuer LegIssuer_10("STRING_690448960");
    noLegs_0_2.set(LegIssuer_10);
    InstrumentLeg_10.insert(LegIssuer_10.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_10("STRING_296056424");
    noLegs_0_2.set(LegLocaleOfIssue_10);
    InstrumentLeg_10.insert(LegLocaleOfIssue_10.getString());
    FIX::LegMaturityDate LegMaturityDate_10("LOCALMKTDATE_1307767934");
    noLegs_0_2.set(LegMaturityDate_10);
    InstrumentLeg_10.insert(LegMaturityDate_10.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_10("MONTHYEAR_957103767");
    noLegs_0_2.set(LegMaturityMonthYear_10);
    InstrumentLeg_10.insert(LegMaturityMonthYear_10.getString());
    FIX::LegMaturityTime LegMaturityTime_10("TZTIMEONLY_37225765");
    noLegs_0_2.set(LegMaturityTime_10);
    InstrumentLeg_10.insert(LegMaturityTime_10.getString());
    FIX::LegOptAttribute LegOptAttribute_10('5');
    noLegs_0_2.set(LegOptAttribute_10);
    InstrumentLeg_10.insert(LegOptAttribute_10.getString());
    FIX::LegOptionRatio LegOptionRatio_10;
    LegOptionRatio_10.setString("11060729");
    noLegs_0_2.set(LegOptionRatio_10);
    InstrumentLeg_10.insert(LegOptionRatio_10.getString());
    FIX::LegPool LegPool_10("STRING_139422130");
    noLegs_0_2.set(LegPool_10);
    InstrumentLeg_10.insert(LegPool_10.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_10("STRING_623932174");
    noLegs_0_2.set(LegPriceUnitOfMeasure_10);
    InstrumentLeg_10.insert(LegPriceUnitOfMeasure_10.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_10;
    LegPriceUnitOfMeasureQty_10.setString("2941819");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_10);
    InstrumentLeg_10.insert(LegPriceUnitOfMeasureQty_10.getString());
    FIX::LegProduct LegProduct_10(1289861364);
    noLegs_0_2.set(LegProduct_10);
    InstrumentLeg_10.insert(LegProduct_10.getString());
    FIX::LegPutOrCall LegPutOrCall_10(687533404);
    noLegs_0_2.set(LegPutOrCall_10);
    InstrumentLeg_10.insert(LegPutOrCall_10.getString());
    FIX::LegRatioQty LegRatioQty_10;
    LegRatioQty_10.setString("8361384");
    noLegs_0_2.set(LegRatioQty_10);
    InstrumentLeg_10.insert(LegRatioQty_10.getString());
    FIX::LegRedemptionDate LegRedemptionDate_10("LOCALMKTDATE_47536330");
    noLegs_0_2.set(LegRedemptionDate_10);
    InstrumentLeg_10.insert(LegRedemptionDate_10.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_10("STRING_320142095");
    noLegs_0_2.set(LegRepoCollateralSecurityType_10);
    InstrumentLeg_10.insert(LegRepoCollateralSecurityType_10.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_10;
    LegRepurchaseRate_10.setString("61.110000");
    noLegs_0_2.set(LegRepurchaseRate_10);
    InstrumentLeg_10.insert(LegRepurchaseRate_10.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_10(1389277580);
    noLegs_0_2.set(LegRepurchaseTerm_10);
    InstrumentLeg_10.insert(LegRepurchaseTerm_10.getString());
    FIX::LegSecurityDesc LegSecurityDesc_10("STRING_512325893");
    noLegs_0_2.set(LegSecurityDesc_10);
    InstrumentLeg_10.insert(LegSecurityDesc_10.getString());
    FIX::LegSecurityExchange LegSecurityExchange_10("EXCHANGE_1414840745");
    noLegs_0_2.set(LegSecurityExchange_10);
    InstrumentLeg_10.insert(LegSecurityExchange_10.getString());
    FIX::LegSecurityID LegSecurityID_10("STRING_79773677");
    noLegs_0_2.set(LegSecurityID_10);
    InstrumentLeg_10.insert(LegSecurityID_10.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_10("STRING_1888803064");
    noLegs_0_2.set(LegSecurityIDSource_10);
    InstrumentLeg_10.insert(LegSecurityIDSource_10.getString());
    FIX::LegSecuritySubType LegSecuritySubType_10("STRING_2111268562");
    noLegs_0_2.set(LegSecuritySubType_10);
    InstrumentLeg_10.insert(LegSecuritySubType_10.getString());
    FIX::LegSecurityType LegSecurityType_10("STRING_513273613");
    noLegs_0_2.set(LegSecurityType_10);
    InstrumentLeg_10.insert(LegSecurityType_10.getString());
    FIX::LegSide LegSide_10('1');
    noLegs_0_2.set(LegSide_10);
    InstrumentLeg_10.insert(LegSide_10.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_10("STRING_140013246");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_10);
    InstrumentLeg_10.insert(LegStateOrProvinceOfIssue_10.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_10("CHF");
    noLegs_0_2.set(LegStrikeCurrency_10);
    InstrumentLeg_10.insert(LegStrikeCurrency_10.getString());
    FIX::LegStrikePrice LegStrikePrice_10;
    LegStrikePrice_10.setString("19398007");
    noLegs_0_2.set(LegStrikePrice_10);
    InstrumentLeg_10.insert(LegStrikePrice_10.getString());
    FIX::LegSymbol LegSymbol_10("STRING_2116515024");
    noLegs_0_2.set(LegSymbol_10);
    InstrumentLeg_10.insert(LegSymbol_10.getString());
    FIX::LegSymbolSfx LegSymbolSfx_10("STRING_1476298908");
    noLegs_0_2.set(LegSymbolSfx_10);
    InstrumentLeg_10.insert(LegSymbolSfx_10.getString());
    FIX::LegTimeUnit LegTimeUnit_10("STRING_1789184885");
    noLegs_0_2.set(LegTimeUnit_10);
    InstrumentLeg_10.insert(LegTimeUnit_10.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_10("STRING_659480337");
    noLegs_0_2.set(LegUnitOfMeasure_10);
    InstrumentLeg_10.insert(LegUnitOfMeasure_10.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_10;
    LegUnitOfMeasureQty_10.setString("17723553");
    noLegs_0_2.set(LegUnitOfMeasureQty_10);
    InstrumentLeg_10.insert(LegUnitOfMeasureQty_10.getString());
    all_values.push_back(InstrumentLeg_10);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_20;
      FIX::LegSecurityAltID LegSecurityAltID_20("STRING_1616584104");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_20);
      LegSecAltIDGrp_NoLegSecurityAltID_20.insert(LegSecurityAltID_20.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_20("STRING_1809581097");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_20);
      LegSecAltIDGrp_NoLegSecurityAltID_20.insert(LegSecurityAltIDSource_20.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_20);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_21;
      FIX::LegSecurityAltID LegSecurityAltID_21("STRING_1463887368");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_21);
      LegSecAltIDGrp_NoLegSecurityAltID_21.insert(LegSecurityAltID_21.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_21("STRING_575173436");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_21);
      LegSecAltIDGrp_NoLegSecurityAltID_21.insert(LegSecurityAltIDSource_21.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_21);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_22;
      FIX::LegSecurityAltID LegSecurityAltID_22("STRING_1949003228");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_22);
      LegSecAltIDGrp_NoLegSecurityAltID_22.insert(LegSecurityAltID_22.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_22("STRING_2087819542");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_22);
      LegSecAltIDGrp_NoLegSecurityAltID_22.insert(LegSecurityAltIDSource_22.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_22);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_4;
  FIX::AttachmentPoint AttachmentPoint_4;
  AttachmentPoint_4.setString("54.240000");
  msg.set(AttachmentPoint_4);
  Instrument_4.insert(AttachmentPoint_4.getString());
  FIX::CFICode CFICode_4("STRING_1091380944");
  msg.set(CFICode_4);
  Instrument_4.insert(CFICode_4.getString());
  FIX::CPProgram CPProgram_4(1);
  msg.set(CPProgram_4);
  Instrument_4.insert(CPProgram_4.getString());
  FIX::CPRegType CPRegType_4("STRING_1705493841");
  msg.set(CPRegType_4);
  Instrument_4.insert(CPRegType_4.getString());
  FIX::CapPrice CapPrice_4;
  CapPrice_4.setString("11389172");
  msg.set(CapPrice_4);
  Instrument_4.insert(CapPrice_4.getString());
  FIX::ContractMultiplier ContractMultiplier_4;
  ContractMultiplier_4.setString("9480113");
  msg.set(ContractMultiplier_4);
  Instrument_4.insert(ContractMultiplier_4.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_4(1);
  msg.set(ContractMultiplierUnit_4);
  Instrument_4.insert(ContractMultiplierUnit_4.getString());
  FIX::ContractSettlMonth ContractSettlMonth_4("MONTHYEAR_380711206");
  msg.set(ContractSettlMonth_4);
  Instrument_4.insert(ContractSettlMonth_4.getString());
  FIX::CountryOfIssue CountryOfIssue_4("COUNTRY_1460337287");
  msg.set(CountryOfIssue_4);
  Instrument_4.insert(CountryOfIssue_4.getString());
  FIX::CouponPaymentDate CouponPaymentDate_4("LOCALMKTDATE_1531637050");
  msg.set(CouponPaymentDate_4);
  Instrument_4.insert(CouponPaymentDate_4.getString());
  FIX::CouponRate CouponRate_4;
  CouponRate_4.setString("48.840000");
  msg.set(CouponRate_4);
  Instrument_4.insert(CouponRate_4.getString());
  FIX::CreditRating CreditRating_4("STRING_1201656703");
  msg.set(CreditRating_4);
  Instrument_4.insert(CreditRating_4.getString());
  FIX::DatedDate DatedDate_4("LOCALMKTDATE_1495421964");
  msg.set(DatedDate_4);
  Instrument_4.insert(DatedDate_4.getString());
  FIX::DetachmentPoint DetachmentPoint_4;
  DetachmentPoint_4.setString("84.970000");
  msg.set(DetachmentPoint_4);
  Instrument_4.insert(DetachmentPoint_4.getString());
  FIX::EncodedIssuer EncodedIssuer_4("DATA_649021980");
  msg.set(EncodedIssuer_4);
  Instrument_4.insert(EncodedIssuer_4.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_4(1635435211);
  msg.set(EncodedIssuerLen_4);
  Instrument_4.insert(EncodedIssuerLen_4.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_4("DATA_852464741");
  msg.set(EncodedSecurityDesc_4);
  Instrument_4.insert(EncodedSecurityDesc_4.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_4(1755838917);
  msg.set(EncodedSecurityDescLen_4);
  Instrument_4.insert(EncodedSecurityDescLen_4.getString());
  FIX::ExerciseStyle ExerciseStyle_4(0);
  msg.set(ExerciseStyle_4);
  Instrument_4.insert(ExerciseStyle_4.getString());
  FIX::Factor Factor_4;
  Factor_4.setString("8214961");
  msg.set(Factor_4);
  Instrument_4.insert(Factor_4.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_4(true);
  msg.set(FlexProductEligibilityIndicator_4);
  Instrument_4.insert(FlexProductEligibilityIndicator_4.getString());
  FIX::FlexibleIndicator FlexibleIndicator_4(true);
  msg.set(FlexibleIndicator_4);
  Instrument_4.insert(FlexibleIndicator_4.getString());
  FIX::FloorPrice FloorPrice_4;
  FloorPrice_4.setString("14809764");
  msg.set(FloorPrice_4);
  Instrument_4.insert(FloorPrice_4.getString());
  FIX::FlowScheduleType FlowScheduleType_4(2);
  msg.set(FlowScheduleType_4);
  Instrument_4.insert(FlowScheduleType_4.getString());
  FIX::InstrRegistry InstrRegistry_4("STRING_2018922683");
  msg.set(InstrRegistry_4);
  Instrument_4.insert(InstrRegistry_4.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_4('9');
  msg.set(InstrmtAssignmentMethod_4);
  Instrument_4.insert(InstrmtAssignmentMethod_4.getString());
  FIX::InterestAccrualDate InterestAccrualDate_4("LOCALMKTDATE_371623312");
  msg.set(InterestAccrualDate_4);
  Instrument_4.insert(InterestAccrualDate_4.getString());
  FIX::IssueDate IssueDate_4("LOCALMKTDATE_1335326403");
  msg.set(IssueDate_4);
  Instrument_4.insert(IssueDate_4.getString());
  FIX::Issuer Issuer_4("STRING_1525250347");
  msg.set(Issuer_4);
  Instrument_4.insert(Issuer_4.getString());
  FIX::ListMethod ListMethod_4(0);
  msg.set(ListMethod_4);
  Instrument_4.insert(ListMethod_4.getString());
  FIX::LocaleOfIssue LocaleOfIssue_4("STRING_1275662297");
  msg.set(LocaleOfIssue_4);
  Instrument_4.insert(LocaleOfIssue_4.getString());
  FIX::MaturityDate MaturityDate_4("LOCALMKTDATE_247122123");
  msg.set(MaturityDate_4);
  Instrument_4.insert(MaturityDate_4.getString());
  FIX::MaturityMonthYear MaturityMonthYear_4("MONTHYEAR_1264523836");
  msg.set(MaturityMonthYear_4);
  Instrument_4.insert(MaturityMonthYear_4.getString());
  FIX::MaturityTime MaturityTime_4("TZTIMEONLY_1903531595");
  msg.set(MaturityTime_4);
  Instrument_4.insert(MaturityTime_4.getString());
  FIX::MinPriceIncrement MinPriceIncrement_4;
  MinPriceIncrement_4.setString("19526159");
  msg.set(MinPriceIncrement_4);
  Instrument_4.insert(MinPriceIncrement_4.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_4;
  MinPriceIncrementAmount_4.setString("2559574");
  msg.set(MinPriceIncrementAmount_4);
  Instrument_4.insert(MinPriceIncrementAmount_4.getString());
  FIX::NTPositionLimit NTPositionLimit_4(704059340);
  msg.set(NTPositionLimit_4);
  Instrument_4.insert(NTPositionLimit_4.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_4;
  NotionalPercentageOutstanding_4.setString("22.690000");
  msg.set(NotionalPercentageOutstanding_4);
  Instrument_4.insert(NotionalPercentageOutstanding_4.getString());
  FIX::OptAttribute OptAttribute_4('6');
  msg.set(OptAttribute_4);
  Instrument_4.insert(OptAttribute_4.getString());
  FIX::OptPayoutAmount OptPayoutAmount_4;
  OptPayoutAmount_4.setString("169129");
  msg.set(OptPayoutAmount_4);
  Instrument_4.insert(OptPayoutAmount_4.getString());
  FIX::OptPayoutType OptPayoutType_4(2);
  msg.set(OptPayoutType_4);
  Instrument_4.insert(OptPayoutType_4.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_4;
  OriginalNotionalPercentageOutstanding_4.setString("35.530000");
  msg.set(OriginalNotionalPercentageOutstanding_4);
  Instrument_4.insert(OriginalNotionalPercentageOutstanding_4.getString());
  FIX::Pool Pool_4("STRING_1218569683");
  msg.set(Pool_4);
  Instrument_4.insert(Pool_4.getString());
  FIX::PositionLimit PositionLimit_4(801503987);
  msg.set(PositionLimit_4);
  Instrument_4.insert(PositionLimit_4.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_4("STRING_INT");
  msg.set(PriceQuoteMethod_4);
  Instrument_4.insert(PriceQuoteMethod_4.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_4("STRING_1867591663");
  msg.set(PriceUnitOfMeasure_4);
  Instrument_4.insert(PriceUnitOfMeasure_4.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_4;
  PriceUnitOfMeasureQty_4.setString("2894555");
  msg.set(PriceUnitOfMeasureQty_4);
  Instrument_4.insert(PriceUnitOfMeasureQty_4.getString());
  FIX::Product Product_5(13);
  msg.set(Product_5);
  Instrument_4.insert(Product_5.getString());
  FIX::ProductComplex ProductComplex_4("STRING_1475946932");
  msg.set(ProductComplex_4);
  Instrument_4.insert(ProductComplex_4.getString());
  FIX::PutOrCall PutOrCall_4(1);
  msg.set(PutOrCall_4);
  Instrument_4.insert(PutOrCall_4.getString());
  FIX::RedemptionDate RedemptionDate_4("LOCALMKTDATE_1597389260");
  msg.set(RedemptionDate_4);
  Instrument_4.insert(RedemptionDate_4.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_4("STRING_413117462");
  msg.set(RepoCollateralSecurityType_4);
  Instrument_4.insert(RepoCollateralSecurityType_4.getString());
  FIX::RepurchaseRate RepurchaseRate_4;
  RepurchaseRate_4.setString("76.890000");
  msg.set(RepurchaseRate_4);
  Instrument_4.insert(RepurchaseRate_4.getString());
  FIX::RepurchaseTerm RepurchaseTerm_4(930882067);
  msg.set(RepurchaseTerm_4);
  Instrument_4.insert(RepurchaseTerm_4.getString());
  FIX::RestructuringType RestructuringType_4("STRING_MR");
  msg.set(RestructuringType_4);
  Instrument_4.insert(RestructuringType_4.getString());
  FIX::SecurityDesc SecurityDesc_4("STRING_510616724");
  msg.set(SecurityDesc_4);
  Instrument_4.insert(SecurityDesc_4.getString());
  FIX::SecurityExchange SecurityExchange_4("EXCHANGE_1880958978");
  msg.set(SecurityExchange_4);
  Instrument_4.insert(SecurityExchange_4.getString());
  FIX::SecurityGroup SecurityGroup_4("STRING_1494266637");
  msg.set(SecurityGroup_4);
  Instrument_4.insert(SecurityGroup_4.getString());
  FIX::SecurityID SecurityID_4("STRING_1845943127");
  msg.set(SecurityID_4);
  Instrument_4.insert(SecurityID_4.getString());
  FIX::SecurityIDSource SecurityIDSource_4("STRING_C");
  msg.set(SecurityIDSource_4);
  Instrument_4.insert(SecurityIDSource_4.getString());
  FIX::SecurityStatus SecurityStatus_4("STRING_2");
  msg.set(SecurityStatus_4);
  Instrument_4.insert(SecurityStatus_4.getString());
  FIX::SecuritySubType SecuritySubType_4("STRING_974121776");
  msg.set(SecuritySubType_4);
  Instrument_4.insert(SecuritySubType_4.getString());
  FIX::SecurityType SecurityType_5("STRING_FADN");
  msg.set(SecurityType_5);
  Instrument_4.insert(SecurityType_5.getString());
  FIX::Seniority Seniority_4("STRING_SD");
  msg.set(Seniority_4);
  Instrument_4.insert(Seniority_4.getString());
  FIX::SettlMethod SettlMethod_4('P');
  msg.set(SettlMethod_4);
  Instrument_4.insert(SettlMethod_4.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_4("STRING_1310980116");
  msg.set(SettleOnOpenFlag_4);
  Instrument_4.insert(SettleOnOpenFlag_4.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_4("STRING_1040407179");
  msg.set(StateOrProvinceOfIssue_4);
  Instrument_4.insert(StateOrProvinceOfIssue_4.getString());
  FIX::StrikeCurrency StrikeCurrency_4("CHF");
  msg.set(StrikeCurrency_4);
  Instrument_4.insert(StrikeCurrency_4.getString());
  FIX::StrikeMultiplier StrikeMultiplier_4;
  StrikeMultiplier_4.setString("16770758");
  msg.set(StrikeMultiplier_4);
  Instrument_4.insert(StrikeMultiplier_4.getString());
  FIX::StrikePrice StrikePrice_4;
  StrikePrice_4.setString("14511420");
  msg.set(StrikePrice_4);
  Instrument_4.insert(StrikePrice_4.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_4(1);
  msg.set(StrikePriceBoundaryMethod_4);
  Instrument_4.insert(StrikePriceBoundaryMethod_4.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_4;
  StrikePriceBoundaryPrecision_4.setString("57.530000");
  msg.set(StrikePriceBoundaryPrecision_4);
  Instrument_4.insert(StrikePriceBoundaryPrecision_4.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_4(3);
  msg.set(StrikePriceDeterminationMethod_4);
  Instrument_4.insert(StrikePriceDeterminationMethod_4.getString());
  FIX::StrikeValue StrikeValue_4;
  StrikeValue_4.setString("13404947");
  msg.set(StrikeValue_4);
  Instrument_4.insert(StrikeValue_4.getString());
  FIX::Symbol Symbol_4("STRING_550174155");
  msg.set(Symbol_4);
  Instrument_4.insert(Symbol_4.getString());
  FIX::SymbolSfx SymbolSfx_4("STRING_WI");
  msg.set(SymbolSfx_4);
  Instrument_4.insert(SymbolSfx_4.getString());
  FIX::TimeUnit TimeUnit_4("STRING_Wk");
  msg.set(TimeUnit_4);
  Instrument_4.insert(TimeUnit_4.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_4(3);
  msg.set(UnderlyingPriceDeterminationMethod_4);
  Instrument_4.insert(UnderlyingPriceDeterminationMethod_4.getString());
  FIX::UnitOfMeasure UnitOfMeasure_4("STRING_Bu");
  msg.set(UnitOfMeasure_4);
  Instrument_4.insert(UnitOfMeasure_4.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_4;
  UnitOfMeasureQty_4.setString("11996744");
  msg.set(UnitOfMeasureQty_4);
  Instrument_4.insert(UnitOfMeasureQty_4.getString());
  FIX::ValuationMethod ValuationMethod_4("STRING_FUT");
  msg.set(ValuationMethod_4);
  Instrument_4.insert(ValuationMethod_4.getString());
  all_values.push_back(Instrument_4);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_10;
    FIX::ComplexEventCondition ComplexEventCondition_10(2);
    noComplexEvents_0_0.set(ComplexEventCondition_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventCondition_10.getString());
    FIX::ComplexEventPrice ComplexEventPrice_10;
    ComplexEventPrice_10.setString("17068549");
    noComplexEvents_0_0.set(ComplexEventPrice_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPrice_10.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_10(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceBoundaryMethod_10.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_10;
    ComplexEventPriceBoundaryPrecision_10.setString("52.420000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceBoundaryPrecision_10.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_10(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventPriceTimeType_10.getString());
    FIX::ComplexEventType ComplexEventType_10(6);
    noComplexEvents_0_0.set(ComplexEventType_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexEventType_10.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_10;
    ComplexOptPayoutAmount_10.setString("20479283");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_10);
    ComplexEvents_NoComplexEvents_10.insert(ComplexOptPayoutAmount_10.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_10);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_27;
      FIX::ComplexEventEndDate ComplexEventEndDate_27(FIX::UTCTIMESTAMP(18, 37, 52, 25, 6, 2002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_27);
      ComplexEventDates_NoComplexEventDates_27.insert(ComplexEventEndDate_27.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_27(FIX::UTCTIMESTAMP(7, 32, 53, 23, 7, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_27);
      ComplexEventDates_NoComplexEventDates_27.insert(ComplexEventStartDate_27.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_27);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_55;
        FIX::ComplexEventEndTime ComplexEventEndTime_55(FIX::UTCTIMEONLY(5, 34, 52));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_55);
        ComplexEventTimes_NoComplexEventTimes_55.insert(ComplexEventEndTime_55.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_55(FIX::UTCTIMEONLY(2, 35, 43));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_55);
        ComplexEventTimes_NoComplexEventTimes_55.insert(ComplexEventStartTime_55.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_55);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_28;
      FIX::ComplexEventEndDate ComplexEventEndDate_28(FIX::UTCTIMESTAMP(21, 9, 41, 1, 12, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_28);
      ComplexEventDates_NoComplexEventDates_28.insert(ComplexEventEndDate_28.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_28(FIX::UTCTIMESTAMP(19, 21, 19, 27, 7, 2010));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_28);
      ComplexEventDates_NoComplexEventDates_28.insert(ComplexEventStartDate_28.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_28);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_56;
        FIX::ComplexEventEndTime ComplexEventEndTime_56(FIX::UTCTIMEONLY(23, 0, 5));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_56);
        ComplexEventTimes_NoComplexEventTimes_56.insert(ComplexEventEndTime_56.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_56(FIX::UTCTIMEONLY(10, 8, 42));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_56);
        ComplexEventTimes_NoComplexEventTimes_56.insert(ComplexEventStartTime_56.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_56);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_29;
      FIX::ComplexEventEndDate ComplexEventEndDate_29(FIX::UTCTIMESTAMP(13, 8, 55, 16, 3, 2000));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_29);
      ComplexEventDates_NoComplexEventDates_29.insert(ComplexEventEndDate_29.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_29(FIX::UTCTIMESTAMP(2, 55, 21, 19, 9, 2000));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_29);
      ComplexEventDates_NoComplexEventDates_29.insert(ComplexEventStartDate_29.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_29);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_57;
        FIX::ComplexEventEndTime ComplexEventEndTime_57(FIX::UTCTIMEONLY(11, 59, 13));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_57);
        ComplexEventTimes_NoComplexEventTimes_57.insert(ComplexEventEndTime_57.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_57(FIX::UTCTIMEONLY(6, 30, 10));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_57);
        ComplexEventTimes_NoComplexEventTimes_57.insert(ComplexEventStartTime_57.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_57);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_58;
        FIX::ComplexEventEndTime ComplexEventEndTime_58(FIX::UTCTIMEONLY(5, 2, 55));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_58);
        ComplexEventTimes_NoComplexEventTimes_58.insert(ComplexEventEndTime_58.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_58(FIX::UTCTIMEONLY(12, 3, 35));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_58);
        ComplexEventTimes_NoComplexEventTimes_58.insert(ComplexEventStartTime_58.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_58);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_11;
    FIX::ComplexEventCondition ComplexEventCondition_11(1);
    noComplexEvents_0_1.set(ComplexEventCondition_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventCondition_11.getString());
    FIX::ComplexEventPrice ComplexEventPrice_11;
    ComplexEventPrice_11.setString("9504041");
    noComplexEvents_0_1.set(ComplexEventPrice_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPrice_11.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_11(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceBoundaryMethod_11.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_11;
    ComplexEventPriceBoundaryPrecision_11.setString("69.510000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceBoundaryPrecision_11.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_11(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventPriceTimeType_11.getString());
    FIX::ComplexEventType ComplexEventType_11(6);
    noComplexEvents_0_1.set(ComplexEventType_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexEventType_11.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_11;
    ComplexOptPayoutAmount_11.setString("20475588");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_11);
    ComplexEvents_NoComplexEvents_11.insert(ComplexOptPayoutAmount_11.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_11);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_30;
      FIX::ComplexEventEndDate ComplexEventEndDate_30(FIX::UTCTIMESTAMP(9, 2, 15, 18, 8, 2000));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_30);
      ComplexEventDates_NoComplexEventDates_30.insert(ComplexEventEndDate_30.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_30(FIX::UTCTIMESTAMP(10, 53, 38, 9, 4, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_30);
      ComplexEventDates_NoComplexEventDates_30.insert(ComplexEventStartDate_30.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_30);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_59;
        FIX::ComplexEventEndTime ComplexEventEndTime_59(FIX::UTCTIMEONLY(5, 6, 24));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_59);
        ComplexEventTimes_NoComplexEventTimes_59.insert(ComplexEventEndTime_59.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_59(FIX::UTCTIMEONLY(23, 20, 1));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_59);
        ComplexEventTimes_NoComplexEventTimes_59.insert(ComplexEventStartTime_59.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_59);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_60;
        FIX::ComplexEventEndTime ComplexEventEndTime_60(FIX::UTCTIMEONLY(17, 36, 46));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_60);
        ComplexEventTimes_NoComplexEventTimes_60.insert(ComplexEventEndTime_60.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_60(FIX::UTCTIMEONLY(18, 0, 48));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_60);
        ComplexEventTimes_NoComplexEventTimes_60.insert(ComplexEventStartTime_60.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_60);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_31;
      FIX::ComplexEventEndDate ComplexEventEndDate_31(FIX::UTCTIMESTAMP(10, 42, 54, 8, 2, 2006));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_31);
      ComplexEventDates_NoComplexEventDates_31.insert(ComplexEventEndDate_31.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_31(FIX::UTCTIMESTAMP(0, 33, 26, 5, 2, 2004));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_31);
      ComplexEventDates_NoComplexEventDates_31.insert(ComplexEventStartDate_31.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_31);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_61;
        FIX::ComplexEventEndTime ComplexEventEndTime_61(FIX::UTCTIMEONLY(8, 12, 59));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_61);
        ComplexEventTimes_NoComplexEventTimes_61.insert(ComplexEventEndTime_61.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_61(FIX::UTCTIMEONLY(11, 19, 43));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_61);
        ComplexEventTimes_NoComplexEventTimes_61.insert(ComplexEventStartTime_61.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_61);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_62;
        FIX::ComplexEventEndTime ComplexEventEndTime_62(FIX::UTCTIMEONLY(4, 11, 52));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_62);
        ComplexEventTimes_NoComplexEventTimes_62.insert(ComplexEventEndTime_62.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_62(FIX::UTCTIMEONLY(6, 53, 18));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_62);
        ComplexEventTimes_NoComplexEventTimes_62.insert(ComplexEventStartTime_62.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_62);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::AllocationReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_7;
    FIX::EventDate EventDate_7("LOCALMKTDATE_1649881195");
    noEvents_0_0.set(EventDate_7);
    EvntGrp_NoEvents_7.insert(EventDate_7.getString());
    FIX::EventPx EventPx_7;
    EventPx_7.setString("11232202");
    noEvents_0_0.set(EventPx_7);
    EvntGrp_NoEvents_7.insert(EventPx_7.getString());
    FIX::EventText EventText_7("STRING_1678566642");
    noEvents_0_0.set(EventText_7);
    EvntGrp_NoEvents_7.insert(EventText_7.getString());
    FIX::EventTime EventTime_7(FIX::UTCTIMESTAMP(18, 22, 7, 10, 9, 2004));
    noEvents_0_0.set(EventTime_7);
    EvntGrp_NoEvents_7.insert(EventTime_7.getString());
    FIX::EventType EventType_7(1);
    noEvents_0_0.set(EventType_7);
    EvntGrp_NoEvents_7.insert(EventType_7.getString());
    all_values.push_back(EvntGrp_NoEvents_7);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_7;
    FIX::InstrumentPartyID InstrumentPartyID_7("STRING_434337540");
    noInstrumentParties_0_0.set(InstrumentPartyID_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyID_7.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_7('8');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyIDSource_7.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_7(1396674995);
    noInstrumentParties_0_0.set(InstrumentPartyRole_7);
    InstrumentParties_NoInstrumentParties_7.insert(InstrumentPartyRole_7.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_7);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14;
      FIX::InstrumentPartySubID InstrumentPartySubID_14("STRING_1543411257");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_14);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14.insert(InstrumentPartySubID_14.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_14(177975746);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_14);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14.insert(InstrumentPartySubIDType_14.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_14);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15;
      FIX::InstrumentPartySubID InstrumentPartySubID_15("STRING_2117938430");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_15);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15.insert(InstrumentPartySubID_15.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_15(1001383140);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_15);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15.insert(InstrumentPartySubIDType_15.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_15);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16;
      FIX::InstrumentPartySubID InstrumentPartySubID_16("STRING_1824918645");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_16);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16.insert(InstrumentPartySubID_16.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_16(1698130225);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_16);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16.insert(InstrumentPartySubIDType_16.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_16);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_8;
    FIX::InstrumentPartyID InstrumentPartyID_8("STRING_402722158");
    noInstrumentParties_0_1.set(InstrumentPartyID_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyID_8.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_8('8');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyIDSource_8.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_8(764900429);
    noInstrumentParties_0_1.set(InstrumentPartyRole_8);
    InstrumentParties_NoInstrumentParties_8.insert(InstrumentPartyRole_8.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_8);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17;
      FIX::InstrumentPartySubID InstrumentPartySubID_17("STRING_182810808");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_17);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17.insert(InstrumentPartySubID_17.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_17(620336979);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_17);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17.insert(InstrumentPartySubIDType_17.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_17);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18;
      FIX::InstrumentPartySubID InstrumentPartySubID_18("STRING_134937688");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_18);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18.insert(InstrumentPartySubID_18.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_18(992469966);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_18);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18.insert(InstrumentPartySubIDType_18.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_18);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::AllocationReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_8;
    FIX::SecurityAltID SecurityAltID_8("STRING_1784818883");
    noSecurityAltID_0_0.set(SecurityAltID_8);
    SecAltIDGrp_NoSecurityAltID_8.insert(SecurityAltID_8.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_8("STRING_2115690187");
    noSecurityAltID_0_0.set(SecurityAltIDSource_8);
    SecAltIDGrp_NoSecurityAltID_8.insert(SecurityAltIDSource_8.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_8);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_8;
  FIX::SecurityXML SecurityXML_9("XMLDATA_492163682");
  msg.set(SecurityXML_9);
  FIX::SecurityXMLLen SecurityXMLLen_4(756120514);
  msg.set(SecurityXMLLen_4);
  FIX::SecurityXMLSchema SecurityXMLSchema_4("STRING_6333606");
  msg.set(SecurityXMLSchema_4);
  SecurityXML_8.insert(SecurityXMLSchema_4.getString());
  all_values.push_back(SecurityXML_8);
  all_compo_names.insert("SecurityXML");

  // InstrumentExtension
  multiset<string> InstrumentExtension_2;
  FIX::DeliveryForm DeliveryForm_2(1);
  msg.set(DeliveryForm_2);
  InstrumentExtension_2.insert(DeliveryForm_2.getString());
  FIX::PctAtRisk PctAtRisk_2;
  PctAtRisk_2.setString("32.810000");
  msg.set(PctAtRisk_2);
  InstrumentExtension_2.insert(PctAtRisk_2.getString());
  all_values.push_back(InstrumentExtension_2);
  all_compo_names.insert("InstrumentExtension");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::AllocationReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_4;
    FIX::InstrAttribType InstrAttribType_4(13);
    noInstrAttrib_0_0.set(InstrAttribType_4);
    AttrbGrp_NoInstrAttrib_4.insert(InstrAttribType_4.getString());
    FIX::InstrAttribValue InstrAttribValue_4("STRING_686695507");
    noInstrAttrib_0_0.set(InstrAttribValue_4);
    AttrbGrp_NoInstrAttrib_4.insert(InstrAttribValue_4.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_4);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::AllocationReport::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_3;
    FIX::ClOrdID ClOrdID_3("STRING_1235590205");
    noOrders_0_0.set(ClOrdID_3);
    OrdAllocGrp_NoOrders_3.insert(ClOrdID_3.getString());
    FIX::ListID ListID_3("STRING_1121033048");
    noOrders_0_0.set(ListID_3);
    OrdAllocGrp_NoOrders_3.insert(ListID_3.getString());
    FIX::OrderAvgPx OrderAvgPx_3;
    OrderAvgPx_3.setString("17465299");
    noOrders_0_0.set(OrderAvgPx_3);
    OrdAllocGrp_NoOrders_3.insert(OrderAvgPx_3.getString());
    FIX::OrderBookingQty OrderBookingQty_3;
    OrderBookingQty_3.setString("4847815");
    noOrders_0_0.set(OrderBookingQty_3);
    OrdAllocGrp_NoOrders_3.insert(OrderBookingQty_3.getString());
    FIX::OrderID OrderID_3("STRING_1973453476");
    noOrders_0_0.set(OrderID_3);
    OrdAllocGrp_NoOrders_3.insert(OrderID_3.getString());
    FIX::OrderQty OrderQty_3;
    OrderQty_3.setString("11424575");
    noOrders_0_0.set(OrderQty_3);
    OrdAllocGrp_NoOrders_3.insert(OrderQty_3.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_3("STRING_662757299");
    noOrders_0_0.set(SecondaryClOrdID_3);
    OrdAllocGrp_NoOrders_3.insert(SecondaryClOrdID_3.getString());
    FIX::SecondaryOrderID SecondaryOrderID_3("STRING_1943908259");
    noOrders_0_0.set(SecondaryOrderID_3);
    OrdAllocGrp_NoOrders_3.insert(SecondaryOrderID_3.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_3);
    all_compo_names.insert("OrdAllocGrp.NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_6;
      FIX::Nested2PartyID Nested2PartyID_6("STRING_340192297");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyID_6.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_6('1');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyIDSource_6.getString());
      FIX::Nested2PartyRole Nested2PartyRole_6(399079174);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_6);
      NestedParties2_NoNested2PartyIDs_6.insert(Nested2PartyRole_6.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_6);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_13;
        FIX::Nested2PartySubID Nested2PartySubID_13("STRING_111971617");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_13);
        NstdPtys2SubGrp_NoNested2PartySubIDs_13.insert(Nested2PartySubID_13.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_13(546294437);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_13);
        NstdPtys2SubGrp_NoNested2PartySubIDs_13.insert(Nested2PartySubIDType_13.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_13);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_7;
      FIX::Nested2PartyID Nested2PartyID_7("STRING_1368460002");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyID_7.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_7('7');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyIDSource_7.getString());
      FIX::Nested2PartyRole Nested2PartyRole_7(681232125);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_7);
      NestedParties2_NoNested2PartyIDs_7.insert(Nested2PartyRole_7.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_7);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_14;
        FIX::Nested2PartySubID Nested2PartySubID_14("STRING_1693389284");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_14);
        NstdPtys2SubGrp_NoNested2PartySubIDs_14.insert(Nested2PartySubID_14.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_14(318567360);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_14);
        NstdPtys2SubGrp_NoNested2PartySubIDs_14.insert(Nested2PartySubIDType_14.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_14);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_15;
        FIX::Nested2PartySubID Nested2PartySubID_15("STRING_181652860");
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubID_15);
        NstdPtys2SubGrp_NoNested2PartySubIDs_15.insert(Nested2PartySubID_15.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_15(38069318);
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubIDType_15);
        NstdPtys2SubGrp_NoNested2PartySubIDs_15.insert(Nested2PartySubIDType_15.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_15);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_16;
        FIX::Nested2PartySubID Nested2PartySubID_16("STRING_1074687874");
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubID_16);
        NstdPtys2SubGrp_NoNested2PartySubIDs_16.insert(Nested2PartySubID_16.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_16(187986466);
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubIDType_16);
        NstdPtys2SubGrp_NoNested2PartySubIDs_16.insert(Nested2PartySubIDType_16.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_16);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_8;
      FIX::Nested2PartyID Nested2PartyID_8("STRING_1774329182");
      noNested2PartyIDs_0_1_2.set(Nested2PartyID_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyID_8.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_8('6');
      noNested2PartyIDs_0_1_2.set(Nested2PartyIDSource_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyIDSource_8.getString());
      FIX::Nested2PartyRole Nested2PartyRole_8(1703866163);
      noNested2PartyIDs_0_1_2.set(Nested2PartyRole_8);
      NestedParties2_NoNested2PartyIDs_8.insert(Nested2PartyRole_8.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_8);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_17;
        FIX::Nested2PartySubID Nested2PartySubID_17("STRING_1310223015");
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubID_17);
        NstdPtys2SubGrp_NoNested2PartySubIDs_17.insert(Nested2PartySubID_17.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_17(485315543);
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubIDType_17);
        NstdPtys2SubGrp_NoNested2PartySubIDs_17.insert(Nested2PartySubIDType_17.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_17);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_18;
        FIX::Nested2PartySubID Nested2PartySubID_18("STRING_400068424");
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubID_18);
        NstdPtys2SubGrp_NoNested2PartySubIDs_18.insert(Nested2PartySubID_18.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_18(283772415);
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubIDType_18);
        NstdPtys2SubGrp_NoNested2PartySubIDs_18.insert(Nested2PartySubIDType_18.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_18);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_4;
    FIX::ClOrdID ClOrdID_4("STRING_84361809");
    noOrders_0_1.set(ClOrdID_4);
    OrdAllocGrp_NoOrders_4.insert(ClOrdID_4.getString());
    FIX::ListID ListID_4("STRING_884849977");
    noOrders_0_1.set(ListID_4);
    OrdAllocGrp_NoOrders_4.insert(ListID_4.getString());
    FIX::OrderAvgPx OrderAvgPx_4;
    OrderAvgPx_4.setString("1097422");
    noOrders_0_1.set(OrderAvgPx_4);
    OrdAllocGrp_NoOrders_4.insert(OrderAvgPx_4.getString());
    FIX::OrderBookingQty OrderBookingQty_4;
    OrderBookingQty_4.setString("12268193");
    noOrders_0_1.set(OrderBookingQty_4);
    OrdAllocGrp_NoOrders_4.insert(OrderBookingQty_4.getString());
    FIX::OrderID OrderID_4("STRING_1547607277");
    noOrders_0_1.set(OrderID_4);
    OrdAllocGrp_NoOrders_4.insert(OrderID_4.getString());
    FIX::OrderQty OrderQty_4;
    OrderQty_4.setString("20536505");
    noOrders_0_1.set(OrderQty_4);
    OrdAllocGrp_NoOrders_4.insert(OrderQty_4.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_4("STRING_1223176349");
    noOrders_0_1.set(SecondaryClOrdID_4);
    OrdAllocGrp_NoOrders_4.insert(SecondaryClOrdID_4.getString());
    FIX::SecondaryOrderID SecondaryOrderID_4("STRING_1887799574");
    noOrders_0_1.set(SecondaryOrderID_4);
    OrdAllocGrp_NoOrders_4.insert(SecondaryOrderID_4.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_4);
    all_compo_names.insert("OrdAllocGrp.NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_9;
      FIX::Nested2PartyID Nested2PartyID_9("STRING_1622255523");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyID_9.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_9('9');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyIDSource_9.getString());
      FIX::Nested2PartyRole Nested2PartyRole_9(1512693309);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyRole_9.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_9);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_19;
        FIX::Nested2PartySubID Nested2PartySubID_19("STRING_146941475");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_19);
        NstdPtys2SubGrp_NoNested2PartySubIDs_19.insert(Nested2PartySubID_19.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_19(97518257);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_19);
        NstdPtys2SubGrp_NoNested2PartySubIDs_19.insert(Nested2PartySubIDType_19.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_19);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_20;
        FIX::Nested2PartySubID Nested2PartySubID_20("STRING_702298438");
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubID_20);
        NstdPtys2SubGrp_NoNested2PartySubIDs_20.insert(Nested2PartySubID_20.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_20(360387796);
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubIDType_20);
        NstdPtys2SubGrp_NoNested2PartySubIDs_20.insert(Nested2PartySubIDType_20.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_20);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_10;
      FIX::Nested2PartyID Nested2PartyID_10("STRING_1790907541");
      noNested2PartyIDs_1_1_1.set(Nested2PartyID_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyID_10.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_10('1');
      noNested2PartyIDs_1_1_1.set(Nested2PartyIDSource_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyIDSource_10.getString());
      FIX::Nested2PartyRole Nested2PartyRole_10(542040656);
      noNested2PartyIDs_1_1_1.set(Nested2PartyRole_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyRole_10.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_10);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_21;
        FIX::Nested2PartySubID Nested2PartySubID_21("STRING_2095553673");
        noNested2PartySubIDs_1_1_2_0.set(Nested2PartySubID_21);
        NstdPtys2SubGrp_NoNested2PartySubIDs_21.insert(Nested2PartySubID_21.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_21(730027123);
        noNested2PartySubIDs_1_1_2_0.set(Nested2PartySubIDType_21);
        NstdPtys2SubGrp_NoNested2PartySubIDs_21.insert(Nested2PartySubIDType_21.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_21);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_0);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_1);
    }
    msg.addGroup(noOrders_0_1);
  }
  {
    FIX50SP2::AllocationReport::NoOrders noOrders_0_2;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_5;
    FIX::ClOrdID ClOrdID_5("STRING_1455822394");
    noOrders_0_2.set(ClOrdID_5);
    OrdAllocGrp_NoOrders_5.insert(ClOrdID_5.getString());
    FIX::ListID ListID_5("STRING_571597533");
    noOrders_0_2.set(ListID_5);
    OrdAllocGrp_NoOrders_5.insert(ListID_5.getString());
    FIX::OrderAvgPx OrderAvgPx_5;
    OrderAvgPx_5.setString("2864096");
    noOrders_0_2.set(OrderAvgPx_5);
    OrdAllocGrp_NoOrders_5.insert(OrderAvgPx_5.getString());
    FIX::OrderBookingQty OrderBookingQty_5;
    OrderBookingQty_5.setString("6203006");
    noOrders_0_2.set(OrderBookingQty_5);
    OrdAllocGrp_NoOrders_5.insert(OrderBookingQty_5.getString());
    FIX::OrderID OrderID_5("STRING_1881820549");
    noOrders_0_2.set(OrderID_5);
    OrdAllocGrp_NoOrders_5.insert(OrderID_5.getString());
    FIX::OrderQty OrderQty_5;
    OrderQty_5.setString("7717251");
    noOrders_0_2.set(OrderQty_5);
    OrdAllocGrp_NoOrders_5.insert(OrderQty_5.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_5("STRING_1020369037");
    noOrders_0_2.set(SecondaryClOrdID_5);
    OrdAllocGrp_NoOrders_5.insert(SecondaryClOrdID_5.getString());
    FIX::SecondaryOrderID SecondaryOrderID_5("STRING_18109316");
    noOrders_0_2.set(SecondaryOrderID_5);
    OrdAllocGrp_NoOrders_5.insert(SecondaryOrderID_5.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_5);
    all_compo_names.insert("OrdAllocGrp.NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_11;
      FIX::Nested2PartyID Nested2PartyID_11("STRING_1905219015");
      noNested2PartyIDs_2_1_0.set(Nested2PartyID_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyID_11.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_11('1');
      noNested2PartyIDs_2_1_0.set(Nested2PartyIDSource_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyIDSource_11.getString());
      FIX::Nested2PartyRole Nested2PartyRole_11(2082906324);
      noNested2PartyIDs_2_1_0.set(Nested2PartyRole_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyRole_11.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_11);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_22;
        FIX::Nested2PartySubID Nested2PartySubID_22("STRING_34018415");
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubID_22);
        NstdPtys2SubGrp_NoNested2PartySubIDs_22.insert(Nested2PartySubID_22.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_22(1158599025);
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubIDType_22);
        NstdPtys2SubGrp_NoNested2PartySubIDs_22.insert(Nested2PartySubIDType_22.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_22);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_23;
        FIX::Nested2PartySubID Nested2PartySubID_23("STRING_1045658570");
        noNested2PartySubIDs_2_0_2_1.set(Nested2PartySubID_23);
        NstdPtys2SubGrp_NoNested2PartySubIDs_23.insert(Nested2PartySubID_23.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_23(1434740107);
        noNested2PartySubIDs_2_0_2_1.set(Nested2PartySubIDType_23);
        NstdPtys2SubGrp_NoNested2PartySubIDs_23.insert(Nested2PartySubIDType_23.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_23);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_24;
        FIX::Nested2PartySubID Nested2PartySubID_24("STRING_633370900");
        noNested2PartySubIDs_2_0_2_2.set(Nested2PartySubID_24);
        NstdPtys2SubGrp_NoNested2PartySubIDs_24.insert(Nested2PartySubID_24.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_24(1971623690);
        noNested2PartySubIDs_2_0_2_2.set(Nested2PartySubIDType_24);
        NstdPtys2SubGrp_NoNested2PartySubIDs_24.insert(Nested2PartySubIDType_24.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_24);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_2);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_12;
      FIX::Nested2PartyID Nested2PartyID_12("STRING_799949768");
      noNested2PartyIDs_2_1_1.set(Nested2PartyID_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyID_12.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_12('6');
      noNested2PartyIDs_2_1_1.set(Nested2PartyIDSource_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyIDSource_12.getString());
      FIX::Nested2PartyRole Nested2PartyRole_12(2118565165);
      noNested2PartyIDs_2_1_1.set(Nested2PartyRole_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyRole_12.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_12);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_25;
        FIX::Nested2PartySubID Nested2PartySubID_25("STRING_1356735652");
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubID_25);
        NstdPtys2SubGrp_NoNested2PartySubIDs_25.insert(Nested2PartySubID_25.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_25(331469313);
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubIDType_25);
        NstdPtys2SubGrp_NoNested2PartySubIDs_25.insert(Nested2PartySubIDType_25.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_25);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_26;
        FIX::Nested2PartySubID Nested2PartySubID_26("STRING_540891919");
        noNested2PartySubIDs_2_1_2_1.set(Nested2PartySubID_26);
        NstdPtys2SubGrp_NoNested2PartySubIDs_26.insert(Nested2PartySubID_26.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_26(230117803);
        noNested2PartySubIDs_2_1_2_1.set(Nested2PartySubIDType_26);
        NstdPtys2SubGrp_NoNested2PartySubIDs_26.insert(Nested2PartySubIDType_26.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_26);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_1);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_1);
    }
    msg.addGroup(noOrders_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_9;
    FIX::PartyID PartyID_9("STRING_222385130");
    noPartyIDs_0_0.set(PartyID_9);
    Parties_NoPartyIDs_9.insert(PartyID_9.getString());
    FIX::PartyIDSource PartyIDSource_9('E');
    noPartyIDs_0_0.set(PartyIDSource_9);
    Parties_NoPartyIDs_9.insert(PartyIDSource_9.getString());
    FIX::PartyRole PartyRole_9(27);
    noPartyIDs_0_0.set(PartyRole_9);
    Parties_NoPartyIDs_9.insert(PartyRole_9.getString());
    all_values.push_back(Parties_NoPartyIDs_9);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_23;
      FIX::PartySubID PartySubID_23("STRING_749785362");
      noPartySubIDs_0_1_0.set(PartySubID_23);
      PtysSubGrp_NoPartySubIDs_23.insert(PartySubID_23.getString());
      FIX::PartySubIDType PartySubIDType_23(3);
      noPartySubIDs_0_1_0.set(PartySubIDType_23);
      PtysSubGrp_NoPartySubIDs_23.insert(PartySubIDType_23.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_23);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_3;
    FIX::PosAmt PosAmt_3;
    PosAmt_3.setString("4841222");
    noPosAmt_0_0.set(PosAmt_3);
    PositionAmountData_NoPosAmt_3.insert(PosAmt_3.getString());
    FIX::PosAmtType PosAmtType_3("STRING_IACPN");
    noPosAmt_0_0.set(PosAmtType_3);
    PositionAmountData_NoPosAmt_3.insert(PosAmtType_3.getString());
    FIX::PositionCurrency PositionCurrency_3("STRING_1171393527");
    noPosAmt_0_0.set(PositionCurrency_3);
    PositionAmountData_NoPosAmt_3.insert(PositionCurrency_3.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_3);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_4;
    FIX::PosAmt PosAmt_4;
    PosAmt_4.setString("5022315");
    noPosAmt_0_1.set(PosAmt_4);
    PositionAmountData_NoPosAmt_4.insert(PosAmt_4.getString());
    FIX::PosAmtType PosAmtType_4("STRING_CRES");
    noPosAmt_0_1.set(PosAmtType_4);
    PositionAmountData_NoPosAmt_4.insert(PosAmtType_4.getString());
    FIX::PositionCurrency PositionCurrency_4("STRING_929128894");
    noPosAmt_0_1.set(PositionCurrency_4);
    PositionAmountData_NoPosAmt_4.insert(PositionCurrency_4.getString());
    all_values.push_back(PositionAmountData_NoPosAmt_4);
    all_compo_names.insert("PositionAmountData.NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_3;
    FIX::RateSource RateSource_5(99);
    noRateSources_0_0.set(RateSource_5);
    RateSource_NoRateSources_3.insert(RateSource_5.getString());
    FIX::RateSourceType RateSourceType_3(0);
    noRateSources_0_0.set(RateSourceType_3);
    RateSource_NoRateSources_3.insert(RateSourceType_3.getString());
    FIX::ReferencePage ReferencePage_3("STRING_664101555");
    noRateSources_0_0.set(ReferencePage_3);
    RateSource_NoRateSources_3.insert(ReferencePage_3.getString());
    all_values.push_back(RateSource_NoRateSources_3);
    all_compo_names.insert("RateSource.NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_4;
    FIX::RateSource RateSource_6(0);
    noRateSources_0_1.set(RateSource_6);
    RateSource_NoRateSources_4.insert(RateSource_6.getString());
    FIX::RateSourceType RateSourceType_4(0);
    noRateSources_0_1.set(RateSourceType_4);
    RateSource_NoRateSources_4.insert(RateSourceType_4.getString());
    FIX::ReferencePage ReferencePage_4("STRING_2098841662");
    noRateSources_0_1.set(ReferencePage_4);
    RateSource_NoRateSources_4.insert(ReferencePage_4.getString());
    all_values.push_back(RateSource_NoRateSources_4);
    all_compo_names.insert("RateSource.NoRateSources");

    msg.addGroup(noRateSources_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_2;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_2("USD");
  msg.set(BenchmarkCurveCurrency_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurveCurrency_2.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_2("STRING_SWAP");
  msg.set(BenchmarkCurveName_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurveName_2.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_2("STRING_1604621422");
  msg.set(BenchmarkCurvePoint_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkCurvePoint_2.getString());
  FIX::BenchmarkPrice BenchmarkPrice_2;
  BenchmarkPrice_2.setString("9278680");
  msg.set(BenchmarkPrice_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkPrice_2.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_2(1648775808);
  msg.set(BenchmarkPriceType_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkPriceType_2.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_2("STRING_813873426");
  msg.set(BenchmarkSecurityID_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkSecurityID_2.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_2("STRING_1259337333");
  msg.set(BenchmarkSecurityIDSource_2);
  SpreadOrBenchmarkCurveData_2.insert(BenchmarkSecurityIDSource_2.getString());
  FIX::Spread Spread_2;
  Spread_2.setString("421840");
  msg.set(Spread_2);
  SpreadOrBenchmarkCurveData_2.insert(Spread_2.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_2);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_5;
    FIX::StipulationType StipulationType_5("STRING_PIECES");
    noStipulations_0_0.set(StipulationType_5);
    Stipulations_NoStipulations_5.insert(StipulationType_5.getString());
    FIX::StipulationValue StipulationValue_5("STRING_264569209");
    noStipulations_0_0.set(StipulationValue_5);
    Stipulations_NoStipulations_5.insert(StipulationValue_5.getString());
    all_values.push_back(Stipulations_NoStipulations_5);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_6;
    FIX::StipulationType StipulationType_6("STRING_MAXSUBS");
    noStipulations_0_1.set(StipulationType_6);
    Stipulations_NoStipulations_6.insert(StipulationType_6.getString());
    FIX::StipulationValue StipulationValue_6("STRING_1588900748");
    noStipulations_0_1.set(StipulationValue_6);
    Stipulations_NoStipulations_6.insert(StipulationValue_6.getString());
    all_values.push_back(Stipulations_NoStipulations_6);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::AllocationReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_5;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_5("DATA_1971964420");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingIssuer_5.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_5(1331363831);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingIssuerLen_5.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_5("DATA_2093801223");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingSecurityDesc_5.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_5(308603035);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_5);
    UnderlyingInstrument_5.insert(EncodedUnderlyingSecurityDescLen_5.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_5;
    UnderlyingAdjustedQuantity_5.setString("18455520");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_5);
    UnderlyingInstrument_5.insert(UnderlyingAdjustedQuantity_5.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_5;
    UnderlyingAllocationPercent_5.setString("11.020000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_5);
    UnderlyingInstrument_5.insert(UnderlyingAllocationPercent_5.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_5;
    UnderlyingAttachmentPoint_5.setString("46.140000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_5);
    UnderlyingInstrument_5.insert(UnderlyingAttachmentPoint_5.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_5("STRING_1068343703");
    noUnderlyings_0_0.set(UnderlyingCFICode_5);
    UnderlyingInstrument_5.insert(UnderlyingCFICode_5.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_5("STRING_2046839996");
    noUnderlyings_0_0.set(UnderlyingCPProgram_5);
    UnderlyingInstrument_5.insert(UnderlyingCPProgram_5.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_5("STRING_1440917754");
    noUnderlyings_0_0.set(UnderlyingCPRegType_5);
    UnderlyingInstrument_5.insert(UnderlyingCPRegType_5.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_5;
    UnderlyingCapValue_5.setString("2265579");
    noUnderlyings_0_0.set(UnderlyingCapValue_5);
    UnderlyingInstrument_5.insert(UnderlyingCapValue_5.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_5;
    UnderlyingCashAmount_5.setString("21338278");
    noUnderlyings_0_0.set(UnderlyingCashAmount_5);
    UnderlyingInstrument_5.insert(UnderlyingCashAmount_5.getString());
    FIX::UnderlyingCashType UnderlyingCashType_5("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_5);
    UnderlyingInstrument_5.insert(UnderlyingCashType_5.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_5;
    UnderlyingContractMultiplier_5.setString("5433712");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_5);
    UnderlyingInstrument_5.insert(UnderlyingContractMultiplier_5.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_5(1118990698);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_5);
    UnderlyingInstrument_5.insert(UnderlyingContractMultiplierUnit_5.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_5("COUNTRY_2056377324");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingCountryOfIssue_5.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_5("LOCALMKTDATE_1493555504");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_5);
    UnderlyingInstrument_5.insert(UnderlyingCouponPaymentDate_5.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_5;
    UnderlyingCouponRate_5.setString("72.010000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_5);
    UnderlyingInstrument_5.insert(UnderlyingCouponRate_5.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_5("STRING_660201459");
    noUnderlyings_0_0.set(UnderlyingCreditRating_5);
    UnderlyingInstrument_5.insert(UnderlyingCreditRating_5.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_5("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_5);
    UnderlyingInstrument_5.insert(UnderlyingCurrency_5.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_5;
    UnderlyingCurrentValue_5.setString("1614936");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_5);
    UnderlyingInstrument_5.insert(UnderlyingCurrentValue_5.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_5;
    UnderlyingDetachmentPoint_5.setString("67.050000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_5);
    UnderlyingInstrument_5.insert(UnderlyingDetachmentPoint_5.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_5;
    UnderlyingDirtyPrice_5.setString("21154989");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_5);
    UnderlyingInstrument_5.insert(UnderlyingDirtyPrice_5.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_5;
    UnderlyingEndPrice_5.setString("2036776");
    noUnderlyings_0_0.set(UnderlyingEndPrice_5);
    UnderlyingInstrument_5.insert(UnderlyingEndPrice_5.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_5;
    UnderlyingEndValue_5.setString("6610742");
    noUnderlyings_0_0.set(UnderlyingEndValue_5);
    UnderlyingInstrument_5.insert(UnderlyingEndValue_5.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_5(2100862562);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_5);
    UnderlyingInstrument_5.insert(UnderlyingExerciseStyle_5.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_5;
    UnderlyingFXRate_5.setString("4682469");
    noUnderlyings_0_0.set(UnderlyingFXRate_5);
    UnderlyingInstrument_5.insert(UnderlyingFXRate_5.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_5('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_5);
    UnderlyingInstrument_5.insert(UnderlyingFXRateCalc_5.getString());
    FIX::UnderlyingFactor UnderlyingFactor_5;
    UnderlyingFactor_5.setString("15422796");
    noUnderlyings_0_0.set(UnderlyingFactor_5);
    UnderlyingInstrument_5.insert(UnderlyingFactor_5.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_5(263539993);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_5);
    UnderlyingInstrument_5.insert(UnderlyingFlowScheduleType_5.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_5("STRING_1707734117");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_5);
    UnderlyingInstrument_5.insert(UnderlyingInstrRegistry_5.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_5("LOCALMKTDATE_726159846");
    noUnderlyings_0_0.set(UnderlyingIssueDate_5);
    UnderlyingInstrument_5.insert(UnderlyingIssueDate_5.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_5("STRING_209857569");
    noUnderlyings_0_0.set(UnderlyingIssuer_5);
    UnderlyingInstrument_5.insert(UnderlyingIssuer_5.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_5("STRING_2016337152");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingLocaleOfIssue_5.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_5("LOCALMKTDATE_424228294");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityDate_5.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_5("MONTHYEAR_1327568671");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityMonthYear_5.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_5("TZTIMEONLY_679688118");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_5);
    UnderlyingInstrument_5.insert(UnderlyingMaturityTime_5.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_5;
    UnderlyingNotionalPercentageOutstanding_5.setString("19.970000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_5);
    UnderlyingInstrument_5.insert(UnderlyingNotionalPercentageOutstanding_5.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_5('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_5);
    UnderlyingInstrument_5.insert(UnderlyingOptAttribute_5.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_5;
    UnderlyingOriginalNotionalPercentageOutstanding_5.setString("58.730000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_5);
    UnderlyingInstrument_5.insert(UnderlyingOriginalNotionalPercentageOutstanding_5.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_5("STRING_1719129984");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_5);
    UnderlyingInstrument_5.insert(UnderlyingPriceUnitOfMeasure_5.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_5;
    UnderlyingPriceUnitOfMeasureQty_5.setString("12132692");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_5);
    UnderlyingInstrument_5.insert(UnderlyingPriceUnitOfMeasureQty_5.getString());
    FIX::UnderlyingProduct UnderlyingProduct_5(2078141535);
    noUnderlyings_0_0.set(UnderlyingProduct_5);
    UnderlyingInstrument_5.insert(UnderlyingProduct_5.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_5(115017632);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_5);
    UnderlyingInstrument_5.insert(UnderlyingPutOrCall_5.getString());
    FIX::UnderlyingPx UnderlyingPx_5;
    UnderlyingPx_5.setString("1847763");
    noUnderlyings_0_0.set(UnderlyingPx_5);
    UnderlyingInstrument_5.insert(UnderlyingPx_5.getString());
    FIX::UnderlyingQty UnderlyingQty_5;
    UnderlyingQty_5.setString("19870352");
    noUnderlyings_0_0.set(UnderlyingQty_5);
    UnderlyingInstrument_5.insert(UnderlyingQty_5.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_5("LOCALMKTDATE_1608573136");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_5);
    UnderlyingInstrument_5.insert(UnderlyingRedemptionDate_5.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_5("STRING_113069862");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_5);
    UnderlyingInstrument_5.insert(UnderlyingRepoCollateralSecurityType_5.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_5;
    UnderlyingRepurchaseRate_5.setString("30.220000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_5);
    UnderlyingInstrument_5.insert(UnderlyingRepurchaseRate_5.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_5(411782767);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_5);
    UnderlyingInstrument_5.insert(UnderlyingRepurchaseTerm_5.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_5("STRING_969231435");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_5);
    UnderlyingInstrument_5.insert(UnderlyingRestructuringType_5.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_5("STRING_661246641");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityDesc_5.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_5("EXCHANGE_28865825");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityExchange_5.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_5("STRING_937246693");
    noUnderlyings_0_0.set(UnderlyingSecurityID_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityID_5.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_5("STRING_864924339");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityIDSource_5.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_5("STRING_689940112");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_5);
    UnderlyingInstrument_5.insert(UnderlyingSecuritySubType_5.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_5("STRING_890625607");
    noUnderlyings_0_0.set(UnderlyingSecurityType_5);
    UnderlyingInstrument_5.insert(UnderlyingSecurityType_5.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_5("STRING_1333171247");
    noUnderlyings_0_0.set(UnderlyingSeniority_5);
    UnderlyingInstrument_5.insert(UnderlyingSeniority_5.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_5("STRING_425709809");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_5);
    UnderlyingInstrument_5.insert(UnderlyingSettlMethod_5.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_5(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_5);
    UnderlyingInstrument_5.insert(UnderlyingSettlementType_5.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_5;
    UnderlyingStartValue_5.setString("15967112");
    noUnderlyings_0_0.set(UnderlyingStartValue_5);
    UnderlyingInstrument_5.insert(UnderlyingStartValue_5.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_5("STRING_2133443926");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_5);
    UnderlyingInstrument_5.insert(UnderlyingStateOrProvinceOfIssue_5.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_5("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_5);
    UnderlyingInstrument_5.insert(UnderlyingStrikeCurrency_5.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_5;
    UnderlyingStrikePrice_5.setString("20022974");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_5);
    UnderlyingInstrument_5.insert(UnderlyingStrikePrice_5.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_5("STRING_1435809762");
    noUnderlyings_0_0.set(UnderlyingSymbol_5);
    UnderlyingInstrument_5.insert(UnderlyingSymbol_5.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_5("STRING_986653833");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_5);
    UnderlyingInstrument_5.insert(UnderlyingSymbolSfx_5.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_5("STRING_534501900");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_5);
    UnderlyingInstrument_5.insert(UnderlyingTimeUnit_5.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_5("STRING_780898111");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_5);
    UnderlyingInstrument_5.insert(UnderlyingUnitOfMeasure_5.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_5;
    UnderlyingUnitOfMeasureQty_5.setString("660952");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_5);
    UnderlyingInstrument_5.insert(UnderlyingUnitOfMeasureQty_5.getString());
    all_values.push_back(UnderlyingInstrument_5);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_12;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_12("STRING_352544448");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_12);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_12.insert(UnderlyingSecurityAltID_12.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_12("STRING_1279364463");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_12);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_12.insert(UnderlyingSecurityAltIDSource_12.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_12);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_13;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_13("STRING_438282012");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_13);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_13.insert(UnderlyingSecurityAltID_13.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_13("STRING_467562080");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_13);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_13.insert(UnderlyingSecurityAltIDSource_13.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_13);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_14;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_14("STRING_1464140772");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_14);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_14.insert(UnderlyingSecurityAltID_14.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_14("STRING_277833576");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_14);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_14.insert(UnderlyingSecurityAltIDSource_14.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_14);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_7;
      FIX::UnderlyingStipType UnderlyingStipType_7("STRING_1577210634");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_7);
      UnderlyingStipulations_NoUnderlyingStips_7.insert(UnderlyingStipType_7.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_7("STRING_777586598");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_7);
      UnderlyingStipulations_NoUnderlyingStips_7.insert(UnderlyingStipValue_7.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_7);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_11;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_11("STRING_398958421");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyID_11.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_11('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyIDSource_11.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_11(369300161);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_11);
      UndlyInstrumentParties_NoUndlyInstrumentParties_11.insert(UnderlyingInstrumentPartyRole_11.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_11);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_21("STRING_156273931");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_21);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21.insert(UnderlyingInstrumentPartySubID_21.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_21(1059240273);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_21);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21.insert(UnderlyingInstrumentPartySubIDType_21.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_21);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::AllocationReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_6;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_6("DATA_79347074");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingIssuer_6.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_6(1489445178);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingIssuerLen_6.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_6("DATA_1484950082");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingSecurityDesc_6.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_6(364768696);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_6);
    UnderlyingInstrument_6.insert(EncodedUnderlyingSecurityDescLen_6.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_6;
    UnderlyingAdjustedQuantity_6.setString("9386727");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_6);
    UnderlyingInstrument_6.insert(UnderlyingAdjustedQuantity_6.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_6;
    UnderlyingAllocationPercent_6.setString("3.600000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_6);
    UnderlyingInstrument_6.insert(UnderlyingAllocationPercent_6.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_6;
    UnderlyingAttachmentPoint_6.setString("1.640000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_6);
    UnderlyingInstrument_6.insert(UnderlyingAttachmentPoint_6.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_6("STRING_597757932");
    noUnderlyings_0_1.set(UnderlyingCFICode_6);
    UnderlyingInstrument_6.insert(UnderlyingCFICode_6.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_6("STRING_1325724142");
    noUnderlyings_0_1.set(UnderlyingCPProgram_6);
    UnderlyingInstrument_6.insert(UnderlyingCPProgram_6.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_6("STRING_664676278");
    noUnderlyings_0_1.set(UnderlyingCPRegType_6);
    UnderlyingInstrument_6.insert(UnderlyingCPRegType_6.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_6;
    UnderlyingCapValue_6.setString("15844117");
    noUnderlyings_0_1.set(UnderlyingCapValue_6);
    UnderlyingInstrument_6.insert(UnderlyingCapValue_6.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_6;
    UnderlyingCashAmount_6.setString("18602260");
    noUnderlyings_0_1.set(UnderlyingCashAmount_6);
    UnderlyingInstrument_6.insert(UnderlyingCashAmount_6.getString());
    FIX::UnderlyingCashType UnderlyingCashType_6("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_6);
    UnderlyingInstrument_6.insert(UnderlyingCashType_6.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_6;
    UnderlyingContractMultiplier_6.setString("16505069");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_6);
    UnderlyingInstrument_6.insert(UnderlyingContractMultiplier_6.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_6(220366520);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_6);
    UnderlyingInstrument_6.insert(UnderlyingContractMultiplierUnit_6.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_6("COUNTRY_1798118838");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingCountryOfIssue_6.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_6("LOCALMKTDATE_782387786");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_6);
    UnderlyingInstrument_6.insert(UnderlyingCouponPaymentDate_6.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_6;
    UnderlyingCouponRate_6.setString("85.320000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_6);
    UnderlyingInstrument_6.insert(UnderlyingCouponRate_6.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_6("STRING_118197270");
    noUnderlyings_0_1.set(UnderlyingCreditRating_6);
    UnderlyingInstrument_6.insert(UnderlyingCreditRating_6.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_6("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_6);
    UnderlyingInstrument_6.insert(UnderlyingCurrency_6.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_6;
    UnderlyingCurrentValue_6.setString("468488");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_6);
    UnderlyingInstrument_6.insert(UnderlyingCurrentValue_6.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_6;
    UnderlyingDetachmentPoint_6.setString("55.450000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_6);
    UnderlyingInstrument_6.insert(UnderlyingDetachmentPoint_6.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_6;
    UnderlyingDirtyPrice_6.setString("17140687");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_6);
    UnderlyingInstrument_6.insert(UnderlyingDirtyPrice_6.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_6;
    UnderlyingEndPrice_6.setString("3872831");
    noUnderlyings_0_1.set(UnderlyingEndPrice_6);
    UnderlyingInstrument_6.insert(UnderlyingEndPrice_6.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_6;
    UnderlyingEndValue_6.setString("20752139");
    noUnderlyings_0_1.set(UnderlyingEndValue_6);
    UnderlyingInstrument_6.insert(UnderlyingEndValue_6.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_6(1005418299);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_6);
    UnderlyingInstrument_6.insert(UnderlyingExerciseStyle_6.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_6;
    UnderlyingFXRate_6.setString("7565833");
    noUnderlyings_0_1.set(UnderlyingFXRate_6);
    UnderlyingInstrument_6.insert(UnderlyingFXRate_6.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_6('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_6);
    UnderlyingInstrument_6.insert(UnderlyingFXRateCalc_6.getString());
    FIX::UnderlyingFactor UnderlyingFactor_6;
    UnderlyingFactor_6.setString("11616922");
    noUnderlyings_0_1.set(UnderlyingFactor_6);
    UnderlyingInstrument_6.insert(UnderlyingFactor_6.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_6(1815823608);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_6);
    UnderlyingInstrument_6.insert(UnderlyingFlowScheduleType_6.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_6("STRING_1343282508");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_6);
    UnderlyingInstrument_6.insert(UnderlyingInstrRegistry_6.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_6("LOCALMKTDATE_503653761");
    noUnderlyings_0_1.set(UnderlyingIssueDate_6);
    UnderlyingInstrument_6.insert(UnderlyingIssueDate_6.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_6("STRING_1153290042");
    noUnderlyings_0_1.set(UnderlyingIssuer_6);
    UnderlyingInstrument_6.insert(UnderlyingIssuer_6.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_6("STRING_1708051204");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingLocaleOfIssue_6.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_6("LOCALMKTDATE_1442326532");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityDate_6.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_6("MONTHYEAR_476716754");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityMonthYear_6.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_6("TZTIMEONLY_936917721");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_6);
    UnderlyingInstrument_6.insert(UnderlyingMaturityTime_6.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_6;
    UnderlyingNotionalPercentageOutstanding_6.setString("44.640000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_6);
    UnderlyingInstrument_6.insert(UnderlyingNotionalPercentageOutstanding_6.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_6('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_6);
    UnderlyingInstrument_6.insert(UnderlyingOptAttribute_6.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_6;
    UnderlyingOriginalNotionalPercentageOutstanding_6.setString("39.990000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_6);
    UnderlyingInstrument_6.insert(UnderlyingOriginalNotionalPercentageOutstanding_6.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_6("STRING_1477012582");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_6);
    UnderlyingInstrument_6.insert(UnderlyingPriceUnitOfMeasure_6.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_6;
    UnderlyingPriceUnitOfMeasureQty_6.setString("15151832");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_6);
    UnderlyingInstrument_6.insert(UnderlyingPriceUnitOfMeasureQty_6.getString());
    FIX::UnderlyingProduct UnderlyingProduct_6(899684741);
    noUnderlyings_0_1.set(UnderlyingProduct_6);
    UnderlyingInstrument_6.insert(UnderlyingProduct_6.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_6(980035904);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_6);
    UnderlyingInstrument_6.insert(UnderlyingPutOrCall_6.getString());
    FIX::UnderlyingPx UnderlyingPx_6;
    UnderlyingPx_6.setString("17355498");
    noUnderlyings_0_1.set(UnderlyingPx_6);
    UnderlyingInstrument_6.insert(UnderlyingPx_6.getString());
    FIX::UnderlyingQty UnderlyingQty_6;
    UnderlyingQty_6.setString("5503199");
    noUnderlyings_0_1.set(UnderlyingQty_6);
    UnderlyingInstrument_6.insert(UnderlyingQty_6.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_6("LOCALMKTDATE_1762423690");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_6);
    UnderlyingInstrument_6.insert(UnderlyingRedemptionDate_6.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_6("STRING_246714695");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_6);
    UnderlyingInstrument_6.insert(UnderlyingRepoCollateralSecurityType_6.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_6;
    UnderlyingRepurchaseRate_6.setString("72.010000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_6);
    UnderlyingInstrument_6.insert(UnderlyingRepurchaseRate_6.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_6(1861468601);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_6);
    UnderlyingInstrument_6.insert(UnderlyingRepurchaseTerm_6.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_6("STRING_1183196804");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_6);
    UnderlyingInstrument_6.insert(UnderlyingRestructuringType_6.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_6("STRING_715366040");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityDesc_6.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_6("EXCHANGE_1390240498");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityExchange_6.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_6("STRING_749781863");
    noUnderlyings_0_1.set(UnderlyingSecurityID_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityID_6.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_6("STRING_1102649214");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityIDSource_6.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_6("STRING_1317970816");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_6);
    UnderlyingInstrument_6.insert(UnderlyingSecuritySubType_6.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_6("STRING_1755200162");
    noUnderlyings_0_1.set(UnderlyingSecurityType_6);
    UnderlyingInstrument_6.insert(UnderlyingSecurityType_6.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_6("STRING_1859232550");
    noUnderlyings_0_1.set(UnderlyingSeniority_6);
    UnderlyingInstrument_6.insert(UnderlyingSeniority_6.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_6("STRING_434422602");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_6);
    UnderlyingInstrument_6.insert(UnderlyingSettlMethod_6.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_6(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_6);
    UnderlyingInstrument_6.insert(UnderlyingSettlementType_6.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_6;
    UnderlyingStartValue_6.setString("15275725");
    noUnderlyings_0_1.set(UnderlyingStartValue_6);
    UnderlyingInstrument_6.insert(UnderlyingStartValue_6.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_6("STRING_1777705110");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_6);
    UnderlyingInstrument_6.insert(UnderlyingStateOrProvinceOfIssue_6.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_6("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_6);
    UnderlyingInstrument_6.insert(UnderlyingStrikeCurrency_6.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_6;
    UnderlyingStrikePrice_6.setString("13382726");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_6);
    UnderlyingInstrument_6.insert(UnderlyingStrikePrice_6.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_6("STRING_567905389");
    noUnderlyings_0_1.set(UnderlyingSymbol_6);
    UnderlyingInstrument_6.insert(UnderlyingSymbol_6.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_6("STRING_1010095659");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_6);
    UnderlyingInstrument_6.insert(UnderlyingSymbolSfx_6.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_6("STRING_127706739");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_6);
    UnderlyingInstrument_6.insert(UnderlyingTimeUnit_6.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_6("STRING_460506206");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_6);
    UnderlyingInstrument_6.insert(UnderlyingUnitOfMeasure_6.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_6;
    UnderlyingUnitOfMeasureQty_6.setString("6650529");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_6);
    UnderlyingInstrument_6.insert(UnderlyingUnitOfMeasureQty_6.getString());
    all_values.push_back(UnderlyingInstrument_6);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_15;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_15("STRING_1937518788");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_15);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_15.insert(UnderlyingSecurityAltID_15.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_15("STRING_32752551");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_15);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_15.insert(UnderlyingSecurityAltIDSource_15.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_15);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_16;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_16("STRING_481501832");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_16);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_16.insert(UnderlyingSecurityAltID_16.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_16("STRING_770071044");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_16);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_16.insert(UnderlyingSecurityAltIDSource_16.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_16);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_17;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_17("STRING_1768302362");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_17);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_17.insert(UnderlyingSecurityAltID_17.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_17("STRING_1031821764");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_17);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_17.insert(UnderlyingSecurityAltIDSource_17.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_17);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_8;
      FIX::UnderlyingStipType UnderlyingStipType_8("STRING_2015017057");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_8);
      UnderlyingStipulations_NoUnderlyingStips_8.insert(UnderlyingStipType_8.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_8("STRING_1700338965");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_8);
      UnderlyingStipulations_NoUnderlyingStips_8.insert(UnderlyingStipValue_8.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_8);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_12;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_12("STRING_1050730213");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyID_12.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_12('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyIDSource_12.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_12(1489236538);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_12);
      UndlyInstrumentParties_NoUndlyInstrumentParties_12.insert(UnderlyingInstrumentPartyRole_12.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_12);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_22("STRING_1370870572");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_22);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22.insert(UnderlyingInstrumentPartySubID_22.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_22(659723706);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_22);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22.insert(UnderlyingInstrumentPartySubIDType_22.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_22);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

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
    multiset<string> UnderlyingInstrument_7;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_7("DATA_1408228590");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingIssuer_7.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_7(1082619474);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingIssuerLen_7.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_7("DATA_1094146308");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingSecurityDesc_7.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_7(30153687);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_7);
    UnderlyingInstrument_7.insert(EncodedUnderlyingSecurityDescLen_7.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_7;
    UnderlyingAdjustedQuantity_7.setString("4627083");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_7);
    UnderlyingInstrument_7.insert(UnderlyingAdjustedQuantity_7.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_7;
    UnderlyingAllocationPercent_7.setString("77.700000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_7);
    UnderlyingInstrument_7.insert(UnderlyingAllocationPercent_7.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_7;
    UnderlyingAttachmentPoint_7.setString("61.920000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_7);
    UnderlyingInstrument_7.insert(UnderlyingAttachmentPoint_7.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_7("STRING_996087241");
    noUnderlyings_0_2.set(UnderlyingCFICode_7);
    UnderlyingInstrument_7.insert(UnderlyingCFICode_7.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_7("STRING_2062640437");
    noUnderlyings_0_2.set(UnderlyingCPProgram_7);
    UnderlyingInstrument_7.insert(UnderlyingCPProgram_7.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_7("STRING_1871121582");
    noUnderlyings_0_2.set(UnderlyingCPRegType_7);
    UnderlyingInstrument_7.insert(UnderlyingCPRegType_7.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_7;
    UnderlyingCapValue_7.setString("20061829");
    noUnderlyings_0_2.set(UnderlyingCapValue_7);
    UnderlyingInstrument_7.insert(UnderlyingCapValue_7.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_7;
    UnderlyingCashAmount_7.setString("428635");
    noUnderlyings_0_2.set(UnderlyingCashAmount_7);
    UnderlyingInstrument_7.insert(UnderlyingCashAmount_7.getString());
    FIX::UnderlyingCashType UnderlyingCashType_7("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_7);
    UnderlyingInstrument_7.insert(UnderlyingCashType_7.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_7;
    UnderlyingContractMultiplier_7.setString("5237521");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_7);
    UnderlyingInstrument_7.insert(UnderlyingContractMultiplier_7.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_7(1772164267);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_7);
    UnderlyingInstrument_7.insert(UnderlyingContractMultiplierUnit_7.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_7("COUNTRY_2121662928");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingCountryOfIssue_7.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_7("LOCALMKTDATE_556504712");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_7);
    UnderlyingInstrument_7.insert(UnderlyingCouponPaymentDate_7.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_7;
    UnderlyingCouponRate_7.setString("24.520000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_7);
    UnderlyingInstrument_7.insert(UnderlyingCouponRate_7.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_7("STRING_744250324");
    noUnderlyings_0_2.set(UnderlyingCreditRating_7);
    UnderlyingInstrument_7.insert(UnderlyingCreditRating_7.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_7("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_7);
    UnderlyingInstrument_7.insert(UnderlyingCurrency_7.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_7;
    UnderlyingCurrentValue_7.setString("11292614");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_7);
    UnderlyingInstrument_7.insert(UnderlyingCurrentValue_7.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_7;
    UnderlyingDetachmentPoint_7.setString("68.350000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_7);
    UnderlyingInstrument_7.insert(UnderlyingDetachmentPoint_7.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_7;
    UnderlyingDirtyPrice_7.setString("6908595");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_7);
    UnderlyingInstrument_7.insert(UnderlyingDirtyPrice_7.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_7;
    UnderlyingEndPrice_7.setString("12282574");
    noUnderlyings_0_2.set(UnderlyingEndPrice_7);
    UnderlyingInstrument_7.insert(UnderlyingEndPrice_7.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_7;
    UnderlyingEndValue_7.setString("10955870");
    noUnderlyings_0_2.set(UnderlyingEndValue_7);
    UnderlyingInstrument_7.insert(UnderlyingEndValue_7.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_7(959080891);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_7);
    UnderlyingInstrument_7.insert(UnderlyingExerciseStyle_7.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_7;
    UnderlyingFXRate_7.setString("5700103");
    noUnderlyings_0_2.set(UnderlyingFXRate_7);
    UnderlyingInstrument_7.insert(UnderlyingFXRate_7.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_7('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_7);
    UnderlyingInstrument_7.insert(UnderlyingFXRateCalc_7.getString());
    FIX::UnderlyingFactor UnderlyingFactor_7;
    UnderlyingFactor_7.setString("1824678");
    noUnderlyings_0_2.set(UnderlyingFactor_7);
    UnderlyingInstrument_7.insert(UnderlyingFactor_7.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_7(1229734048);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_7);
    UnderlyingInstrument_7.insert(UnderlyingFlowScheduleType_7.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_7("STRING_9360420");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_7);
    UnderlyingInstrument_7.insert(UnderlyingInstrRegistry_7.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_7("LOCALMKTDATE_1265087289");
    noUnderlyings_0_2.set(UnderlyingIssueDate_7);
    UnderlyingInstrument_7.insert(UnderlyingIssueDate_7.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_7("STRING_176396708");
    noUnderlyings_0_2.set(UnderlyingIssuer_7);
    UnderlyingInstrument_7.insert(UnderlyingIssuer_7.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_7("STRING_39514107");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingLocaleOfIssue_7.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_7("LOCALMKTDATE_1727795625");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityDate_7.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_7("MONTHYEAR_900764479");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityMonthYear_7.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_7("TZTIMEONLY_1342730299");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_7);
    UnderlyingInstrument_7.insert(UnderlyingMaturityTime_7.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_7;
    UnderlyingNotionalPercentageOutstanding_7.setString("92.190000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_7);
    UnderlyingInstrument_7.insert(UnderlyingNotionalPercentageOutstanding_7.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_7('8');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_7);
    UnderlyingInstrument_7.insert(UnderlyingOptAttribute_7.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_7;
    UnderlyingOriginalNotionalPercentageOutstanding_7.setString("82.330000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_7);
    UnderlyingInstrument_7.insert(UnderlyingOriginalNotionalPercentageOutstanding_7.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_7("STRING_435098472");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_7);
    UnderlyingInstrument_7.insert(UnderlyingPriceUnitOfMeasure_7.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_7;
    UnderlyingPriceUnitOfMeasureQty_7.setString("8587847");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_7);
    UnderlyingInstrument_7.insert(UnderlyingPriceUnitOfMeasureQty_7.getString());
    FIX::UnderlyingProduct UnderlyingProduct_7(1250512373);
    noUnderlyings_0_2.set(UnderlyingProduct_7);
    UnderlyingInstrument_7.insert(UnderlyingProduct_7.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_7(958850633);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_7);
    UnderlyingInstrument_7.insert(UnderlyingPutOrCall_7.getString());
    FIX::UnderlyingPx UnderlyingPx_7;
    UnderlyingPx_7.setString("4834654");
    noUnderlyings_0_2.set(UnderlyingPx_7);
    UnderlyingInstrument_7.insert(UnderlyingPx_7.getString());
    FIX::UnderlyingQty UnderlyingQty_7;
    UnderlyingQty_7.setString("12246916");
    noUnderlyings_0_2.set(UnderlyingQty_7);
    UnderlyingInstrument_7.insert(UnderlyingQty_7.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_7("LOCALMKTDATE_1515355345");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_7);
    UnderlyingInstrument_7.insert(UnderlyingRedemptionDate_7.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_7("STRING_589647868");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_7);
    UnderlyingInstrument_7.insert(UnderlyingRepoCollateralSecurityType_7.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_7;
    UnderlyingRepurchaseRate_7.setString("19.780000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_7);
    UnderlyingInstrument_7.insert(UnderlyingRepurchaseRate_7.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_7(1692678771);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_7);
    UnderlyingInstrument_7.insert(UnderlyingRepurchaseTerm_7.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_7("STRING_1727652084");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_7);
    UnderlyingInstrument_7.insert(UnderlyingRestructuringType_7.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_7("STRING_950719741");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityDesc_7.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_7("EXCHANGE_1737535606");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityExchange_7.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_7("STRING_271027969");
    noUnderlyings_0_2.set(UnderlyingSecurityID_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityID_7.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_7("STRING_31493545");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityIDSource_7.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_7("STRING_685639007");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_7);
    UnderlyingInstrument_7.insert(UnderlyingSecuritySubType_7.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_7("STRING_1230108860");
    noUnderlyings_0_2.set(UnderlyingSecurityType_7);
    UnderlyingInstrument_7.insert(UnderlyingSecurityType_7.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_7("STRING_601503886");
    noUnderlyings_0_2.set(UnderlyingSeniority_7);
    UnderlyingInstrument_7.insert(UnderlyingSeniority_7.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_7("STRING_1434254485");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_7);
    UnderlyingInstrument_7.insert(UnderlyingSettlMethod_7.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_7(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_7);
    UnderlyingInstrument_7.insert(UnderlyingSettlementType_7.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_7;
    UnderlyingStartValue_7.setString("18312379");
    noUnderlyings_0_2.set(UnderlyingStartValue_7);
    UnderlyingInstrument_7.insert(UnderlyingStartValue_7.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_7("STRING_1443614905");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_7);
    UnderlyingInstrument_7.insert(UnderlyingStateOrProvinceOfIssue_7.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_7("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_7);
    UnderlyingInstrument_7.insert(UnderlyingStrikeCurrency_7.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_7;
    UnderlyingStrikePrice_7.setString("14831290");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_7);
    UnderlyingInstrument_7.insert(UnderlyingStrikePrice_7.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_7("STRING_110492294");
    noUnderlyings_0_2.set(UnderlyingSymbol_7);
    UnderlyingInstrument_7.insert(UnderlyingSymbol_7.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_7("STRING_760915474");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_7);
    UnderlyingInstrument_7.insert(UnderlyingSymbolSfx_7.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_7("STRING_678375663");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_7);
    UnderlyingInstrument_7.insert(UnderlyingTimeUnit_7.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_7("STRING_686891513");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_7);
    UnderlyingInstrument_7.insert(UnderlyingUnitOfMeasure_7.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_7;
    UnderlyingUnitOfMeasureQty_7.setString("15768367");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_7);
    UnderlyingInstrument_7.insert(UnderlyingUnitOfMeasureQty_7.getString());
    all_values.push_back(UnderlyingInstrument_7);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_18;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_18("STRING_1121989985");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_18);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_18.insert(UnderlyingSecurityAltID_18.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_18("STRING_288137890");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_18);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_18.insert(UnderlyingSecurityAltIDSource_18.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_18);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_9;
      FIX::UnderlyingStipType UnderlyingStipType_9("STRING_2080840618");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_9);
      UnderlyingStipulations_NoUnderlyingStips_9.insert(UnderlyingStipType_9.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_9("STRING_771603306");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_9);
      UnderlyingStipulations_NoUnderlyingStips_9.insert(UnderlyingStipValue_9.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_9);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_13;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_13("STRING_1448712315");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyID_13.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_13('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyIDSource_13.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_13(1893922606);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_13);
      UndlyInstrumentParties_NoUndlyInstrumentParties_13.insert(UnderlyingInstrumentPartyRole_13.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_13);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_23("STRING_941419610");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_23);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23.insert(UnderlyingInstrumentPartySubID_23.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_23(697158699);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_23);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23.insert(UnderlyingInstrumentPartySubIDType_23.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_23);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_24("STRING_583959396");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_24);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24.insert(UnderlyingInstrumentPartySubID_24.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_24(1212447580);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_24);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24.insert(UnderlyingInstrumentPartySubIDType_24.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_24);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_14;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_14("STRING_728652244");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyID_14.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_14('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyIDSource_14.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_14(295072792);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_14);
      UndlyInstrumentParties_NoUndlyInstrumentParties_14.insert(UnderlyingInstrumentPartyRole_14.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_14);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::AllocationReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_25("STRING_556369241");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_25);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25.insert(UnderlyingInstrumentPartySubID_25.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_25(1707649468);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_25);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25.insert(UnderlyingInstrumentPartySubIDType_25.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_25);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_2;
  FIX::Yield Yield_2;
  Yield_2.setString("4.170000");
  msg.set(Yield_2);
  YieldData_2.insert(Yield_2.getString());
  FIX::YieldCalcDate YieldCalcDate_2("LOCALMKTDATE_1999984146");
  msg.set(YieldCalcDate_2);
  YieldData_2.insert(YieldCalcDate_2.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_2("LOCALMKTDATE_90346136");
  msg.set(YieldRedemptionDate_2);
  YieldData_2.insert(YieldRedemptionDate_2.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_2;
  YieldRedemptionPrice_2.setString("8740614");
  msg.set(YieldRedemptionPrice_2);
  YieldData_2.insert(YieldRedemptionPrice_2.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_2(1335629510);
  msg.set(YieldRedemptionPriceType_2);
  YieldData_2.insert(YieldRedemptionPriceType_2.getString());
  FIX::YieldType YieldType_2("STRING_OPENAVG");
  msg.set(YieldType_2);
  YieldData_2.insert(YieldType_2.getString());
  all_values.push_back(YieldData_2);
  all_compo_names.insert("YieldData");


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
