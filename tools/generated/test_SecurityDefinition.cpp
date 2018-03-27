#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityDefinition.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinition, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinition msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityDefinition_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_20("LOCALMKTDATE_872103673");
  msg.set(ClearingBusinessDate_20);
  SecurityDefinition_0.insert(ClearingBusinessDate_20.getString());
  FIX::CorporateAction CorporateAction_6("MULTIPLECHARVALUE_J");
  msg.set(CorporateAction_6);
  SecurityDefinition_0.insert(CorporateAction_6.getString());
  FIX::Currency Currency_53("JPY");
  msg.set(Currency_53);
  SecurityDefinition_0.insert(Currency_53.getString());
  FIX::EncodedText EncodedText_77("DATA_2037475263");
  msg.set(EncodedText_77);
  SecurityDefinition_0.insert(EncodedText_77.getString());
  FIX::EncodedTextLen EncodedTextLen_77(818803688);
  msg.set(EncodedTextLen_77);
  SecurityDefinition_0.insert(EncodedTextLen_77.getString());
  FIX::SecurityReportID SecurityReportID_1(1488376036);
  msg.set(SecurityReportID_1);
  SecurityDefinition_0.insert(SecurityReportID_1.getString());
  FIX::SecurityReqID SecurityReqID_3("STRING_1561214803");
  msg.set(SecurityReqID_3);
  SecurityDefinition_0.insert(SecurityReqID_3.getString());
  FIX::SecurityResponseID SecurityResponseID_2("STRING_1197616092");
  msg.set(SecurityResponseID_2);
  SecurityDefinition_0.insert(SecurityResponseID_2.getString());
  FIX::SecurityResponseType SecurityResponseType_0(4);
  msg.set(SecurityResponseType_0);
  SecurityDefinition_0.insert(SecurityResponseType_0.getString());
  FIX::Text Text_77("STRING_1429318819");
  msg.set(Text_77);
  SecurityDefinition_0.insert(Text_77.getString());
  FIX::TransactTime TransactTime_53(FIX::UTCTIMESTAMP(21, 52, 6, 27, 82011));
  msg.set(TransactTime_53);
  SecurityDefinition_0.insert(TransactTime_53.getString());
  all_values.push_back(SecurityDefinition_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_12;
  FIX::ApplID ApplID_12("STRING_728876397");
  msg.set(ApplID_12);
  ApplicationSequenceControl_12.insert(ApplID_12.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_12(1788800424);
  msg.set(ApplLastSeqNum_12);
  ApplicationSequenceControl_12.insert(ApplLastSeqNum_12.getString());
  FIX::ApplResendFlag ApplResendFlag_12(false);
  msg.set(ApplResendFlag_12);
  ApplicationSequenceControl_12.insert(ApplResendFlag_12.getString());
  FIX::ApplSeqNum ApplSeqNum_12(35810334);
  msg.set(ApplSeqNum_12);
  ApplicationSequenceControl_12.insert(ApplSeqNum_12.getString());
  all_values.push_back(ApplicationSequenceControl_12);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinition::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_100;
    FIX::EncodedLegIssuer EncodedLegIssuer_100("DATA_301978638");
    noLegs_0_0.set(EncodedLegIssuer_100);
    InstrumentLeg_100.insert(EncodedLegIssuer_100.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_100(1000195109);
    noLegs_0_0.set(EncodedLegIssuerLen_100);
    InstrumentLeg_100.insert(EncodedLegIssuerLen_100.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_100("DATA_1052965454");
    noLegs_0_0.set(EncodedLegSecurityDesc_100);
    InstrumentLeg_100.insert(EncodedLegSecurityDesc_100.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_100(894207904);
    noLegs_0_0.set(EncodedLegSecurityDescLen_100);
    InstrumentLeg_100.insert(EncodedLegSecurityDescLen_100.getString());
    FIX::LegCFICode LegCFICode_100("STRING_797726218");
    noLegs_0_0.set(LegCFICode_100);
    InstrumentLeg_100.insert(LegCFICode_100.getString());
    FIX::LegContractMultiplier LegContractMultiplier_100;
    LegContractMultiplier_100.setString("16314223");
    noLegs_0_0.set(LegContractMultiplier_100);
    InstrumentLeg_100.insert(LegContractMultiplier_100.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_100(494153259);
    noLegs_0_0.set(LegContractMultiplierUnit_100);
    InstrumentLeg_100.insert(LegContractMultiplierUnit_100.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_100("MONTHYEAR_1284036410");
    noLegs_0_0.set(LegContractSettlMonth_100);
    InstrumentLeg_100.insert(LegContractSettlMonth_100.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_100("COUNTRY_356042378");
    noLegs_0_0.set(LegCountryOfIssue_100);
    InstrumentLeg_100.insert(LegCountryOfIssue_100.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_100("LOCALMKTDATE_402765983");
    noLegs_0_0.set(LegCouponPaymentDate_100);
    InstrumentLeg_100.insert(LegCouponPaymentDate_100.getString());
    FIX::LegCouponRate LegCouponRate_100;
    LegCouponRate_100.setString("59.030000");
    noLegs_0_0.set(LegCouponRate_100);
    InstrumentLeg_100.insert(LegCouponRate_100.getString());
    FIX::LegCreditRating LegCreditRating_100("STRING_1456978746");
    noLegs_0_0.set(LegCreditRating_100);
    InstrumentLeg_100.insert(LegCreditRating_100.getString());
    FIX::LegCurrency LegCurrency_100("CHF");
    noLegs_0_0.set(LegCurrency_100);
    InstrumentLeg_100.insert(LegCurrency_100.getString());
    FIX::LegDatedDate LegDatedDate_100("LOCALMKTDATE_797871134");
    noLegs_0_0.set(LegDatedDate_100);
    InstrumentLeg_100.insert(LegDatedDate_100.getString());
    FIX::LegExerciseStyle LegExerciseStyle_100(1853972401);
    noLegs_0_0.set(LegExerciseStyle_100);
    InstrumentLeg_100.insert(LegExerciseStyle_100.getString());
    FIX::LegFactor LegFactor_100;
    LegFactor_100.setString("4772420");
    noLegs_0_0.set(LegFactor_100);
    InstrumentLeg_100.insert(LegFactor_100.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_100(1675266767);
    noLegs_0_0.set(LegFlowScheduleType_100);
    InstrumentLeg_100.insert(LegFlowScheduleType_100.getString());
    FIX::LegInstrRegistry LegInstrRegistry_100("STRING_1135807572");
    noLegs_0_0.set(LegInstrRegistry_100);
    InstrumentLeg_100.insert(LegInstrRegistry_100.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_100("LOCALMKTDATE_1314120381");
    noLegs_0_0.set(LegInterestAccrualDate_100);
    InstrumentLeg_100.insert(LegInterestAccrualDate_100.getString());
    FIX::LegIssueDate LegIssueDate_100("LOCALMKTDATE_1104606757");
    noLegs_0_0.set(LegIssueDate_100);
    InstrumentLeg_100.insert(LegIssueDate_100.getString());
    FIX::LegIssuer LegIssuer_100("STRING_884063936");
    noLegs_0_0.set(LegIssuer_100);
    InstrumentLeg_100.insert(LegIssuer_100.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_100("STRING_1191038179");
    noLegs_0_0.set(LegLocaleOfIssue_100);
    InstrumentLeg_100.insert(LegLocaleOfIssue_100.getString());
    FIX::LegMaturityDate LegMaturityDate_100("LOCALMKTDATE_1721387900");
    noLegs_0_0.set(LegMaturityDate_100);
    InstrumentLeg_100.insert(LegMaturityDate_100.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_100("MONTHYEAR_1305780340");
    noLegs_0_0.set(LegMaturityMonthYear_100);
    InstrumentLeg_100.insert(LegMaturityMonthYear_100.getString());
    FIX::LegMaturityTime LegMaturityTime_100("TZTIMEONLY_273557200");
    noLegs_0_0.set(LegMaturityTime_100);
    InstrumentLeg_100.insert(LegMaturityTime_100.getString());
    FIX::LegOptAttribute LegOptAttribute_100('3');
    noLegs_0_0.set(LegOptAttribute_100);
    InstrumentLeg_100.insert(LegOptAttribute_100.getString());
    FIX::LegOptionRatio LegOptionRatio_100;
    LegOptionRatio_100.setString("9470971");
    noLegs_0_0.set(LegOptionRatio_100);
    InstrumentLeg_100.insert(LegOptionRatio_100.getString());
    FIX::LegPool LegPool_100("STRING_1872855144");
    noLegs_0_0.set(LegPool_100);
    InstrumentLeg_100.insert(LegPool_100.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_100("STRING_338590983");
    noLegs_0_0.set(LegPriceUnitOfMeasure_100);
    InstrumentLeg_100.insert(LegPriceUnitOfMeasure_100.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_100;
    LegPriceUnitOfMeasureQty_100.setString("21233709");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_100);
    InstrumentLeg_100.insert(LegPriceUnitOfMeasureQty_100.getString());
    FIX::LegProduct LegProduct_100(27350134);
    noLegs_0_0.set(LegProduct_100);
    InstrumentLeg_100.insert(LegProduct_100.getString());
    FIX::LegPutOrCall LegPutOrCall_100(1338786092);
    noLegs_0_0.set(LegPutOrCall_100);
    InstrumentLeg_100.insert(LegPutOrCall_100.getString());
    FIX::LegRatioQty LegRatioQty_100;
    LegRatioQty_100.setString("10288527");
    noLegs_0_0.set(LegRatioQty_100);
    InstrumentLeg_100.insert(LegRatioQty_100.getString());
    FIX::LegRedemptionDate LegRedemptionDate_100("LOCALMKTDATE_921558038");
    noLegs_0_0.set(LegRedemptionDate_100);
    InstrumentLeg_100.insert(LegRedemptionDate_100.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_100("STRING_2136512310");
    noLegs_0_0.set(LegRepoCollateralSecurityType_100);
    InstrumentLeg_100.insert(LegRepoCollateralSecurityType_100.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_100;
    LegRepurchaseRate_100.setString("14.680000");
    noLegs_0_0.set(LegRepurchaseRate_100);
    InstrumentLeg_100.insert(LegRepurchaseRate_100.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_100(1415711298);
    noLegs_0_0.set(LegRepurchaseTerm_100);
    InstrumentLeg_100.insert(LegRepurchaseTerm_100.getString());
    FIX::LegSecurityDesc LegSecurityDesc_100("STRING_1273065072");
    noLegs_0_0.set(LegSecurityDesc_100);
    InstrumentLeg_100.insert(LegSecurityDesc_100.getString());
    FIX::LegSecurityExchange LegSecurityExchange_100("EXCHANGE_868833846");
    noLegs_0_0.set(LegSecurityExchange_100);
    InstrumentLeg_100.insert(LegSecurityExchange_100.getString());
    FIX::LegSecurityID LegSecurityID_100("STRING_1818477281");
    noLegs_0_0.set(LegSecurityID_100);
    InstrumentLeg_100.insert(LegSecurityID_100.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_100("STRING_1881370975");
    noLegs_0_0.set(LegSecurityIDSource_100);
    InstrumentLeg_100.insert(LegSecurityIDSource_100.getString());
    FIX::LegSecuritySubType LegSecuritySubType_100("STRING_178328945");
    noLegs_0_0.set(LegSecuritySubType_100);
    InstrumentLeg_100.insert(LegSecuritySubType_100.getString());
    FIX::LegSecurityType LegSecurityType_100("STRING_2111234879");
    noLegs_0_0.set(LegSecurityType_100);
    InstrumentLeg_100.insert(LegSecurityType_100.getString());
    FIX::LegSide LegSide_100('1');
    noLegs_0_0.set(LegSide_100);
    InstrumentLeg_100.insert(LegSide_100.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_100("STRING_976200079");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_100);
    InstrumentLeg_100.insert(LegStateOrProvinceOfIssue_100.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_100("JPY");
    noLegs_0_0.set(LegStrikeCurrency_100);
    InstrumentLeg_100.insert(LegStrikeCurrency_100.getString());
    FIX::LegStrikePrice LegStrikePrice_100;
    LegStrikePrice_100.setString("5039831");
    noLegs_0_0.set(LegStrikePrice_100);
    InstrumentLeg_100.insert(LegStrikePrice_100.getString());
    FIX::LegSymbol LegSymbol_100("STRING_806047557");
    noLegs_0_0.set(LegSymbol_100);
    InstrumentLeg_100.insert(LegSymbol_100.getString());
    FIX::LegSymbolSfx LegSymbolSfx_100("STRING_804875687");
    noLegs_0_0.set(LegSymbolSfx_100);
    InstrumentLeg_100.insert(LegSymbolSfx_100.getString());
    FIX::LegTimeUnit LegTimeUnit_100("STRING_1608589956");
    noLegs_0_0.set(LegTimeUnit_100);
    InstrumentLeg_100.insert(LegTimeUnit_100.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_100("STRING_1690111494");
    noLegs_0_0.set(LegUnitOfMeasure_100);
    InstrumentLeg_100.insert(LegUnitOfMeasure_100.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_100;
    LegUnitOfMeasureQty_100.setString("19959138");
    noLegs_0_0.set(LegUnitOfMeasureQty_100);
    InstrumentLeg_100.insert(LegUnitOfMeasureQty_100.getString());
    all_values.push_back(InstrumentLeg_100);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_176;
      FIX::LegSecurityAltID LegSecurityAltID_176("STRING_848408186");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_176);
      LegSecAltIDGrp_NoLegSecurityAltID_176.insert(LegSecurityAltID_176.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_176("STRING_121987419");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_176);
      LegSecAltIDGrp_NoLegSecurityAltID_176.insert(LegSecurityAltIDSource_176.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_176);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_71;
  FIX::AttachmentPoint AttachmentPoint_71;
  AttachmentPoint_71.setString("48.570000");
  msg.set(AttachmentPoint_71);
  Instrument_71.insert(AttachmentPoint_71.getString());
  FIX::CFICode CFICode_71("STRING_1795505302");
  msg.set(CFICode_71);
  Instrument_71.insert(CFICode_71.getString());
  FIX::CPProgram CPProgram_71(1);
  msg.set(CPProgram_71);
  Instrument_71.insert(CPProgram_71.getString());
  FIX::CPRegType CPRegType_71("STRING_1823865840");
  msg.set(CPRegType_71);
  Instrument_71.insert(CPRegType_71.getString());
  FIX::CapPrice CapPrice_71;
  CapPrice_71.setString("17713926");
  msg.set(CapPrice_71);
  Instrument_71.insert(CapPrice_71.getString());
  FIX::ContractMultiplier ContractMultiplier_71;
  ContractMultiplier_71.setString("20221926");
  msg.set(ContractMultiplier_71);
  Instrument_71.insert(ContractMultiplier_71.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_71(0);
  msg.set(ContractMultiplierUnit_71);
  Instrument_71.insert(ContractMultiplierUnit_71.getString());
  FIX::ContractSettlMonth ContractSettlMonth_71("MONTHYEAR_652761725");
  msg.set(ContractSettlMonth_71);
  Instrument_71.insert(ContractSettlMonth_71.getString());
  FIX::CountryOfIssue CountryOfIssue_71("COUNTRY_796267088");
  msg.set(CountryOfIssue_71);
  Instrument_71.insert(CountryOfIssue_71.getString());
  FIX::CouponPaymentDate CouponPaymentDate_71("LOCALMKTDATE_1004196947");
  msg.set(CouponPaymentDate_71);
  Instrument_71.insert(CouponPaymentDate_71.getString());
  FIX::CouponRate CouponRate_71;
  CouponRate_71.setString("31.930000");
  msg.set(CouponRate_71);
  Instrument_71.insert(CouponRate_71.getString());
  FIX::CreditRating CreditRating_71("STRING_64494738");
  msg.set(CreditRating_71);
  Instrument_71.insert(CreditRating_71.getString());
  FIX::DatedDate DatedDate_71("LOCALMKTDATE_129778371");
  msg.set(DatedDate_71);
  Instrument_71.insert(DatedDate_71.getString());
  FIX::DetachmentPoint DetachmentPoint_71;
  DetachmentPoint_71.setString("70.390000");
  msg.set(DetachmentPoint_71);
  Instrument_71.insert(DetachmentPoint_71.getString());
  FIX::EncodedIssuer EncodedIssuer_71("DATA_1882972019");
  msg.set(EncodedIssuer_71);
  Instrument_71.insert(EncodedIssuer_71.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_71(2011149347);
  msg.set(EncodedIssuerLen_71);
  Instrument_71.insert(EncodedIssuerLen_71.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_71("DATA_65232336");
  msg.set(EncodedSecurityDesc_71);
  Instrument_71.insert(EncodedSecurityDesc_71.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_71(1846723250);
  msg.set(EncodedSecurityDescLen_71);
  Instrument_71.insert(EncodedSecurityDescLen_71.getString());
  FIX::ExerciseStyle ExerciseStyle_71(0);
  msg.set(ExerciseStyle_71);
  Instrument_71.insert(ExerciseStyle_71.getString());
  FIX::Factor Factor_71;
  Factor_71.setString("10414324");
  msg.set(Factor_71);
  Instrument_71.insert(Factor_71.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_71(false);
  msg.set(FlexProductEligibilityIndicator_71);
  Instrument_71.insert(FlexProductEligibilityIndicator_71.getString());
  FIX::FlexibleIndicator FlexibleIndicator_71(true);
  msg.set(FlexibleIndicator_71);
  Instrument_71.insert(FlexibleIndicator_71.getString());
  FIX::FloorPrice FloorPrice_71;
  FloorPrice_71.setString("15454156");
  msg.set(FloorPrice_71);
  Instrument_71.insert(FloorPrice_71.getString());
  FIX::FlowScheduleType FlowScheduleType_71(0);
  msg.set(FlowScheduleType_71);
  Instrument_71.insert(FlowScheduleType_71.getString());
  FIX::InstrRegistry InstrRegistry_71("STRING_1320293612");
  msg.set(InstrRegistry_71);
  Instrument_71.insert(InstrRegistry_71.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_71('1');
  msg.set(InstrmtAssignmentMethod_71);
  Instrument_71.insert(InstrmtAssignmentMethod_71.getString());
  FIX::InterestAccrualDate InterestAccrualDate_71("LOCALMKTDATE_1865638639");
  msg.set(InterestAccrualDate_71);
  Instrument_71.insert(InterestAccrualDate_71.getString());
  FIX::IssueDate IssueDate_71("LOCALMKTDATE_1168723831");
  msg.set(IssueDate_71);
  Instrument_71.insert(IssueDate_71.getString());
  FIX::Issuer Issuer_71("STRING_41532483");
  msg.set(Issuer_71);
  Instrument_71.insert(Issuer_71.getString());
  FIX::ListMethod ListMethod_71(1);
  msg.set(ListMethod_71);
  Instrument_71.insert(ListMethod_71.getString());
  FIX::LocaleOfIssue LocaleOfIssue_71("STRING_1290711250");
  msg.set(LocaleOfIssue_71);
  Instrument_71.insert(LocaleOfIssue_71.getString());
  FIX::MaturityDate MaturityDate_71("LOCALMKTDATE_1526807340");
  msg.set(MaturityDate_71);
  Instrument_71.insert(MaturityDate_71.getString());
  FIX::MaturityMonthYear MaturityMonthYear_71("MONTHYEAR_214584831");
  msg.set(MaturityMonthYear_71);
  Instrument_71.insert(MaturityMonthYear_71.getString());
  FIX::MaturityTime MaturityTime_71("TZTIMEONLY_1138070166");
  msg.set(MaturityTime_71);
  Instrument_71.insert(MaturityTime_71.getString());
  FIX::MinPriceIncrement MinPriceIncrement_71;
  MinPriceIncrement_71.setString("12031895");
  msg.set(MinPriceIncrement_71);
  Instrument_71.insert(MinPriceIncrement_71.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_71;
  MinPriceIncrementAmount_71.setString("19859774");
  msg.set(MinPriceIncrementAmount_71);
  Instrument_71.insert(MinPriceIncrementAmount_71.getString());
  FIX::NTPositionLimit NTPositionLimit_71(1012779215);
  msg.set(NTPositionLimit_71);
  Instrument_71.insert(NTPositionLimit_71.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_71;
  NotionalPercentageOutstanding_71.setString("41.680000");
  msg.set(NotionalPercentageOutstanding_71);
  Instrument_71.insert(NotionalPercentageOutstanding_71.getString());
  FIX::OptAttribute OptAttribute_71('4');
  msg.set(OptAttribute_71);
  Instrument_71.insert(OptAttribute_71.getString());
  FIX::OptPayoutAmount OptPayoutAmount_71;
  OptPayoutAmount_71.setString("18090463");
  msg.set(OptPayoutAmount_71);
  Instrument_71.insert(OptPayoutAmount_71.getString());
  FIX::OptPayoutType OptPayoutType_71(2);
  msg.set(OptPayoutType_71);
  Instrument_71.insert(OptPayoutType_71.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_71;
  OriginalNotionalPercentageOutstanding_71.setString("87.110000");
  msg.set(OriginalNotionalPercentageOutstanding_71);
  Instrument_71.insert(OriginalNotionalPercentageOutstanding_71.getString());
  FIX::Pool Pool_71("STRING_1873541041");
  msg.set(Pool_71);
  Instrument_71.insert(Pool_71.getString());
  FIX::PositionLimit PositionLimit_71(1204849487);
  msg.set(PositionLimit_71);
  Instrument_71.insert(PositionLimit_71.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_71("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_71);
  Instrument_71.insert(PriceQuoteMethod_71.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_71("STRING_1609029412");
  msg.set(PriceUnitOfMeasure_71);
  Instrument_71.insert(PriceUnitOfMeasure_71.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_71;
  PriceUnitOfMeasureQty_71.setString("10685151");
  msg.set(PriceUnitOfMeasureQty_71);
  Instrument_71.insert(PriceUnitOfMeasureQty_71.getString());
  FIX::Product Product_73(12);
  msg.set(Product_73);
  Instrument_71.insert(Product_73.getString());
  FIX::ProductComplex ProductComplex_71("STRING_1308269015");
  msg.set(ProductComplex_71);
  Instrument_71.insert(ProductComplex_71.getString());
  FIX::PutOrCall PutOrCall_71(0);
  msg.set(PutOrCall_71);
  Instrument_71.insert(PutOrCall_71.getString());
  FIX::RedemptionDate RedemptionDate_71("LOCALMKTDATE_502893207");
  msg.set(RedemptionDate_71);
  Instrument_71.insert(RedemptionDate_71.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_71("STRING_677748602");
  msg.set(RepoCollateralSecurityType_71);
  Instrument_71.insert(RepoCollateralSecurityType_71.getString());
  FIX::RepurchaseRate RepurchaseRate_71;
  RepurchaseRate_71.setString("20.800000");
  msg.set(RepurchaseRate_71);
  Instrument_71.insert(RepurchaseRate_71.getString());
  FIX::RepurchaseTerm RepurchaseTerm_71(2048308822);
  msg.set(RepurchaseTerm_71);
  Instrument_71.insert(RepurchaseTerm_71.getString());
  FIX::RestructuringType RestructuringType_71("STRING_XR");
  msg.set(RestructuringType_71);
  Instrument_71.insert(RestructuringType_71.getString());
  FIX::SecurityDesc SecurityDesc_71("STRING_1781405692");
  msg.set(SecurityDesc_71);
  Instrument_71.insert(SecurityDesc_71.getString());
  FIX::SecurityExchange SecurityExchange_71("EXCHANGE_907347097");
  msg.set(SecurityExchange_71);
  Instrument_71.insert(SecurityExchange_71.getString());
  FIX::SecurityGroup SecurityGroup_71("STRING_571430738");
  msg.set(SecurityGroup_71);
  Instrument_71.insert(SecurityGroup_71.getString());
  FIX::SecurityID SecurityID_71("STRING_802645875");
  msg.set(SecurityID_71);
  Instrument_71.insert(SecurityID_71.getString());
  FIX::SecurityIDSource SecurityIDSource_71("STRING_1");
  msg.set(SecurityIDSource_71);
  Instrument_71.insert(SecurityIDSource_71.getString());
  FIX::SecurityStatus SecurityStatus_71("STRING_2");
  msg.set(SecurityStatus_71);
  Instrument_71.insert(SecurityStatus_71.getString());
  FIX::SecuritySubType SecuritySubType_72("STRING_2093357126");
  msg.set(SecuritySubType_72);
  Instrument_71.insert(SecuritySubType_72.getString());
  FIX::SecurityType SecurityType_73("STRING_XCN");
  msg.set(SecurityType_73);
  Instrument_71.insert(SecurityType_73.getString());
  FIX::Seniority Seniority_71("STRING_SD");
  msg.set(Seniority_71);
  Instrument_71.insert(Seniority_71.getString());
  FIX::SettlMethod SettlMethod_71('C');
  msg.set(SettlMethod_71);
  Instrument_71.insert(SettlMethod_71.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_71("STRING_1531392804");
  msg.set(SettleOnOpenFlag_71);
  Instrument_71.insert(SettleOnOpenFlag_71.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_71("STRING_1191072540");
  msg.set(StateOrProvinceOfIssue_71);
  Instrument_71.insert(StateOrProvinceOfIssue_71.getString());
  FIX::StrikeCurrency StrikeCurrency_71("CHF");
  msg.set(StrikeCurrency_71);
  Instrument_71.insert(StrikeCurrency_71.getString());
  FIX::StrikeMultiplier StrikeMultiplier_71;
  StrikeMultiplier_71.setString("16823280");
  msg.set(StrikeMultiplier_71);
  Instrument_71.insert(StrikeMultiplier_71.getString());
  FIX::StrikePrice StrikePrice_71;
  StrikePrice_71.setString("17582855");
  msg.set(StrikePrice_71);
  Instrument_71.insert(StrikePrice_71.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_71(1);
  msg.set(StrikePriceBoundaryMethod_71);
  Instrument_71.insert(StrikePriceBoundaryMethod_71.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_71;
  StrikePriceBoundaryPrecision_71.setString("31.220000");
  msg.set(StrikePriceBoundaryPrecision_71);
  Instrument_71.insert(StrikePriceBoundaryPrecision_71.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_71(1);
  msg.set(StrikePriceDeterminationMethod_71);
  Instrument_71.insert(StrikePriceDeterminationMethod_71.getString());
  FIX::StrikeValue StrikeValue_71;
  StrikeValue_71.setString("17347039");
  msg.set(StrikeValue_71);
  Instrument_71.insert(StrikeValue_71.getString());
  FIX::Symbol Symbol_71("STRING_587881577");
  msg.set(Symbol_71);
  Instrument_71.insert(Symbol_71.getString());
  FIX::SymbolSfx SymbolSfx_71("STRING_WI");
  msg.set(SymbolSfx_71);
  Instrument_71.insert(SymbolSfx_71.getString());
  FIX::TimeUnit TimeUnit_71("STRING_H");
  msg.set(TimeUnit_71);
  Instrument_71.insert(TimeUnit_71.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_71(1);
  msg.set(UnderlyingPriceDeterminationMethod_71);
  Instrument_71.insert(UnderlyingPriceDeterminationMethod_71.getString());
  FIX::UnitOfMeasure UnitOfMeasure_71("STRING_Bu");
  msg.set(UnitOfMeasure_71);
  Instrument_71.insert(UnitOfMeasure_71.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_71;
  UnitOfMeasureQty_71.setString("6014296");
  msg.set(UnitOfMeasureQty_71);
  Instrument_71.insert(UnitOfMeasureQty_71.getString());
  FIX::ValuationMethod ValuationMethod_71("STRING_FUT");
  msg.set(ValuationMethod_71);
  Instrument_71.insert(ValuationMethod_71.getString());
  all_values.push_back(Instrument_71);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinition::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_135;
    FIX::ComplexEventCondition ComplexEventCondition_135(1);
    noComplexEvents_0_0.set(ComplexEventCondition_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventCondition_135.getString());
    FIX::ComplexEventPrice ComplexEventPrice_135;
    ComplexEventPrice_135.setString("4530607");
    noComplexEvents_0_0.set(ComplexEventPrice_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventPrice_135.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_135(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceBoundaryMethod_135.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_135;
    ComplexEventPriceBoundaryPrecision_135.setString("37.460000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceBoundaryPrecision_135.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_135(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventPriceTimeType_135.getString());
    FIX::ComplexEventType ComplexEventType_135(8);
    noComplexEvents_0_0.set(ComplexEventType_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexEventType_135.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_135;
    ComplexOptPayoutAmount_135.setString("14991096");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_135);
    ComplexEvents_NoComplexEvents_135.insert(ComplexOptPayoutAmount_135.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_135);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_280;
      FIX::ComplexEventEndDate ComplexEventEndDate_280(FIX::UTCTIMESTAMP(4, 13, 54, 20, 22006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_280);
      ComplexEventDates_NoComplexEventDates_280.insert(ComplexEventEndDate_280.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_280(FIX::UTCTIMESTAMP(14, 45, 22, 23, 122013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_280);
      ComplexEventDates_NoComplexEventDates_280.insert(ComplexEventStartDate_280.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_280);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_556;
        FIX::ComplexEventEndTime ComplexEventEndTime_556(FIX::UTCTIMEONLY(12, 40, 4));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_556);
        ComplexEventTimes_NoComplexEventTimes_556.insert(ComplexEventEndTime_556.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_556(FIX::UTCTIMEONLY(5, 20, 10));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_556);
        ComplexEventTimes_NoComplexEventTimes_556.insert(ComplexEventStartTime_556.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_556);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_557;
        FIX::ComplexEventEndTime ComplexEventEndTime_557(FIX::UTCTIMEONLY(15, 12, 2));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_557);
        ComplexEventTimes_NoComplexEventTimes_557.insert(ComplexEventEndTime_557.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_557(FIX::UTCTIMEONLY(5, 24, 31));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_557);
        ComplexEventTimes_NoComplexEventTimes_557.insert(ComplexEventStartTime_557.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_557);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_281;
      FIX::ComplexEventEndDate ComplexEventEndDate_281(FIX::UTCTIMESTAMP(8, 44, 35, 24, 32006));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_281);
      ComplexEventDates_NoComplexEventDates_281.insert(ComplexEventEndDate_281.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_281(FIX::UTCTIMESTAMP(8, 7, 54, 27, 72017));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_281);
      ComplexEventDates_NoComplexEventDates_281.insert(ComplexEventStartDate_281.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_281);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_558;
        FIX::ComplexEventEndTime ComplexEventEndTime_558(FIX::UTCTIMEONLY(17, 18, 18));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_558);
        ComplexEventTimes_NoComplexEventTimes_558.insert(ComplexEventEndTime_558.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_558(FIX::UTCTIMEONLY(11, 39, 47));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_558);
        ComplexEventTimes_NoComplexEventTimes_558.insert(ComplexEventStartTime_558.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_558);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_559;
        FIX::ComplexEventEndTime ComplexEventEndTime_559(FIX::UTCTIMEONLY(22, 0, 57));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_559);
        ComplexEventTimes_NoComplexEventTimes_559.insert(ComplexEventEndTime_559.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_559(FIX::UTCTIMEONLY(5, 13, 36));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_559);
        ComplexEventTimes_NoComplexEventTimes_559.insert(ComplexEventStartTime_559.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_559);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_560;
        FIX::ComplexEventEndTime ComplexEventEndTime_560(FIX::UTCTIMEONLY(9, 13, 9));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_560);
        ComplexEventTimes_NoComplexEventTimes_560.insert(ComplexEventEndTime_560.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_560(FIX::UTCTIMEONLY(19, 31, 24));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_560);
        ComplexEventTimes_NoComplexEventTimes_560.insert(ComplexEventStartTime_560.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_560);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinition::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_138;
    FIX::EventDate EventDate_138("LOCALMKTDATE_1957619918");
    noEvents_0_0.set(EventDate_138);
    EvntGrp_NoEvents_138.insert(EventDate_138.getString());
    FIX::EventPx EventPx_138;
    EventPx_138.setString("3410229");
    noEvents_0_0.set(EventPx_138);
    EvntGrp_NoEvents_138.insert(EventPx_138.getString());
    FIX::EventText EventText_138("STRING_1985166891");
    noEvents_0_0.set(EventText_138);
    EvntGrp_NoEvents_138.insert(EventText_138.getString());
    FIX::EventTime EventTime_138(FIX::UTCTIMESTAMP(3, 21, 50, 24, 42003));
    noEvents_0_0.set(EventTime_138);
    EvntGrp_NoEvents_138.insert(EventTime_138.getString());
    FIX::EventType EventType_138(14);
    noEvents_0_0.set(EventType_138);
    EvntGrp_NoEvents_138.insert(EventType_138.getString());
    all_values.push_back(EvntGrp_NoEvents_138);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_133;
    FIX::InstrumentPartyID InstrumentPartyID_133("STRING_8179360");
    noInstrumentParties_0_0.set(InstrumentPartyID_133);
    InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyID_133.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_133('5');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_133);
    InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyIDSource_133.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_133(1922169273);
    noInstrumentParties_0_0.set(InstrumentPartyRole_133);
    InstrumentParties_NoInstrumentParties_133.insert(InstrumentPartyRole_133.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_133);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264;
      FIX::InstrumentPartySubID InstrumentPartySubID_264("STRING_1692052453");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_264);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264.insert(InstrumentPartySubID_264.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_264(700613422);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_264);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264.insert(InstrumentPartySubIDType_264.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265;
      FIX::InstrumentPartySubID InstrumentPartySubID_265("STRING_1569514507");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_265);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265.insert(InstrumentPartySubID_265.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_265(1383307978);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_265);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265.insert(InstrumentPartySubIDType_265.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266;
      FIX::InstrumentPartySubID InstrumentPartySubID_266("STRING_1292628335");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_266);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266.insert(InstrumentPartySubID_266.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_266(836158475);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_266);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266.insert(InstrumentPartySubIDType_266.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_134;
    FIX::InstrumentPartyID InstrumentPartyID_134("STRING_793908264");
    noInstrumentParties_0_1.set(InstrumentPartyID_134);
    InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyID_134.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_134('8');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_134);
    InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyIDSource_134.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_134(1784878668);
    noInstrumentParties_0_1.set(InstrumentPartyRole_134);
    InstrumentParties_NoInstrumentParties_134.insert(InstrumentPartyRole_134.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_134);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267;
      FIX::InstrumentPartySubID InstrumentPartySubID_267("STRING_1896344609");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_267);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267.insert(InstrumentPartySubID_267.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_267(2142107647);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_267);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267.insert(InstrumentPartySubIDType_267.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268;
      FIX::InstrumentPartySubID InstrumentPartySubID_268("STRING_1583153637");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_268);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268.insert(InstrumentPartySubID_268.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_268(472687726);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_268);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268.insert(InstrumentPartySubIDType_268.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_135;
    FIX::InstrumentPartyID InstrumentPartyID_135("STRING_1236544947");
    noInstrumentParties_0_2.set(InstrumentPartyID_135);
    InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyID_135.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_135('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_135);
    InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyIDSource_135.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_135(813710636);
    noInstrumentParties_0_2.set(InstrumentPartyRole_135);
    InstrumentParties_NoInstrumentParties_135.insert(InstrumentPartyRole_135.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_135);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269;
      FIX::InstrumentPartySubID InstrumentPartySubID_269("STRING_2081301184");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_269);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269.insert(InstrumentPartySubID_269.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_269(50273128);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_269);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269.insert(InstrumentPartySubIDType_269.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270;
      FIX::InstrumentPartySubID InstrumentPartySubID_270("STRING_1100931631");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_270);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270.insert(InstrumentPartySubID_270.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_270(114922666);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_270);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270.insert(InstrumentPartySubIDType_270.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinition::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_148;
    FIX::SecurityAltID SecurityAltID_148("STRING_1418164990");
    noSecurityAltID_0_0.set(SecurityAltID_148);
    SecAltIDGrp_NoSecurityAltID_148.insert(SecurityAltID_148.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_148("STRING_601166515");
    noSecurityAltID_0_0.set(SecurityAltIDSource_148);
    SecAltIDGrp_NoSecurityAltID_148.insert(SecurityAltIDSource_148.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_148);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_149;
    FIX::SecurityAltID SecurityAltID_149("STRING_508586622");
    noSecurityAltID_0_1.set(SecurityAltID_149);
    SecAltIDGrp_NoSecurityAltID_149.insert(SecurityAltID_149.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_149("STRING_581383960");
    noSecurityAltID_0_1.set(SecurityAltIDSource_149);
    SecAltIDGrp_NoSecurityAltID_149.insert(SecurityAltIDSource_149.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_149);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_142;
  FIX::SecurityXML SecurityXML_143("XMLDATA_609345875");
  msg.set(SecurityXML_143);
  FIX::SecurityXMLLen SecurityXMLLen_71(1029088915);
  msg.set(SecurityXMLLen_71);
  FIX::SecurityXMLSchema SecurityXMLSchema_71("STRING_356069586");
  msg.set(SecurityXMLSchema_71);
  SecurityXML_142.insert(SecurityXMLSchema_71.getString());
  all_values.push_back(SecurityXML_142);

  // InstrumentExtension
  multiset<string> InstrumentExtension_8;
  FIX::DeliveryForm DeliveryForm_8(2);
  msg.set(DeliveryForm_8);
  InstrumentExtension_8.insert(DeliveryForm_8.getString());
  FIX::PctAtRisk PctAtRisk_8;
  PctAtRisk_8.setString("77.200000");
  msg.set(PctAtRisk_8);
  InstrumentExtension_8.insert(PctAtRisk_8.getString());
  all_values.push_back(InstrumentExtension_8);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_16;
    FIX::InstrAttribType InstrAttribType_16(7);
    noInstrAttrib_0_0.set(InstrAttribType_16);
    AttrbGrp_NoInstrAttrib_16.insert(InstrAttribType_16.getString());
    FIX::InstrAttribValue InstrAttribValue_16("STRING_1956965698");
    noInstrAttrib_0_0.set(InstrAttribValue_16);
    AttrbGrp_NoInstrAttrib_16.insert(InstrAttribValue_16.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_16);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_17;
    FIX::InstrAttribType InstrAttribType_17(27);
    noInstrAttrib_0_1.set(InstrAttribType_17);
    AttrbGrp_NoInstrAttrib_17.insert(InstrAttribType_17.getString());
    FIX::InstrAttribValue InstrAttribValue_17("STRING_67507624");
    noInstrAttrib_0_1.set(InstrAttribValue_17);
    AttrbGrp_NoInstrAttrib_17.insert(InstrAttribValue_17.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_17);

    msg.addGroup(noInstrAttrib_0_1);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_5;
    FIX::MarketID MarketID_14("EXCHANGE_1050057512");
    noMarketSegments_0_0.set(MarketID_14);
    MarketSegmentGrp_NoMarketSegments_5.insert(MarketID_14.getString());
    FIX::MarketSegmentID MarketSegmentID_14("STRING_1852386292");
    noMarketSegments_0_0.set(MarketSegmentID_14);
    MarketSegmentGrp_NoMarketSegments_5.insert(MarketSegmentID_14.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_5);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_7;
    FIX::ExpirationCycle ExpirationCycle_7(0);
    noMarketSegments_0_0.set(ExpirationCycle_7);
    BaseTradingRules_7.insert(ExpirationCycle_7.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_7(2);
    noMarketSegments_0_0.set(ImpliedMarketIndicator_7);
    BaseTradingRules_7.insert(ImpliedMarketIndicator_7.getString());
    FIX::MaxPriceVariation MaxPriceVariation_7;
    MaxPriceVariation_7.setString("18470102");
    noMarketSegments_0_0.set(MaxPriceVariation_7);
    BaseTradingRules_7.insert(MaxPriceVariation_7.getString());
    FIX::MaxTradeVol MaxTradeVol_7;
    MaxTradeVol_7.setString("3676481");
    noMarketSegments_0_0.set(MaxTradeVol_7);
    BaseTradingRules_7.insert(MaxTradeVol_7.getString());
    FIX::MinTradeVol MinTradeVol_7;
    MinTradeVol_7.setString("12716062");
    noMarketSegments_0_0.set(MinTradeVol_7);
    BaseTradingRules_7.insert(MinTradeVol_7.getString());
    FIX::MultilegModel MultilegModel_9(2);
    noMarketSegments_0_0.set(MultilegModel_9);
    BaseTradingRules_7.insert(MultilegModel_9.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_9(2);
    noMarketSegments_0_0.set(MultilegPriceMethod_9);
    BaseTradingRules_7.insert(MultilegPriceMethod_9.getString());
    FIX::PriceType PriceType_40(7);
    noMarketSegments_0_0.set(PriceType_40);
    BaseTradingRules_7.insert(PriceType_40.getString());
    FIX::RoundLot RoundLot_7;
    RoundLot_7.setString("20102997");
    noMarketSegments_0_0.set(RoundLot_7);
    BaseTradingRules_7.insert(RoundLot_7.getString());
    FIX::TradingCurrency TradingCurrency_7("JPY");
    noMarketSegments_0_0.set(TradingCurrency_7);
    BaseTradingRules_7.insert(TradingCurrency_7.getString());
    all_values.push_back(BaseTradingRules_7);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_15;
      FIX::LotType LotType_19('3');
      noLotTypeRules_0_1_0.set(LotType_19);
      LotTypeRules_NoLotTypeRules_15.insert(LotType_19.getString());
      FIX::MinLotSize MinLotSize_15;
      MinLotSize_15.setString("5421972");
      noLotTypeRules_0_1_0.set(MinLotSize_15);
      LotTypeRules_NoLotTypeRules_15.insert(MinLotSize_15.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_15);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_16;
      FIX::LotType LotType_20('3');
      noLotTypeRules_0_1_1.set(LotType_20);
      LotTypeRules_NoLotTypeRules_16.insert(LotType_20.getString());
      FIX::MinLotSize MinLotSize_16;
      MinLotSize_16.setString("2633610");
      noLotTypeRules_0_1_1.set(MinLotSize_16);
      LotTypeRules_NoLotTypeRules_16.insert(MinLotSize_16.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_16);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_17;
      FIX::LotType LotType_21('4');
      noLotTypeRules_0_1_2.set(LotType_21);
      LotTypeRules_NoLotTypeRules_17.insert(LotType_21.getString());
      FIX::MinLotSize MinLotSize_17;
      MinLotSize_17.setString("8158130");
      noLotTypeRules_0_1_2.set(MinLotSize_17);
      LotTypeRules_NoLotTypeRules_17.insert(MinLotSize_17.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_17);

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_7;
    FIX::HighLimitPrice HighLimitPrice_7;
    HighLimitPrice_7.setString("8727069");
    noMarketSegments_0_0.set(HighLimitPrice_7);
    PriceLimits_7.insert(HighLimitPrice_7.getString());
    FIX::LowLimitPrice LowLimitPrice_7;
    LowLimitPrice_7.setString("20798728");
    noMarketSegments_0_0.set(LowLimitPrice_7);
    PriceLimits_7.insert(LowLimitPrice_7.getString());
    FIX::PriceLimitType PriceLimitType_7(2);
    noMarketSegments_0_0.set(PriceLimitType_7);
    PriceLimits_7.insert(PriceLimitType_7.getString());
    FIX::TradingReferencePrice TradingReferencePrice_7;
    TradingReferencePrice_7.setString("6820252");
    noMarketSegments_0_0.set(TradingReferencePrice_7);
    PriceLimits_7.insert(TradingReferencePrice_7.getString());
    all_values.push_back(PriceLimits_7);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_12;
      FIX::EndTickPriceRange EndTickPriceRange_12;
      EndTickPriceRange_12.setString("810820");
      noTickRules_0_1_0.set(EndTickPriceRange_12);
      TickRules_NoTickRules_12.insert(EndTickPriceRange_12.getString());
      FIX::StartTickPriceRange StartTickPriceRange_12;
      StartTickPriceRange_12.setString("20608580");
      noTickRules_0_1_0.set(StartTickPriceRange_12);
      TickRules_NoTickRules_12.insert(StartTickPriceRange_12.getString());
      FIX::TickIncrement TickIncrement_12;
      TickIncrement_12.setString("3155289");
      noTickRules_0_1_0.set(TickIncrement_12);
      TickRules_NoTickRules_12.insert(TickIncrement_12.getString());
      FIX::TickRuleType TickRuleType_12(4);
      noTickRules_0_1_0.set(TickRuleType_12);
      TickRules_NoTickRules_12.insert(TickRuleType_12.getString());
      all_values.push_back(TickRules_NoTickRules_12);

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_13;
      FIX::NestedInstrAttribType NestedInstrAttribType_13(918919246);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_13);
      NestedInstrumentAttribute_NoNestedInstrAttrib_13.insert(NestedInstrAttribType_13.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_13("STRING_1332967221");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_13);
      NestedInstrumentAttribute_NoNestedInstrAttrib_13.insert(NestedInstrAttribValue_13.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_13);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_14;
      FIX::NestedInstrAttribType NestedInstrAttribType_14(1833268316);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_14);
      NestedInstrumentAttribute_NoNestedInstrAttrib_14.insert(NestedInstrAttribType_14.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_14("STRING_1850897365");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_14);
      NestedInstrumentAttribute_NoNestedInstrAttrib_14.insert(NestedInstrAttribValue_14.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_14);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_15;
      FIX::NestedInstrAttribType NestedInstrAttribType_15(2131885695);
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribType_15);
      NestedInstrumentAttribute_NoNestedInstrAttrib_15.insert(NestedInstrAttribType_15.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_15("STRING_1532794960");
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribValue_15);
      NestedInstrumentAttribute_NoNestedInstrAttrib_15.insert(NestedInstrAttribValue_15.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_15);

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_11;
      FIX::TradingSessionID TradingSessionID_73("STRING_6");
      noTradingSessionRules_0_1_0.set(TradingSessionID_73);
      TradingSessionRulesGrp_NoTradingSessionRules_11.insert(TradingSessionID_73.getString());
      FIX::TradingSessionSubID TradingSessionSubID_73("STRING_3");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_73);
      TradingSessionRulesGrp_NoTradingSessionRules_11.insert(TradingSessionSubID_73.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_11);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_27;
        FIX::ExecInstValue ExecInstValue_27('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_27);
        ExecInstRules_NoExecInstRules_27.insert(ExecInstValue_27.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_27);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_20;
        FIX::MDBookType MDBookType_22(3);
        noMDFeedTypes_0_0_2_0.set(MDBookType_22);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MDBookType_22.getString());
        FIX::MDFeedType MDFeedType_22("STRING_1181947752");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_22);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MDFeedType_22.getString());
        FIX::MarketDepth MarketDepth_23(1147946800);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_23);
        MarketDataFeedTypes_NoMDFeedTypes_20.insert(MarketDepth_23.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_20);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_21;
        FIX::MDBookType MDBookType_23(3);
        noMDFeedTypes_0_0_2_1.set(MDBookType_23);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MDBookType_23.getString());
        FIX::MDFeedType MDFeedType_23("STRING_1724145025");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_23);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MDFeedType_23.getString());
        FIX::MarketDepth MarketDepth_24(1382375906);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_24);
        MarketDataFeedTypes_NoMDFeedTypes_21.insert(MarketDepth_24.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_21);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_22;
        FIX::MDBookType MDBookType_24(2);
        noMDFeedTypes_0_0_2_2.set(MDBookType_24);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MDBookType_24.getString());
        FIX::MDFeedType MDFeedType_24("STRING_627445272");
        noMDFeedTypes_0_0_2_2.set(MDFeedType_24);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MDFeedType_24.getString());
        FIX::MarketDepth MarketDepth_25(50705324);
        noMDFeedTypes_0_0_2_2.set(MarketDepth_25);
        MarketDataFeedTypes_NoMDFeedTypes_22.insert(MarketDepth_25.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_22);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_25;
        FIX::MatchAlgorithm MatchAlgorithm_25("STRING_559834434");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_25);
        MatchRules_NoMatchRules_25.insert(MatchAlgorithm_25.getString());
        FIX::MatchType MatchType_30("STRING_A2");
        noMatchRules_0_0_2_0.set(MatchType_30);
        MatchRules_NoMatchRules_25.insert(MatchType_30.getString());
        all_values.push_back(MatchRules_NoMatchRules_25);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_26;
        FIX::MatchAlgorithm MatchAlgorithm_26("STRING_712075967");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_26);
        MatchRules_NoMatchRules_26.insert(MatchAlgorithm_26.getString());
        FIX::MatchType MatchType_31("STRING_7");
        noMatchRules_0_0_2_1.set(MatchType_31);
        MatchRules_NoMatchRules_26.insert(MatchType_31.getString());
        all_values.push_back(MatchRules_NoMatchRules_26);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_30;
        FIX::OrdType OrdType_53('P');
        noOrdTypeRules_0_0_2_0.set(OrdType_53);
        OrdTypeRules_NoOrdTypeRules_30.insert(OrdType_53.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_30);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_31;
        FIX::OrdType OrdType_54('9');
        noOrdTypeRules_0_0_2_1.set(OrdType_54);
        OrdTypeRules_NoOrdTypeRules_31.insert(OrdType_54.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_31);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_29;
        FIX::TimeInForce TimeInForce_42('0');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_42);
        TimeInForceRules_NoTimeInForceRules_29.insert(TimeInForce_42.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_29);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_30;
        FIX::TimeInForce TimeInForce_43('6');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_43);
        TimeInForceRules_NoTimeInForceRules_30.insert(TimeInForce_43.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_30);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_31;
        FIX::TimeInForce TimeInForce_44('2');
        noTimeInForceRules_0_0_2_2.set(TimeInForce_44);
        TimeInForceRules_NoTimeInForceRules_31.insert(TimeInForce_44.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_31);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_12;
      FIX::TradingSessionID TradingSessionID_74("STRING_3");
      noTradingSessionRules_0_1_1.set(TradingSessionID_74);
      TradingSessionRulesGrp_NoTradingSessionRules_12.insert(TradingSessionID_74.getString());
      FIX::TradingSessionSubID TradingSessionSubID_74("STRING_3");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_74);
      TradingSessionRulesGrp_NoTradingSessionRules_12.insert(TradingSessionSubID_74.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_12);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_28;
        FIX::ExecInstValue ExecInstValue_28('1');
        noExecInstRules_0_1_2_0.set(ExecInstValue_28);
        ExecInstRules_NoExecInstRules_28.insert(ExecInstValue_28.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_28);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_29;
        FIX::ExecInstValue ExecInstValue_29('2');
        noExecInstRules_0_1_2_1.set(ExecInstValue_29);
        ExecInstRules_NoExecInstRules_29.insert(ExecInstValue_29.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_29);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_30;
        FIX::ExecInstValue ExecInstValue_30('2');
        noExecInstRules_0_1_2_2.set(ExecInstValue_30);
        ExecInstRules_NoExecInstRules_30.insert(ExecInstValue_30.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_30);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_23;
        FIX::MDBookType MDBookType_25(3);
        noMDFeedTypes_0_1_2_0.set(MDBookType_25);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MDBookType_25.getString());
        FIX::MDFeedType MDFeedType_25("STRING_1058831355");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_25);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MDFeedType_25.getString());
        FIX::MarketDepth MarketDepth_26(183010309);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_26);
        MarketDataFeedTypes_NoMDFeedTypes_23.insert(MarketDepth_26.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_23);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_24;
        FIX::MDBookType MDBookType_26(3);
        noMDFeedTypes_0_1_2_1.set(MDBookType_26);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MDBookType_26.getString());
        FIX::MDFeedType MDFeedType_26("STRING_93295460");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_26);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MDFeedType_26.getString());
        FIX::MarketDepth MarketDepth_27(1330957109);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_27);
        MarketDataFeedTypes_NoMDFeedTypes_24.insert(MarketDepth_27.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_24);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_27;
        FIX::MatchAlgorithm MatchAlgorithm_27("STRING_1817440485");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_27);
        MatchRules_NoMatchRules_27.insert(MatchAlgorithm_27.getString());
        FIX::MatchType MatchType_32("STRING_6");
        noMatchRules_0_1_2_0.set(MatchType_32);
        MatchRules_NoMatchRules_27.insert(MatchType_32.getString());
        all_values.push_back(MatchRules_NoMatchRules_27);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_28;
        FIX::MatchAlgorithm MatchAlgorithm_28("STRING_1189919401");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_28);
        MatchRules_NoMatchRules_28.insert(MatchAlgorithm_28.getString());
        FIX::MatchType MatchType_33("STRING_S1");
        noMatchRules_0_1_2_1.set(MatchType_33);
        MatchRules_NoMatchRules_28.insert(MatchType_33.getString());
        all_values.push_back(MatchRules_NoMatchRules_28);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_32;
        FIX::OrdType OrdType_55('6');
        noOrdTypeRules_0_1_2_0.set(OrdType_55);
        OrdTypeRules_NoOrdTypeRules_32.insert(OrdType_55.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_32);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_33;
        FIX::OrdType OrdType_56('9');
        noOrdTypeRules_0_1_2_1.set(OrdType_56);
        OrdTypeRules_NoOrdTypeRules_33.insert(OrdType_56.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_33);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_32;
        FIX::TimeInForce TimeInForce_45('4');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_45);
        TimeInForceRules_NoTimeInForceRules_32.insert(TimeInForce_45.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_32);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_10;
      FIX::EndStrikePxRange EndStrikePxRange_10;
      EndStrikePxRange_10.setString("9953290");
      noStrikeRules_0_1_0.set(EndStrikePxRange_10);
      StrikeRules_NoStrikeRules_10.insert(EndStrikePxRange_10.getString());
      FIX::StartStrikePxRange StartStrikePxRange_10;
      StartStrikePxRange_10.setString("4100128");
      noStrikeRules_0_1_0.set(StartStrikePxRange_10);
      StrikeRules_NoStrikeRules_10.insert(StartStrikePxRange_10.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_10(1157044461);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeExerciseStyle_10.getString());
      FIX::StrikeIncrement StrikeIncrement_10;
      StrikeIncrement_10.setString("4344250");
      noStrikeRules_0_1_0.set(StrikeIncrement_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeIncrement_10.getString());
      FIX::StrikeRuleID StrikeRuleID_10("STRING_1016345192");
      noStrikeRules_0_1_0.set(StrikeRuleID_10);
      StrikeRules_NoStrikeRules_10.insert(StrikeRuleID_10.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_10);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_22;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_22("MONTHYEAR_1206488334");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_22);
        MaturityRules_NoMaturityRules_22.insert(EndMaturityMonthYear_22.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_22(1);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearFormat_22.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_22(1166149872);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearIncrement_22.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_22(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityMonthYearIncrementUnits_22.getString());
        FIX::MaturityRuleID MaturityRuleID_22("STRING_985890620");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_22);
        MaturityRules_NoMaturityRules_22.insert(MaturityRuleID_22.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_22("MONTHYEAR_1093471262");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_22);
        MaturityRules_NoMaturityRules_22.insert(StartMaturityMonthYear_22.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_22);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_23;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_23("MONTHYEAR_1827943573");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_23);
        MaturityRules_NoMaturityRules_23.insert(EndMaturityMonthYear_23.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_23(1);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearFormat_23.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_23(705308846);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearIncrement_23.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_23(1);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityMonthYearIncrementUnits_23.getString());
        FIX::MaturityRuleID MaturityRuleID_23("STRING_1167712202");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_23);
        MaturityRules_NoMaturityRules_23.insert(MaturityRuleID_23.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_23("MONTHYEAR_1696418176");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_23);
        MaturityRules_NoMaturityRules_23.insert(StartMaturityMonthYear_23.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_23);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_24;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_24("MONTHYEAR_832586741");
        noMaturityRules_0_0_2_2.set(EndMaturityMonthYear_24);
        MaturityRules_NoMaturityRules_24.insert(EndMaturityMonthYear_24.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_24(2);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearFormat_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearFormat_24.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_24(1581510174);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrement_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearIncrement_24.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_24(2);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrementUnits_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityMonthYearIncrementUnits_24.getString());
        FIX::MaturityRuleID MaturityRuleID_24("STRING_917035030");
        noMaturityRules_0_0_2_2.set(MaturityRuleID_24);
        MaturityRules_NoMaturityRules_24.insert(MaturityRuleID_24.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_24("MONTHYEAR_623945927");
        noMaturityRules_0_0_2_2.set(StartMaturityMonthYear_24);
        MaturityRules_NoMaturityRules_24.insert(StartMaturityMonthYear_24.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_24);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_6;
    FIX::MarketID MarketID_15("EXCHANGE_799945688");
    noMarketSegments_0_1.set(MarketID_15);
    MarketSegmentGrp_NoMarketSegments_6.insert(MarketID_15.getString());
    FIX::MarketSegmentID MarketSegmentID_15("STRING_1533589722");
    noMarketSegments_0_1.set(MarketSegmentID_15);
    MarketSegmentGrp_NoMarketSegments_6.insert(MarketSegmentID_15.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_6);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_8;
    FIX::ExpirationCycle ExpirationCycle_8(1);
    noMarketSegments_0_1.set(ExpirationCycle_8);
    BaseTradingRules_8.insert(ExpirationCycle_8.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_8(1);
    noMarketSegments_0_1.set(ImpliedMarketIndicator_8);
    BaseTradingRules_8.insert(ImpliedMarketIndicator_8.getString());
    FIX::MaxPriceVariation MaxPriceVariation_8;
    MaxPriceVariation_8.setString("12252487");
    noMarketSegments_0_1.set(MaxPriceVariation_8);
    BaseTradingRules_8.insert(MaxPriceVariation_8.getString());
    FIX::MaxTradeVol MaxTradeVol_8;
    MaxTradeVol_8.setString("16284784");
    noMarketSegments_0_1.set(MaxTradeVol_8);
    BaseTradingRules_8.insert(MaxTradeVol_8.getString());
    FIX::MinTradeVol MinTradeVol_8;
    MinTradeVol_8.setString("14328164");
    noMarketSegments_0_1.set(MinTradeVol_8);
    BaseTradingRules_8.insert(MinTradeVol_8.getString());
    FIX::MultilegModel MultilegModel_10(2);
    noMarketSegments_0_1.set(MultilegModel_10);
    BaseTradingRules_8.insert(MultilegModel_10.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_10(1);
    noMarketSegments_0_1.set(MultilegPriceMethod_10);
    BaseTradingRules_8.insert(MultilegPriceMethod_10.getString());
    FIX::PriceType PriceType_41(8);
    noMarketSegments_0_1.set(PriceType_41);
    BaseTradingRules_8.insert(PriceType_41.getString());
    FIX::RoundLot RoundLot_8;
    RoundLot_8.setString("5075191");
    noMarketSegments_0_1.set(RoundLot_8);
    BaseTradingRules_8.insert(RoundLot_8.getString());
    FIX::TradingCurrency TradingCurrency_8("CHF");
    noMarketSegments_0_1.set(TradingCurrency_8);
    BaseTradingRules_8.insert(TradingCurrency_8.getString());
    all_values.push_back(BaseTradingRules_8);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_18;
      FIX::LotType LotType_22('3');
      noLotTypeRules_1_1_0.set(LotType_22);
      LotTypeRules_NoLotTypeRules_18.insert(LotType_22.getString());
      FIX::MinLotSize MinLotSize_18;
      MinLotSize_18.setString("7709337");
      noLotTypeRules_1_1_0.set(MinLotSize_18);
      LotTypeRules_NoLotTypeRules_18.insert(MinLotSize_18.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_18);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_19;
      FIX::LotType LotType_23('3');
      noLotTypeRules_1_1_1.set(LotType_23);
      LotTypeRules_NoLotTypeRules_19.insert(LotType_23.getString());
      FIX::MinLotSize MinLotSize_19;
      MinLotSize_19.setString("10542220");
      noLotTypeRules_1_1_1.set(MinLotSize_19);
      LotTypeRules_NoLotTypeRules_19.insert(MinLotSize_19.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_19);

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_8;
    FIX::HighLimitPrice HighLimitPrice_8;
    HighLimitPrice_8.setString("18644050");
    noMarketSegments_0_1.set(HighLimitPrice_8);
    PriceLimits_8.insert(HighLimitPrice_8.getString());
    FIX::LowLimitPrice LowLimitPrice_8;
    LowLimitPrice_8.setString("12099374");
    noMarketSegments_0_1.set(LowLimitPrice_8);
    PriceLimits_8.insert(LowLimitPrice_8.getString());
    FIX::PriceLimitType PriceLimitType_8(2);
    noMarketSegments_0_1.set(PriceLimitType_8);
    PriceLimits_8.insert(PriceLimitType_8.getString());
    FIX::TradingReferencePrice TradingReferencePrice_8;
    TradingReferencePrice_8.setString("4222302");
    noMarketSegments_0_1.set(TradingReferencePrice_8);
    PriceLimits_8.insert(TradingReferencePrice_8.getString());
    all_values.push_back(PriceLimits_8);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_13;
      FIX::EndTickPriceRange EndTickPriceRange_13;
      EndTickPriceRange_13.setString("10591524");
      noTickRules_1_1_0.set(EndTickPriceRange_13);
      TickRules_NoTickRules_13.insert(EndTickPriceRange_13.getString());
      FIX::StartTickPriceRange StartTickPriceRange_13;
      StartTickPriceRange_13.setString("21186484");
      noTickRules_1_1_0.set(StartTickPriceRange_13);
      TickRules_NoTickRules_13.insert(StartTickPriceRange_13.getString());
      FIX::TickIncrement TickIncrement_13;
      TickIncrement_13.setString("6343318");
      noTickRules_1_1_0.set(TickIncrement_13);
      TickRules_NoTickRules_13.insert(TickIncrement_13.getString());
      FIX::TickRuleType TickRuleType_13(2);
      noTickRules_1_1_0.set(TickRuleType_13);
      TickRules_NoTickRules_13.insert(TickRuleType_13.getString());
      all_values.push_back(TickRules_NoTickRules_13);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_14;
      FIX::EndTickPriceRange EndTickPriceRange_14;
      EndTickPriceRange_14.setString("15526749");
      noTickRules_1_1_1.set(EndTickPriceRange_14);
      TickRules_NoTickRules_14.insert(EndTickPriceRange_14.getString());
      FIX::StartTickPriceRange StartTickPriceRange_14;
      StartTickPriceRange_14.setString("11368753");
      noTickRules_1_1_1.set(StartTickPriceRange_14);
      TickRules_NoTickRules_14.insert(StartTickPriceRange_14.getString());
      FIX::TickIncrement TickIncrement_14;
      TickIncrement_14.setString("1798895");
      noTickRules_1_1_1.set(TickIncrement_14);
      TickRules_NoTickRules_14.insert(TickIncrement_14.getString());
      FIX::TickRuleType TickRuleType_14(3);
      noTickRules_1_1_1.set(TickRuleType_14);
      TickRules_NoTickRules_14.insert(TickRuleType_14.getString());
      all_values.push_back(TickRules_NoTickRules_14);

      noMarketSegments_0_1.addGroup(noTickRules_1_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_16;
      FIX::NestedInstrAttribType NestedInstrAttribType_16(1713479266);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_16);
      NestedInstrumentAttribute_NoNestedInstrAttrib_16.insert(NestedInstrAttribType_16.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_16("STRING_1873053278");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_16);
      NestedInstrumentAttribute_NoNestedInstrAttrib_16.insert(NestedInstrAttribValue_16.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_16);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_17;
      FIX::NestedInstrAttribType NestedInstrAttribType_17(1446519658);
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribType_17);
      NestedInstrumentAttribute_NoNestedInstrAttrib_17.insert(NestedInstrAttribType_17.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_17("STRING_791244361");
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribValue_17);
      NestedInstrumentAttribute_NoNestedInstrAttrib_17.insert(NestedInstrAttribValue_17.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_17);

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_13;
      FIX::TradingSessionID TradingSessionID_75("STRING_3");
      noTradingSessionRules_1_1_0.set(TradingSessionID_75);
      TradingSessionRulesGrp_NoTradingSessionRules_13.insert(TradingSessionID_75.getString());
      FIX::TradingSessionSubID TradingSessionSubID_75("STRING_6");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_75);
      TradingSessionRulesGrp_NoTradingSessionRules_13.insert(TradingSessionSubID_75.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_13);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_31;
        FIX::ExecInstValue ExecInstValue_31('1');
        noExecInstRules_1_0_2_0.set(ExecInstValue_31);
        ExecInstRules_NoExecInstRules_31.insert(ExecInstValue_31.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_31);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_32;
        FIX::ExecInstValue ExecInstValue_32('1');
        noExecInstRules_1_0_2_1.set(ExecInstValue_32);
        ExecInstRules_NoExecInstRules_32.insert(ExecInstValue_32.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_32);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_33;
        FIX::ExecInstValue ExecInstValue_33('4');
        noExecInstRules_1_0_2_2.set(ExecInstValue_33);
        ExecInstRules_NoExecInstRules_33.insert(ExecInstValue_33.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_33);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_25;
        FIX::MDBookType MDBookType_27(2);
        noMDFeedTypes_1_0_2_0.set(MDBookType_27);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MDBookType_27.getString());
        FIX::MDFeedType MDFeedType_27("STRING_73256355");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_27);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MDFeedType_27.getString());
        FIX::MarketDepth MarketDepth_28(1549947426);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_28);
        MarketDataFeedTypes_NoMDFeedTypes_25.insert(MarketDepth_28.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_25);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_26;
        FIX::MDBookType MDBookType_28(1);
        noMDFeedTypes_1_0_2_1.set(MDBookType_28);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MDBookType_28.getString());
        FIX::MDFeedType MDFeedType_28("STRING_1127478405");
        noMDFeedTypes_1_0_2_1.set(MDFeedType_28);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MDFeedType_28.getString());
        FIX::MarketDepth MarketDepth_29(1266868832);
        noMDFeedTypes_1_0_2_1.set(MarketDepth_29);
        MarketDataFeedTypes_NoMDFeedTypes_26.insert(MarketDepth_29.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_26);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_27;
        FIX::MDBookType MDBookType_29(2);
        noMDFeedTypes_1_0_2_2.set(MDBookType_29);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MDBookType_29.getString());
        FIX::MDFeedType MDFeedType_29("STRING_1018918701");
        noMDFeedTypes_1_0_2_2.set(MDFeedType_29);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MDFeedType_29.getString());
        FIX::MarketDepth MarketDepth_30(1689099083);
        noMDFeedTypes_1_0_2_2.set(MarketDepth_30);
        MarketDataFeedTypes_NoMDFeedTypes_27.insert(MarketDepth_30.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_27);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_29;
        FIX::MatchAlgorithm MatchAlgorithm_29("STRING_2078071200");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_29);
        MatchRules_NoMatchRules_29.insert(MatchAlgorithm_29.getString());
        FIX::MatchType MatchType_34("STRING_M6");
        noMatchRules_1_0_2_0.set(MatchType_34);
        MatchRules_NoMatchRules_29.insert(MatchType_34.getString());
        all_values.push_back(MatchRules_NoMatchRules_29);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_34;
        FIX::OrdType OrdType_57('J');
        noOrdTypeRules_1_0_2_0.set(OrdType_57);
        OrdTypeRules_NoOrdTypeRules_34.insert(OrdType_57.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_34);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_35;
        FIX::OrdType OrdType_58('A');
        noOrdTypeRules_1_0_2_1.set(OrdType_58);
        OrdTypeRules_NoOrdTypeRules_35.insert(OrdType_58.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_35);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_33;
        FIX::TimeInForce TimeInForce_46('8');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_46);
        TimeInForceRules_NoTimeInForceRules_33.insert(TimeInForce_46.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_33);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_34;
        FIX::TimeInForce TimeInForce_47('2');
        noTimeInForceRules_1_0_2_1.set(TimeInForce_47);
        TimeInForceRules_NoTimeInForceRules_34.insert(TimeInForce_47.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_34);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_11;
      FIX::EndStrikePxRange EndStrikePxRange_11;
      EndStrikePxRange_11.setString("10868108");
      noStrikeRules_1_1_0.set(EndStrikePxRange_11);
      StrikeRules_NoStrikeRules_11.insert(EndStrikePxRange_11.getString());
      FIX::StartStrikePxRange StartStrikePxRange_11;
      StartStrikePxRange_11.setString("8201620");
      noStrikeRules_1_1_0.set(StartStrikePxRange_11);
      StrikeRules_NoStrikeRules_11.insert(StartStrikePxRange_11.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_11(44154818);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeExerciseStyle_11.getString());
      FIX::StrikeIncrement StrikeIncrement_11;
      StrikeIncrement_11.setString("18780552");
      noStrikeRules_1_1_0.set(StrikeIncrement_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeIncrement_11.getString());
      FIX::StrikeRuleID StrikeRuleID_11("STRING_26726495");
      noStrikeRules_1_1_0.set(StrikeRuleID_11);
      StrikeRules_NoStrikeRules_11.insert(StrikeRuleID_11.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_11);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_25;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_25("MONTHYEAR_594910056");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_25);
        MaturityRules_NoMaturityRules_25.insert(EndMaturityMonthYear_25.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_25(1);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearFormat_25.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_25(1950236989);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearIncrement_25.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_25(0);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityMonthYearIncrementUnits_25.getString());
        FIX::MaturityRuleID MaturityRuleID_25("STRING_1276707165");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_25);
        MaturityRules_NoMaturityRules_25.insert(MaturityRuleID_25.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_25("MONTHYEAR_581766976");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_25);
        MaturityRules_NoMaturityRules_25.insert(StartMaturityMonthYear_25.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_25);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_26;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_26("MONTHYEAR_757665525");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_26);
        MaturityRules_NoMaturityRules_26.insert(EndMaturityMonthYear_26.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_26(0);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearFormat_26.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_26(2131714403);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearIncrement_26.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_26(1);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityMonthYearIncrementUnits_26.getString());
        FIX::MaturityRuleID MaturityRuleID_26("STRING_329958278");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_26);
        MaturityRules_NoMaturityRules_26.insert(MaturityRuleID_26.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_26("MONTHYEAR_1251099587");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_26);
        MaturityRules_NoMaturityRules_26.insert(StartMaturityMonthYear_26.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_26);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  {
    FIX50SP2::SecurityDefinition::NoMarketSegments noMarketSegments_0_2;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_7;
    FIX::MarketID MarketID_16("EXCHANGE_460869996");
    noMarketSegments_0_2.set(MarketID_16);
    MarketSegmentGrp_NoMarketSegments_7.insert(MarketID_16.getString());
    FIX::MarketSegmentID MarketSegmentID_16("STRING_1348876979");
    noMarketSegments_0_2.set(MarketSegmentID_16);
    MarketSegmentGrp_NoMarketSegments_7.insert(MarketSegmentID_16.getString());
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_7);

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_9;
    FIX::ExpirationCycle ExpirationCycle_9(2);
    noMarketSegments_0_2.set(ExpirationCycle_9);
    BaseTradingRules_9.insert(ExpirationCycle_9.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_9(1);
    noMarketSegments_0_2.set(ImpliedMarketIndicator_9);
    BaseTradingRules_9.insert(ImpliedMarketIndicator_9.getString());
    FIX::MaxPriceVariation MaxPriceVariation_9;
    MaxPriceVariation_9.setString("12794645");
    noMarketSegments_0_2.set(MaxPriceVariation_9);
    BaseTradingRules_9.insert(MaxPriceVariation_9.getString());
    FIX::MaxTradeVol MaxTradeVol_9;
    MaxTradeVol_9.setString("3054952");
    noMarketSegments_0_2.set(MaxTradeVol_9);
    BaseTradingRules_9.insert(MaxTradeVol_9.getString());
    FIX::MinTradeVol MinTradeVol_9;
    MinTradeVol_9.setString("16118338");
    noMarketSegments_0_2.set(MinTradeVol_9);
    BaseTradingRules_9.insert(MinTradeVol_9.getString());
    FIX::MultilegModel MultilegModel_11(1);
    noMarketSegments_0_2.set(MultilegModel_11);
    BaseTradingRules_9.insert(MultilegModel_11.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_11(2);
    noMarketSegments_0_2.set(MultilegPriceMethod_11);
    BaseTradingRules_9.insert(MultilegPriceMethod_11.getString());
    FIX::PriceType PriceType_42(16);
    noMarketSegments_0_2.set(PriceType_42);
    BaseTradingRules_9.insert(PriceType_42.getString());
    FIX::RoundLot RoundLot_9;
    RoundLot_9.setString("19937218");
    noMarketSegments_0_2.set(RoundLot_9);
    BaseTradingRules_9.insert(RoundLot_9.getString());
    FIX::TradingCurrency TradingCurrency_9("GBP");
    noMarketSegments_0_2.set(TradingCurrency_9);
    BaseTradingRules_9.insert(TradingCurrency_9.getString());
    all_values.push_back(BaseTradingRules_9);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_20;
      FIX::LotType LotType_24('2');
      noLotTypeRules_2_1_0.set(LotType_24);
      LotTypeRules_NoLotTypeRules_20.insert(LotType_24.getString());
      FIX::MinLotSize MinLotSize_20;
      MinLotSize_20.setString("12094051");
      noLotTypeRules_2_1_0.set(MinLotSize_20);
      LotTypeRules_NoLotTypeRules_20.insert(MinLotSize_20.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_20);

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_21;
      FIX::LotType LotType_25('4');
      noLotTypeRules_2_1_1.set(LotType_25);
      LotTypeRules_NoLotTypeRules_21.insert(LotType_25.getString());
      FIX::MinLotSize MinLotSize_21;
      MinLotSize_21.setString("11649476");
      noLotTypeRules_2_1_1.set(MinLotSize_21);
      LotTypeRules_NoLotTypeRules_21.insert(MinLotSize_21.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_21);

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoLotTypeRules noLotTypeRules_2_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_22;
      FIX::LotType LotType_26('3');
      noLotTypeRules_2_1_2.set(LotType_26);
      LotTypeRules_NoLotTypeRules_22.insert(LotType_26.getString());
      FIX::MinLotSize MinLotSize_22;
      MinLotSize_22.setString("12585307");
      noLotTypeRules_2_1_2.set(MinLotSize_22);
      LotTypeRules_NoLotTypeRules_22.insert(MinLotSize_22.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_22);

      noMarketSegments_0_2.addGroup(noLotTypeRules_2_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_9;
    FIX::HighLimitPrice HighLimitPrice_9;
    HighLimitPrice_9.setString("2892462");
    noMarketSegments_0_2.set(HighLimitPrice_9);
    PriceLimits_9.insert(HighLimitPrice_9.getString());
    FIX::LowLimitPrice LowLimitPrice_9;
    LowLimitPrice_9.setString("17881658");
    noMarketSegments_0_2.set(LowLimitPrice_9);
    PriceLimits_9.insert(LowLimitPrice_9.getString());
    FIX::PriceLimitType PriceLimitType_9(1);
    noMarketSegments_0_2.set(PriceLimitType_9);
    PriceLimits_9.insert(PriceLimitType_9.getString());
    FIX::TradingReferencePrice TradingReferencePrice_9;
    TradingReferencePrice_9.setString("15659534");
    noMarketSegments_0_2.set(TradingReferencePrice_9);
    PriceLimits_9.insert(TradingReferencePrice_9.getString());
    all_values.push_back(PriceLimits_9);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_15;
      FIX::EndTickPriceRange EndTickPriceRange_15;
      EndTickPriceRange_15.setString("18354802");
      noTickRules_2_1_0.set(EndTickPriceRange_15);
      TickRules_NoTickRules_15.insert(EndTickPriceRange_15.getString());
      FIX::StartTickPriceRange StartTickPriceRange_15;
      StartTickPriceRange_15.setString("7684333");
      noTickRules_2_1_0.set(StartTickPriceRange_15);
      TickRules_NoTickRules_15.insert(StartTickPriceRange_15.getString());
      FIX::TickIncrement TickIncrement_15;
      TickIncrement_15.setString("2066798");
      noTickRules_2_1_0.set(TickIncrement_15);
      TickRules_NoTickRules_15.insert(TickIncrement_15.getString());
      FIX::TickRuleType TickRuleType_15(3);
      noTickRules_2_1_0.set(TickRuleType_15);
      TickRules_NoTickRules_15.insert(TickRuleType_15.getString());
      all_values.push_back(TickRules_NoTickRules_15);

      noMarketSegments_0_2.addGroup(noTickRules_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTickRules noTickRules_2_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_16;
      FIX::EndTickPriceRange EndTickPriceRange_16;
      EndTickPriceRange_16.setString("10983915");
      noTickRules_2_1_1.set(EndTickPriceRange_16);
      TickRules_NoTickRules_16.insert(EndTickPriceRange_16.getString());
      FIX::StartTickPriceRange StartTickPriceRange_16;
      StartTickPriceRange_16.setString("14577794");
      noTickRules_2_1_1.set(StartTickPriceRange_16);
      TickRules_NoTickRules_16.insert(StartTickPriceRange_16.getString());
      FIX::TickIncrement TickIncrement_16;
      TickIncrement_16.setString("12269075");
      noTickRules_2_1_1.set(TickIncrement_16);
      TickRules_NoTickRules_16.insert(TickIncrement_16.getString());
      FIX::TickRuleType TickRuleType_16(3);
      noTickRules_2_1_1.set(TickRuleType_16);
      TickRules_NoTickRules_16.insert(TickRuleType_16.getString());
      all_values.push_back(TickRules_NoTickRules_16);

      noMarketSegments_0_2.addGroup(noTickRules_2_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_18;
      FIX::NestedInstrAttribType NestedInstrAttribType_18(872351703);
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribType_18);
      NestedInstrumentAttribute_NoNestedInstrAttrib_18.insert(NestedInstrAttribType_18.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_18("STRING_1579249460");
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribValue_18);
      NestedInstrumentAttribute_NoNestedInstrAttrib_18.insert(NestedInstrAttribValue_18.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_18);

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_2_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_19;
      FIX::NestedInstrAttribType NestedInstrAttribType_19(408506094);
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribType_19);
      NestedInstrumentAttribute_NoNestedInstrAttrib_19.insert(NestedInstrAttribType_19.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_19("STRING_336701891");
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribValue_19);
      NestedInstrumentAttribute_NoNestedInstrAttrib_19.insert(NestedInstrAttribValue_19.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_19);

      noMarketSegments_0_2.addGroup(noNestedInstrAttrib_2_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_14;
      FIX::TradingSessionID TradingSessionID_76("STRING_4");
      noTradingSessionRules_2_1_0.set(TradingSessionID_76);
      TradingSessionRulesGrp_NoTradingSessionRules_14.insert(TradingSessionID_76.getString());
      FIX::TradingSessionSubID TradingSessionSubID_76("STRING_7");
      noTradingSessionRules_2_1_0.set(TradingSessionSubID_76);
      TradingSessionRulesGrp_NoTradingSessionRules_14.insert(TradingSessionSubID_76.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_14);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_34;
        FIX::ExecInstValue ExecInstValue_34('2');
        noExecInstRules_2_0_2_0.set(ExecInstValue_34);
        ExecInstRules_NoExecInstRules_34.insert(ExecInstValue_34.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_34);

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_35;
        FIX::ExecInstValue ExecInstValue_35('1');
        noExecInstRules_2_0_2_1.set(ExecInstValue_35);
        ExecInstRules_NoExecInstRules_35.insert(ExecInstValue_35.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_35);

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_28;
        FIX::MDBookType MDBookType_30(1);
        noMDFeedTypes_2_0_2_0.set(MDBookType_30);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MDBookType_30.getString());
        FIX::MDFeedType MDFeedType_30("STRING_984005388");
        noMDFeedTypes_2_0_2_0.set(MDFeedType_30);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MDFeedType_30.getString());
        FIX::MarketDepth MarketDepth_31(1347580377);
        noMDFeedTypes_2_0_2_0.set(MarketDepth_31);
        MarketDataFeedTypes_NoMDFeedTypes_28.insert(MarketDepth_31.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_28);

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_29;
        FIX::MDBookType MDBookType_31(3);
        noMDFeedTypes_2_0_2_1.set(MDBookType_31);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MDBookType_31.getString());
        FIX::MDFeedType MDFeedType_31("STRING_821934211");
        noMDFeedTypes_2_0_2_1.set(MDFeedType_31);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MDFeedType_31.getString());
        FIX::MarketDepth MarketDepth_32(458627460);
        noMDFeedTypes_2_0_2_1.set(MarketDepth_32);
        MarketDataFeedTypes_NoMDFeedTypes_29.insert(MarketDepth_32.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_29);

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_30;
        FIX::MatchAlgorithm MatchAlgorithm_30("STRING_462616375");
        noMatchRules_2_0_2_0.set(MatchAlgorithm_30);
        MatchRules_NoMatchRules_30.insert(MatchAlgorithm_30.getString());
        FIX::MatchType MatchType_35("STRING_1");
        noMatchRules_2_0_2_0.set(MatchType_35);
        MatchRules_NoMatchRules_30.insert(MatchType_35.getString());
        all_values.push_back(MatchRules_NoMatchRules_30);

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_31;
        FIX::MatchAlgorithm MatchAlgorithm_31("STRING_1960916975");
        noMatchRules_2_0_2_1.set(MatchAlgorithm_31);
        MatchRules_NoMatchRules_31.insert(MatchAlgorithm_31.getString());
        FIX::MatchType MatchType_36("STRING_AQ");
        noMatchRules_2_0_2_1.set(MatchType_36);
        MatchRules_NoMatchRules_31.insert(MatchType_36.getString());
        all_values.push_back(MatchRules_NoMatchRules_31);

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_32;
        FIX::MatchAlgorithm MatchAlgorithm_32("STRING_1224438881");
        noMatchRules_2_0_2_2.set(MatchAlgorithm_32);
        MatchRules_NoMatchRules_32.insert(MatchAlgorithm_32.getString());
        FIX::MatchType MatchType_37("STRING_M5");
        noMatchRules_2_0_2_2.set(MatchType_37);
        MatchRules_NoMatchRules_32.insert(MatchType_37.getString());
        all_values.push_back(MatchRules_NoMatchRules_32);

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_36;
        FIX::OrdType OrdType_59('G');
        noOrdTypeRules_2_0_2_0.set(OrdType_59);
        OrdTypeRules_NoOrdTypeRules_36.insert(OrdType_59.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_36);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_37;
        FIX::OrdType OrdType_60('4');
        noOrdTypeRules_2_0_2_1.set(OrdType_60);
        OrdTypeRules_NoOrdTypeRules_37.insert(OrdType_60.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_37);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_35;
        FIX::TimeInForce TimeInForce_48('5');
        noTimeInForceRules_2_0_2_0.set(TimeInForce_48);
        TimeInForceRules_NoTimeInForceRules_35.insert(TimeInForce_48.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_35);

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_36;
        FIX::TimeInForce TimeInForce_49('2');
        noTimeInForceRules_2_0_2_1.set(TimeInForce_49);
        TimeInForceRules_NoTimeInForceRules_36.insert(TimeInForce_49.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_36);

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_37;
        FIX::TimeInForce TimeInForce_50('2');
        noTimeInForceRules_2_0_2_2.set(TimeInForce_50);
        TimeInForceRules_NoTimeInForceRules_37.insert(TimeInForce_50.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_37);

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_2);
      }
      noMarketSegments_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_12;
      FIX::EndStrikePxRange EndStrikePxRange_12;
      EndStrikePxRange_12.setString("14118089");
      noStrikeRules_2_1_0.set(EndStrikePxRange_12);
      StrikeRules_NoStrikeRules_12.insert(EndStrikePxRange_12.getString());
      FIX::StartStrikePxRange StartStrikePxRange_12;
      StartStrikePxRange_12.setString("7135581");
      noStrikeRules_2_1_0.set(StartStrikePxRange_12);
      StrikeRules_NoStrikeRules_12.insert(StartStrikePxRange_12.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_12(131470212);
      noStrikeRules_2_1_0.set(StrikeExerciseStyle_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeExerciseStyle_12.getString());
      FIX::StrikeIncrement StrikeIncrement_12;
      StrikeIncrement_12.setString("13164813");
      noStrikeRules_2_1_0.set(StrikeIncrement_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeIncrement_12.getString());
      FIX::StrikeRuleID StrikeRuleID_12("STRING_345531050");
      noStrikeRules_2_1_0.set(StrikeRuleID_12);
      StrikeRules_NoStrikeRules_12.insert(StrikeRuleID_12.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_12);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_27;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_27("MONTHYEAR_1067392011");
        noMaturityRules_2_0_2_0.set(EndMaturityMonthYear_27);
        MaturityRules_NoMaturityRules_27.insert(EndMaturityMonthYear_27.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_27(1);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearFormat_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearFormat_27.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_27(662903865);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrement_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearIncrement_27.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_27(1);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrementUnits_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityMonthYearIncrementUnits_27.getString());
        FIX::MaturityRuleID MaturityRuleID_27("STRING_1383816271");
        noMaturityRules_2_0_2_0.set(MaturityRuleID_27);
        MaturityRules_NoMaturityRules_27.insert(MaturityRuleID_27.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_27("MONTHYEAR_1646909254");
        noMaturityRules_2_0_2_0.set(StartMaturityMonthYear_27);
        MaturityRules_NoMaturityRules_27.insert(StartMaturityMonthYear_27.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_27);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_28;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_28("MONTHYEAR_951448443");
        noMaturityRules_2_0_2_1.set(EndMaturityMonthYear_28);
        MaturityRules_NoMaturityRules_28.insert(EndMaturityMonthYear_28.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_28(0);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearFormat_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearFormat_28.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_28(321359817);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrement_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearIncrement_28.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_28(3);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrementUnits_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityMonthYearIncrementUnits_28.getString());
        FIX::MaturityRuleID MaturityRuleID_28("STRING_1884497048");
        noMaturityRules_2_0_2_1.set(MaturityRuleID_28);
        MaturityRules_NoMaturityRules_28.insert(MaturityRuleID_28.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_28("MONTHYEAR_783976192");
        noMaturityRules_2_0_2_1.set(StartMaturityMonthYear_28);
        MaturityRules_NoMaturityRules_28.insert(StartMaturityMonthYear_28.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_28);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_1);
      }
      noMarketSegments_0_2.addGroup(noStrikeRules_2_1_0);
    }
    msg.addGroup(noMarketSegments_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_28;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_28("USD");
  msg.set(BenchmarkCurveCurrency_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurveCurrency_28.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_28("STRING_FutureSWAP");
  msg.set(BenchmarkCurveName_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurveName_28.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_28("STRING_2023473368");
  msg.set(BenchmarkCurvePoint_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkCurvePoint_28.getString());
  FIX::BenchmarkPrice BenchmarkPrice_28;
  BenchmarkPrice_28.setString("1323133");
  msg.set(BenchmarkPrice_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkPrice_28.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_28(213303470);
  msg.set(BenchmarkPriceType_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkPriceType_28.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_28("STRING_1866466119");
  msg.set(BenchmarkSecurityID_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkSecurityID_28.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_28("STRING_1812571618");
  msg.set(BenchmarkSecurityIDSource_28);
  SpreadOrBenchmarkCurveData_28.insert(BenchmarkSecurityIDSource_28.getString());
  FIX::Spread Spread_28;
  Spread_28.setString("4153447");
  msg.set(Spread_28);
  SpreadOrBenchmarkCurveData_28.insert(Spread_28.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_28);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinition::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_50;
    FIX::StipulationType StipulationType_50("STRING_PAYFREQ");
    noStipulations_0_0.set(StipulationType_50);
    Stipulations_NoStipulations_50.insert(StipulationType_50.getString());
    FIX::StipulationValue StipulationValue_50("STRING_720396818");
    noStipulations_0_0.set(StipulationValue_50);
    Stipulations_NoStipulations_50.insert(StipulationValue_50.getString());
    all_values.push_back(Stipulations_NoStipulations_50);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinition::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_51;
    FIX::StipulationType StipulationType_51("STRING_MAXSUBS");
    noStipulations_0_1.set(StipulationType_51);
    Stipulations_NoStipulations_51.insert(StipulationType_51.getString());
    FIX::StipulationValue StipulationValue_51("STRING_909456478");
    noStipulations_0_1.set(StipulationValue_51);
    Stipulations_NoStipulations_51.insert(StipulationValue_51.getString());
    all_values.push_back(Stipulations_NoStipulations_51);

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinition::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_123;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_123("DATA_715121270");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingIssuer_123.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_123(78454223);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingIssuerLen_123.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_123("DATA_1779486065");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingSecurityDesc_123.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_123(1603424943);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_123);
    UnderlyingInstrument_123.insert(EncodedUnderlyingSecurityDescLen_123.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_123;
    UnderlyingAdjustedQuantity_123.setString("11458462");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_123);
    UnderlyingInstrument_123.insert(UnderlyingAdjustedQuantity_123.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_123;
    UnderlyingAllocationPercent_123.setString("91.290000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_123);
    UnderlyingInstrument_123.insert(UnderlyingAllocationPercent_123.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_123;
    UnderlyingAttachmentPoint_123.setString("51.610000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_123);
    UnderlyingInstrument_123.insert(UnderlyingAttachmentPoint_123.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_123("STRING_749714300");
    noUnderlyings_0_0.set(UnderlyingCFICode_123);
    UnderlyingInstrument_123.insert(UnderlyingCFICode_123.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_123("STRING_1311381753");
    noUnderlyings_0_0.set(UnderlyingCPProgram_123);
    UnderlyingInstrument_123.insert(UnderlyingCPProgram_123.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_123("STRING_1765754415");
    noUnderlyings_0_0.set(UnderlyingCPRegType_123);
    UnderlyingInstrument_123.insert(UnderlyingCPRegType_123.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_123;
    UnderlyingCapValue_123.setString("17011627");
    noUnderlyings_0_0.set(UnderlyingCapValue_123);
    UnderlyingInstrument_123.insert(UnderlyingCapValue_123.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_123;
    UnderlyingCashAmount_123.setString("6534316");
    noUnderlyings_0_0.set(UnderlyingCashAmount_123);
    UnderlyingInstrument_123.insert(UnderlyingCashAmount_123.getString());
    FIX::UnderlyingCashType UnderlyingCashType_123("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_123);
    UnderlyingInstrument_123.insert(UnderlyingCashType_123.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_123;
    UnderlyingContractMultiplier_123.setString("9637549");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_123);
    UnderlyingInstrument_123.insert(UnderlyingContractMultiplier_123.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_123(390445025);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_123);
    UnderlyingInstrument_123.insert(UnderlyingContractMultiplierUnit_123.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_123("COUNTRY_723606776");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_123);
    UnderlyingInstrument_123.insert(UnderlyingCountryOfIssue_123.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_123("LOCALMKTDATE_1762789486");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_123);
    UnderlyingInstrument_123.insert(UnderlyingCouponPaymentDate_123.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_123;
    UnderlyingCouponRate_123.setString("54.010000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_123);
    UnderlyingInstrument_123.insert(UnderlyingCouponRate_123.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_123("STRING_45164835");
    noUnderlyings_0_0.set(UnderlyingCreditRating_123);
    UnderlyingInstrument_123.insert(UnderlyingCreditRating_123.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_123("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_123);
    UnderlyingInstrument_123.insert(UnderlyingCurrency_123.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_123;
    UnderlyingCurrentValue_123.setString("2584683");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_123);
    UnderlyingInstrument_123.insert(UnderlyingCurrentValue_123.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_123;
    UnderlyingDetachmentPoint_123.setString("16.780000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_123);
    UnderlyingInstrument_123.insert(UnderlyingDetachmentPoint_123.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_123;
    UnderlyingDirtyPrice_123.setString("18857767");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_123);
    UnderlyingInstrument_123.insert(UnderlyingDirtyPrice_123.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_123;
    UnderlyingEndPrice_123.setString("6738130");
    noUnderlyings_0_0.set(UnderlyingEndPrice_123);
    UnderlyingInstrument_123.insert(UnderlyingEndPrice_123.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_123;
    UnderlyingEndValue_123.setString("21466444");
    noUnderlyings_0_0.set(UnderlyingEndValue_123);
    UnderlyingInstrument_123.insert(UnderlyingEndValue_123.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_123(1383424239);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_123);
    UnderlyingInstrument_123.insert(UnderlyingExerciseStyle_123.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_123;
    UnderlyingFXRate_123.setString("13942098");
    noUnderlyings_0_0.set(UnderlyingFXRate_123);
    UnderlyingInstrument_123.insert(UnderlyingFXRate_123.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_123('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_123);
    UnderlyingInstrument_123.insert(UnderlyingFXRateCalc_123.getString());
    FIX::UnderlyingFactor UnderlyingFactor_123;
    UnderlyingFactor_123.setString("1453970");
    noUnderlyings_0_0.set(UnderlyingFactor_123);
    UnderlyingInstrument_123.insert(UnderlyingFactor_123.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_123(680681208);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_123);
    UnderlyingInstrument_123.insert(UnderlyingFlowScheduleType_123.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_123("STRING_1297933095");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_123);
    UnderlyingInstrument_123.insert(UnderlyingInstrRegistry_123.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_123("LOCALMKTDATE_223851293");
    noUnderlyings_0_0.set(UnderlyingIssueDate_123);
    UnderlyingInstrument_123.insert(UnderlyingIssueDate_123.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_123("STRING_312683625");
    noUnderlyings_0_0.set(UnderlyingIssuer_123);
    UnderlyingInstrument_123.insert(UnderlyingIssuer_123.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_123("STRING_753874390");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_123);
    UnderlyingInstrument_123.insert(UnderlyingLocaleOfIssue_123.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_123("LOCALMKTDATE_1369697527");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_123);
    UnderlyingInstrument_123.insert(UnderlyingMaturityDate_123.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_123("MONTHYEAR_240249107");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_123);
    UnderlyingInstrument_123.insert(UnderlyingMaturityMonthYear_123.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_123("TZTIMEONLY_872719551");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_123);
    UnderlyingInstrument_123.insert(UnderlyingMaturityTime_123.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_123;
    UnderlyingNotionalPercentageOutstanding_123.setString("18.270000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_123);
    UnderlyingInstrument_123.insert(UnderlyingNotionalPercentageOutstanding_123.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_123('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_123);
    UnderlyingInstrument_123.insert(UnderlyingOptAttribute_123.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_123;
    UnderlyingOriginalNotionalPercentageOutstanding_123.setString("3.180000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_123);
    UnderlyingInstrument_123.insert(UnderlyingOriginalNotionalPercentageOutstanding_123.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_123("STRING_1673090922");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_123);
    UnderlyingInstrument_123.insert(UnderlyingPriceUnitOfMeasure_123.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_123;
    UnderlyingPriceUnitOfMeasureQty_123.setString("575788");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_123);
    UnderlyingInstrument_123.insert(UnderlyingPriceUnitOfMeasureQty_123.getString());
    FIX::UnderlyingProduct UnderlyingProduct_123(430620902);
    noUnderlyings_0_0.set(UnderlyingProduct_123);
    UnderlyingInstrument_123.insert(UnderlyingProduct_123.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_123(489362273);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_123);
    UnderlyingInstrument_123.insert(UnderlyingPutOrCall_123.getString());
    FIX::UnderlyingPx UnderlyingPx_123;
    UnderlyingPx_123.setString("4480238");
    noUnderlyings_0_0.set(UnderlyingPx_123);
    UnderlyingInstrument_123.insert(UnderlyingPx_123.getString());
    FIX::UnderlyingQty UnderlyingQty_123;
    UnderlyingQty_123.setString("11542276");
    noUnderlyings_0_0.set(UnderlyingQty_123);
    UnderlyingInstrument_123.insert(UnderlyingQty_123.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_123("LOCALMKTDATE_104668111");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_123);
    UnderlyingInstrument_123.insert(UnderlyingRedemptionDate_123.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_123("STRING_388915614");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_123);
    UnderlyingInstrument_123.insert(UnderlyingRepoCollateralSecurityType_123.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_123;
    UnderlyingRepurchaseRate_123.setString("25.140000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_123);
    UnderlyingInstrument_123.insert(UnderlyingRepurchaseRate_123.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_123(1743447317);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_123);
    UnderlyingInstrument_123.insert(UnderlyingRepurchaseTerm_123.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_123("STRING_462120742");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_123);
    UnderlyingInstrument_123.insert(UnderlyingRestructuringType_123.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_123("STRING_1457860820");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityDesc_123.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_123("EXCHANGE_953725347");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityExchange_123.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_123("STRING_200413839");
    noUnderlyings_0_0.set(UnderlyingSecurityID_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityID_123.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_123("STRING_2131673842");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityIDSource_123.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_123("STRING_952886114");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_123);
    UnderlyingInstrument_123.insert(UnderlyingSecuritySubType_123.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_123("STRING_1583838079");
    noUnderlyings_0_0.set(UnderlyingSecurityType_123);
    UnderlyingInstrument_123.insert(UnderlyingSecurityType_123.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_123("STRING_1378400034");
    noUnderlyings_0_0.set(UnderlyingSeniority_123);
    UnderlyingInstrument_123.insert(UnderlyingSeniority_123.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_123("STRING_1535697939");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_123);
    UnderlyingInstrument_123.insert(UnderlyingSettlMethod_123.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_123(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_123);
    UnderlyingInstrument_123.insert(UnderlyingSettlementType_123.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_123;
    UnderlyingStartValue_123.setString("20590812");
    noUnderlyings_0_0.set(UnderlyingStartValue_123);
    UnderlyingInstrument_123.insert(UnderlyingStartValue_123.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_123("STRING_686147386");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_123);
    UnderlyingInstrument_123.insert(UnderlyingStateOrProvinceOfIssue_123.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_123("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_123);
    UnderlyingInstrument_123.insert(UnderlyingStrikeCurrency_123.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_123;
    UnderlyingStrikePrice_123.setString("14400217");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_123);
    UnderlyingInstrument_123.insert(UnderlyingStrikePrice_123.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_123("STRING_1175300321");
    noUnderlyings_0_0.set(UnderlyingSymbol_123);
    UnderlyingInstrument_123.insert(UnderlyingSymbol_123.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_123("STRING_464530327");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_123);
    UnderlyingInstrument_123.insert(UnderlyingSymbolSfx_123.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_123("STRING_165257680");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_123);
    UnderlyingInstrument_123.insert(UnderlyingTimeUnit_123.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_123("STRING_1147228500");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_123);
    UnderlyingInstrument_123.insert(UnderlyingUnitOfMeasure_123.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_123;
    UnderlyingUnitOfMeasureQty_123.setString("20161611");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_123);
    UnderlyingInstrument_123.insert(UnderlyingUnitOfMeasureQty_123.getString());
    all_values.push_back(UnderlyingInstrument_123);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_245;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_245("STRING_672835775");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_245);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_245.insert(UnderlyingSecurityAltID_245.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_245("STRING_2073740023");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_245);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_245.insert(UnderlyingSecurityAltIDSource_245.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_245);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_235;
      FIX::UnderlyingStipType UnderlyingStipType_235("STRING_1162198048");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_235);
      UnderlyingStipulations_NoUnderlyingStips_235.insert(UnderlyingStipType_235.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_235("STRING_374280237");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_235);
      UnderlyingStipulations_NoUnderlyingStips_235.insert(UnderlyingStipValue_235.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_235);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_236;
      FIX::UnderlyingStipType UnderlyingStipType_236("STRING_93612932");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_236);
      UnderlyingStipulations_NoUnderlyingStips_236.insert(UnderlyingStipType_236.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_236("STRING_1266866159");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_236);
      UnderlyingStipulations_NoUnderlyingStips_236.insert(UnderlyingStipValue_236.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_236);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_237;
      FIX::UnderlyingStipType UnderlyingStipType_237("STRING_763195851");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_237);
      UnderlyingStipulations_NoUnderlyingStips_237.insert(UnderlyingStipType_237.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_237("STRING_1293005446");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_237);
      UnderlyingStipulations_NoUnderlyingStips_237.insert(UnderlyingStipValue_237.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_237);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_247;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_247("STRING_1225316593");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyID_247.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_247('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyIDSource_247.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_247(1816555176);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_247);
      UndlyInstrumentParties_NoUndlyInstrumentParties_247.insert(UnderlyingInstrumentPartyRole_247.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_247);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_486("STRING_587572812");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_486);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486.insert(UnderlyingInstrumentPartySubID_486.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_486(621957642);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_486);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486.insert(UnderlyingInstrumentPartySubIDType_486.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_487("STRING_862084864");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_487);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487.insert(UnderlyingInstrumentPartySubID_487.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_487(1965972846);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_487);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487.insert(UnderlyingInstrumentPartySubIDType_487.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_488("STRING_10171934");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_488);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488.insert(UnderlyingInstrumentPartySubID_488.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_488(443836364);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_488);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488.insert(UnderlyingInstrumentPartySubIDType_488.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_248;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_248("STRING_1877570441");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyID_248.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_248('6');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyIDSource_248.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_248(249439158);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_248);
      UndlyInstrumentParties_NoUndlyInstrumentParties_248.insert(UnderlyingInstrumentPartyRole_248.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_248);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_489("STRING_2136341097");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_489);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489.insert(UnderlyingInstrumentPartySubID_489.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_489(1424739479);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_489);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489.insert(UnderlyingInstrumentPartySubIDType_489.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_490("STRING_418898340");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_490);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490.insert(UnderlyingInstrumentPartySubID_490.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_490(154115130);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_490);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490.insert(UnderlyingInstrumentPartySubIDType_490.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_249;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_249("STRING_424484331");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyID_249.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_249('2');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyIDSource_249.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_249(810363129);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_249);
      UndlyInstrumentParties_NoUndlyInstrumentParties_249.insert(UnderlyingInstrumentPartyRole_249.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_249);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_491("STRING_213832254");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_491);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491.insert(UnderlyingInstrumentPartySubID_491.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_491(1897232030);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_491);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491.insert(UnderlyingInstrumentPartySubIDType_491.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_492("STRING_112034506");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_492);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492.insert(UnderlyingInstrumentPartySubID_492.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_492(588112491);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_492);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492.insert(UnderlyingInstrumentPartySubIDType_492.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::SecurityDefinition::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_493("STRING_1990844962");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_493);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493.insert(UnderlyingInstrumentPartySubID_493.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_493(1378900665);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_493);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493.insert(UnderlyingInstrumentPartySubIDType_493.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_23;
  FIX::Yield Yield_23;
  Yield_23.setString("83.430000");
  msg.set(Yield_23);
  YieldData_23.insert(Yield_23.getString());
  FIX::YieldCalcDate YieldCalcDate_23("LOCALMKTDATE_1136366760");
  msg.set(YieldCalcDate_23);
  YieldData_23.insert(YieldCalcDate_23.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_23("LOCALMKTDATE_94246846");
  msg.set(YieldRedemptionDate_23);
  YieldData_23.insert(YieldRedemptionDate_23.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_23;
  YieldRedemptionPrice_23.setString("4291412");
  msg.set(YieldRedemptionPrice_23);
  YieldData_23.insert(YieldRedemptionPrice_23.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_23(1739749378);
  msg.set(YieldRedemptionPriceType_23);
  YieldData_23.insert(YieldRedemptionPriceType_23.getString());
  FIX::YieldType YieldType_23("STRING_LASTQUARTER");
  msg.set(YieldType_23);
  YieldData_23.insert(YieldType_23.getString());
  all_values.push_back(YieldData_23);


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
