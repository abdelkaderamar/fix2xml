#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradeCaptureReportRequestAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportRequestAck, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradeCaptureReportRequestAck msg;

  list<multiset<string>> all_values;
  multiset<string> TradeCaptureReportRequestAck_0;
  FIX::EncodedText EncodedText_103("DATA_202635786");
  msg.set(EncodedText_103);
  TradeCaptureReportRequestAck_0.insert(EncodedText_103.getString());
  FIX::EncodedTextLen EncodedTextLen_103(1458620846);
  msg.set(EncodedTextLen_103);
  TradeCaptureReportRequestAck_0.insert(EncodedTextLen_103.getString());
  FIX::FirmTradeID FirmTradeID_10("STRING_2105835127");
  msg.set(FirmTradeID_10);
  TradeCaptureReportRequestAck_0.insert(FirmTradeID_10.getString());
  FIX::MessageEventSource MessageEventSource_7("STRING_1589829787");
  msg.set(MessageEventSource_7);
  TradeCaptureReportRequestAck_0.insert(MessageEventSource_7.getString());
  FIX::MultiLegReportingType MultiLegReportingType_7('1');
  msg.set(MultiLegReportingType_7);
  TradeCaptureReportRequestAck_0.insert(MultiLegReportingType_7.getString());
  FIX::ResponseDestination ResponseDestination_6("STRING_1893509863");
  msg.set(ResponseDestination_6);
  TradeCaptureReportRequestAck_0.insert(ResponseDestination_6.getString());
  FIX::ResponseTransportType ResponseTransportType_6(1);
  msg.set(ResponseTransportType_6);
  TradeCaptureReportRequestAck_0.insert(ResponseTransportType_6.getString());
  FIX::SecondaryFirmTradeID SecondaryFirmTradeID_3("STRING_2008802184");
  msg.set(SecondaryFirmTradeID_3);
  TradeCaptureReportRequestAck_0.insert(SecondaryFirmTradeID_3.getString());
  FIX::SecondaryTradeID SecondaryTradeID_3("STRING_782151268");
  msg.set(SecondaryTradeID_3);
  TradeCaptureReportRequestAck_0.insert(SecondaryTradeID_3.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_16('0');
  msg.set(SubscriptionRequestType_16);
  TradeCaptureReportRequestAck_0.insert(SubscriptionRequestType_16.getString());
  FIX::Text Text_103("STRING_402447712");
  msg.set(Text_103);
  TradeCaptureReportRequestAck_0.insert(Text_103.getString());
  FIX::TotNumTradeReports TotNumTradeReports_1(1905735044);
  msg.set(TotNumTradeReports_1);
  TradeCaptureReportRequestAck_0.insert(TotNumTradeReports_1.getString());
  FIX::TradeID TradeID_12("STRING_287076568");
  msg.set(TradeID_12);
  TradeCaptureReportRequestAck_0.insert(TradeID_12.getString());
  FIX::TradeRequestID TradeRequestID_2("STRING_1211770505");
  msg.set(TradeRequestID_2);
  TradeCaptureReportRequestAck_0.insert(TradeRequestID_2.getString());
  FIX::TradeRequestResult TradeRequestResult_0(99);
  msg.set(TradeRequestResult_0);
  TradeCaptureReportRequestAck_0.insert(TradeRequestResult_0.getString());
  FIX::TradeRequestStatus TradeRequestStatus_0(2);
  msg.set(TradeRequestStatus_0);
  TradeCaptureReportRequestAck_0.insert(TradeRequestStatus_0.getString());
  FIX::TradeRequestType TradeRequestType_1(4);
  msg.set(TradeRequestType_1);
  TradeCaptureReportRequestAck_0.insert(TradeRequestType_1.getString());
  all_values.push_back(TradeCaptureReportRequestAck_0);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_140;
    FIX::EncodedLegIssuer EncodedLegIssuer_140("DATA_1593781606");
    noLegs_0_0.set(EncodedLegIssuer_140);
    InstrumentLeg_140.insert(EncodedLegIssuer_140.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_140(483066211);
    noLegs_0_0.set(EncodedLegIssuerLen_140);
    InstrumentLeg_140.insert(EncodedLegIssuerLen_140.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_140("DATA_356264900");
    noLegs_0_0.set(EncodedLegSecurityDesc_140);
    InstrumentLeg_140.insert(EncodedLegSecurityDesc_140.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_140(1793733247);
    noLegs_0_0.set(EncodedLegSecurityDescLen_140);
    InstrumentLeg_140.insert(EncodedLegSecurityDescLen_140.getString());
    FIX::LegCFICode LegCFICode_140("STRING_189009252");
    noLegs_0_0.set(LegCFICode_140);
    InstrumentLeg_140.insert(LegCFICode_140.getString());
    FIX::LegContractMultiplier LegContractMultiplier_140;
    LegContractMultiplier_140.setString("18877093");
    noLegs_0_0.set(LegContractMultiplier_140);
    InstrumentLeg_140.insert(LegContractMultiplier_140.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_140(1392463549);
    noLegs_0_0.set(LegContractMultiplierUnit_140);
    InstrumentLeg_140.insert(LegContractMultiplierUnit_140.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_140("MONTHYEAR_722249817");
    noLegs_0_0.set(LegContractSettlMonth_140);
    InstrumentLeg_140.insert(LegContractSettlMonth_140.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_140("COUNTRY_1127889596");
    noLegs_0_0.set(LegCountryOfIssue_140);
    InstrumentLeg_140.insert(LegCountryOfIssue_140.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_140("LOCALMKTDATE_2114856666");
    noLegs_0_0.set(LegCouponPaymentDate_140);
    InstrumentLeg_140.insert(LegCouponPaymentDate_140.getString());
    FIX::LegCouponRate LegCouponRate_140;
    LegCouponRate_140.setString("3.190000");
    noLegs_0_0.set(LegCouponRate_140);
    InstrumentLeg_140.insert(LegCouponRate_140.getString());
    FIX::LegCreditRating LegCreditRating_140("STRING_169213579");
    noLegs_0_0.set(LegCreditRating_140);
    InstrumentLeg_140.insert(LegCreditRating_140.getString());
    FIX::LegCurrency LegCurrency_140("CHF");
    noLegs_0_0.set(LegCurrency_140);
    InstrumentLeg_140.insert(LegCurrency_140.getString());
    FIX::LegDatedDate LegDatedDate_140("LOCALMKTDATE_1627834425");
    noLegs_0_0.set(LegDatedDate_140);
    InstrumentLeg_140.insert(LegDatedDate_140.getString());
    FIX::LegExerciseStyle LegExerciseStyle_140(425458186);
    noLegs_0_0.set(LegExerciseStyle_140);
    InstrumentLeg_140.insert(LegExerciseStyle_140.getString());
    FIX::LegFactor LegFactor_140;
    LegFactor_140.setString("11201322");
    noLegs_0_0.set(LegFactor_140);
    InstrumentLeg_140.insert(LegFactor_140.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_140(2125600845);
    noLegs_0_0.set(LegFlowScheduleType_140);
    InstrumentLeg_140.insert(LegFlowScheduleType_140.getString());
    FIX::LegInstrRegistry LegInstrRegistry_140("STRING_171484401");
    noLegs_0_0.set(LegInstrRegistry_140);
    InstrumentLeg_140.insert(LegInstrRegistry_140.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_140("LOCALMKTDATE_584322435");
    noLegs_0_0.set(LegInterestAccrualDate_140);
    InstrumentLeg_140.insert(LegInterestAccrualDate_140.getString());
    FIX::LegIssueDate LegIssueDate_140("LOCALMKTDATE_1986919382");
    noLegs_0_0.set(LegIssueDate_140);
    InstrumentLeg_140.insert(LegIssueDate_140.getString());
    FIX::LegIssuer LegIssuer_140("STRING_953635669");
    noLegs_0_0.set(LegIssuer_140);
    InstrumentLeg_140.insert(LegIssuer_140.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_140("STRING_1929572424");
    noLegs_0_0.set(LegLocaleOfIssue_140);
    InstrumentLeg_140.insert(LegLocaleOfIssue_140.getString());
    FIX::LegMaturityDate LegMaturityDate_140("LOCALMKTDATE_241883446");
    noLegs_0_0.set(LegMaturityDate_140);
    InstrumentLeg_140.insert(LegMaturityDate_140.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_140("MONTHYEAR_711887066");
    noLegs_0_0.set(LegMaturityMonthYear_140);
    InstrumentLeg_140.insert(LegMaturityMonthYear_140.getString());
    FIX::LegMaturityTime LegMaturityTime_140("TZTIMEONLY_69165344");
    noLegs_0_0.set(LegMaturityTime_140);
    InstrumentLeg_140.insert(LegMaturityTime_140.getString());
    FIX::LegOptAttribute LegOptAttribute_140('1');
    noLegs_0_0.set(LegOptAttribute_140);
    InstrumentLeg_140.insert(LegOptAttribute_140.getString());
    FIX::LegOptionRatio LegOptionRatio_140;
    LegOptionRatio_140.setString("10160058");
    noLegs_0_0.set(LegOptionRatio_140);
    InstrumentLeg_140.insert(LegOptionRatio_140.getString());
    FIX::LegPool LegPool_140("STRING_2030429768");
    noLegs_0_0.set(LegPool_140);
    InstrumentLeg_140.insert(LegPool_140.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_140("STRING_1728629405");
    noLegs_0_0.set(LegPriceUnitOfMeasure_140);
    InstrumentLeg_140.insert(LegPriceUnitOfMeasure_140.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_140;
    LegPriceUnitOfMeasureQty_140.setString("15635107");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_140);
    InstrumentLeg_140.insert(LegPriceUnitOfMeasureQty_140.getString());
    FIX::LegProduct LegProduct_140(1476727726);
    noLegs_0_0.set(LegProduct_140);
    InstrumentLeg_140.insert(LegProduct_140.getString());
    FIX::LegPutOrCall LegPutOrCall_140(64211969);
    noLegs_0_0.set(LegPutOrCall_140);
    InstrumentLeg_140.insert(LegPutOrCall_140.getString());
    FIX::LegRatioQty LegRatioQty_140;
    LegRatioQty_140.setString("19197756");
    noLegs_0_0.set(LegRatioQty_140);
    InstrumentLeg_140.insert(LegRatioQty_140.getString());
    FIX::LegRedemptionDate LegRedemptionDate_140("LOCALMKTDATE_1122977326");
    noLegs_0_0.set(LegRedemptionDate_140);
    InstrumentLeg_140.insert(LegRedemptionDate_140.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_140("STRING_253221221");
    noLegs_0_0.set(LegRepoCollateralSecurityType_140);
    InstrumentLeg_140.insert(LegRepoCollateralSecurityType_140.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_140;
    LegRepurchaseRate_140.setString("13.370000");
    noLegs_0_0.set(LegRepurchaseRate_140);
    InstrumentLeg_140.insert(LegRepurchaseRate_140.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_140(367957227);
    noLegs_0_0.set(LegRepurchaseTerm_140);
    InstrumentLeg_140.insert(LegRepurchaseTerm_140.getString());
    FIX::LegSecurityDesc LegSecurityDesc_140("STRING_975471038");
    noLegs_0_0.set(LegSecurityDesc_140);
    InstrumentLeg_140.insert(LegSecurityDesc_140.getString());
    FIX::LegSecurityExchange LegSecurityExchange_140("EXCHANGE_640407285");
    noLegs_0_0.set(LegSecurityExchange_140);
    InstrumentLeg_140.insert(LegSecurityExchange_140.getString());
    FIX::LegSecurityID LegSecurityID_140("STRING_335330245");
    noLegs_0_0.set(LegSecurityID_140);
    InstrumentLeg_140.insert(LegSecurityID_140.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_140("STRING_303137709");
    noLegs_0_0.set(LegSecurityIDSource_140);
    InstrumentLeg_140.insert(LegSecurityIDSource_140.getString());
    FIX::LegSecuritySubType LegSecuritySubType_140("STRING_809620864");
    noLegs_0_0.set(LegSecuritySubType_140);
    InstrumentLeg_140.insert(LegSecuritySubType_140.getString());
    FIX::LegSecurityType LegSecurityType_140("STRING_802436952");
    noLegs_0_0.set(LegSecurityType_140);
    InstrumentLeg_140.insert(LegSecurityType_140.getString());
    FIX::LegSide LegSide_140('1');
    noLegs_0_0.set(LegSide_140);
    InstrumentLeg_140.insert(LegSide_140.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_140("STRING_289971641");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_140);
    InstrumentLeg_140.insert(LegStateOrProvinceOfIssue_140.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_140("EUR");
    noLegs_0_0.set(LegStrikeCurrency_140);
    InstrumentLeg_140.insert(LegStrikeCurrency_140.getString());
    FIX::LegStrikePrice LegStrikePrice_140;
    LegStrikePrice_140.setString("2680888");
    noLegs_0_0.set(LegStrikePrice_140);
    InstrumentLeg_140.insert(LegStrikePrice_140.getString());
    FIX::LegSymbol LegSymbol_140("STRING_1399379539");
    noLegs_0_0.set(LegSymbol_140);
    InstrumentLeg_140.insert(LegSymbol_140.getString());
    FIX::LegSymbolSfx LegSymbolSfx_140("STRING_1537894847");
    noLegs_0_0.set(LegSymbolSfx_140);
    InstrumentLeg_140.insert(LegSymbolSfx_140.getString());
    FIX::LegTimeUnit LegTimeUnit_140("STRING_107524573");
    noLegs_0_0.set(LegTimeUnit_140);
    InstrumentLeg_140.insert(LegTimeUnit_140.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_140("STRING_205531560");
    noLegs_0_0.set(LegUnitOfMeasure_140);
    InstrumentLeg_140.insert(LegUnitOfMeasure_140.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_140;
    LegUnitOfMeasureQty_140.setString("13199836");
    noLegs_0_0.set(LegUnitOfMeasureQty_140);
    InstrumentLeg_140.insert(LegUnitOfMeasureQty_140.getString());
    all_values.push_back(InstrumentLeg_140);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_284;
      FIX::LegSecurityAltID LegSecurityAltID_284("STRING_917418626");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_284);
      LegSecAltIDGrp_NoLegSecurityAltID_284.insert(LegSecurityAltID_284.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_284("STRING_1389148968");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_284);
      LegSecAltIDGrp_NoLegSecurityAltID_284.insert(LegSecurityAltIDSource_284.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_284);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_285;
      FIX::LegSecurityAltID LegSecurityAltID_285("STRING_1803061970");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_285);
      LegSecAltIDGrp_NoLegSecurityAltID_285.insert(LegSecurityAltID_285.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_285("STRING_1933424449");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_285);
      LegSecAltIDGrp_NoLegSecurityAltID_285.insert(LegSecurityAltIDSource_285.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_285);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_286;
      FIX::LegSecurityAltID LegSecurityAltID_286("STRING_1272095088");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_286);
      LegSecAltIDGrp_NoLegSecurityAltID_286.insert(LegSecurityAltID_286.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_286("STRING_1384207727");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_286);
      LegSecAltIDGrp_NoLegSecurityAltID_286.insert(LegSecurityAltIDSource_286.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_286);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_92;
  FIX::AttachmentPoint AttachmentPoint_92;
  AttachmentPoint_92.setString("15.620000");
  msg.set(AttachmentPoint_92);
  Instrument_92.insert(AttachmentPoint_92.getString());
  FIX::CFICode CFICode_97("STRING_601339166");
  msg.set(CFICode_97);
  Instrument_92.insert(CFICode_97.getString());
  FIX::CPProgram CPProgram_92(2);
  msg.set(CPProgram_92);
  Instrument_92.insert(CPProgram_92.getString());
  FIX::CPRegType CPRegType_92("STRING_1121743575");
  msg.set(CPRegType_92);
  Instrument_92.insert(CPRegType_92.getString());
  FIX::CapPrice CapPrice_92;
  CapPrice_92.setString("17243164");
  msg.set(CapPrice_92);
  Instrument_92.insert(CapPrice_92.getString());
  FIX::ContractMultiplier ContractMultiplier_92;
  ContractMultiplier_92.setString("17016409");
  msg.set(ContractMultiplier_92);
  Instrument_92.insert(ContractMultiplier_92.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_92(1);
  msg.set(ContractMultiplierUnit_92);
  Instrument_92.insert(ContractMultiplierUnit_92.getString());
  FIX::ContractSettlMonth ContractSettlMonth_92("MONTHYEAR_2092273719");
  msg.set(ContractSettlMonth_92);
  Instrument_92.insert(ContractSettlMonth_92.getString());
  FIX::CountryOfIssue CountryOfIssue_92("COUNTRY_529628307");
  msg.set(CountryOfIssue_92);
  Instrument_92.insert(CountryOfIssue_92.getString());
  FIX::CouponPaymentDate CouponPaymentDate_92("LOCALMKTDATE_1274668550");
  msg.set(CouponPaymentDate_92);
  Instrument_92.insert(CouponPaymentDate_92.getString());
  FIX::CouponRate CouponRate_92;
  CouponRate_92.setString("3.160000");
  msg.set(CouponRate_92);
  Instrument_92.insert(CouponRate_92.getString());
  FIX::CreditRating CreditRating_92("STRING_832766017");
  msg.set(CreditRating_92);
  Instrument_92.insert(CreditRating_92.getString());
  FIX::DatedDate DatedDate_92("LOCALMKTDATE_2084289414");
  msg.set(DatedDate_92);
  Instrument_92.insert(DatedDate_92.getString());
  FIX::DetachmentPoint DetachmentPoint_92;
  DetachmentPoint_92.setString("72.680000");
  msg.set(DetachmentPoint_92);
  Instrument_92.insert(DetachmentPoint_92.getString());
  FIX::EncodedIssuer EncodedIssuer_92("DATA_666206184");
  msg.set(EncodedIssuer_92);
  Instrument_92.insert(EncodedIssuer_92.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_92(226777408);
  msg.set(EncodedIssuerLen_92);
  Instrument_92.insert(EncodedIssuerLen_92.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_92("DATA_162968758");
  msg.set(EncodedSecurityDesc_92);
  Instrument_92.insert(EncodedSecurityDesc_92.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_92(1619778595);
  msg.set(EncodedSecurityDescLen_92);
  Instrument_92.insert(EncodedSecurityDescLen_92.getString());
  FIX::ExerciseStyle ExerciseStyle_92(2);
  msg.set(ExerciseStyle_92);
  Instrument_92.insert(ExerciseStyle_92.getString());
  FIX::Factor Factor_92;
  Factor_92.setString("15623482");
  msg.set(Factor_92);
  Instrument_92.insert(Factor_92.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_92(true);
  msg.set(FlexProductEligibilityIndicator_92);
  Instrument_92.insert(FlexProductEligibilityIndicator_92.getString());
  FIX::FlexibleIndicator FlexibleIndicator_92(true);
  msg.set(FlexibleIndicator_92);
  Instrument_92.insert(FlexibleIndicator_92.getString());
  FIX::FloorPrice FloorPrice_92;
  FloorPrice_92.setString("17678798");
  msg.set(FloorPrice_92);
  Instrument_92.insert(FloorPrice_92.getString());
  FIX::FlowScheduleType FlowScheduleType_92(0);
  msg.set(FlowScheduleType_92);
  Instrument_92.insert(FlowScheduleType_92.getString());
  FIX::InstrRegistry InstrRegistry_92("STRING_951798839");
  msg.set(InstrRegistry_92);
  Instrument_92.insert(InstrRegistry_92.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_92('5');
  msg.set(InstrmtAssignmentMethod_92);
  Instrument_92.insert(InstrmtAssignmentMethod_92.getString());
  FIX::InterestAccrualDate InterestAccrualDate_92("LOCALMKTDATE_1571838738");
  msg.set(InterestAccrualDate_92);
  Instrument_92.insert(InterestAccrualDate_92.getString());
  FIX::IssueDate IssueDate_92("LOCALMKTDATE_607377161");
  msg.set(IssueDate_92);
  Instrument_92.insert(IssueDate_92.getString());
  FIX::Issuer Issuer_92("STRING_323755637");
  msg.set(Issuer_92);
  Instrument_92.insert(Issuer_92.getString());
  FIX::ListMethod ListMethod_92(0);
  msg.set(ListMethod_92);
  Instrument_92.insert(ListMethod_92.getString());
  FIX::LocaleOfIssue LocaleOfIssue_92("STRING_1991584888");
  msg.set(LocaleOfIssue_92);
  Instrument_92.insert(LocaleOfIssue_92.getString());
  FIX::MaturityDate MaturityDate_92("LOCALMKTDATE_1673207199");
  msg.set(MaturityDate_92);
  Instrument_92.insert(MaturityDate_92.getString());
  FIX::MaturityMonthYear MaturityMonthYear_92("MONTHYEAR_1297789344");
  msg.set(MaturityMonthYear_92);
  Instrument_92.insert(MaturityMonthYear_92.getString());
  FIX::MaturityTime MaturityTime_92("TZTIMEONLY_1292520937");
  msg.set(MaturityTime_92);
  Instrument_92.insert(MaturityTime_92.getString());
  FIX::MinPriceIncrement MinPriceIncrement_92;
  MinPriceIncrement_92.setString("6474671");
  msg.set(MinPriceIncrement_92);
  Instrument_92.insert(MinPriceIncrement_92.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_92;
  MinPriceIncrementAmount_92.setString("8746221");
  msg.set(MinPriceIncrementAmount_92);
  Instrument_92.insert(MinPriceIncrementAmount_92.getString());
  FIX::NTPositionLimit NTPositionLimit_92(846678206);
  msg.set(NTPositionLimit_92);
  Instrument_92.insert(NTPositionLimit_92.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_92;
  NotionalPercentageOutstanding_92.setString("83.910000");
  msg.set(NotionalPercentageOutstanding_92);
  Instrument_92.insert(NotionalPercentageOutstanding_92.getString());
  FIX::OptAttribute OptAttribute_92('8');
  msg.set(OptAttribute_92);
  Instrument_92.insert(OptAttribute_92.getString());
  FIX::OptPayoutAmount OptPayoutAmount_92;
  OptPayoutAmount_92.setString("13763065");
  msg.set(OptPayoutAmount_92);
  Instrument_92.insert(OptPayoutAmount_92.getString());
  FIX::OptPayoutType OptPayoutType_92(1);
  msg.set(OptPayoutType_92);
  Instrument_92.insert(OptPayoutType_92.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_92;
  OriginalNotionalPercentageOutstanding_92.setString("25.770000");
  msg.set(OriginalNotionalPercentageOutstanding_92);
  Instrument_92.insert(OriginalNotionalPercentageOutstanding_92.getString());
  FIX::Pool Pool_92("STRING_61588883");
  msg.set(Pool_92);
  Instrument_92.insert(Pool_92.getString());
  FIX::PositionLimit PositionLimit_92(345719060);
  msg.set(PositionLimit_92);
  Instrument_92.insert(PositionLimit_92.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_92("STRING_INX");
  msg.set(PriceQuoteMethod_92);
  Instrument_92.insert(PriceQuoteMethod_92.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_92("STRING_727795067");
  msg.set(PriceUnitOfMeasure_92);
  Instrument_92.insert(PriceUnitOfMeasure_92.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_92;
  PriceUnitOfMeasureQty_92.setString("5724964");
  msg.set(PriceUnitOfMeasureQty_92);
  Instrument_92.insert(PriceUnitOfMeasureQty_92.getString());
  FIX::Product Product_100(8);
  msg.set(Product_100);
  Instrument_92.insert(Product_100.getString());
  FIX::ProductComplex ProductComplex_92("STRING_200090014");
  msg.set(ProductComplex_92);
  Instrument_92.insert(ProductComplex_92.getString());
  FIX::PutOrCall PutOrCall_92(1);
  msg.set(PutOrCall_92);
  Instrument_92.insert(PutOrCall_92.getString());
  FIX::RedemptionDate RedemptionDate_92("LOCALMKTDATE_1759923253");
  msg.set(RedemptionDate_92);
  Instrument_92.insert(RedemptionDate_92.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_92("STRING_1210279809");
  msg.set(RepoCollateralSecurityType_92);
  Instrument_92.insert(RepoCollateralSecurityType_92.getString());
  FIX::RepurchaseRate RepurchaseRate_92;
  RepurchaseRate_92.setString("35.350000");
  msg.set(RepurchaseRate_92);
  Instrument_92.insert(RepurchaseRate_92.getString());
  FIX::RepurchaseTerm RepurchaseTerm_92(1380319463);
  msg.set(RepurchaseTerm_92);
  Instrument_92.insert(RepurchaseTerm_92.getString());
  FIX::RestructuringType RestructuringType_92("STRING_XR");
  msg.set(RestructuringType_92);
  Instrument_92.insert(RestructuringType_92.getString());
  FIX::SecurityDesc SecurityDesc_92("STRING_474068726");
  msg.set(SecurityDesc_92);
  Instrument_92.insert(SecurityDesc_92.getString());
  FIX::SecurityExchange SecurityExchange_92("EXCHANGE_1918134300");
  msg.set(SecurityExchange_92);
  Instrument_92.insert(SecurityExchange_92.getString());
  FIX::SecurityGroup SecurityGroup_92("STRING_817324669");
  msg.set(SecurityGroup_92);
  Instrument_92.insert(SecurityGroup_92.getString());
  FIX::SecurityID SecurityID_92("STRING_1081445887");
  msg.set(SecurityID_92);
  Instrument_92.insert(SecurityID_92.getString());
  FIX::SecurityIDSource SecurityIDSource_92("STRING_M");
  msg.set(SecurityIDSource_92);
  Instrument_92.insert(SecurityIDSource_92.getString());
  FIX::SecurityStatus SecurityStatus_93("STRING_2");
  msg.set(SecurityStatus_93);
  Instrument_92.insert(SecurityStatus_93.getString());
  FIX::SecuritySubType SecuritySubType_96("STRING_925547127");
  msg.set(SecuritySubType_96);
  Instrument_92.insert(SecuritySubType_96.getString());
  FIX::SecurityType SecurityType_100("STRING_TINT");
  msg.set(SecurityType_100);
  Instrument_92.insert(SecurityType_100.getString());
  FIX::Seniority Seniority_92("STRING_SD");
  msg.set(Seniority_92);
  Instrument_92.insert(Seniority_92.getString());
  FIX::SettlMethod SettlMethod_92('C');
  msg.set(SettlMethod_92);
  Instrument_92.insert(SettlMethod_92.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_92("STRING_267596968");
  msg.set(SettleOnOpenFlag_92);
  Instrument_92.insert(SettleOnOpenFlag_92.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_92("STRING_1538702732");
  msg.set(StateOrProvinceOfIssue_92);
  Instrument_92.insert(StateOrProvinceOfIssue_92.getString());
  FIX::StrikeCurrency StrikeCurrency_92("EUR");
  msg.set(StrikeCurrency_92);
  Instrument_92.insert(StrikeCurrency_92.getString());
  FIX::StrikeMultiplier StrikeMultiplier_92;
  StrikeMultiplier_92.setString("2106313");
  msg.set(StrikeMultiplier_92);
  Instrument_92.insert(StrikeMultiplier_92.getString());
  FIX::StrikePrice StrikePrice_92;
  StrikePrice_92.setString("1460854");
  msg.set(StrikePrice_92);
  Instrument_92.insert(StrikePrice_92.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_92(4);
  msg.set(StrikePriceBoundaryMethod_92);
  Instrument_92.insert(StrikePriceBoundaryMethod_92.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_92;
  StrikePriceBoundaryPrecision_92.setString("39.220000");
  msg.set(StrikePriceBoundaryPrecision_92);
  Instrument_92.insert(StrikePriceBoundaryPrecision_92.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_92(1);
  msg.set(StrikePriceDeterminationMethod_92);
  Instrument_92.insert(StrikePriceDeterminationMethod_92.getString());
  FIX::StrikeValue StrikeValue_92;
  StrikeValue_92.setString("1564740");
  msg.set(StrikeValue_92);
  Instrument_92.insert(StrikeValue_92.getString());
  FIX::Symbol Symbol_92("STRING_1344770119");
  msg.set(Symbol_92);
  Instrument_92.insert(Symbol_92.getString());
  FIX::SymbolSfx SymbolSfx_92("STRING_WI");
  msg.set(SymbolSfx_92);
  Instrument_92.insert(SymbolSfx_92.getString());
  FIX::TimeUnit TimeUnit_92("STRING_Wk");
  msg.set(TimeUnit_92);
  Instrument_92.insert(TimeUnit_92.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_92(4);
  msg.set(UnderlyingPriceDeterminationMethod_92);
  Instrument_92.insert(UnderlyingPriceDeterminationMethod_92.getString());
  FIX::UnitOfMeasure UnitOfMeasure_92("STRING_MMBtu");
  msg.set(UnitOfMeasure_92);
  Instrument_92.insert(UnitOfMeasure_92.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_92;
  UnitOfMeasureQty_92.setString("17963332");
  msg.set(UnitOfMeasureQty_92);
  Instrument_92.insert(UnitOfMeasureQty_92.getString());
  FIX::ValuationMethod ValuationMethod_92("STRING_FUT");
  msg.set(ValuationMethod_92);
  Instrument_92.insert(ValuationMethod_92.getString());
  all_values.push_back(Instrument_92);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_178;
    FIX::ComplexEventCondition ComplexEventCondition_178(2);
    noComplexEvents_0_0.set(ComplexEventCondition_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventCondition_178.getString());
    FIX::ComplexEventPrice ComplexEventPrice_178;
    ComplexEventPrice_178.setString("3876204");
    noComplexEvents_0_0.set(ComplexEventPrice_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventPrice_178.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_178(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventPriceBoundaryMethod_178.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_178;
    ComplexEventPriceBoundaryPrecision_178.setString("18.610000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventPriceBoundaryPrecision_178.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_178(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventPriceTimeType_178.getString());
    FIX::ComplexEventType ComplexEventType_178(3);
    noComplexEvents_0_0.set(ComplexEventType_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexEventType_178.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_178;
    ComplexOptPayoutAmount_178.setString("7266341");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_178);
    ComplexEvents_NoComplexEvents_178.insert(ComplexOptPayoutAmount_178.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_178);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_355;
      FIX::ComplexEventEndDate ComplexEventEndDate_355(FIX::UTCTIMESTAMP(11, 27, 57, 12, 12, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_355);
      ComplexEventDates_NoComplexEventDates_355.insert(ComplexEventEndDate_355.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_355(FIX::UTCTIMESTAMP(6, 54, 8, 3, 9, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_355);
      ComplexEventDates_NoComplexEventDates_355.insert(ComplexEventStartDate_355.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_355);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_730;
        FIX::ComplexEventEndTime ComplexEventEndTime_730(FIX::UTCTIMEONLY(23, 41, 35));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_730);
        ComplexEventTimes_NoComplexEventTimes_730.insert(ComplexEventEndTime_730.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_730(FIX::UTCTIMEONLY(9, 48, 39));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_730);
        ComplexEventTimes_NoComplexEventTimes_730.insert(ComplexEventStartTime_730.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_730);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_731;
        FIX::ComplexEventEndTime ComplexEventEndTime_731(FIX::UTCTIMEONLY(1, 4, 9));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_731);
        ComplexEventTimes_NoComplexEventTimes_731.insert(ComplexEventEndTime_731.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_731(FIX::UTCTIMEONLY(19, 29, 31));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_731);
        ComplexEventTimes_NoComplexEventTimes_731.insert(ComplexEventStartTime_731.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_731);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_732;
        FIX::ComplexEventEndTime ComplexEventEndTime_732(FIX::UTCTIMEONLY(21, 50, 9));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_732);
        ComplexEventTimes_NoComplexEventTimes_732.insert(ComplexEventEndTime_732.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_732(FIX::UTCTIMEONLY(1, 31, 44));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_732);
        ComplexEventTimes_NoComplexEventTimes_732.insert(ComplexEventStartTime_732.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_732);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_356;
      FIX::ComplexEventEndDate ComplexEventEndDate_356(FIX::UTCTIMESTAMP(17, 52, 19, 6, 1, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_356);
      ComplexEventDates_NoComplexEventDates_356.insert(ComplexEventEndDate_356.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_356(FIX::UTCTIMESTAMP(15, 49, 13, 11, 4, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_356);
      ComplexEventDates_NoComplexEventDates_356.insert(ComplexEventStartDate_356.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_356);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_733;
        FIX::ComplexEventEndTime ComplexEventEndTime_733(FIX::UTCTIMEONLY(19, 35, 49));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_733);
        ComplexEventTimes_NoComplexEventTimes_733.insert(ComplexEventEndTime_733.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_733(FIX::UTCTIMEONLY(6, 18, 28));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_733);
        ComplexEventTimes_NoComplexEventTimes_733.insert(ComplexEventStartTime_733.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_733);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_734;
        FIX::ComplexEventEndTime ComplexEventEndTime_734(FIX::UTCTIMEONLY(7, 10, 16));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_734);
        ComplexEventTimes_NoComplexEventTimes_734.insert(ComplexEventEndTime_734.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_734(FIX::UTCTIMEONLY(0, 47, 40));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_734);
        ComplexEventTimes_NoComplexEventTimes_734.insert(ComplexEventStartTime_734.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_734);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_735;
        FIX::ComplexEventEndTime ComplexEventEndTime_735(FIX::UTCTIMEONLY(4, 24, 35));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_735);
        ComplexEventTimes_NoComplexEventTimes_735.insert(ComplexEventEndTime_735.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_735(FIX::UTCTIMEONLY(12, 43, 0));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_735);
        ComplexEventTimes_NoComplexEventTimes_735.insert(ComplexEventStartTime_735.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_735);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_357;
      FIX::ComplexEventEndDate ComplexEventEndDate_357(FIX::UTCTIMESTAMP(13, 6, 3, 20, 1, 2003));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_357);
      ComplexEventDates_NoComplexEventDates_357.insert(ComplexEventEndDate_357.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_357(FIX::UTCTIMESTAMP(11, 8, 52, 15, 7, 2003));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_357);
      ComplexEventDates_NoComplexEventDates_357.insert(ComplexEventStartDate_357.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_357);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_736;
        FIX::ComplexEventEndTime ComplexEventEndTime_736(FIX::UTCTIMEONLY(14, 46, 9));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_736);
        ComplexEventTimes_NoComplexEventTimes_736.insert(ComplexEventEndTime_736.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_736(FIX::UTCTIMEONLY(22, 48, 59));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_736);
        ComplexEventTimes_NoComplexEventTimes_736.insert(ComplexEventStartTime_736.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_736);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_737;
        FIX::ComplexEventEndTime ComplexEventEndTime_737(FIX::UTCTIMEONLY(8, 24, 9));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_737);
        ComplexEventTimes_NoComplexEventTimes_737.insert(ComplexEventEndTime_737.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_737(FIX::UTCTIMEONLY(4, 45, 59));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_737);
        ComplexEventTimes_NoComplexEventTimes_737.insert(ComplexEventStartTime_737.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_737);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_177;
    FIX::EventDate EventDate_177("LOCALMKTDATE_276957010");
    noEvents_0_0.set(EventDate_177);
    EvntGrp_NoEvents_177.insert(EventDate_177.getString());
    FIX::EventPx EventPx_177;
    EventPx_177.setString("10514768");
    noEvents_0_0.set(EventPx_177);
    EvntGrp_NoEvents_177.insert(EventPx_177.getString());
    FIX::EventText EventText_177("STRING_448392783");
    noEvents_0_0.set(EventText_177);
    EvntGrp_NoEvents_177.insert(EventText_177.getString());
    FIX::EventTime EventTime_177(FIX::UTCTIMESTAMP(5, 36, 21, 8, 2, 2012));
    noEvents_0_0.set(EventTime_177);
    EvntGrp_NoEvents_177.insert(EventTime_177.getString());
    FIX::EventType EventType_177(5);
    noEvents_0_0.set(EventType_177);
    EvntGrp_NoEvents_177.insert(EventType_177.getString());
    all_values.push_back(EvntGrp_NoEvents_177);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_178;
    FIX::EventDate EventDate_178("LOCALMKTDATE_892887571");
    noEvents_0_1.set(EventDate_178);
    EvntGrp_NoEvents_178.insert(EventDate_178.getString());
    FIX::EventPx EventPx_178;
    EventPx_178.setString("827637");
    noEvents_0_1.set(EventPx_178);
    EvntGrp_NoEvents_178.insert(EventPx_178.getString());
    FIX::EventText EventText_178("STRING_1324049219");
    noEvents_0_1.set(EventText_178);
    EvntGrp_NoEvents_178.insert(EventText_178.getString());
    FIX::EventTime EventTime_178(FIX::UTCTIMESTAMP(15, 45, 33, 22, 12, 2003));
    noEvents_0_1.set(EventTime_178);
    EvntGrp_NoEvents_178.insert(EventTime_178.getString());
    FIX::EventType EventType_178(7);
    noEvents_0_1.set(EventType_178);
    EvntGrp_NoEvents_178.insert(EventType_178.getString());
    all_values.push_back(EvntGrp_NoEvents_178);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_179;
    FIX::EventDate EventDate_179("LOCALMKTDATE_2006717813");
    noEvents_0_2.set(EventDate_179);
    EvntGrp_NoEvents_179.insert(EventDate_179.getString());
    FIX::EventPx EventPx_179;
    EventPx_179.setString("14148829");
    noEvents_0_2.set(EventPx_179);
    EvntGrp_NoEvents_179.insert(EventPx_179.getString());
    FIX::EventText EventText_179("STRING_1991324202");
    noEvents_0_2.set(EventText_179);
    EvntGrp_NoEvents_179.insert(EventText_179.getString());
    FIX::EventTime EventTime_179(FIX::UTCTIMESTAMP(17, 38, 40, 4, 11, 2008));
    noEvents_0_2.set(EventTime_179);
    EvntGrp_NoEvents_179.insert(EventTime_179.getString());
    FIX::EventType EventType_179(3);
    noEvents_0_2.set(EventType_179);
    EvntGrp_NoEvents_179.insert(EventType_179.getString());
    all_values.push_back(EvntGrp_NoEvents_179);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_178;
    FIX::InstrumentPartyID InstrumentPartyID_178("STRING_1392953056");
    noInstrumentParties_0_0.set(InstrumentPartyID_178);
    InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyID_178.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_178('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_178);
    InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyIDSource_178.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_178(1352779338);
    noInstrumentParties_0_0.set(InstrumentPartyRole_178);
    InstrumentParties_NoInstrumentParties_178.insert(InstrumentPartyRole_178.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_178);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361;
      FIX::InstrumentPartySubID InstrumentPartySubID_361("STRING_327185228");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_361);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361.insert(InstrumentPartySubID_361.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_361(92433167);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_361);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361.insert(InstrumentPartySubIDType_361.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362;
      FIX::InstrumentPartySubID InstrumentPartySubID_362("STRING_199357895");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_362);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362.insert(InstrumentPartySubID_362.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_362(1742082512);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_362);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362.insert(InstrumentPartySubIDType_362.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_179;
    FIX::InstrumentPartyID InstrumentPartyID_179("STRING_985320738");
    noInstrumentParties_0_1.set(InstrumentPartyID_179);
    InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyID_179.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_179('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_179);
    InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyIDSource_179.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_179(918648083);
    noInstrumentParties_0_1.set(InstrumentPartyRole_179);
    InstrumentParties_NoInstrumentParties_179.insert(InstrumentPartyRole_179.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_179);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363;
      FIX::InstrumentPartySubID InstrumentPartySubID_363("STRING_694471672");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_363);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363.insert(InstrumentPartySubID_363.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_363(138758221);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_363);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363.insert(InstrumentPartySubIDType_363.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364;
      FIX::InstrumentPartySubID InstrumentPartySubID_364("STRING_1332055396");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_364);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364.insert(InstrumentPartySubID_364.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_364(661508958);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_364);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364.insert(InstrumentPartySubIDType_364.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_191;
    FIX::SecurityAltID SecurityAltID_191("STRING_147293490");
    noSecurityAltID_0_0.set(SecurityAltID_191);
    SecAltIDGrp_NoSecurityAltID_191.insert(SecurityAltID_191.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_191("STRING_558579336");
    noSecurityAltID_0_0.set(SecurityAltIDSource_191);
    SecAltIDGrp_NoSecurityAltID_191.insert(SecurityAltIDSource_191.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_191);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_184;
  FIX::SecurityXML SecurityXML_185("XMLDATA_1158305218");
  msg.set(SecurityXML_185);
  FIX::SecurityXMLLen SecurityXMLLen_92(1562176416);
  msg.set(SecurityXMLLen_92);
  FIX::SecurityXMLSchema SecurityXMLSchema_92("STRING_402419890");
  msg.set(SecurityXMLSchema_92);
  SecurityXML_184.insert(SecurityXMLSchema_92.getString());
  all_values.push_back(SecurityXML_184);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_134;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_134("DATA_492691593");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_134);
    UnderlyingInstrument_134.insert(EncodedUnderlyingIssuer_134.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_134(697463449);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_134);
    UnderlyingInstrument_134.insert(EncodedUnderlyingIssuerLen_134.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_134("DATA_1837834773");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_134);
    UnderlyingInstrument_134.insert(EncodedUnderlyingSecurityDesc_134.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_134(70022369);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_134);
    UnderlyingInstrument_134.insert(EncodedUnderlyingSecurityDescLen_134.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_134;
    UnderlyingAdjustedQuantity_134.setString("20701288");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_134);
    UnderlyingInstrument_134.insert(UnderlyingAdjustedQuantity_134.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_134;
    UnderlyingAllocationPercent_134.setString("38.350000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_134);
    UnderlyingInstrument_134.insert(UnderlyingAllocationPercent_134.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_134;
    UnderlyingAttachmentPoint_134.setString("99.910000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_134);
    UnderlyingInstrument_134.insert(UnderlyingAttachmentPoint_134.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_134("STRING_1743703397");
    noUnderlyings_0_0.set(UnderlyingCFICode_134);
    UnderlyingInstrument_134.insert(UnderlyingCFICode_134.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_134("STRING_1770436891");
    noUnderlyings_0_0.set(UnderlyingCPProgram_134);
    UnderlyingInstrument_134.insert(UnderlyingCPProgram_134.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_134("STRING_1007738491");
    noUnderlyings_0_0.set(UnderlyingCPRegType_134);
    UnderlyingInstrument_134.insert(UnderlyingCPRegType_134.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_134;
    UnderlyingCapValue_134.setString("9489990");
    noUnderlyings_0_0.set(UnderlyingCapValue_134);
    UnderlyingInstrument_134.insert(UnderlyingCapValue_134.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_134;
    UnderlyingCashAmount_134.setString("15017328");
    noUnderlyings_0_0.set(UnderlyingCashAmount_134);
    UnderlyingInstrument_134.insert(UnderlyingCashAmount_134.getString());
    FIX::UnderlyingCashType UnderlyingCashType_134("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_134);
    UnderlyingInstrument_134.insert(UnderlyingCashType_134.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_134;
    UnderlyingContractMultiplier_134.setString("10414322");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_134);
    UnderlyingInstrument_134.insert(UnderlyingContractMultiplier_134.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_134(1701090696);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_134);
    UnderlyingInstrument_134.insert(UnderlyingContractMultiplierUnit_134.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_134("COUNTRY_929522583");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_134);
    UnderlyingInstrument_134.insert(UnderlyingCountryOfIssue_134.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_134("LOCALMKTDATE_2026752992");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_134);
    UnderlyingInstrument_134.insert(UnderlyingCouponPaymentDate_134.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_134;
    UnderlyingCouponRate_134.setString("23.520000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_134);
    UnderlyingInstrument_134.insert(UnderlyingCouponRate_134.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_134("STRING_1848170666");
    noUnderlyings_0_0.set(UnderlyingCreditRating_134);
    UnderlyingInstrument_134.insert(UnderlyingCreditRating_134.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_134("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_134);
    UnderlyingInstrument_134.insert(UnderlyingCurrency_134.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_134;
    UnderlyingCurrentValue_134.setString("19869288");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_134);
    UnderlyingInstrument_134.insert(UnderlyingCurrentValue_134.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_134;
    UnderlyingDetachmentPoint_134.setString("74.240000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_134);
    UnderlyingInstrument_134.insert(UnderlyingDetachmentPoint_134.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_134;
    UnderlyingDirtyPrice_134.setString("11917093");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_134);
    UnderlyingInstrument_134.insert(UnderlyingDirtyPrice_134.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_134;
    UnderlyingEndPrice_134.setString("11385162");
    noUnderlyings_0_0.set(UnderlyingEndPrice_134);
    UnderlyingInstrument_134.insert(UnderlyingEndPrice_134.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_134;
    UnderlyingEndValue_134.setString("460972");
    noUnderlyings_0_0.set(UnderlyingEndValue_134);
    UnderlyingInstrument_134.insert(UnderlyingEndValue_134.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_134(1750288671);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_134);
    UnderlyingInstrument_134.insert(UnderlyingExerciseStyle_134.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_134;
    UnderlyingFXRate_134.setString("1493378");
    noUnderlyings_0_0.set(UnderlyingFXRate_134);
    UnderlyingInstrument_134.insert(UnderlyingFXRate_134.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_134('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_134);
    UnderlyingInstrument_134.insert(UnderlyingFXRateCalc_134.getString());
    FIX::UnderlyingFactor UnderlyingFactor_134;
    UnderlyingFactor_134.setString("52249");
    noUnderlyings_0_0.set(UnderlyingFactor_134);
    UnderlyingInstrument_134.insert(UnderlyingFactor_134.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_134(1576996935);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_134);
    UnderlyingInstrument_134.insert(UnderlyingFlowScheduleType_134.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_134("STRING_2100965275");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_134);
    UnderlyingInstrument_134.insert(UnderlyingInstrRegistry_134.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_134("LOCALMKTDATE_702688363");
    noUnderlyings_0_0.set(UnderlyingIssueDate_134);
    UnderlyingInstrument_134.insert(UnderlyingIssueDate_134.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_134("STRING_1267348060");
    noUnderlyings_0_0.set(UnderlyingIssuer_134);
    UnderlyingInstrument_134.insert(UnderlyingIssuer_134.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_134("STRING_23503996");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_134);
    UnderlyingInstrument_134.insert(UnderlyingLocaleOfIssue_134.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_134("LOCALMKTDATE_625333570");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_134);
    UnderlyingInstrument_134.insert(UnderlyingMaturityDate_134.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_134("MONTHYEAR_1644831895");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_134);
    UnderlyingInstrument_134.insert(UnderlyingMaturityMonthYear_134.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_134("TZTIMEONLY_722333988");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_134);
    UnderlyingInstrument_134.insert(UnderlyingMaturityTime_134.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_134;
    UnderlyingNotionalPercentageOutstanding_134.setString("33.190000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_134);
    UnderlyingInstrument_134.insert(UnderlyingNotionalPercentageOutstanding_134.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_134('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_134);
    UnderlyingInstrument_134.insert(UnderlyingOptAttribute_134.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_134;
    UnderlyingOriginalNotionalPercentageOutstanding_134.setString("24.790000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_134);
    UnderlyingInstrument_134.insert(UnderlyingOriginalNotionalPercentageOutstanding_134.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_134("STRING_1170552406");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_134);
    UnderlyingInstrument_134.insert(UnderlyingPriceUnitOfMeasure_134.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_134;
    UnderlyingPriceUnitOfMeasureQty_134.setString("6220342");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_134);
    UnderlyingInstrument_134.insert(UnderlyingPriceUnitOfMeasureQty_134.getString());
    FIX::UnderlyingProduct UnderlyingProduct_134(917512550);
    noUnderlyings_0_0.set(UnderlyingProduct_134);
    UnderlyingInstrument_134.insert(UnderlyingProduct_134.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_134(64501012);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_134);
    UnderlyingInstrument_134.insert(UnderlyingPutOrCall_134.getString());
    FIX::UnderlyingPx UnderlyingPx_134;
    UnderlyingPx_134.setString("1756413");
    noUnderlyings_0_0.set(UnderlyingPx_134);
    UnderlyingInstrument_134.insert(UnderlyingPx_134.getString());
    FIX::UnderlyingQty UnderlyingQty_134;
    UnderlyingQty_134.setString("18470351");
    noUnderlyings_0_0.set(UnderlyingQty_134);
    UnderlyingInstrument_134.insert(UnderlyingQty_134.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_134("LOCALMKTDATE_2091254005");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_134);
    UnderlyingInstrument_134.insert(UnderlyingRedemptionDate_134.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_134("STRING_11370043");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_134);
    UnderlyingInstrument_134.insert(UnderlyingRepoCollateralSecurityType_134.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_134;
    UnderlyingRepurchaseRate_134.setString("21.510000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_134);
    UnderlyingInstrument_134.insert(UnderlyingRepurchaseRate_134.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_134(658002384);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_134);
    UnderlyingInstrument_134.insert(UnderlyingRepurchaseTerm_134.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_134("STRING_541570419");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_134);
    UnderlyingInstrument_134.insert(UnderlyingRestructuringType_134.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_134("STRING_1387167391");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_134);
    UnderlyingInstrument_134.insert(UnderlyingSecurityDesc_134.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_134("EXCHANGE_556806160");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_134);
    UnderlyingInstrument_134.insert(UnderlyingSecurityExchange_134.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_134("STRING_1733279754");
    noUnderlyings_0_0.set(UnderlyingSecurityID_134);
    UnderlyingInstrument_134.insert(UnderlyingSecurityID_134.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_134("STRING_378200035");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_134);
    UnderlyingInstrument_134.insert(UnderlyingSecurityIDSource_134.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_134("STRING_602903426");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_134);
    UnderlyingInstrument_134.insert(UnderlyingSecuritySubType_134.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_134("STRING_1336084778");
    noUnderlyings_0_0.set(UnderlyingSecurityType_134);
    UnderlyingInstrument_134.insert(UnderlyingSecurityType_134.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_134("STRING_527537897");
    noUnderlyings_0_0.set(UnderlyingSeniority_134);
    UnderlyingInstrument_134.insert(UnderlyingSeniority_134.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_134("STRING_63693460");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_134);
    UnderlyingInstrument_134.insert(UnderlyingSettlMethod_134.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_134(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_134);
    UnderlyingInstrument_134.insert(UnderlyingSettlementType_134.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_134;
    UnderlyingStartValue_134.setString("21045348");
    noUnderlyings_0_0.set(UnderlyingStartValue_134);
    UnderlyingInstrument_134.insert(UnderlyingStartValue_134.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_134("STRING_17175087");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_134);
    UnderlyingInstrument_134.insert(UnderlyingStateOrProvinceOfIssue_134.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_134("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_134);
    UnderlyingInstrument_134.insert(UnderlyingStrikeCurrency_134.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_134;
    UnderlyingStrikePrice_134.setString("406790");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_134);
    UnderlyingInstrument_134.insert(UnderlyingStrikePrice_134.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_134("STRING_521847977");
    noUnderlyings_0_0.set(UnderlyingSymbol_134);
    UnderlyingInstrument_134.insert(UnderlyingSymbol_134.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_134("STRING_721747491");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_134);
    UnderlyingInstrument_134.insert(UnderlyingSymbolSfx_134.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_134("STRING_763013072");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_134);
    UnderlyingInstrument_134.insert(UnderlyingTimeUnit_134.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_134("STRING_743401297");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_134);
    UnderlyingInstrument_134.insert(UnderlyingUnitOfMeasure_134.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_134;
    UnderlyingUnitOfMeasureQty_134.setString("19895326");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_134);
    UnderlyingInstrument_134.insert(UnderlyingUnitOfMeasureQty_134.getString());
    all_values.push_back(UnderlyingInstrument_134);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_278;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_278("STRING_1913953703");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_278);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_278.insert(UnderlyingSecurityAltID_278.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_278("STRING_464083271");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_278);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_278.insert(UnderlyingSecurityAltIDSource_278.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_278);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_279;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_279("STRING_1263114453");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_279);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_279.insert(UnderlyingSecurityAltID_279.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_279("STRING_1978454716");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_279);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_279.insert(UnderlyingSecurityAltIDSource_279.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_279);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_263;
      FIX::UnderlyingStipType UnderlyingStipType_263("STRING_962665938");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_263);
      UnderlyingStipulations_NoUnderlyingStips_263.insert(UnderlyingStipType_263.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_263("STRING_1922225073");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_263);
      UnderlyingStipulations_NoUnderlyingStips_263.insert(UnderlyingStipValue_263.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_263);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_264;
      FIX::UnderlyingStipType UnderlyingStipType_264("STRING_651094653");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_264);
      UnderlyingStipulations_NoUnderlyingStips_264.insert(UnderlyingStipType_264.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_264("STRING_362904441");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_264);
      UnderlyingStipulations_NoUnderlyingStips_264.insert(UnderlyingStipValue_264.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_264);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_265;
      FIX::UnderlyingStipType UnderlyingStipType_265("STRING_432743809");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_265);
      UnderlyingStipulations_NoUnderlyingStips_265.insert(UnderlyingStipType_265.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_265("STRING_1192665072");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_265);
      UnderlyingStipulations_NoUnderlyingStips_265.insert(UnderlyingStipValue_265.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_265);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_267;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_267("STRING_989549970");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_267);
      UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyID_267.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_267('7');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_267);
      UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyIDSource_267.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_267(2128271867);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_267);
      UndlyInstrumentParties_NoUndlyInstrumentParties_267.insert(UnderlyingInstrumentPartyRole_267.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_267);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_536("STRING_2114545957");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_536);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536.insert(UnderlyingInstrumentPartySubID_536.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_536(508326116);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_536);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536.insert(UnderlyingInstrumentPartySubIDType_536.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_537("STRING_1656146857");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_537);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537.insert(UnderlyingInstrumentPartySubID_537.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_537(1308372001);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_537);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537.insert(UnderlyingInstrumentPartySubIDType_537.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_538("STRING_465377300");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_538);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538.insert(UnderlyingInstrumentPartySubID_538.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_538(1673321944);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_538);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538.insert(UnderlyingInstrumentPartySubIDType_538.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_268;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_268("STRING_1204886408");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_268);
      UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyID_268.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_268('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_268);
      UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyIDSource_268.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_268(1714001028);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_268);
      UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyRole_268.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_268);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_539("STRING_264040387");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_539);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539.insert(UnderlyingInstrumentPartySubID_539.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_539(329530452);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_539);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539.insert(UnderlyingInstrumentPartySubIDType_539.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_540("STRING_322652034");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_540);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540.insert(UnderlyingInstrumentPartySubID_540.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_540(106089368);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_540);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540.insert(UnderlyingInstrumentPartySubIDType_540.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_135;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_135("DATA_675132355");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_135);
    UnderlyingInstrument_135.insert(EncodedUnderlyingIssuer_135.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_135(89122090);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_135);
    UnderlyingInstrument_135.insert(EncodedUnderlyingIssuerLen_135.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_135("DATA_570172640");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_135);
    UnderlyingInstrument_135.insert(EncodedUnderlyingSecurityDesc_135.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_135(1938246808);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_135);
    UnderlyingInstrument_135.insert(EncodedUnderlyingSecurityDescLen_135.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_135;
    UnderlyingAdjustedQuantity_135.setString("20675768");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_135);
    UnderlyingInstrument_135.insert(UnderlyingAdjustedQuantity_135.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_135;
    UnderlyingAllocationPercent_135.setString("72.500000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_135);
    UnderlyingInstrument_135.insert(UnderlyingAllocationPercent_135.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_135;
    UnderlyingAttachmentPoint_135.setString("90.980000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_135);
    UnderlyingInstrument_135.insert(UnderlyingAttachmentPoint_135.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_135("STRING_1842318231");
    noUnderlyings_0_1.set(UnderlyingCFICode_135);
    UnderlyingInstrument_135.insert(UnderlyingCFICode_135.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_135("STRING_1860991903");
    noUnderlyings_0_1.set(UnderlyingCPProgram_135);
    UnderlyingInstrument_135.insert(UnderlyingCPProgram_135.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_135("STRING_1116333540");
    noUnderlyings_0_1.set(UnderlyingCPRegType_135);
    UnderlyingInstrument_135.insert(UnderlyingCPRegType_135.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_135;
    UnderlyingCapValue_135.setString("1275783");
    noUnderlyings_0_1.set(UnderlyingCapValue_135);
    UnderlyingInstrument_135.insert(UnderlyingCapValue_135.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_135;
    UnderlyingCashAmount_135.setString("9061733");
    noUnderlyings_0_1.set(UnderlyingCashAmount_135);
    UnderlyingInstrument_135.insert(UnderlyingCashAmount_135.getString());
    FIX::UnderlyingCashType UnderlyingCashType_135("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_135);
    UnderlyingInstrument_135.insert(UnderlyingCashType_135.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_135;
    UnderlyingContractMultiplier_135.setString("11171283");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_135);
    UnderlyingInstrument_135.insert(UnderlyingContractMultiplier_135.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_135(1684634506);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_135);
    UnderlyingInstrument_135.insert(UnderlyingContractMultiplierUnit_135.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_135("COUNTRY_699709944");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_135);
    UnderlyingInstrument_135.insert(UnderlyingCountryOfIssue_135.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_135("LOCALMKTDATE_562098111");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_135);
    UnderlyingInstrument_135.insert(UnderlyingCouponPaymentDate_135.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_135;
    UnderlyingCouponRate_135.setString("68.150000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_135);
    UnderlyingInstrument_135.insert(UnderlyingCouponRate_135.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_135("STRING_1208036060");
    noUnderlyings_0_1.set(UnderlyingCreditRating_135);
    UnderlyingInstrument_135.insert(UnderlyingCreditRating_135.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_135("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_135);
    UnderlyingInstrument_135.insert(UnderlyingCurrency_135.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_135;
    UnderlyingCurrentValue_135.setString("16734133");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_135);
    UnderlyingInstrument_135.insert(UnderlyingCurrentValue_135.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_135;
    UnderlyingDetachmentPoint_135.setString("32.640000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_135);
    UnderlyingInstrument_135.insert(UnderlyingDetachmentPoint_135.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_135;
    UnderlyingDirtyPrice_135.setString("20174715");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_135);
    UnderlyingInstrument_135.insert(UnderlyingDirtyPrice_135.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_135;
    UnderlyingEndPrice_135.setString("12157062");
    noUnderlyings_0_1.set(UnderlyingEndPrice_135);
    UnderlyingInstrument_135.insert(UnderlyingEndPrice_135.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_135;
    UnderlyingEndValue_135.setString("13106006");
    noUnderlyings_0_1.set(UnderlyingEndValue_135);
    UnderlyingInstrument_135.insert(UnderlyingEndValue_135.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_135(1596722314);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_135);
    UnderlyingInstrument_135.insert(UnderlyingExerciseStyle_135.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_135;
    UnderlyingFXRate_135.setString("14797466");
    noUnderlyings_0_1.set(UnderlyingFXRate_135);
    UnderlyingInstrument_135.insert(UnderlyingFXRate_135.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_135('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_135);
    UnderlyingInstrument_135.insert(UnderlyingFXRateCalc_135.getString());
    FIX::UnderlyingFactor UnderlyingFactor_135;
    UnderlyingFactor_135.setString("19193743");
    noUnderlyings_0_1.set(UnderlyingFactor_135);
    UnderlyingInstrument_135.insert(UnderlyingFactor_135.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_135(1585836013);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_135);
    UnderlyingInstrument_135.insert(UnderlyingFlowScheduleType_135.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_135("STRING_167779805");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_135);
    UnderlyingInstrument_135.insert(UnderlyingInstrRegistry_135.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_135("LOCALMKTDATE_2008496438");
    noUnderlyings_0_1.set(UnderlyingIssueDate_135);
    UnderlyingInstrument_135.insert(UnderlyingIssueDate_135.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_135("STRING_8525005");
    noUnderlyings_0_1.set(UnderlyingIssuer_135);
    UnderlyingInstrument_135.insert(UnderlyingIssuer_135.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_135("STRING_2106026613");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_135);
    UnderlyingInstrument_135.insert(UnderlyingLocaleOfIssue_135.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_135("LOCALMKTDATE_1928589596");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_135);
    UnderlyingInstrument_135.insert(UnderlyingMaturityDate_135.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_135("MONTHYEAR_1218422255");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_135);
    UnderlyingInstrument_135.insert(UnderlyingMaturityMonthYear_135.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_135("TZTIMEONLY_711972064");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_135);
    UnderlyingInstrument_135.insert(UnderlyingMaturityTime_135.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_135;
    UnderlyingNotionalPercentageOutstanding_135.setString("41.790000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_135);
    UnderlyingInstrument_135.insert(UnderlyingNotionalPercentageOutstanding_135.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_135('9');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_135);
    UnderlyingInstrument_135.insert(UnderlyingOptAttribute_135.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_135;
    UnderlyingOriginalNotionalPercentageOutstanding_135.setString("56.040000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_135);
    UnderlyingInstrument_135.insert(UnderlyingOriginalNotionalPercentageOutstanding_135.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_135("STRING_1751002572");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_135);
    UnderlyingInstrument_135.insert(UnderlyingPriceUnitOfMeasure_135.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_135;
    UnderlyingPriceUnitOfMeasureQty_135.setString("18381038");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_135);
    UnderlyingInstrument_135.insert(UnderlyingPriceUnitOfMeasureQty_135.getString());
    FIX::UnderlyingProduct UnderlyingProduct_135(399743680);
    noUnderlyings_0_1.set(UnderlyingProduct_135);
    UnderlyingInstrument_135.insert(UnderlyingProduct_135.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_135(720647286);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_135);
    UnderlyingInstrument_135.insert(UnderlyingPutOrCall_135.getString());
    FIX::UnderlyingPx UnderlyingPx_135;
    UnderlyingPx_135.setString("13752546");
    noUnderlyings_0_1.set(UnderlyingPx_135);
    UnderlyingInstrument_135.insert(UnderlyingPx_135.getString());
    FIX::UnderlyingQty UnderlyingQty_135;
    UnderlyingQty_135.setString("10994536");
    noUnderlyings_0_1.set(UnderlyingQty_135);
    UnderlyingInstrument_135.insert(UnderlyingQty_135.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_135("LOCALMKTDATE_1282745397");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_135);
    UnderlyingInstrument_135.insert(UnderlyingRedemptionDate_135.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_135("STRING_879467864");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_135);
    UnderlyingInstrument_135.insert(UnderlyingRepoCollateralSecurityType_135.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_135;
    UnderlyingRepurchaseRate_135.setString("60.370000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_135);
    UnderlyingInstrument_135.insert(UnderlyingRepurchaseRate_135.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_135(1353506717);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_135);
    UnderlyingInstrument_135.insert(UnderlyingRepurchaseTerm_135.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_135("STRING_1692053032");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_135);
    UnderlyingInstrument_135.insert(UnderlyingRestructuringType_135.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_135("STRING_1833419398");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_135);
    UnderlyingInstrument_135.insert(UnderlyingSecurityDesc_135.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_135("EXCHANGE_950106334");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_135);
    UnderlyingInstrument_135.insert(UnderlyingSecurityExchange_135.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_135("STRING_1562040961");
    noUnderlyings_0_1.set(UnderlyingSecurityID_135);
    UnderlyingInstrument_135.insert(UnderlyingSecurityID_135.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_135("STRING_901642007");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_135);
    UnderlyingInstrument_135.insert(UnderlyingSecurityIDSource_135.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_135("STRING_113223331");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_135);
    UnderlyingInstrument_135.insert(UnderlyingSecuritySubType_135.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_135("STRING_1011279627");
    noUnderlyings_0_1.set(UnderlyingSecurityType_135);
    UnderlyingInstrument_135.insert(UnderlyingSecurityType_135.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_135("STRING_233905004");
    noUnderlyings_0_1.set(UnderlyingSeniority_135);
    UnderlyingInstrument_135.insert(UnderlyingSeniority_135.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_135("STRING_1753354428");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_135);
    UnderlyingInstrument_135.insert(UnderlyingSettlMethod_135.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_135(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_135);
    UnderlyingInstrument_135.insert(UnderlyingSettlementType_135.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_135;
    UnderlyingStartValue_135.setString("18197410");
    noUnderlyings_0_1.set(UnderlyingStartValue_135);
    UnderlyingInstrument_135.insert(UnderlyingStartValue_135.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_135("STRING_1921134233");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_135);
    UnderlyingInstrument_135.insert(UnderlyingStateOrProvinceOfIssue_135.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_135("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_135);
    UnderlyingInstrument_135.insert(UnderlyingStrikeCurrency_135.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_135;
    UnderlyingStrikePrice_135.setString("18796771");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_135);
    UnderlyingInstrument_135.insert(UnderlyingStrikePrice_135.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_135("STRING_425289066");
    noUnderlyings_0_1.set(UnderlyingSymbol_135);
    UnderlyingInstrument_135.insert(UnderlyingSymbol_135.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_135("STRING_899204631");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_135);
    UnderlyingInstrument_135.insert(UnderlyingSymbolSfx_135.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_135("STRING_444165615");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_135);
    UnderlyingInstrument_135.insert(UnderlyingTimeUnit_135.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_135("STRING_2048713246");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_135);
    UnderlyingInstrument_135.insert(UnderlyingUnitOfMeasure_135.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_135;
    UnderlyingUnitOfMeasureQty_135.setString("18311351");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_135);
    UnderlyingInstrument_135.insert(UnderlyingUnitOfMeasureQty_135.getString());
    all_values.push_back(UnderlyingInstrument_135);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_280;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_280("STRING_1652232170");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_280);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_280.insert(UnderlyingSecurityAltID_280.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_280("STRING_1521755331");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_280);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_280.insert(UnderlyingSecurityAltIDSource_280.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_280);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_281;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_281("STRING_524731251");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_281);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_281.insert(UnderlyingSecurityAltID_281.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_281("STRING_225395808");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_281);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_281.insert(UnderlyingSecurityAltIDSource_281.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_281);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_282;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_282("STRING_749526380");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_282);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_282.insert(UnderlyingSecurityAltID_282.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_282("STRING_1624184876");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_282);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_282.insert(UnderlyingSecurityAltIDSource_282.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_282);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_266;
      FIX::UnderlyingStipType UnderlyingStipType_266("STRING_1628994244");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_266);
      UnderlyingStipulations_NoUnderlyingStips_266.insert(UnderlyingStipType_266.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_266("STRING_1784190913");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_266);
      UnderlyingStipulations_NoUnderlyingStips_266.insert(UnderlyingStipValue_266.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_266);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_267;
      FIX::UnderlyingStipType UnderlyingStipType_267("STRING_714164275");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_267);
      UnderlyingStipulations_NoUnderlyingStips_267.insert(UnderlyingStipType_267.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_267("STRING_1173563628");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_267);
      UnderlyingStipulations_NoUnderlyingStips_267.insert(UnderlyingStipValue_267.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_267);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_269;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_269("STRING_1664270609");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_269);
      UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyID_269.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_269('5');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_269);
      UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyIDSource_269.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_269(224285022);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_269);
      UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyRole_269.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_269);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_541("STRING_1599400568");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_541);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541.insert(UnderlyingInstrumentPartySubID_541.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_541(458190027);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_541);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541.insert(UnderlyingInstrumentPartySubIDType_541.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_136;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_136("DATA_1383364721");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingIssuer_136.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_136(235087248);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingIssuerLen_136.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_136("DATA_130447397");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingSecurityDesc_136.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_136(1157015306);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_136);
    UnderlyingInstrument_136.insert(EncodedUnderlyingSecurityDescLen_136.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_136;
    UnderlyingAdjustedQuantity_136.setString("8792703");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_136);
    UnderlyingInstrument_136.insert(UnderlyingAdjustedQuantity_136.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_136;
    UnderlyingAllocationPercent_136.setString("34.200000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_136);
    UnderlyingInstrument_136.insert(UnderlyingAllocationPercent_136.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_136;
    UnderlyingAttachmentPoint_136.setString("88.570000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_136);
    UnderlyingInstrument_136.insert(UnderlyingAttachmentPoint_136.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_136("STRING_1304559432");
    noUnderlyings_0_2.set(UnderlyingCFICode_136);
    UnderlyingInstrument_136.insert(UnderlyingCFICode_136.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_136("STRING_710434403");
    noUnderlyings_0_2.set(UnderlyingCPProgram_136);
    UnderlyingInstrument_136.insert(UnderlyingCPProgram_136.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_136("STRING_1333374472");
    noUnderlyings_0_2.set(UnderlyingCPRegType_136);
    UnderlyingInstrument_136.insert(UnderlyingCPRegType_136.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_136;
    UnderlyingCapValue_136.setString("12057890");
    noUnderlyings_0_2.set(UnderlyingCapValue_136);
    UnderlyingInstrument_136.insert(UnderlyingCapValue_136.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_136;
    UnderlyingCashAmount_136.setString("3940858");
    noUnderlyings_0_2.set(UnderlyingCashAmount_136);
    UnderlyingInstrument_136.insert(UnderlyingCashAmount_136.getString());
    FIX::UnderlyingCashType UnderlyingCashType_136("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_136);
    UnderlyingInstrument_136.insert(UnderlyingCashType_136.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_136;
    UnderlyingContractMultiplier_136.setString("7105375");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_136);
    UnderlyingInstrument_136.insert(UnderlyingContractMultiplier_136.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_136(1915841228);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_136);
    UnderlyingInstrument_136.insert(UnderlyingContractMultiplierUnit_136.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_136("COUNTRY_1983093295");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_136);
    UnderlyingInstrument_136.insert(UnderlyingCountryOfIssue_136.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_136("LOCALMKTDATE_935933361");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_136);
    UnderlyingInstrument_136.insert(UnderlyingCouponPaymentDate_136.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_136;
    UnderlyingCouponRate_136.setString("39.600000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_136);
    UnderlyingInstrument_136.insert(UnderlyingCouponRate_136.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_136("STRING_1459794523");
    noUnderlyings_0_2.set(UnderlyingCreditRating_136);
    UnderlyingInstrument_136.insert(UnderlyingCreditRating_136.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_136("USD");
    noUnderlyings_0_2.set(UnderlyingCurrency_136);
    UnderlyingInstrument_136.insert(UnderlyingCurrency_136.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_136;
    UnderlyingCurrentValue_136.setString("10965017");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_136);
    UnderlyingInstrument_136.insert(UnderlyingCurrentValue_136.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_136;
    UnderlyingDetachmentPoint_136.setString("51.940000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_136);
    UnderlyingInstrument_136.insert(UnderlyingDetachmentPoint_136.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_136;
    UnderlyingDirtyPrice_136.setString("11729581");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_136);
    UnderlyingInstrument_136.insert(UnderlyingDirtyPrice_136.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_136;
    UnderlyingEndPrice_136.setString("4191448");
    noUnderlyings_0_2.set(UnderlyingEndPrice_136);
    UnderlyingInstrument_136.insert(UnderlyingEndPrice_136.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_136;
    UnderlyingEndValue_136.setString("5275421");
    noUnderlyings_0_2.set(UnderlyingEndValue_136);
    UnderlyingInstrument_136.insert(UnderlyingEndValue_136.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_136(1761079126);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_136);
    UnderlyingInstrument_136.insert(UnderlyingExerciseStyle_136.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_136;
    UnderlyingFXRate_136.setString("6434298");
    noUnderlyings_0_2.set(UnderlyingFXRate_136);
    UnderlyingInstrument_136.insert(UnderlyingFXRate_136.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_136('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_136);
    UnderlyingInstrument_136.insert(UnderlyingFXRateCalc_136.getString());
    FIX::UnderlyingFactor UnderlyingFactor_136;
    UnderlyingFactor_136.setString("12129960");
    noUnderlyings_0_2.set(UnderlyingFactor_136);
    UnderlyingInstrument_136.insert(UnderlyingFactor_136.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_136(1101619852);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_136);
    UnderlyingInstrument_136.insert(UnderlyingFlowScheduleType_136.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_136("STRING_1540917169");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_136);
    UnderlyingInstrument_136.insert(UnderlyingInstrRegistry_136.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_136("LOCALMKTDATE_1448083295");
    noUnderlyings_0_2.set(UnderlyingIssueDate_136);
    UnderlyingInstrument_136.insert(UnderlyingIssueDate_136.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_136("STRING_1232067249");
    noUnderlyings_0_2.set(UnderlyingIssuer_136);
    UnderlyingInstrument_136.insert(UnderlyingIssuer_136.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_136("STRING_550448828");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_136);
    UnderlyingInstrument_136.insert(UnderlyingLocaleOfIssue_136.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_136("LOCALMKTDATE_179870013");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_136);
    UnderlyingInstrument_136.insert(UnderlyingMaturityDate_136.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_136("MONTHYEAR_1043297022");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_136);
    UnderlyingInstrument_136.insert(UnderlyingMaturityMonthYear_136.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_136("TZTIMEONLY_1439657685");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_136);
    UnderlyingInstrument_136.insert(UnderlyingMaturityTime_136.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_136;
    UnderlyingNotionalPercentageOutstanding_136.setString("94.450000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_136);
    UnderlyingInstrument_136.insert(UnderlyingNotionalPercentageOutstanding_136.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_136('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_136);
    UnderlyingInstrument_136.insert(UnderlyingOptAttribute_136.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_136;
    UnderlyingOriginalNotionalPercentageOutstanding_136.setString("85.100000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_136);
    UnderlyingInstrument_136.insert(UnderlyingOriginalNotionalPercentageOutstanding_136.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_136("STRING_542734828");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_136);
    UnderlyingInstrument_136.insert(UnderlyingPriceUnitOfMeasure_136.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_136;
    UnderlyingPriceUnitOfMeasureQty_136.setString("3336");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_136);
    UnderlyingInstrument_136.insert(UnderlyingPriceUnitOfMeasureQty_136.getString());
    FIX::UnderlyingProduct UnderlyingProduct_136(2083910553);
    noUnderlyings_0_2.set(UnderlyingProduct_136);
    UnderlyingInstrument_136.insert(UnderlyingProduct_136.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_136(1253272380);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_136);
    UnderlyingInstrument_136.insert(UnderlyingPutOrCall_136.getString());
    FIX::UnderlyingPx UnderlyingPx_136;
    UnderlyingPx_136.setString("19161749");
    noUnderlyings_0_2.set(UnderlyingPx_136);
    UnderlyingInstrument_136.insert(UnderlyingPx_136.getString());
    FIX::UnderlyingQty UnderlyingQty_136;
    UnderlyingQty_136.setString("19195202");
    noUnderlyings_0_2.set(UnderlyingQty_136);
    UnderlyingInstrument_136.insert(UnderlyingQty_136.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_136("LOCALMKTDATE_41722093");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_136);
    UnderlyingInstrument_136.insert(UnderlyingRedemptionDate_136.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_136("STRING_286575215");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_136);
    UnderlyingInstrument_136.insert(UnderlyingRepoCollateralSecurityType_136.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_136;
    UnderlyingRepurchaseRate_136.setString("10.750000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_136);
    UnderlyingInstrument_136.insert(UnderlyingRepurchaseRate_136.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_136(338313012);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_136);
    UnderlyingInstrument_136.insert(UnderlyingRepurchaseTerm_136.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_136("STRING_285969772");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_136);
    UnderlyingInstrument_136.insert(UnderlyingRestructuringType_136.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_136("STRING_180849215");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityDesc_136.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_136("EXCHANGE_1349068207");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityExchange_136.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_136("STRING_1458927957");
    noUnderlyings_0_2.set(UnderlyingSecurityID_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityID_136.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_136("STRING_599994018");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityIDSource_136.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_136("STRING_1876610363");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_136);
    UnderlyingInstrument_136.insert(UnderlyingSecuritySubType_136.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_136("STRING_1072523435");
    noUnderlyings_0_2.set(UnderlyingSecurityType_136);
    UnderlyingInstrument_136.insert(UnderlyingSecurityType_136.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_136("STRING_1243423844");
    noUnderlyings_0_2.set(UnderlyingSeniority_136);
    UnderlyingInstrument_136.insert(UnderlyingSeniority_136.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_136("STRING_2034162811");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_136);
    UnderlyingInstrument_136.insert(UnderlyingSettlMethod_136.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_136(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_136);
    UnderlyingInstrument_136.insert(UnderlyingSettlementType_136.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_136;
    UnderlyingStartValue_136.setString("1975600");
    noUnderlyings_0_2.set(UnderlyingStartValue_136);
    UnderlyingInstrument_136.insert(UnderlyingStartValue_136.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_136("STRING_1427596333");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_136);
    UnderlyingInstrument_136.insert(UnderlyingStateOrProvinceOfIssue_136.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_136("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_136);
    UnderlyingInstrument_136.insert(UnderlyingStrikeCurrency_136.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_136;
    UnderlyingStrikePrice_136.setString("19780451");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_136);
    UnderlyingInstrument_136.insert(UnderlyingStrikePrice_136.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_136("STRING_1765989142");
    noUnderlyings_0_2.set(UnderlyingSymbol_136);
    UnderlyingInstrument_136.insert(UnderlyingSymbol_136.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_136("STRING_325440672");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_136);
    UnderlyingInstrument_136.insert(UnderlyingSymbolSfx_136.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_136("STRING_1270219198");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_136);
    UnderlyingInstrument_136.insert(UnderlyingTimeUnit_136.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_136("STRING_1102934940");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_136);
    UnderlyingInstrument_136.insert(UnderlyingUnitOfMeasure_136.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_136;
    UnderlyingUnitOfMeasureQty_136.setString("20791720");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_136);
    UnderlyingInstrument_136.insert(UnderlyingUnitOfMeasureQty_136.getString());
    all_values.push_back(UnderlyingInstrument_136);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_283;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_283("STRING_1645669768");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_283);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_283.insert(UnderlyingSecurityAltID_283.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_283("STRING_2079505772");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_283);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_283.insert(UnderlyingSecurityAltIDSource_283.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_283);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_284;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_284("STRING_1832194614");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_284);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_284.insert(UnderlyingSecurityAltID_284.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_284("STRING_751458500");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_284);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_284.insert(UnderlyingSecurityAltIDSource_284.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_284);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_268;
      FIX::UnderlyingStipType UnderlyingStipType_268("STRING_1604231166");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_268);
      UnderlyingStipulations_NoUnderlyingStips_268.insert(UnderlyingStipType_268.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_268("STRING_793180594");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_268);
      UnderlyingStipulations_NoUnderlyingStips_268.insert(UnderlyingStipValue_268.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_268);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_269;
      FIX::UnderlyingStipType UnderlyingStipType_269("STRING_2134772242");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_269);
      UnderlyingStipulations_NoUnderlyingStips_269.insert(UnderlyingStipType_269.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_269("STRING_688578594");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_269);
      UnderlyingStipulations_NoUnderlyingStips_269.insert(UnderlyingStipValue_269.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_269);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_270;
      FIX::UnderlyingStipType UnderlyingStipType_270("STRING_1131493606");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_270);
      UnderlyingStipulations_NoUnderlyingStips_270.insert(UnderlyingStipType_270.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_270("STRING_273258366");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_270);
      UnderlyingStipulations_NoUnderlyingStips_270.insert(UnderlyingStipValue_270.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_270);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_270;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_270("STRING_333078165");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_270);
      UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyID_270.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_270('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_270);
      UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyIDSource_270.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_270(1469421828);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_270);
      UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyRole_270.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_270);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_542("STRING_657226111");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_542);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542.insert(UnderlyingInstrumentPartySubID_542.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_542(565362024);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_542);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542.insert(UnderlyingInstrumentPartySubIDType_542.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_271;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_271("STRING_2096367692");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_271);
      UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyID_271.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_271('7');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_271);
      UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyIDSource_271.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_271(762922072);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_271);
      UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyRole_271.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_271);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_543("STRING_233897427");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_543);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543.insert(UnderlyingInstrumentPartySubID_543.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_543(45065722);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_543);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543.insert(UnderlyingInstrumentPartySubIDType_543.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_544("STRING_1207041890");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_544);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544.insert(UnderlyingInstrumentPartySubID_544.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_544(1999886569);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_544);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544.insert(UnderlyingInstrumentPartySubIDType_544.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_272;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_272("STRING_370506394");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_272);
      UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyID_272.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_272('3');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_272);
      UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyIDSource_272.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_272(955337861);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_272);
      UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyRole_272.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_272);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_545("STRING_78061501");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_545);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545.insert(UnderlyingInstrumentPartySubID_545.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_545(453523981);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_545);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545.insert(UnderlyingInstrumentPartySubIDType_545.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_546("STRING_234216968");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_546);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546.insert(UnderlyingInstrumentPartySubID_546.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_546(1910256115);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_546);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546.insert(UnderlyingInstrumentPartySubIDType_546.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_547("STRING_1204982482");
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubID_547);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547.insert(UnderlyingInstrumentPartySubID_547.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_547(2082413995);
        noUndlyInstrumentPartySubIDs_2_2_2_2.set(UnderlyingInstrumentPartySubIDType_547);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547.insert(UnderlyingInstrumentPartySubIDType_547.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
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
