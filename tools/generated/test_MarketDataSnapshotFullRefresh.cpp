#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/MarketDataSnapshotFullRefresh.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataSnapshotFullRefresh, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataSnapshotFullRefresh msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataSnapshotFullRefresh_0;
  FIX::ApplQueueDepth ApplQueueDepth_1(126045155);
  msg.set(ApplQueueDepth_1);
  MarketDataSnapshotFullRefresh_0.insert(ApplQueueDepth_1.getString());
  FIX::ApplQueueResolution ApplQueueResolution_1(1);
  msg.set(ApplQueueResolution_1);
  MarketDataSnapshotFullRefresh_0.insert(ApplQueueResolution_1.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_14("LOCALMKTDATE_1387868479");
  msg.set(ClearingBusinessDate_14);
  MarketDataSnapshotFullRefresh_0.insert(ClearingBusinessDate_14.getString());
  FIX::CorporateAction CorporateAction_3("MULTIPLECHARVALUE_V");
  msg.set(CorporateAction_3);
  MarketDataSnapshotFullRefresh_0.insert(CorporateAction_3.getString());
  FIX::FinancialStatus FinancialStatus_3("MULTIPLECHARVALUE_2");
  msg.set(FinancialStatus_3);
  MarketDataSnapshotFullRefresh_0.insert(FinancialStatus_3.getString());
  FIX::MDBookType MDBookType_3(3);
  msg.set(MDBookType_3);
  MarketDataSnapshotFullRefresh_0.insert(MDBookType_3.getString());
  FIX::MDFeedType MDFeedType_3("STRING_856015852");
  msg.set(MDFeedType_3);
  MarketDataSnapshotFullRefresh_0.insert(MDFeedType_3.getString());
  FIX::MDReportID MDReportID_0(772944295);
  msg.set(MDReportID_0);
  MarketDataSnapshotFullRefresh_0.insert(MDReportID_0.getString());
  FIX::MDReqID MDReqID_3("STRING_590933056");
  msg.set(MDReqID_3);
  MarketDataSnapshotFullRefresh_0.insert(MDReqID_3.getString());
  FIX::MDStreamID MDStreamID_2("STRING_2101321192");
  msg.set(MDStreamID_2);
  MarketDataSnapshotFullRefresh_0.insert(MDStreamID_2.getString());
  FIX::MDSubBookType MDSubBookType_1(778062477);
  msg.set(MDSubBookType_1);
  MarketDataSnapshotFullRefresh_0.insert(MDSubBookType_1.getString());
  FIX::MarketDepth MarketDepth_4(1468442084);
  msg.set(MarketDepth_4);
  MarketDataSnapshotFullRefresh_0.insert(MarketDepth_4.getString());
  FIX::NetChgPrevDay NetChgPrevDay_1;
  NetChgPrevDay_1.setString("21012523");
  msg.set(NetChgPrevDay_1);
  MarketDataSnapshotFullRefresh_0.insert(NetChgPrevDay_1.getString());
  FIX::RefreshIndicator RefreshIndicator_0(true);
  msg.set(RefreshIndicator_0);
  MarketDataSnapshotFullRefresh_0.insert(RefreshIndicator_0.getString());
  FIX::TotNumReports TotNumReports_3(560660461);
  msg.set(TotNumReports_3);
  MarketDataSnapshotFullRefresh_0.insert(TotNumReports_3.getString());
  FIX::TradeDate TradeDate_14("LOCALMKTDATE_351603229");
  msg.set(TradeDate_14);
  MarketDataSnapshotFullRefresh_0.insert(TradeDate_14.getString());
  all_values.push_back(MarketDataSnapshotFullRefresh_0);

  all_compo_names.insert("MarketDataSnapshotFullRefresh");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_7;
  FIX::ApplID ApplID_7("STRING_446973325");
  msg.set(ApplID_7);
  ApplicationSequenceControl_7.insert(ApplID_7.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_7(1763308971);
  msg.set(ApplLastSeqNum_7);
  ApplicationSequenceControl_7.insert(ApplLastSeqNum_7.getString());
  FIX::ApplResendFlag ApplResendFlag_7(false);
  msg.set(ApplResendFlag_7);
  ApplicationSequenceControl_7.insert(ApplResendFlag_7.getString());
  FIX::ApplSeqNum ApplSeqNum_7(566672289);
  msg.set(ApplSeqNum_7);
  ApplicationSequenceControl_7.insert(ApplSeqNum_7.getString());
  all_values.push_back(ApplicationSequenceControl_7);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_23;
    FIX::EncodedLegIssuer EncodedLegIssuer_23("DATA_191367370");
    noLegs_0_0.set(EncodedLegIssuer_23);
    InstrumentLeg_23.insert(EncodedLegIssuer_23.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_23(894115766);
    noLegs_0_0.set(EncodedLegIssuerLen_23);
    InstrumentLeg_23.insert(EncodedLegIssuerLen_23.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_23("DATA_859701733");
    noLegs_0_0.set(EncodedLegSecurityDesc_23);
    InstrumentLeg_23.insert(EncodedLegSecurityDesc_23.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_23(951526119);
    noLegs_0_0.set(EncodedLegSecurityDescLen_23);
    InstrumentLeg_23.insert(EncodedLegSecurityDescLen_23.getString());
    FIX::LegCFICode LegCFICode_23("STRING_1548146132");
    noLegs_0_0.set(LegCFICode_23);
    InstrumentLeg_23.insert(LegCFICode_23.getString());
    FIX::LegContractMultiplier LegContractMultiplier_23;
    LegContractMultiplier_23.setString("2769405");
    noLegs_0_0.set(LegContractMultiplier_23);
    InstrumentLeg_23.insert(LegContractMultiplier_23.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_23(945506621);
    noLegs_0_0.set(LegContractMultiplierUnit_23);
    InstrumentLeg_23.insert(LegContractMultiplierUnit_23.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_23("MONTHYEAR_988187883");
    noLegs_0_0.set(LegContractSettlMonth_23);
    InstrumentLeg_23.insert(LegContractSettlMonth_23.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_23("COUNTRY_326144082");
    noLegs_0_0.set(LegCountryOfIssue_23);
    InstrumentLeg_23.insert(LegCountryOfIssue_23.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_23("LOCALMKTDATE_427161206");
    noLegs_0_0.set(LegCouponPaymentDate_23);
    InstrumentLeg_23.insert(LegCouponPaymentDate_23.getString());
    FIX::LegCouponRate LegCouponRate_23;
    LegCouponRate_23.setString("30.380000");
    noLegs_0_0.set(LegCouponRate_23);
    InstrumentLeg_23.insert(LegCouponRate_23.getString());
    FIX::LegCreditRating LegCreditRating_23("STRING_206887628");
    noLegs_0_0.set(LegCreditRating_23);
    InstrumentLeg_23.insert(LegCreditRating_23.getString());
    FIX::LegCurrency LegCurrency_23("USD");
    noLegs_0_0.set(LegCurrency_23);
    InstrumentLeg_23.insert(LegCurrency_23.getString());
    FIX::LegDatedDate LegDatedDate_23("LOCALMKTDATE_918161610");
    noLegs_0_0.set(LegDatedDate_23);
    InstrumentLeg_23.insert(LegDatedDate_23.getString());
    FIX::LegExerciseStyle LegExerciseStyle_23(887602101);
    noLegs_0_0.set(LegExerciseStyle_23);
    InstrumentLeg_23.insert(LegExerciseStyle_23.getString());
    FIX::LegFactor LegFactor_23;
    LegFactor_23.setString("11290501");
    noLegs_0_0.set(LegFactor_23);
    InstrumentLeg_23.insert(LegFactor_23.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_23(1691105906);
    noLegs_0_0.set(LegFlowScheduleType_23);
    InstrumentLeg_23.insert(LegFlowScheduleType_23.getString());
    FIX::LegInstrRegistry LegInstrRegistry_23("STRING_1478535158");
    noLegs_0_0.set(LegInstrRegistry_23);
    InstrumentLeg_23.insert(LegInstrRegistry_23.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_23("LOCALMKTDATE_1082887692");
    noLegs_0_0.set(LegInterestAccrualDate_23);
    InstrumentLeg_23.insert(LegInterestAccrualDate_23.getString());
    FIX::LegIssueDate LegIssueDate_23("LOCALMKTDATE_321684735");
    noLegs_0_0.set(LegIssueDate_23);
    InstrumentLeg_23.insert(LegIssueDate_23.getString());
    FIX::LegIssuer LegIssuer_23("STRING_799493594");
    noLegs_0_0.set(LegIssuer_23);
    InstrumentLeg_23.insert(LegIssuer_23.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_23("STRING_1036656441");
    noLegs_0_0.set(LegLocaleOfIssue_23);
    InstrumentLeg_23.insert(LegLocaleOfIssue_23.getString());
    FIX::LegMaturityDate LegMaturityDate_23("LOCALMKTDATE_160414904");
    noLegs_0_0.set(LegMaturityDate_23);
    InstrumentLeg_23.insert(LegMaturityDate_23.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_23("MONTHYEAR_1360154055");
    noLegs_0_0.set(LegMaturityMonthYear_23);
    InstrumentLeg_23.insert(LegMaturityMonthYear_23.getString());
    FIX::LegMaturityTime LegMaturityTime_23("TZTIMEONLY_1388259670");
    noLegs_0_0.set(LegMaturityTime_23);
    InstrumentLeg_23.insert(LegMaturityTime_23.getString());
    FIX::LegOptAttribute LegOptAttribute_23('6');
    noLegs_0_0.set(LegOptAttribute_23);
    InstrumentLeg_23.insert(LegOptAttribute_23.getString());
    FIX::LegOptionRatio LegOptionRatio_23;
    LegOptionRatio_23.setString("9759793");
    noLegs_0_0.set(LegOptionRatio_23);
    InstrumentLeg_23.insert(LegOptionRatio_23.getString());
    FIX::LegPool LegPool_23("STRING_1825159979");
    noLegs_0_0.set(LegPool_23);
    InstrumentLeg_23.insert(LegPool_23.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_23("STRING_1174060518");
    noLegs_0_0.set(LegPriceUnitOfMeasure_23);
    InstrumentLeg_23.insert(LegPriceUnitOfMeasure_23.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_23;
    LegPriceUnitOfMeasureQty_23.setString("3622368");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_23);
    InstrumentLeg_23.insert(LegPriceUnitOfMeasureQty_23.getString());
    FIX::LegProduct LegProduct_23(2016527349);
    noLegs_0_0.set(LegProduct_23);
    InstrumentLeg_23.insert(LegProduct_23.getString());
    FIX::LegPutOrCall LegPutOrCall_23(2068176284);
    noLegs_0_0.set(LegPutOrCall_23);
    InstrumentLeg_23.insert(LegPutOrCall_23.getString());
    FIX::LegRatioQty LegRatioQty_23;
    LegRatioQty_23.setString("12219385");
    noLegs_0_0.set(LegRatioQty_23);
    InstrumentLeg_23.insert(LegRatioQty_23.getString());
    FIX::LegRedemptionDate LegRedemptionDate_23("LOCALMKTDATE_820569821");
    noLegs_0_0.set(LegRedemptionDate_23);
    InstrumentLeg_23.insert(LegRedemptionDate_23.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_23("STRING_1468838768");
    noLegs_0_0.set(LegRepoCollateralSecurityType_23);
    InstrumentLeg_23.insert(LegRepoCollateralSecurityType_23.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_23;
    LegRepurchaseRate_23.setString("91.540000");
    noLegs_0_0.set(LegRepurchaseRate_23);
    InstrumentLeg_23.insert(LegRepurchaseRate_23.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_23(1766076442);
    noLegs_0_0.set(LegRepurchaseTerm_23);
    InstrumentLeg_23.insert(LegRepurchaseTerm_23.getString());
    FIX::LegSecurityDesc LegSecurityDesc_23("STRING_309543003");
    noLegs_0_0.set(LegSecurityDesc_23);
    InstrumentLeg_23.insert(LegSecurityDesc_23.getString());
    FIX::LegSecurityExchange LegSecurityExchange_23("EXCHANGE_1825023236");
    noLegs_0_0.set(LegSecurityExchange_23);
    InstrumentLeg_23.insert(LegSecurityExchange_23.getString());
    FIX::LegSecurityID LegSecurityID_23("STRING_45754000");
    noLegs_0_0.set(LegSecurityID_23);
    InstrumentLeg_23.insert(LegSecurityID_23.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_23("STRING_1423776041");
    noLegs_0_0.set(LegSecurityIDSource_23);
    InstrumentLeg_23.insert(LegSecurityIDSource_23.getString());
    FIX::LegSecuritySubType LegSecuritySubType_23("STRING_2031910864");
    noLegs_0_0.set(LegSecuritySubType_23);
    InstrumentLeg_23.insert(LegSecuritySubType_23.getString());
    FIX::LegSecurityType LegSecurityType_23("STRING_1860783685");
    noLegs_0_0.set(LegSecurityType_23);
    InstrumentLeg_23.insert(LegSecurityType_23.getString());
    FIX::LegSide LegSide_23('1');
    noLegs_0_0.set(LegSide_23);
    InstrumentLeg_23.insert(LegSide_23.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_23("STRING_802588827");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_23);
    InstrumentLeg_23.insert(LegStateOrProvinceOfIssue_23.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_23("GBP");
    noLegs_0_0.set(LegStrikeCurrency_23);
    InstrumentLeg_23.insert(LegStrikeCurrency_23.getString());
    FIX::LegStrikePrice LegStrikePrice_23;
    LegStrikePrice_23.setString("3462110");
    noLegs_0_0.set(LegStrikePrice_23);
    InstrumentLeg_23.insert(LegStrikePrice_23.getString());
    FIX::LegSymbol LegSymbol_23("STRING_2079437296");
    noLegs_0_0.set(LegSymbol_23);
    InstrumentLeg_23.insert(LegSymbol_23.getString());
    FIX::LegSymbolSfx LegSymbolSfx_23("STRING_1761264530");
    noLegs_0_0.set(LegSymbolSfx_23);
    InstrumentLeg_23.insert(LegSymbolSfx_23.getString());
    FIX::LegTimeUnit LegTimeUnit_23("STRING_667895820");
    noLegs_0_0.set(LegTimeUnit_23);
    InstrumentLeg_23.insert(LegTimeUnit_23.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_23("STRING_731447243");
    noLegs_0_0.set(LegUnitOfMeasure_23);
    InstrumentLeg_23.insert(LegUnitOfMeasure_23.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_23;
    LegUnitOfMeasureQty_23.setString("6504373");
    noLegs_0_0.set(LegUnitOfMeasureQty_23);
    InstrumentLeg_23.insert(LegUnitOfMeasureQty_23.getString());
    all_values.push_back(InstrumentLeg_23);
    all_compo_names.insert("..NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_23;
      FIX::LegSecurityAltID LegSecurityAltID_23("STRING_2091601298");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_23);
      LegSecAltIDGrp_NoLegSecurityAltID_23.insert(LegSecurityAltID_23.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_23("STRING_2038696994");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_23);
      LegSecAltIDGrp_NoLegSecurityAltID_23.insert(LegSecurityAltIDSource_23.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_23);
      all_compo_names.insert("..NoLegs...NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_26;
  FIX::AttachmentPoint AttachmentPoint_26;
  AttachmentPoint_26.setString("89.530000");
  msg.set(AttachmentPoint_26);
  Instrument_26.insert(AttachmentPoint_26.getString());
  FIX::CFICode CFICode_26("STRING_920097029");
  msg.set(CFICode_26);
  Instrument_26.insert(CFICode_26.getString());
  FIX::CPProgram CPProgram_26(99);
  msg.set(CPProgram_26);
  Instrument_26.insert(CPProgram_26.getString());
  FIX::CPRegType CPRegType_26("STRING_462275823");
  msg.set(CPRegType_26);
  Instrument_26.insert(CPRegType_26.getString());
  FIX::CapPrice CapPrice_26;
  CapPrice_26.setString("12823338");
  msg.set(CapPrice_26);
  Instrument_26.insert(CapPrice_26.getString());
  FIX::ContractMultiplier ContractMultiplier_26;
  ContractMultiplier_26.setString("15854170");
  msg.set(ContractMultiplier_26);
  Instrument_26.insert(ContractMultiplier_26.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_26(0);
  msg.set(ContractMultiplierUnit_26);
  Instrument_26.insert(ContractMultiplierUnit_26.getString());
  FIX::ContractSettlMonth ContractSettlMonth_26("MONTHYEAR_356788773");
  msg.set(ContractSettlMonth_26);
  Instrument_26.insert(ContractSettlMonth_26.getString());
  FIX::CountryOfIssue CountryOfIssue_26("COUNTRY_258503200");
  msg.set(CountryOfIssue_26);
  Instrument_26.insert(CountryOfIssue_26.getString());
  FIX::CouponPaymentDate CouponPaymentDate_26("LOCALMKTDATE_1851807227");
  msg.set(CouponPaymentDate_26);
  Instrument_26.insert(CouponPaymentDate_26.getString());
  FIX::CouponRate CouponRate_26;
  CouponRate_26.setString("79.270000");
  msg.set(CouponRate_26);
  Instrument_26.insert(CouponRate_26.getString());
  FIX::CreditRating CreditRating_26("STRING_2024579642");
  msg.set(CreditRating_26);
  Instrument_26.insert(CreditRating_26.getString());
  FIX::DatedDate DatedDate_26("LOCALMKTDATE_13866582");
  msg.set(DatedDate_26);
  Instrument_26.insert(DatedDate_26.getString());
  FIX::DetachmentPoint DetachmentPoint_26;
  DetachmentPoint_26.setString("75.160000");
  msg.set(DetachmentPoint_26);
  Instrument_26.insert(DetachmentPoint_26.getString());
  FIX::EncodedIssuer EncodedIssuer_26("DATA_2070333642");
  msg.set(EncodedIssuer_26);
  Instrument_26.insert(EncodedIssuer_26.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_26(1437642623);
  msg.set(EncodedIssuerLen_26);
  Instrument_26.insert(EncodedIssuerLen_26.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_26("DATA_1417634732");
  msg.set(EncodedSecurityDesc_26);
  Instrument_26.insert(EncodedSecurityDesc_26.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_26(1783633679);
  msg.set(EncodedSecurityDescLen_26);
  Instrument_26.insert(EncodedSecurityDescLen_26.getString());
  FIX::ExerciseStyle ExerciseStyle_26(0);
  msg.set(ExerciseStyle_26);
  Instrument_26.insert(ExerciseStyle_26.getString());
  FIX::Factor Factor_26;
  Factor_26.setString("727399");
  msg.set(Factor_26);
  Instrument_26.insert(Factor_26.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_26(false);
  msg.set(FlexProductEligibilityIndicator_26);
  Instrument_26.insert(FlexProductEligibilityIndicator_26.getString());
  FIX::FlexibleIndicator FlexibleIndicator_26(false);
  msg.set(FlexibleIndicator_26);
  Instrument_26.insert(FlexibleIndicator_26.getString());
  FIX::FloorPrice FloorPrice_26;
  FloorPrice_26.setString("4189509");
  msg.set(FloorPrice_26);
  Instrument_26.insert(FloorPrice_26.getString());
  FIX::FlowScheduleType FlowScheduleType_26(3);
  msg.set(FlowScheduleType_26);
  Instrument_26.insert(FlowScheduleType_26.getString());
  FIX::InstrRegistry InstrRegistry_26("STRING_1279127033");
  msg.set(InstrRegistry_26);
  Instrument_26.insert(InstrRegistry_26.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_26('1');
  msg.set(InstrmtAssignmentMethod_26);
  Instrument_26.insert(InstrmtAssignmentMethod_26.getString());
  FIX::InterestAccrualDate InterestAccrualDate_26("LOCALMKTDATE_900453061");
  msg.set(InterestAccrualDate_26);
  Instrument_26.insert(InterestAccrualDate_26.getString());
  FIX::IssueDate IssueDate_26("LOCALMKTDATE_1929564357");
  msg.set(IssueDate_26);
  Instrument_26.insert(IssueDate_26.getString());
  FIX::Issuer Issuer_26("STRING_1915157541");
  msg.set(Issuer_26);
  Instrument_26.insert(Issuer_26.getString());
  FIX::ListMethod ListMethod_26(1);
  msg.set(ListMethod_26);
  Instrument_26.insert(ListMethod_26.getString());
  FIX::LocaleOfIssue LocaleOfIssue_26("STRING_1820777703");
  msg.set(LocaleOfIssue_26);
  Instrument_26.insert(LocaleOfIssue_26.getString());
  FIX::MaturityDate MaturityDate_26("LOCALMKTDATE_1203372847");
  msg.set(MaturityDate_26);
  Instrument_26.insert(MaturityDate_26.getString());
  FIX::MaturityMonthYear MaturityMonthYear_26("MONTHYEAR_1764667740");
  msg.set(MaturityMonthYear_26);
  Instrument_26.insert(MaturityMonthYear_26.getString());
  FIX::MaturityTime MaturityTime_26("TZTIMEONLY_1389667380");
  msg.set(MaturityTime_26);
  Instrument_26.insert(MaturityTime_26.getString());
  FIX::MinPriceIncrement MinPriceIncrement_26;
  MinPriceIncrement_26.setString("16656486");
  msg.set(MinPriceIncrement_26);
  Instrument_26.insert(MinPriceIncrement_26.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_26;
  MinPriceIncrementAmount_26.setString("8995179");
  msg.set(MinPriceIncrementAmount_26);
  Instrument_26.insert(MinPriceIncrementAmount_26.getString());
  FIX::NTPositionLimit NTPositionLimit_26(827600759);
  msg.set(NTPositionLimit_26);
  Instrument_26.insert(NTPositionLimit_26.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_26;
  NotionalPercentageOutstanding_26.setString("71.300000");
  msg.set(NotionalPercentageOutstanding_26);
  Instrument_26.insert(NotionalPercentageOutstanding_26.getString());
  FIX::OptAttribute OptAttribute_26('1');
  msg.set(OptAttribute_26);
  Instrument_26.insert(OptAttribute_26.getString());
  FIX::OptPayoutAmount OptPayoutAmount_26;
  OptPayoutAmount_26.setString("10861039");
  msg.set(OptPayoutAmount_26);
  Instrument_26.insert(OptPayoutAmount_26.getString());
  FIX::OptPayoutType OptPayoutType_26(3);
  msg.set(OptPayoutType_26);
  Instrument_26.insert(OptPayoutType_26.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_26;
  OriginalNotionalPercentageOutstanding_26.setString("10.040000");
  msg.set(OriginalNotionalPercentageOutstanding_26);
  Instrument_26.insert(OriginalNotionalPercentageOutstanding_26.getString());
  FIX::Pool Pool_26("STRING_963199953");
  msg.set(Pool_26);
  Instrument_26.insert(Pool_26.getString());
  FIX::PositionLimit PositionLimit_26(1766807292);
  msg.set(PositionLimit_26);
  Instrument_26.insert(PositionLimit_26.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_26("STRING_STD");
  msg.set(PriceQuoteMethod_26);
  Instrument_26.insert(PriceQuoteMethod_26.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_26("STRING_886049947");
  msg.set(PriceUnitOfMeasure_26);
  Instrument_26.insert(PriceUnitOfMeasure_26.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_26;
  PriceUnitOfMeasureQty_26.setString("10569662");
  msg.set(PriceUnitOfMeasureQty_26);
  Instrument_26.insert(PriceUnitOfMeasureQty_26.getString());
  FIX::Product Product_28(2);
  msg.set(Product_28);
  Instrument_26.insert(Product_28.getString());
  FIX::ProductComplex ProductComplex_26("STRING_522199978");
  msg.set(ProductComplex_26);
  Instrument_26.insert(ProductComplex_26.getString());
  FIX::PutOrCall PutOrCall_26(0);
  msg.set(PutOrCall_26);
  Instrument_26.insert(PutOrCall_26.getString());
  FIX::RedemptionDate RedemptionDate_26("LOCALMKTDATE_1840589516");
  msg.set(RedemptionDate_26);
  Instrument_26.insert(RedemptionDate_26.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_26("STRING_759252148");
  msg.set(RepoCollateralSecurityType_26);
  Instrument_26.insert(RepoCollateralSecurityType_26.getString());
  FIX::RepurchaseRate RepurchaseRate_26;
  RepurchaseRate_26.setString("80.830000");
  msg.set(RepurchaseRate_26);
  Instrument_26.insert(RepurchaseRate_26.getString());
  FIX::RepurchaseTerm RepurchaseTerm_26(112056864);
  msg.set(RepurchaseTerm_26);
  Instrument_26.insert(RepurchaseTerm_26.getString());
  FIX::RestructuringType RestructuringType_26("STRING_MM");
  msg.set(RestructuringType_26);
  Instrument_26.insert(RestructuringType_26.getString());
  FIX::SecurityDesc SecurityDesc_26("STRING_693441469");
  msg.set(SecurityDesc_26);
  Instrument_26.insert(SecurityDesc_26.getString());
  FIX::SecurityExchange SecurityExchange_26("EXCHANGE_1198903681");
  msg.set(SecurityExchange_26);
  Instrument_26.insert(SecurityExchange_26.getString());
  FIX::SecurityGroup SecurityGroup_26("STRING_1828711027");
  msg.set(SecurityGroup_26);
  Instrument_26.insert(SecurityGroup_26.getString());
  FIX::SecurityID SecurityID_26("STRING_475522178");
  msg.set(SecurityID_26);
  Instrument_26.insert(SecurityID_26.getString());
  FIX::SecurityIDSource SecurityIDSource_26("STRING_8");
  msg.set(SecurityIDSource_26);
  Instrument_26.insert(SecurityIDSource_26.getString());
  FIX::SecurityStatus SecurityStatus_26("STRING_1");
  msg.set(SecurityStatus_26);
  Instrument_26.insert(SecurityStatus_26.getString());
  FIX::SecuritySubType SecuritySubType_27("STRING_148816233");
  msg.set(SecuritySubType_27);
  Instrument_26.insert(SecuritySubType_27.getString());
  FIX::SecurityType SecurityType_28("STRING_RVLV");
  msg.set(SecurityType_28);
  Instrument_26.insert(SecurityType_28.getString());
  FIX::Seniority Seniority_26("STRING_SB");
  msg.set(Seniority_26);
  Instrument_26.insert(Seniority_26.getString());
  FIX::SettlMethod SettlMethod_26('P');
  msg.set(SettlMethod_26);
  Instrument_26.insert(SettlMethod_26.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_26("STRING_1688115444");
  msg.set(SettleOnOpenFlag_26);
  Instrument_26.insert(SettleOnOpenFlag_26.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_26("STRING_1042500134");
  msg.set(StateOrProvinceOfIssue_26);
  Instrument_26.insert(StateOrProvinceOfIssue_26.getString());
  FIX::StrikeCurrency StrikeCurrency_26("USD");
  msg.set(StrikeCurrency_26);
  Instrument_26.insert(StrikeCurrency_26.getString());
  FIX::StrikeMultiplier StrikeMultiplier_26;
  StrikeMultiplier_26.setString("1513232");
  msg.set(StrikeMultiplier_26);
  Instrument_26.insert(StrikeMultiplier_26.getString());
  FIX::StrikePrice StrikePrice_26;
  StrikePrice_26.setString("13047046");
  msg.set(StrikePrice_26);
  Instrument_26.insert(StrikePrice_26.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_26(4);
  msg.set(StrikePriceBoundaryMethod_26);
  Instrument_26.insert(StrikePriceBoundaryMethod_26.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_26;
  StrikePriceBoundaryPrecision_26.setString("42.140000");
  msg.set(StrikePriceBoundaryPrecision_26);
  Instrument_26.insert(StrikePriceBoundaryPrecision_26.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_26(3);
  msg.set(StrikePriceDeterminationMethod_26);
  Instrument_26.insert(StrikePriceDeterminationMethod_26.getString());
  FIX::StrikeValue StrikeValue_26;
  StrikeValue_26.setString("8140296");
  msg.set(StrikeValue_26);
  Instrument_26.insert(StrikeValue_26.getString());
  FIX::Symbol Symbol_26("STRING_1466029086");
  msg.set(Symbol_26);
  Instrument_26.insert(Symbol_26.getString());
  FIX::SymbolSfx SymbolSfx_26("STRING_WI");
  msg.set(SymbolSfx_26);
  Instrument_26.insert(SymbolSfx_26.getString());
  FIX::TimeUnit TimeUnit_26("STRING_D");
  msg.set(TimeUnit_26);
  Instrument_26.insert(TimeUnit_26.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_26(4);
  msg.set(UnderlyingPriceDeterminationMethod_26);
  Instrument_26.insert(UnderlyingPriceDeterminationMethod_26.getString());
  FIX::UnitOfMeasure UnitOfMeasure_26("STRING_lbs");
  msg.set(UnitOfMeasure_26);
  Instrument_26.insert(UnitOfMeasure_26.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_26;
  UnitOfMeasureQty_26.setString("17674478");
  msg.set(UnitOfMeasureQty_26);
  Instrument_26.insert(UnitOfMeasureQty_26.getString());
  FIX::ValuationMethod ValuationMethod_26("STRING_FUT");
  msg.set(ValuationMethod_26);
  Instrument_26.insert(ValuationMethod_26.getString());
  all_values.push_back(Instrument_26);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_26;
    FIX::ComplexEventCondition ComplexEventCondition_26(2);
    noComplexEvents_0_0.set(ComplexEventCondition_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventCondition_26.getString());
    FIX::ComplexEventPrice ComplexEventPrice_26;
    ComplexEventPrice_26.setString("8915577");
    noComplexEvents_0_0.set(ComplexEventPrice_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPrice_26.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_26(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceBoundaryMethod_26.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_26;
    ComplexEventPriceBoundaryPrecision_26.setString("37.360000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceBoundaryPrecision_26.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_26(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceTimeType_26.getString());
    FIX::ComplexEventType ComplexEventType_26(5);
    noComplexEvents_0_0.set(ComplexEventType_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventType_26.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_26;
    ComplexOptPayoutAmount_26.setString("2032422");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexOptPayoutAmount_26.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_26);
    all_compo_names.insert("...NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_26;
      FIX::ComplexEventEndDate ComplexEventEndDate_26(FIX::UTCTIMESTAMP(3, 38, 54, 5, 7, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_26);
      ComplexEventDates_NoComplexEventDates_26.insert(ComplexEventEndDate_26.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_26(FIX::UTCTIMESTAMP(1, 31, 34, 1, 6, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_26);
      ComplexEventDates_NoComplexEventDates_26.insert(ComplexEventStartDate_26.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_26);
      all_compo_names.insert("...NoComplexEvents..NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_26;
        FIX::ComplexEventEndTime ComplexEventEndTime_26(FIX::UTCTIMEONLY(10, 44, 7));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_26);
        ComplexEventTimes_NoComplexEventTimes_26.insert(ComplexEventEndTime_26.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_26(FIX::UTCTIMEONLY(16, 50, 6));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_26);
        ComplexEventTimes_NoComplexEventTimes_26.insert(ComplexEventStartTime_26.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_26);
        all_compo_names.insert("...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_26;
    FIX::EventDate EventDate_26("LOCALMKTDATE_1509374465");
    noEvents_0_0.set(EventDate_26);
    EvntGrp_NoEvents_26.insert(EventDate_26.getString());
    FIX::EventPx EventPx_26;
    EventPx_26.setString("8360962");
    noEvents_0_0.set(EventPx_26);
    EvntGrp_NoEvents_26.insert(EventPx_26.getString());
    FIX::EventText EventText_26("STRING_28629996");
    noEvents_0_0.set(EventText_26);
    EvntGrp_NoEvents_26.insert(EventText_26.getString());
    FIX::EventTime EventTime_26(FIX::UTCTIMESTAMP(13, 43, 30, 8, 11, 2014));
    noEvents_0_0.set(EventTime_26);
    EvntGrp_NoEvents_26.insert(EventTime_26.getString());
    FIX::EventType EventType_26(99);
    noEvents_0_0.set(EventType_26);
    EvntGrp_NoEvents_26.insert(EventType_26.getString());
    all_values.push_back(EvntGrp_NoEvents_26);
    all_compo_names.insert("...NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_26;
    FIX::InstrumentPartyID InstrumentPartyID_26("STRING_1619100123");
    noInstrumentParties_0_0.set(InstrumentPartyID_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyID_26.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_26('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyIDSource_26.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_26(288648417);
    noInstrumentParties_0_0.set(InstrumentPartyRole_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyRole_26.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_26);
    all_compo_names.insert("...NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26;
      FIX::InstrumentPartySubID InstrumentPartySubID_26("STRING_764247822");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_26);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26.insert(InstrumentPartySubID_26.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_26(1555012292);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_26);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26.insert(InstrumentPartySubIDType_26.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_26);
      all_compo_names.insert("...NoInstrumentParties..NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_26;
    FIX::SecurityAltID SecurityAltID_26("STRING_197623120");
    noSecurityAltID_0_0.set(SecurityAltID_26);
    SecAltIDGrp_NoSecurityAltID_26.insert(SecurityAltID_26.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_26("STRING_794313508");
    noSecurityAltID_0_0.set(SecurityAltIDSource_26);
    SecAltIDGrp_NoSecurityAltID_26.insert(SecurityAltIDSource_26.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_26);
    all_compo_names.insert("...NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_52;
  FIX::SecurityXML SecurityXML_53("XMLDATA_270832134");
  msg.set(SecurityXML_53);
  FIX::SecurityXMLLen SecurityXMLLen_26(1097027504);
  msg.set(SecurityXMLLen_26);
  FIX::SecurityXMLSchema SecurityXMLSchema_26("STRING_1040085662");
  msg.set(SecurityXMLSchema_26);
  SecurityXML_52.insert(SecurityXMLSchema_26.getString());
  all_values.push_back(SecurityXML_52);
  all_compo_names.insert("..");

  // MDFullGrp
  // Group MDFullGrp.NoMDEntries
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_0;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_0;
    FIX::Currency Currency_22("JPY");
    noMDEntries_0_0.set(Currency_22);
    MDFullGrp_NoMDEntries_0.insert(Currency_22.getString());
    FIX::DealingCapacity DealingCapacity_1('R');
    noMDEntries_0_0.set(DealingCapacity_1);
    MDFullGrp_NoMDEntries_0.insert(DealingCapacity_1.getString());
    FIX::DeskID DeskID_1("STRING_1553159973");
    noMDEntries_0_0.set(DeskID_1);
    MDFullGrp_NoMDEntries_0.insert(DeskID_1.getString());
    FIX::EncodedText EncodedText_40("DATA_434443922");
    noMDEntries_0_0.set(EncodedText_40);
    MDFullGrp_NoMDEntries_0.insert(EncodedText_40.getString());
    FIX::EncodedTextLen EncodedTextLen_40(1337556787);
    noMDEntries_0_0.set(EncodedTextLen_40);
    MDFullGrp_NoMDEntries_0.insert(EncodedTextLen_40.getString());
    FIX::ExecInst ExecInst_3("MULTIPLECHARVALUE_c");
    noMDEntries_0_0.set(ExecInst_3);
    MDFullGrp_NoMDEntries_0.insert(ExecInst_3.getString());
    FIX::ExpireDate ExpireDate_4("LOCALMKTDATE_1270540142");
    noMDEntries_0_0.set(ExpireDate_4);
    MDFullGrp_NoMDEntries_0.insert(ExpireDate_4.getString());
    FIX::ExpireTime ExpireTime_5(FIX::UTCTIMESTAMP(1, 55, 26, 7, 9, 2017));
    noMDEntries_0_0.set(ExpireTime_5);
    MDFullGrp_NoMDEntries_0.insert(ExpireTime_5.getString());
    FIX::FirstPx FirstPx_1;
    FirstPx_1.setString("15807895");
    noMDEntries_0_0.set(FirstPx_1);
    MDFullGrp_NoMDEntries_0.insert(FirstPx_1.getString());
    FIX::HaltReasonInt HaltReasonInt_1(1);
    noMDEntries_0_0.set(HaltReasonInt_1);
    MDFullGrp_NoMDEntries_0.insert(HaltReasonInt_1.getString());
    FIX::HighPx HighPx_1;
    HighPx_1.setString("3614953");
    noMDEntries_0_0.set(HighPx_1);
    MDFullGrp_NoMDEntries_0.insert(HighPx_1.getString());
    FIX::LastPx LastPx_7;
    LastPx_7.setString("10524060");
    noMDEntries_0_0.set(LastPx_7);
    MDFullGrp_NoMDEntries_0.insert(LastPx_7.getString());
    FIX::LocationID LocationID_1("STRING_1708022322");
    noMDEntries_0_0.set(LocationID_1);
    MDFullGrp_NoMDEntries_0.insert(LocationID_1.getString());
    FIX::LotType LotType_4('3');
    noMDEntries_0_0.set(LotType_4);
    MDFullGrp_NoMDEntries_0.insert(LotType_4.getString());
    FIX::LowPx LowPx_1;
    LowPx_1.setString("4384417");
    noMDEntries_0_0.set(LowPx_1);
    MDFullGrp_NoMDEntries_0.insert(LowPx_1.getString());
    FIX::MDEntryBuyer MDEntryBuyer_1("STRING_324786497");
    noMDEntries_0_0.set(MDEntryBuyer_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryBuyer_1.getString());
    FIX::MDEntryDate MDEntryDate_1(FIX::UTCDATEONLY(24, 10, 2004));
    noMDEntries_0_0.set(MDEntryDate_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryDate_1.getString());
    FIX::MDEntryForwardPoints MDEntryForwardPoints_1;
    MDEntryForwardPoints_1.setString("12044348");
    noMDEntries_0_0.set(MDEntryForwardPoints_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryForwardPoints_1.getString());
    FIX::MDEntryID MDEntryID_1("STRING_1619437121");
    noMDEntries_0_0.set(MDEntryID_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryID_1.getString());
    FIX::MDEntryOriginator MDEntryOriginator_1("STRING_1892071621");
    noMDEntries_0_0.set(MDEntryOriginator_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryOriginator_1.getString());
    FIX::MDEntryPositionNo MDEntryPositionNo_1(974450432);
    noMDEntries_0_0.set(MDEntryPositionNo_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryPositionNo_1.getString());
    FIX::MDEntryPx MDEntryPx_1;
    MDEntryPx_1.setString("4072967");
    noMDEntries_0_0.set(MDEntryPx_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryPx_1.getString());
    FIX::MDEntrySeller MDEntrySeller_1("STRING_411633057");
    noMDEntries_0_0.set(MDEntrySeller_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySeller_1.getString());
    FIX::MDEntrySize MDEntrySize_2;
    MDEntrySize_2.setString("20110973");
    noMDEntries_0_0.set(MDEntrySize_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySize_2.getString());
    FIX::MDEntrySpotRate MDEntrySpotRate_1;
    MDEntrySpotRate_1.setString("19604567");
    noMDEntries_0_0.set(MDEntrySpotRate_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntrySpotRate_1.getString());
    FIX::MDEntryTime MDEntryTime_1(FIX::UTCTIMEONLY(18, 11, 2));
    noMDEntries_0_0.set(MDEntryTime_1);
    MDFullGrp_NoMDEntries_0.insert(MDEntryTime_1.getString());
    FIX::MDEntryType MDEntryType_2('6');
    noMDEntries_0_0.set(MDEntryType_2);
    MDFullGrp_NoMDEntries_0.insert(MDEntryType_2.getString());
    FIX::MDMkt MDMkt_1("EXCHANGE_947943288");
    noMDEntries_0_0.set(MDMkt_1);
    MDFullGrp_NoMDEntries_0.insert(MDMkt_1.getString());
    FIX::MDOriginType MDOriginType_1(2);
    noMDEntries_0_0.set(MDOriginType_1);
    MDFullGrp_NoMDEntries_0.insert(MDOriginType_1.getString());
    FIX::MDPriceLevel MDPriceLevel_1(2017932632);
    noMDEntries_0_0.set(MDPriceLevel_1);
    MDFullGrp_NoMDEntries_0.insert(MDPriceLevel_1.getString());
    FIX::MDQuoteType MDQuoteType_2(1);
    noMDEntries_0_0.set(MDQuoteType_2);
    MDFullGrp_NoMDEntries_0.insert(MDQuoteType_2.getString());
    FIX::MinQty MinQty_3;
    MinQty_3.setString("21015486");
    noMDEntries_0_0.set(MinQty_3);
    MDFullGrp_NoMDEntries_0.insert(MinQty_3.getString());
    FIX::NumberOfOrders NumberOfOrders_1(2052438793);
    noMDEntries_0_0.set(NumberOfOrders_1);
    MDFullGrp_NoMDEntries_0.insert(NumberOfOrders_1.getString());
    FIX::OpenCloseSettlFlag OpenCloseSettlFlag_2("MULTIPLECHARVALUE_4");
    noMDEntries_0_0.set(OpenCloseSettlFlag_2);
    MDFullGrp_NoMDEntries_0.insert(OpenCloseSettlFlag_2.getString());
    FIX::OrdType OrdType_5('A');
    noMDEntries_0_0.set(OrdType_5);
    MDFullGrp_NoMDEntries_0.insert(OrdType_5.getString());
    FIX::OrderCapacity OrderCapacity_4('I');
    noMDEntries_0_0.set(OrderCapacity_4);
    MDFullGrp_NoMDEntries_0.insert(OrderCapacity_4.getString());
    FIX::OrderID OrderID_19("STRING_1867998735");
    noMDEntries_0_0.set(OrderID_19);
    MDFullGrp_NoMDEntries_0.insert(OrderID_19.getString());
    FIX::PriceDelta PriceDelta_2;
    PriceDelta_2.setString("9234228");
    noMDEntries_0_0.set(PriceDelta_2);
    MDFullGrp_NoMDEntries_0.insert(PriceDelta_2.getString());
    FIX::PriceType PriceType_17(16);
    noMDEntries_0_0.set(PriceType_17);
    MDFullGrp_NoMDEntries_0.insert(PriceType_17.getString());
    FIX::QuoteCondition QuoteCondition_1("MULTIPLESTRINGVALUE_G");
    noMDEntries_0_0.set(QuoteCondition_1);
    MDFullGrp_NoMDEntries_0.insert(QuoteCondition_1.getString());
    FIX::QuoteEntryID QuoteEntryID_1("STRING_1248209364");
    noMDEntries_0_0.set(QuoteEntryID_1);
    MDFullGrp_NoMDEntries_0.insert(QuoteEntryID_1.getString());
    FIX::RptSeq RptSeq_2(974266790);
    noMDEntries_0_0.set(RptSeq_2);
    MDFullGrp_NoMDEntries_0.insert(RptSeq_2.getString());
    FIX::Scope Scope_2("MULTIPLECHARVALUE_3");
    noMDEntries_0_0.set(Scope_2);
    MDFullGrp_NoMDEntries_0.insert(Scope_2.getString());
    FIX::SecondaryOrderID SecondaryOrderID_15("STRING_1770618981");
    noMDEntries_0_0.set(SecondaryOrderID_15);
    MDFullGrp_NoMDEntries_0.insert(SecondaryOrderID_15.getString());
    FIX::SecurityTradingStatus SecurityTradingStatus_1(25);
    noMDEntries_0_0.set(SecurityTradingStatus_1);
    MDFullGrp_NoMDEntries_0.insert(SecurityTradingStatus_1.getString());
    FIX::SellerDays SellerDays_1(149510768);
    noMDEntries_0_0.set(SellerDays_1);
    MDFullGrp_NoMDEntries_0.insert(SellerDays_1.getString());
    FIX::SettlCurrency SettlCurrency_7("CAN");
    noMDEntries_0_0.set(SettlCurrency_7);
    MDFullGrp_NoMDEntries_0.insert(SettlCurrency_7.getString());
    FIX::SettlDate SettlDate_16("LOCALMKTDATE_1123961200");
    noMDEntries_0_0.set(SettlDate_16);
    MDFullGrp_NoMDEntries_0.insert(SettlDate_16.getString());
    FIX::SettlType SettlType_10("STRING_B");
    noMDEntries_0_0.set(SettlType_10);
    MDFullGrp_NoMDEntries_0.insert(SettlType_10.getString());
    FIX::Text Text_40("STRING_1982473779");
    noMDEntries_0_0.set(Text_40);
    MDFullGrp_NoMDEntries_0.insert(Text_40.getString());
    FIX::TickDirection TickDirection_1('0');
    noMDEntries_0_0.set(TickDirection_1);
    MDFullGrp_NoMDEntries_0.insert(TickDirection_1.getString());
    FIX::TimeInForce TimeInForce_5('1');
    noMDEntries_0_0.set(TimeInForce_5);
    MDFullGrp_NoMDEntries_0.insert(TimeInForce_5.getString());
    FIX::TradeCondition TradeCondition_1("MULTIPLESTRINGVALUE_h");
    noMDEntries_0_0.set(TradeCondition_1);
    MDFullGrp_NoMDEntries_0.insert(TradeCondition_1.getString());
    FIX::TradeVolume TradeVolume_1;
    TradeVolume_1.setString("412616");
    noMDEntries_0_0.set(TradeVolume_1);
    MDFullGrp_NoMDEntries_0.insert(TradeVolume_1.getString());
    FIX::TradingSessionID TradingSessionID_18("STRING_2");
    noMDEntries_0_0.set(TradingSessionID_18);
    MDFullGrp_NoMDEntries_0.insert(TradingSessionID_18.getString());
    FIX::TradingSessionSubID TradingSessionSubID_18("STRING_7");
    noMDEntries_0_0.set(TradingSessionSubID_18);
    MDFullGrp_NoMDEntries_0.insert(TradingSessionSubID_18.getString());
    FIX::TrdType TrdType_4(17);
    noMDEntries_0_0.set(TrdType_4);
    MDFullGrp_NoMDEntries_0.insert(TrdType_4.getString());
    all_values.push_back(MDFullGrp_NoMDEntries_0);
    all_compo_names.insert("..NoMDEntries");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_25;
      FIX::PartyID PartyID_25("STRING_1328411535");
      noPartyIDs_0_1_0.set(PartyID_25);
      Parties_NoPartyIDs_25.insert(PartyID_25.getString());
      FIX::PartyIDSource PartyIDSource_25('5');
      noPartyIDs_0_1_0.set(PartyIDSource_25);
      Parties_NoPartyIDs_25.insert(PartyIDSource_25.getString());
      FIX::PartyRole PartyRole_25(33);
      noPartyIDs_0_1_0.set(PartyRole_25);
      Parties_NoPartyIDs_25.insert(PartyRole_25.getString());
      all_values.push_back(Parties_NoPartyIDs_25);
      all_compo_names.insert("..NoMDEntries..NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_25;
        FIX::PartySubID PartySubID_25("STRING_236539382");
        noPartySubIDs_0_0_2_0.set(PartySubID_25);
        PtysSubGrp_NoPartySubIDs_25.insert(PartySubID_25.getString());
        FIX::PartySubIDType PartySubIDType_25(9);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_25);
        PtysSubGrp_NoPartySubIDs_25.insert(PartySubIDType_25.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_25);
        all_compo_names.insert("..NoMDEntries..NoPartyIDs..NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_4;
      FIX::RateSource RateSource_9(0);
      noRateSources_0_1_0.set(RateSource_9);
      RateSource_NoRateSources_4.insert(RateSource_9.getString());
      FIX::RateSourceType RateSourceType_4(0);
      noRateSources_0_1_0.set(RateSourceType_4);
      RateSource_NoRateSources_4.insert(RateSourceType_4.getString());
      FIX::ReferencePage ReferencePage_4("STRING_1421299910");
      noRateSources_0_1_0.set(ReferencePage_4);
      RateSource_NoRateSources_4.insert(ReferencePage_4.getString());
      all_values.push_back(RateSource_NoRateSources_4);
      all_compo_names.insert("..NoMDEntries..NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_1;
      FIX::MDSecSize MDSecSize_1;
      MDSecSize_1.setString("9211934");
      noOfSecSizes_0_1_0.set(MDSecSize_1);
      SecSizesGrp_NoOfSecSizes_1.insert(MDSecSize_1.getString());
      FIX::MDSecSizeType MDSecSizeType_1(1);
      noOfSecSizes_0_1_0.set(MDSecSizeType_1);
      SecSizesGrp_NoOfSecSizes_1.insert(MDSecSizeType_1.getString());
      all_values.push_back(SecSizesGrp_NoOfSecSizes_1);
      all_compo_names.insert("..NoMDEntries..NoOfSecSizes");

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_13;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_13("GBP");
    noMDEntries_0_0.set(BenchmarkCurveCurrency_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurveCurrency_13.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_13("STRING_Pfandbriefe");
    noMDEntries_0_0.set(BenchmarkCurveName_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurveName_13.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_13("STRING_2072620147");
    noMDEntries_0_0.set(BenchmarkCurvePoint_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkCurvePoint_13.getString());
    FIX::BenchmarkPrice BenchmarkPrice_13;
    BenchmarkPrice_13.setString("157801");
    noMDEntries_0_0.set(BenchmarkPrice_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkPrice_13.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_13(1387733414);
    noMDEntries_0_0.set(BenchmarkPriceType_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkPriceType_13.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_13("STRING_1495977220");
    noMDEntries_0_0.set(BenchmarkSecurityID_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkSecurityID_13.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_13("STRING_1139741383");
    noMDEntries_0_0.set(BenchmarkSecurityIDSource_13);
    SpreadOrBenchmarkCurveData_13.insert(BenchmarkSecurityIDSource_13.getString());
    FIX::Spread Spread_13;
    Spread_13.setString("8901189");
    noMDEntries_0_0.set(Spread_13);
    SpreadOrBenchmarkCurveData_13.insert(Spread_13.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_13);
    all_compo_names.insert("..NoMDEntries.");

    // YieldData
    multiset<string> YieldData_8;
    FIX::Yield Yield_8;
    Yield_8.setString("73.510000");
    noMDEntries_0_0.set(Yield_8);
    YieldData_8.insert(Yield_8.getString());
    FIX::YieldCalcDate YieldCalcDate_8("LOCALMKTDATE_2127316247");
    noMDEntries_0_0.set(YieldCalcDate_8);
    YieldData_8.insert(YieldCalcDate_8.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_8("LOCALMKTDATE_205477620");
    noMDEntries_0_0.set(YieldRedemptionDate_8);
    YieldData_8.insert(YieldRedemptionDate_8.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_8;
    YieldRedemptionPrice_8.setString("20120344");
    noMDEntries_0_0.set(YieldRedemptionPrice_8);
    YieldData_8.insert(YieldRedemptionPrice_8.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_8(21094265);
    noMDEntries_0_0.set(YieldRedemptionPriceType_8);
    YieldData_8.insert(YieldRedemptionPriceType_8.getString());
    FIX::YieldType YieldType_8("STRING_PUT");
    noMDEntries_0_0.set(YieldType_8);
    YieldData_8.insert(YieldType_8.getString());
    all_values.push_back(YieldData_8);
    all_compo_names.insert("..NoMDEntries.");

    msg.addGroup(noMDEntries_0_0);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_3;
    FIX::RoutingID RoutingID_3("STRING_482229518");
    noRoutingIDs_0_0.set(RoutingID_3);
    RoutingGrp_NoRoutingIDs_3.insert(RoutingID_3.getString());
    FIX::RoutingType RoutingType_3(4);
    noRoutingIDs_0_0.set(RoutingType_3);
    RoutingGrp_NoRoutingIDs_3.insert(RoutingType_3.getString());
    all_values.push_back(RoutingGrp_NoRoutingIDs_3);
    all_compo_names.insert("..NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_26;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_26("DATA_813813755");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingIssuer_26.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_26(1466314810);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingIssuerLen_26.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_26("DATA_978155785");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingSecurityDesc_26.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_26(1050353137);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingSecurityDescLen_26.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_26;
    UnderlyingAdjustedQuantity_26.setString("3605526");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_26);
    UnderlyingInstrument_26.insert(UnderlyingAdjustedQuantity_26.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_26;
    UnderlyingAllocationPercent_26.setString("28.270000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_26);
    UnderlyingInstrument_26.insert(UnderlyingAllocationPercent_26.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_26;
    UnderlyingAttachmentPoint_26.setString("30.540000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_26);
    UnderlyingInstrument_26.insert(UnderlyingAttachmentPoint_26.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_26("STRING_1122789320");
    noUnderlyings_0_0.set(UnderlyingCFICode_26);
    UnderlyingInstrument_26.insert(UnderlyingCFICode_26.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_26("STRING_749849089");
    noUnderlyings_0_0.set(UnderlyingCPProgram_26);
    UnderlyingInstrument_26.insert(UnderlyingCPProgram_26.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_26("STRING_825443662");
    noUnderlyings_0_0.set(UnderlyingCPRegType_26);
    UnderlyingInstrument_26.insert(UnderlyingCPRegType_26.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_26;
    UnderlyingCapValue_26.setString("20439828");
    noUnderlyings_0_0.set(UnderlyingCapValue_26);
    UnderlyingInstrument_26.insert(UnderlyingCapValue_26.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_26;
    UnderlyingCashAmount_26.setString("12718747");
    noUnderlyings_0_0.set(UnderlyingCashAmount_26);
    UnderlyingInstrument_26.insert(UnderlyingCashAmount_26.getString());
    FIX::UnderlyingCashType UnderlyingCashType_26("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_26);
    UnderlyingInstrument_26.insert(UnderlyingCashType_26.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_26;
    UnderlyingContractMultiplier_26.setString("19102522");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_26);
    UnderlyingInstrument_26.insert(UnderlyingContractMultiplier_26.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_26(1417035676);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_26);
    UnderlyingInstrument_26.insert(UnderlyingContractMultiplierUnit_26.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_26("COUNTRY_996947560");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingCountryOfIssue_26.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_26("LOCALMKTDATE_1926032406");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_26);
    UnderlyingInstrument_26.insert(UnderlyingCouponPaymentDate_26.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_26;
    UnderlyingCouponRate_26.setString("54.420000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_26);
    UnderlyingInstrument_26.insert(UnderlyingCouponRate_26.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_26("STRING_345441132");
    noUnderlyings_0_0.set(UnderlyingCreditRating_26);
    UnderlyingInstrument_26.insert(UnderlyingCreditRating_26.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_26("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_26);
    UnderlyingInstrument_26.insert(UnderlyingCurrency_26.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_26;
    UnderlyingCurrentValue_26.setString("16764084");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_26);
    UnderlyingInstrument_26.insert(UnderlyingCurrentValue_26.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_26;
    UnderlyingDetachmentPoint_26.setString("27.400000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_26);
    UnderlyingInstrument_26.insert(UnderlyingDetachmentPoint_26.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_26;
    UnderlyingDirtyPrice_26.setString("17528820");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_26);
    UnderlyingInstrument_26.insert(UnderlyingDirtyPrice_26.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_26;
    UnderlyingEndPrice_26.setString("15409592");
    noUnderlyings_0_0.set(UnderlyingEndPrice_26);
    UnderlyingInstrument_26.insert(UnderlyingEndPrice_26.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_26;
    UnderlyingEndValue_26.setString("9192170");
    noUnderlyings_0_0.set(UnderlyingEndValue_26);
    UnderlyingInstrument_26.insert(UnderlyingEndValue_26.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_26(2001742175);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_26);
    UnderlyingInstrument_26.insert(UnderlyingExerciseStyle_26.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_26;
    UnderlyingFXRate_26.setString("20557106");
    noUnderlyings_0_0.set(UnderlyingFXRate_26);
    UnderlyingInstrument_26.insert(UnderlyingFXRate_26.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_26('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_26);
    UnderlyingInstrument_26.insert(UnderlyingFXRateCalc_26.getString());
    FIX::UnderlyingFactor UnderlyingFactor_26;
    UnderlyingFactor_26.setString("10944444");
    noUnderlyings_0_0.set(UnderlyingFactor_26);
    UnderlyingInstrument_26.insert(UnderlyingFactor_26.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_26(1751389986);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_26);
    UnderlyingInstrument_26.insert(UnderlyingFlowScheduleType_26.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_26("STRING_67776630");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_26);
    UnderlyingInstrument_26.insert(UnderlyingInstrRegistry_26.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_26("LOCALMKTDATE_413275629");
    noUnderlyings_0_0.set(UnderlyingIssueDate_26);
    UnderlyingInstrument_26.insert(UnderlyingIssueDate_26.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_26("STRING_582062123");
    noUnderlyings_0_0.set(UnderlyingIssuer_26);
    UnderlyingInstrument_26.insert(UnderlyingIssuer_26.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_26("STRING_1118129768");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingLocaleOfIssue_26.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_26("LOCALMKTDATE_773828327");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityDate_26.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_26("MONTHYEAR_2058094950");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityMonthYear_26.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_26("TZTIMEONLY_523989174");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityTime_26.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_26;
    UnderlyingNotionalPercentageOutstanding_26.setString("76.470000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_26);
    UnderlyingInstrument_26.insert(UnderlyingNotionalPercentageOutstanding_26.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_26('6');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_26);
    UnderlyingInstrument_26.insert(UnderlyingOptAttribute_26.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_26;
    UnderlyingOriginalNotionalPercentageOutstanding_26.setString("28.360000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_26);
    UnderlyingInstrument_26.insert(UnderlyingOriginalNotionalPercentageOutstanding_26.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_26("STRING_1793116808");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_26);
    UnderlyingInstrument_26.insert(UnderlyingPriceUnitOfMeasure_26.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_26;
    UnderlyingPriceUnitOfMeasureQty_26.setString("19323351");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_26);
    UnderlyingInstrument_26.insert(UnderlyingPriceUnitOfMeasureQty_26.getString());
    FIX::UnderlyingProduct UnderlyingProduct_26(273760249);
    noUnderlyings_0_0.set(UnderlyingProduct_26);
    UnderlyingInstrument_26.insert(UnderlyingProduct_26.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_26(1555885384);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_26);
    UnderlyingInstrument_26.insert(UnderlyingPutOrCall_26.getString());
    FIX::UnderlyingPx UnderlyingPx_26;
    UnderlyingPx_26.setString("12018871");
    noUnderlyings_0_0.set(UnderlyingPx_26);
    UnderlyingInstrument_26.insert(UnderlyingPx_26.getString());
    FIX::UnderlyingQty UnderlyingQty_26;
    UnderlyingQty_26.setString("12707078");
    noUnderlyings_0_0.set(UnderlyingQty_26);
    UnderlyingInstrument_26.insert(UnderlyingQty_26.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_26("LOCALMKTDATE_1334434142");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_26);
    UnderlyingInstrument_26.insert(UnderlyingRedemptionDate_26.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_26("STRING_1859172578");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_26);
    UnderlyingInstrument_26.insert(UnderlyingRepoCollateralSecurityType_26.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_26;
    UnderlyingRepurchaseRate_26.setString("89.420000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_26);
    UnderlyingInstrument_26.insert(UnderlyingRepurchaseRate_26.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_26(105240635);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_26);
    UnderlyingInstrument_26.insert(UnderlyingRepurchaseTerm_26.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_26("STRING_1259093350");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_26);
    UnderlyingInstrument_26.insert(UnderlyingRestructuringType_26.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_26("STRING_1145073778");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityDesc_26.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_26("EXCHANGE_1003363375");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityExchange_26.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_26("STRING_864491742");
    noUnderlyings_0_0.set(UnderlyingSecurityID_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityID_26.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_26("STRING_538549428");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityIDSource_26.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_26("STRING_1922580380");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_26);
    UnderlyingInstrument_26.insert(UnderlyingSecuritySubType_26.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_26("STRING_718750269");
    noUnderlyings_0_0.set(UnderlyingSecurityType_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityType_26.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_26("STRING_446776479");
    noUnderlyings_0_0.set(UnderlyingSeniority_26);
    UnderlyingInstrument_26.insert(UnderlyingSeniority_26.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_26("STRING_1176543256");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_26);
    UnderlyingInstrument_26.insert(UnderlyingSettlMethod_26.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_26(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_26);
    UnderlyingInstrument_26.insert(UnderlyingSettlementType_26.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_26;
    UnderlyingStartValue_26.setString("506828");
    noUnderlyings_0_0.set(UnderlyingStartValue_26);
    UnderlyingInstrument_26.insert(UnderlyingStartValue_26.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_26("STRING_1244319886");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingStateOrProvinceOfIssue_26.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_26("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_26);
    UnderlyingInstrument_26.insert(UnderlyingStrikeCurrency_26.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_26;
    UnderlyingStrikePrice_26.setString("2149660");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_26);
    UnderlyingInstrument_26.insert(UnderlyingStrikePrice_26.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_26("STRING_852815044");
    noUnderlyings_0_0.set(UnderlyingSymbol_26);
    UnderlyingInstrument_26.insert(UnderlyingSymbol_26.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_26("STRING_543356242");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_26);
    UnderlyingInstrument_26.insert(UnderlyingSymbolSfx_26.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_26("STRING_738955180");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_26);
    UnderlyingInstrument_26.insert(UnderlyingTimeUnit_26.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_26("STRING_601949043");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_26);
    UnderlyingInstrument_26.insert(UnderlyingUnitOfMeasure_26.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_26;
    UnderlyingUnitOfMeasureQty_26.setString("12038166");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_26);
    UnderlyingInstrument_26.insert(UnderlyingUnitOfMeasureQty_26.getString());
    all_values.push_back(UnderlyingInstrument_26);
    all_compo_names.insert("..NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_26;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_26("STRING_247582204");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_26);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_26.insert(UnderlyingSecurityAltID_26.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_26("STRING_988668094");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_26);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_26.insert(UnderlyingSecurityAltIDSource_26.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_26);
      all_compo_names.insert("..NoUnderlyings...NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_26;
      FIX::UnderlyingStipType UnderlyingStipType_26("STRING_1803467588");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_26);
      UnderlyingStipulations_NoUnderlyingStips_26.insert(UnderlyingStipType_26.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_26("STRING_43071582");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_26);
      UnderlyingStipulations_NoUnderlyingStips_26.insert(UnderlyingStipValue_26.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_26);
      all_compo_names.insert("..NoUnderlyings...NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_26;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_26("STRING_990418082");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyID_26.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_26('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyIDSource_26.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_26(954037722);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyRole_26.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_26);
      all_compo_names.insert("..NoUnderlyings...NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_26("STRING_1013853863");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_26);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26.insert(UnderlyingInstrumentPartySubID_26.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_26(2099111500);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_26);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26.insert(UnderlyingInstrumentPartySubIDType_26.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_26);
        all_compo_names.insert("..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
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
