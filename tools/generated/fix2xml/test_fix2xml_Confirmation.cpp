#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Confirmation.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Confirmation, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Confirmation msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Confirmation_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_8;
  AccruedInterestAmt_8.setString("1814988");
set_field(msg, AccruedInterestAmt_8, Confirmation_0);
  FIX::AccruedInterestRate AccruedInterestRate_3;
  AccruedInterestRate_3.setString("35.960000");
set_field(msg, AccruedInterestRate_3, Confirmation_0);
  set_field(msg, FIX::AllocAccount{"STRING_933104811"}, Confirmation_0);
  set_field(msg, FIX::AllocAccountType{6}, Confirmation_0);
  set_field(msg, FIX::AllocAcctIDSource{1370267384}, Confirmation_0);
  set_field(msg, FIX::AllocID{"STRING_158923786"}, Confirmation_0);
  FIX::AllocQty AllocQty_10;
  AllocQty_10.setString("21156305");
set_field(msg, AllocQty_10, Confirmation_0);
  FIX::AvgParPx AvgParPx_3;
  AvgParPx_3.setString("20965894");
set_field(msg, AvgParPx_3, Confirmation_0);
  FIX::AvgPx AvgPx_3;
  AvgPx_3.setString("11289095");
set_field(msg, AvgPx_3, Confirmation_0);
  set_field(msg, FIX::AvgPxPrecision{1885420542}, Confirmation_0);
  FIX::Concession Concession_3;
  Concession_3.setString("5993945");
set_field(msg, Concession_3, Confirmation_0);
  set_field(msg, FIX::ConfirmID{"STRING_683586694"}, Confirmation_0);
  set_field(msg, FIX::ConfirmRefID{"STRING_1734553755"}, Confirmation_0);
  set_field(msg, FIX::ConfirmReqID{"STRING_980548426"}, Confirmation_0);
  set_field(msg, FIX::ConfirmStatus{3}, Confirmation_0);
  set_field(msg, FIX::ConfirmTransType{0}, Confirmation_0);
  set_field(msg, FIX::ConfirmType{1}, Confirmation_0);
  set_field(msg, FIX::CopyMsgIndicator{false}, Confirmation_0);
  set_field(msg, FIX::Currency{"JPY"}, Confirmation_0);
  set_field(msg, FIX::EncodedText{"DATA_1708184258"}, Confirmation_0);
  set_field(msg, FIX::EncodedTextLen{661774380}, Confirmation_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_8;
  EndAccruedInterestAmt_8.setString("10942592");
set_field(msg, EndAccruedInterestAmt_8, Confirmation_0);
  FIX::EndCash EndCash_8;
  EndCash_8.setString("7053610");
set_field(msg, EndCash_8, Confirmation_0);
  set_field(msg, FIX::ExDate{"LOCALMKTDATE_154377025"}, Confirmation_0);
  FIX::GrossTradeAmt GrossTradeAmt_3;
  GrossTradeAmt_3.setString("20011741");
set_field(msg, GrossTradeAmt_3, Confirmation_0);
  set_field(msg, FIX::IndividualAllocID{"STRING_771323986"}, Confirmation_0);
  FIX::InterestAtMaturity InterestAtMaturity_3;
  InterestAtMaturity_3.setString("2952522");
set_field(msg, InterestAtMaturity_3, Confirmation_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_467249031"}, Confirmation_0);
  set_field(msg, FIX::LegalConfirm{false}, Confirmation_0);
  FIX::MaturityNetMoney MaturityNetMoney_0;
  MaturityNetMoney_0.setString("15297733");
set_field(msg, MaturityNetMoney_0, Confirmation_0);
  FIX::NetMoney NetMoney_3;
  NetMoney_3.setString("6487478");
set_field(msg, NetMoney_3, Confirmation_0);
  set_field(msg, FIX::NumDaysInterest{1278287564}, Confirmation_0);
  set_field(msg, FIX::PriceType{14}, Confirmation_0);
  set_field(msg, FIX::ProcessCode{'1'}, Confirmation_0);
  set_field(msg, FIX::QtyType{2}, Confirmation_0);
  FIX::ReportedPx ReportedPx_0;
  ReportedPx_0.setString("4743182");
set_field(msg, ReportedPx_0, Confirmation_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_1043727599"}, Confirmation_0);
  FIX::SettlCurrAmt SettlCurrAmt_5;
  SettlCurrAmt_5.setString("4501771");
set_field(msg, SettlCurrAmt_5, Confirmation_0);
  FIX::SettlCurrFxRate SettlCurrFxRate_5;
  SettlCurrFxRate_5.setString("16032277");
set_field(msg, SettlCurrFxRate_5, Confirmation_0);
  set_field(msg, FIX::SettlCurrFxRateCalc{'M'}, Confirmation_0);
  set_field(msg, FIX::SettlCurrency{"EUR"}, Confirmation_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_368734601"}, Confirmation_0);
  set_field(msg, FIX::SettlType{"STRING_B"}, Confirmation_0);
  FIX::SharedCommission SharedCommission_0;
  SharedCommission_0.setString("12783023");
set_field(msg, SharedCommission_0, Confirmation_0);
  set_field(msg, FIX::Side{'6'}, Confirmation_0);
  FIX::StartCash StartCash_8;
  StartCash_8.setString("12508425");
set_field(msg, StartCash_8, Confirmation_0);
  set_field(msg, FIX::Text{"STRING_680953916"}, Confirmation_0);
  FIX::TotalTakedown TotalTakedown_3;
  TotalTakedown_3.setString("715639");
set_field(msg, TotalTakedown_3, Confirmation_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_2042614674"}, Confirmation_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(16, 40, 40, 25, 5, 2008)}, Confirmation_0);
  all_values.push_back(Confirmation_0);

  all_compo_names.insert("Confirmation");

  // CommissionData
  multiset<string> CommissionData_7;
  set_field(msg, FIX::CommCurrency{"EUR"}, CommissionData_7);
  set_field(msg, FIX::CommType{'5'}, CommissionData_7);
  FIX::Commission Commission_7;
  Commission_7.setString("5652572");
set_field(msg, Commission_7, CommissionData_7);
  set_field(msg, FIX::FundRenewWaiv{'N'}, CommissionData_7);
  all_values.push_back(CommissionData_7);
  all_compo_names.insert(".");

  // CpctyConfGrp
  // Group CpctyConfGrp.NoCapacities
  {
    FIX50SP2::Confirmation::NoCapacities noCapacities_0_0;
    // CpctyConfGrp.NoCapacities
    multiset<string> CpctyConfGrp_NoCapacities_0;
    set_field(noCapacities_0_0, FIX::OrderCapacity{'R'}, CpctyConfGrp_NoCapacities_0);
    FIX::OrderCapacityQty OrderCapacityQty_0;
    OrderCapacityQty_0.setString("8871747");
set_field(noCapacities_0_0, OrderCapacityQty_0, CpctyConfGrp_NoCapacities_0);
    set_field(noCapacities_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_1"}, CpctyConfGrp_NoCapacities_0);
    all_values.push_back(CpctyConfGrp_NoCapacities_0);
    all_compo_names.insert("...NoCapacities");

    msg.addGroup(noCapacities_0_0);
  }
  {
    FIX50SP2::Confirmation::NoCapacities noCapacities_0_1;
    // CpctyConfGrp.NoCapacities
    multiset<string> CpctyConfGrp_NoCapacities_1;
    set_field(noCapacities_0_1, FIX::OrderCapacity{'P'}, CpctyConfGrp_NoCapacities_1);
    FIX::OrderCapacityQty OrderCapacityQty_1;
    OrderCapacityQty_1.setString("19309023");
set_field(noCapacities_0_1, OrderCapacityQty_1, CpctyConfGrp_NoCapacities_1);
    set_field(noCapacities_0_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_4"}, CpctyConfGrp_NoCapacities_1);
    all_values.push_back(CpctyConfGrp_NoCapacities_1);
    all_compo_names.insert("...NoCapacities");

    msg.addGroup(noCapacities_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_9;
  set_field(msg, FIX::AgreementCurrency{"CAN"}, FinancingDetails_9);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1063203855"}, FinancingDetails_9);
  set_field(msg, FIX::AgreementDesc{"STRING_950044920"}, FinancingDetails_9);
  set_field(msg, FIX::AgreementID{"STRING_933817774"}, FinancingDetails_9);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_9);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_80863597"}, FinancingDetails_9);
  FIX::MarginRatio MarginRatio_9;
  MarginRatio_9.setString("6.920000");
set_field(msg, MarginRatio_9, FinancingDetails_9);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_49199159"}, FinancingDetails_9);
  set_field(msg, FIX::TerminationType{2}, FinancingDetails_9);
  all_values.push_back(FinancingDetails_9);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Confirmation::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_22;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_2091813834"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1003472040}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_975602920"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{933720506}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1950487660"}, InstrumentLeg_22);
    FIX::LegContractMultiplier LegContractMultiplier_22;
    LegContractMultiplier_22.setString("18633182");
set_field(noLegs_0_0, LegContractMultiplier_22, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1776801330}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1521343619"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_898802161"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_939647537"}, InstrumentLeg_22);
    FIX::LegCouponRate LegCouponRate_22;
    LegCouponRate_22.setString("35.450000");
set_field(noLegs_0_0, LegCouponRate_22, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1464059375"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_197227406"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1638416303}, InstrumentLeg_22);
    FIX::LegFactor LegFactor_22;
    LegFactor_22.setString("787625");
set_field(noLegs_0_0, LegFactor_22, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1552197335}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1421834982"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_92394772"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_215427764"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1986918155"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1155598627"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1165472685"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_773252281"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_2101438872"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_22);
    FIX::LegOptionRatio LegOptionRatio_22;
    LegOptionRatio_22.setString("9439529");
set_field(noLegs_0_0, LegOptionRatio_22, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_3154384"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_2008153796"}, InstrumentLeg_22);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_22;
    LegPriceUnitOfMeasureQty_22.setString("11862175");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_22, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegProduct{2094968218}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegPutOrCall{864142188}, InstrumentLeg_22);
    FIX::LegRatioQty LegRatioQty_22;
    LegRatioQty_22.setString("143368");
set_field(noLegs_0_0, LegRatioQty_22, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_881205076"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_667146200"}, InstrumentLeg_22);
    FIX::LegRepurchaseRate LegRepurchaseRate_22;
    LegRepurchaseRate_22.setString("51.100000");
set_field(noLegs_0_0, LegRepurchaseRate_22, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{510522759}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_41006171"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_628973624"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1450170296"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1493929716"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_2093032999"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_53928224"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegSide{'2'}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_142776757"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_22);
    FIX::LegStrikePrice LegStrikePrice_22;
    LegStrikePrice_22.setString("16949740");
set_field(noLegs_0_0, LegStrikePrice_22, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_966695861"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_32910757"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1910401857"}, InstrumentLeg_22);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_806130368"}, InstrumentLeg_22);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_22;
    LegUnitOfMeasureQty_22.setString("11885093");
set_field(noLegs_0_0, LegUnitOfMeasureQty_22, InstrumentLeg_22);
    all_values.push_back(InstrumentLeg_22);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_42;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1579382649"}, LegSecAltIDGrp_NoLegSecurityAltID_42);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1142464609"}, LegSecAltIDGrp_NoLegSecurityAltID_42);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_42);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_43;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_27243528"}, LegSecAltIDGrp_NoLegSecurityAltID_43);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_375851975"}, LegSecAltIDGrp_NoLegSecurityAltID_43);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_43);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_14;
  FIX::AttachmentPoint AttachmentPoint_14;
  AttachmentPoint_14.setString("89.930000");
set_field(msg, AttachmentPoint_14, Instrument_14);
  set_field(msg, FIX::CFICode{"STRING_2035397324"}, Instrument_14);
  set_field(msg, FIX::CPProgram{99}, Instrument_14);
  set_field(msg, FIX::CPRegType{"STRING_1093103563"}, Instrument_14);
  FIX::CapPrice CapPrice_14;
  CapPrice_14.setString("7520558");
set_field(msg, CapPrice_14, Instrument_14);
  FIX::ContractMultiplier ContractMultiplier_14;
  ContractMultiplier_14.setString("15764064");
set_field(msg, ContractMultiplier_14, Instrument_14);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_14);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1419202065"}, Instrument_14);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1306577888"}, Instrument_14);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_337347750"}, Instrument_14);
  FIX::CouponRate CouponRate_14;
  CouponRate_14.setString("82.360000");
set_field(msg, CouponRate_14, Instrument_14);
  set_field(msg, FIX::CreditRating{"STRING_1935551512"}, Instrument_14);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1787518047"}, Instrument_14);
  FIX::DetachmentPoint DetachmentPoint_14;
  DetachmentPoint_14.setString("43.050000");
set_field(msg, DetachmentPoint_14, Instrument_14);
  set_field(msg, FIX::EncodedIssuer{"DATA_1881100864"}, Instrument_14);
  set_field(msg, FIX::EncodedIssuerLen{1841446271}, Instrument_14);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_668407760"}, Instrument_14);
  set_field(msg, FIX::EncodedSecurityDescLen{2023877621}, Instrument_14);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_14);
  FIX::Factor Factor_14;
  Factor_14.setString("6089237");
set_field(msg, Factor_14, Instrument_14);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_14);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_14);
  FIX::FloorPrice FloorPrice_14;
  FloorPrice_14.setString("6418345");
set_field(msg, FloorPrice_14, Instrument_14);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_14);
  set_field(msg, FIX::InstrRegistry{"STRING_1011649731"}, Instrument_14);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_14);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_115193521"}, Instrument_14);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_443548732"}, Instrument_14);
  set_field(msg, FIX::Issuer{"STRING_825324847"}, Instrument_14);
  set_field(msg, FIX::ListMethod{1}, Instrument_14);
  set_field(msg, FIX::LocaleOfIssue{"STRING_819400707"}, Instrument_14);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1970943840"}, Instrument_14);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_30350726"}, Instrument_14);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_233986624"}, Instrument_14);
  FIX::MinPriceIncrement MinPriceIncrement_14;
  MinPriceIncrement_14.setString("9165637");
set_field(msg, MinPriceIncrement_14, Instrument_14);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_14;
  MinPriceIncrementAmount_14.setString("7824065");
set_field(msg, MinPriceIncrementAmount_14, Instrument_14);
  set_field(msg, FIX::NTPositionLimit{1810393050}, Instrument_14);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_14;
  NotionalPercentageOutstanding_14.setString("87.470000");
set_field(msg, NotionalPercentageOutstanding_14, Instrument_14);
  set_field(msg, FIX::OptAttribute{'5'}, Instrument_14);
  FIX::OptPayoutAmount OptPayoutAmount_14;
  OptPayoutAmount_14.setString("9694872");
set_field(msg, OptPayoutAmount_14, Instrument_14);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_14);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_14;
  OriginalNotionalPercentageOutstanding_14.setString("32.440000");
set_field(msg, OriginalNotionalPercentageOutstanding_14, Instrument_14);
  set_field(msg, FIX::Pool{"STRING_757555155"}, Instrument_14);
  set_field(msg, FIX::PositionLimit{720770896}, Instrument_14);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_14);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_491172371"}, Instrument_14);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_14;
  PriceUnitOfMeasureQty_14.setString("4147335");
set_field(msg, PriceUnitOfMeasureQty_14, Instrument_14);
  set_field(msg, FIX::Product{7}, Instrument_14);
  set_field(msg, FIX::ProductComplex{"STRING_367566344"}, Instrument_14);
  set_field(msg, FIX::PutOrCall{1}, Instrument_14);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1450835406"}, Instrument_14);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1938934410"}, Instrument_14);
  FIX::RepurchaseRate RepurchaseRate_14;
  RepurchaseRate_14.setString("0.320000");
set_field(msg, RepurchaseRate_14, Instrument_14);
  set_field(msg, FIX::RepurchaseTerm{2092669908}, Instrument_14);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_14);
  set_field(msg, FIX::SecurityDesc{"STRING_870726115"}, Instrument_14);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1775530147"}, Instrument_14);
  set_field(msg, FIX::SecurityGroup{"STRING_1240930558"}, Instrument_14);
  set_field(msg, FIX::SecurityID{"STRING_1314274848"}, Instrument_14);
  set_field(msg, FIX::SecurityIDSource{"STRING_B"}, Instrument_14);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_14);
  set_field(msg, FIX::SecuritySubType{"STRING_2133675555"}, Instrument_14);
  set_field(msg, FIX::SecurityType{"STRING_FXSWAP"}, Instrument_14);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_14);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_14);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1193395294"}, Instrument_14);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_48641276"}, Instrument_14);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_14);
  FIX::StrikeMultiplier StrikeMultiplier_14;
  StrikeMultiplier_14.setString("1027662");
set_field(msg, StrikeMultiplier_14, Instrument_14);
  FIX::StrikePrice StrikePrice_14;
  StrikePrice_14.setString("8525752");
set_field(msg, StrikePrice_14, Instrument_14);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_14);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_14;
  StrikePriceBoundaryPrecision_14.setString("95.280000");
set_field(msg, StrikePriceBoundaryPrecision_14, Instrument_14);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_14);
  FIX::StrikeValue StrikeValue_14;
  StrikeValue_14.setString("15908077");
set_field(msg, StrikeValue_14, Instrument_14);
  set_field(msg, FIX::Symbol{"STRING_1790603429"}, Instrument_14);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_14);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_14);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_14);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_14);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_14;
  UnitOfMeasureQty_14.setString("16590983");
set_field(msg, UnitOfMeasureQty_14, Instrument_14);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_14);
  all_values.push_back(Instrument_14);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_31;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_31);
    FIX::ComplexEventPrice ComplexEventPrice_31;
    ComplexEventPrice_31.setString("18810531");
set_field(noComplexEvents_0_0, ComplexEventPrice_31, ComplexEvents_NoComplexEvents_31);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_31);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_31;
    ComplexEventPriceBoundaryPrecision_31.setString("71.800000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_31, ComplexEvents_NoComplexEvents_31);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_31);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_31);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_31;
    ComplexOptPayoutAmount_31.setString("15556920");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_31, ComplexEvents_NoComplexEvents_31);
    all_values.push_back(ComplexEvents_NoComplexEvents_31);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_69;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 6, 11, 11, 5, 2013)}, ComplexEventDates_NoComplexEventDates_69);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 31, 17, 5, 12, 2006)}, ComplexEventDates_NoComplexEventDates_69);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_69);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_137;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 43, 55)}, ComplexEventTimes_NoComplexEventTimes_137);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 16, 25)}, ComplexEventTimes_NoComplexEventTimes_137);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_137);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_32;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_32);
    FIX::ComplexEventPrice ComplexEventPrice_32;
    ComplexEventPrice_32.setString("2527497");
set_field(noComplexEvents_0_1, ComplexEventPrice_32, ComplexEvents_NoComplexEvents_32);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_32);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_32;
    ComplexEventPriceBoundaryPrecision_32.setString("61.490000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_32, ComplexEvents_NoComplexEvents_32);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_32);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_32);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_32;
    ComplexOptPayoutAmount_32.setString("19253481");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_32, ComplexEvents_NoComplexEvents_32);
    all_values.push_back(ComplexEvents_NoComplexEvents_32);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_70;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 39, 9, 17, 12, 2010)}, ComplexEventDates_NoComplexEventDates_70);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 40, 55, 22, 4, 2011)}, ComplexEventDates_NoComplexEventDates_70);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_70);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_138;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 54, 19)}, ComplexEventTimes_NoComplexEventTimes_138);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 27, 35)}, ComplexEventTimes_NoComplexEventTimes_138);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_138);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_139;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 27, 17)}, ComplexEventTimes_NoComplexEventTimes_139);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 27, 35)}, ComplexEventTimes_NoComplexEventTimes_139);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_139);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_33;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_33);
    FIX::ComplexEventPrice ComplexEventPrice_33;
    ComplexEventPrice_33.setString("2223822");
set_field(noComplexEvents_0_2, ComplexEventPrice_33, ComplexEvents_NoComplexEvents_33);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_33);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_33;
    ComplexEventPriceBoundaryPrecision_33.setString("63.150000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_33, ComplexEvents_NoComplexEvents_33);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_33);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_33);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_33;
    ComplexOptPayoutAmount_33.setString("1362521");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_33, ComplexEvents_NoComplexEvents_33);
    all_values.push_back(ComplexEvents_NoComplexEvents_33);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_71;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 56, 50, 15, 9, 2009)}, ComplexEventDates_NoComplexEventDates_71);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 3, 50, 23, 3, 2011)}, ComplexEventDates_NoComplexEventDates_71);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_71);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_140;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 30, 50)}, ComplexEventTimes_NoComplexEventTimes_140);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 17, 32)}, ComplexEventTimes_NoComplexEventTimes_140);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_140);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_141;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 30, 53)}, ComplexEventTimes_NoComplexEventTimes_141);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 37, 46)}, ComplexEventTimes_NoComplexEventTimes_141);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_141);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_142;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 42, 18)}, ComplexEventTimes_NoComplexEventTimes_142);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 19, 40)}, ComplexEventTimes_NoComplexEventTimes_142);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_142);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Confirmation::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_33;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1059592934"}, EvntGrp_NoEvents_33);
    FIX::EventPx EventPx_33;
    EventPx_33.setString("6987998");
set_field(noEvents_0_0, EventPx_33, EvntGrp_NoEvents_33);
    set_field(noEvents_0_0, FIX::EventText{"STRING_45869703"}, EvntGrp_NoEvents_33);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(8, 14, 2, 2, 10, 2010)}, EvntGrp_NoEvents_33);
    set_field(noEvents_0_0, FIX::EventType{3}, EvntGrp_NoEvents_33);
    all_values.push_back(EvntGrp_NoEvents_33);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::Confirmation::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_34;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_2047147184"}, EvntGrp_NoEvents_34);
    FIX::EventPx EventPx_34;
    EventPx_34.setString("17230201");
set_field(noEvents_0_1, EventPx_34, EvntGrp_NoEvents_34);
    set_field(noEvents_0_1, FIX::EventText{"STRING_406779226"}, EvntGrp_NoEvents_34);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(4, 17, 46, 25, 10, 2003)}, EvntGrp_NoEvents_34);
    set_field(noEvents_0_1, FIX::EventType{99}, EvntGrp_NoEvents_34);
    all_values.push_back(EvntGrp_NoEvents_34);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_25;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1641903368"}, InstrumentParties_NoInstrumentParties_25);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_25);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{571035455}, InstrumentParties_NoInstrumentParties_25);
    all_values.push_back(InstrumentParties_NoInstrumentParties_25);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1094637976"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1667248974}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_26;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1625956729"}, InstrumentParties_NoInstrumentParties_26);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_26);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{579358261}, InstrumentParties_NoInstrumentParties_26);
    all_values.push_back(InstrumentParties_NoInstrumentParties_26);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1703522088"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{229204701}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_26;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1883102342"}, SecAltIDGrp_NoSecurityAltID_26);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1519385003"}, SecAltIDGrp_NoSecurityAltID_26);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_26);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_27;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1275910981"}, SecAltIDGrp_NoSecurityAltID_27);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_2139267467"}, SecAltIDGrp_NoSecurityAltID_27);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_27);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_28;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1427184728"}, SecAltIDGrp_NoSecurityAltID_28);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_2076176904"}, SecAltIDGrp_NoSecurityAltID_28);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_28);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_28;
  set_field(msg, FIX::SecurityXML{"XMLDATA_2038931003"}, SecurityXML_28);
  set_field(msg, FIX::SecurityXMLLen{1002721262}, SecurityXML_28);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_335472482"}, SecurityXML_28);
  all_values.push_back(SecurityXML_28);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_3;
  set_field(msg, FIX::DeliveryForm{2}, InstrumentExtension_3);
  FIX::PctAtRisk PctAtRisk_3;
  PctAtRisk_3.setString("68.100000");
set_field(msg, PctAtRisk_3, InstrumentExtension_3);
  all_values.push_back(InstrumentExtension_3);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::Confirmation::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_3;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{18}, AttrbGrp_NoInstrAttrib_3);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_980860864"}, AttrbGrp_NoInstrAttrib_3);
    all_values.push_back(AttrbGrp_NoInstrAttrib_3);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::Confirmation::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_4;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{10}, AttrbGrp_NoInstrAttrib_4);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_1970475423"}, AttrbGrp_NoInstrAttrib_4);
    all_values.push_back(AttrbGrp_NoInstrAttrib_4);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::Confirmation::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_17;
    FIX::MiscFeeAmt MiscFeeAmt_17;
    MiscFeeAmt_17.setString("3230024");
set_field(noMiscFees_0_0, MiscFeeAmt_17, MiscFeesGrp_NoMiscFees_17);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_17);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"GBP"}, MiscFeesGrp_NoMiscFees_17);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_11"}, MiscFeesGrp_NoMiscFees_17);
    all_values.push_back(MiscFeesGrp_NoMiscFees_17);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::Confirmation::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_18;
    FIX::MiscFeeAmt MiscFeeAmt_18;
    MiscFeeAmt_18.setString("4931007");
set_field(noMiscFees_0_1, MiscFeeAmt_18, MiscFeesGrp_NoMiscFees_18);
    set_field(noMiscFees_0_1, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_18);
    set_field(noMiscFees_0_1, FIX::MiscFeeCurr{"USD"}, MiscFeesGrp_NoMiscFees_18);
    set_field(noMiscFees_0_1, FIX::MiscFeeType{"STRING_8"}, MiscFeesGrp_NoMiscFees_18);
    all_values.push_back(MiscFeesGrp_NoMiscFees_18);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_1);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::Confirmation::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_5;
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_1706791530"}, OrdAllocGrp_NoOrders_5);
    set_field(noOrders_0_0, FIX::ListID{"STRING_1222366151"}, OrdAllocGrp_NoOrders_5);
    FIX::OrderAvgPx OrderAvgPx_5;
    OrderAvgPx_5.setString("1747775");
set_field(noOrders_0_0, OrderAvgPx_5, OrdAllocGrp_NoOrders_5);
    FIX::OrderBookingQty OrderBookingQty_5;
    OrderBookingQty_5.setString("14424102");
set_field(noOrders_0_0, OrderBookingQty_5, OrdAllocGrp_NoOrders_5);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_594267506"}, OrdAllocGrp_NoOrders_5);
    FIX::OrderQty OrderQty_5;
    OrderQty_5.setString("14506884");
set_field(noOrders_0_0, OrderQty_5, OrdAllocGrp_NoOrders_5);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_1434194044"}, OrdAllocGrp_NoOrders_5);
    set_field(noOrders_0_0, FIX::SecondaryOrderID{"STRING_2021452234"}, OrdAllocGrp_NoOrders_5);
    all_values.push_back(OrdAllocGrp_NoOrders_5);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_12;
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyID{"STRING_1325641400"}, NestedParties2_NoNested2PartyIDs_12);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_12);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyRole{1714854224}, NestedParties2_NoNested2PartyIDs_12);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_12);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_26;
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubID{"STRING_1345066659"}, NstdPtys2SubGrp_NoNested2PartySubIDs_26);
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubIDType{1021540916}, NstdPtys2SubGrp_NoNested2PartySubIDs_26);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_26);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_27;
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubID{"STRING_1939305136"}, NstdPtys2SubGrp_NoNested2PartySubIDs_27);
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubIDType{178443875}, NstdPtys2SubGrp_NoNested2PartySubIDs_27);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_27);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_28;
        set_field(noNested2PartySubIDs_0_0_2_2, FIX::Nested2PartySubID{"STRING_1923151805"}, NstdPtys2SubGrp_NoNested2PartySubIDs_28);
        set_field(noNested2PartySubIDs_0_0_2_2, FIX::Nested2PartySubIDType{1762296911}, NstdPtys2SubGrp_NoNested2PartySubIDs_28);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_28);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    msg.addGroup(noOrders_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Confirmation::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_33;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_98670563"}, Parties_NoPartyIDs_33);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_33);
    set_field(noPartyIDs_0_0, FIX::PartyRole{34}, Parties_NoPartyIDs_33);
    all_values.push_back(Parties_NoPartyIDs_33);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_72;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_953331311"}, PtysSubGrp_NoPartySubIDs_72);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_72);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_72);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_73;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1406511614"}, PtysSubGrp_NoPartySubIDs_73);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_73);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_73);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::Confirmation::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_34;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_2054670056"}, Parties_NoPartyIDs_34);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_34);
    set_field(noPartyIDs_0_1, FIX::PartyRole{80}, Parties_NoPartyIDs_34);
    all_values.push_back(Parties_NoPartyIDs_34);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_74;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1474555566"}, PtysSubGrp_NoPartySubIDs_74);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_74);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_74);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_75;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_908904516"}, PtysSubGrp_NoPartySubIDs_75);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_75);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_75);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_8;
  set_field(msg, FIX::SettlDeliveryType{0}, SettlInstructionsData_8);
  set_field(msg, FIX::StandInstDbID{"STRING_195614912"}, SettlInstructionsData_8);
  set_field(msg, FIX::StandInstDbName{"STRING_1942791659"}, SettlInstructionsData_8);
  set_field(msg, FIX::StandInstDbType{0}, SettlInstructionsData_8);
  all_values.push_back(SettlInstructionsData_8);
  all_compo_names.insert(".");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_17;
    set_field(noDlvyInst_0_0, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_17);
    set_field(noDlvyInst_0_0, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_17);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_17);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_31;
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyID{"STRING_2017064519"}, SettlParties_NoSettlPartyIDs_31);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_31);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyRole{832185382}, SettlParties_NoSettlPartyIDs_31);
      all_values.push_back(SettlParties_NoSettlPartyIDs_31);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_59;
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubID{"STRING_1056739960"}, SettlPtysSubGrp_NoSettlPartySubIDs_59);
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubIDType{446998645}, SettlPtysSubGrp_NoSettlPartySubIDs_59);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_59);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_60;
        set_field(noSettlPartySubIDs_0_0_2_1, FIX::SettlPartySubID{"STRING_60378276"}, SettlPtysSubGrp_NoSettlPartySubIDs_60);
        set_field(noSettlPartySubIDs_0_0_2_1, FIX::SettlPartySubIDType{1155410523}, SettlPtysSubGrp_NoSettlPartySubIDs_60);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_60);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_61;
        set_field(noSettlPartySubIDs_0_0_2_2, FIX::SettlPartySubID{"STRING_1526707052"}, SettlPtysSubGrp_NoSettlPartySubIDs_61);
        set_field(noSettlPartySubIDs_0_0_2_2, FIX::SettlPartySubIDType{1618678184}, SettlPtysSubGrp_NoSettlPartySubIDs_61);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_61);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_32;
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyID{"STRING_635301"}, SettlParties_NoSettlPartyIDs_32);
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyIDSource{'3'}, SettlParties_NoSettlPartyIDs_32);
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyRole{1522595150}, SettlParties_NoSettlPartyIDs_32);
      all_values.push_back(SettlParties_NoSettlPartyIDs_32);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_62;
        set_field(noSettlPartySubIDs_0_1_2_0, FIX::SettlPartySubID{"STRING_637982013"}, SettlPtysSubGrp_NoSettlPartySubIDs_62);
        set_field(noSettlPartySubIDs_0_1_2_0, FIX::SettlPartySubIDType{1429781559}, SettlPtysSubGrp_NoSettlPartySubIDs_62);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_62);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_63;
        set_field(noSettlPartySubIDs_0_1_2_1, FIX::SettlPartySubID{"STRING_1659336330"}, SettlPtysSubGrp_NoSettlPartySubIDs_63);
        set_field(noSettlPartySubIDs_0_1_2_1, FIX::SettlPartySubIDType{472778239}, SettlPtysSubGrp_NoSettlPartySubIDs_63);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_63);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_64;
        set_field(noSettlPartySubIDs_0_1_2_2, FIX::SettlPartySubID{"STRING_896275850"}, SettlPtysSubGrp_NoSettlPartySubIDs_64);
        set_field(noSettlPartySubIDs_0_1_2_2, FIX::SettlPartySubIDType{986408249}, SettlPtysSubGrp_NoSettlPartySubIDs_64);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_64);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_1;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_18;
    set_field(noDlvyInst_0_1, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_18);
    set_field(noDlvyInst_0_1, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_18);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_18);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_33;
      set_field(noSettlPartyIDs_1_1_0, FIX::SettlPartyID{"STRING_1942614186"}, SettlParties_NoSettlPartyIDs_33);
      set_field(noSettlPartyIDs_1_1_0, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_33);
      set_field(noSettlPartyIDs_1_1_0, FIX::SettlPartyRole{703055685}, SettlParties_NoSettlPartyIDs_33);
      all_values.push_back(SettlParties_NoSettlPartyIDs_33);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_65;
        set_field(noSettlPartySubIDs_1_0_2_0, FIX::SettlPartySubID{"STRING_1374567943"}, SettlPtysSubGrp_NoSettlPartySubIDs_65);
        set_field(noSettlPartySubIDs_1_0_2_0, FIX::SettlPartySubIDType{1375053545}, SettlPtysSubGrp_NoSettlPartySubIDs_65);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_65);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_66;
        set_field(noSettlPartySubIDs_1_0_2_1, FIX::SettlPartySubID{"STRING_746821735"}, SettlPtysSubGrp_NoSettlPartySubIDs_66);
        set_field(noSettlPartySubIDs_1_0_2_1, FIX::SettlPartySubIDType{267448188}, SettlPtysSubGrp_NoSettlPartySubIDs_66);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_66);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_67;
        set_field(noSettlPartySubIDs_1_0_2_2, FIX::SettlPartySubID{"STRING_1244634416"}, SettlPtysSubGrp_NoSettlPartySubIDs_67);
        set_field(noSettlPartySubIDs_1_0_2_2, FIX::SettlPartySubIDType{2027893538}, SettlPtysSubGrp_NoSettlPartySubIDs_67);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_67);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_2);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_0);
    }
    msg.addGroup(noDlvyInst_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_8;
  set_field(msg, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_8);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_SWAP"}, SpreadOrBenchmarkCurveData_8);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1546632216"}, SpreadOrBenchmarkCurveData_8);
  FIX::BenchmarkPrice BenchmarkPrice_8;
  BenchmarkPrice_8.setString("13530374");
set_field(msg, BenchmarkPrice_8, SpreadOrBenchmarkCurveData_8);
  set_field(msg, FIX::BenchmarkPriceType{2092560374}, SpreadOrBenchmarkCurveData_8);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_925855620"}, SpreadOrBenchmarkCurveData_8);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_824231975"}, SpreadOrBenchmarkCurveData_8);
  FIX::Spread Spread_8;
  Spread_8.setString("20931956");
set_field(msg, Spread_8, SpreadOrBenchmarkCurveData_8);
  all_values.push_back(SpreadOrBenchmarkCurveData_8);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Confirmation::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_18;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_SECTYPE"}, Stipulations_NoStipulations_18);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1352858942"}, Stipulations_NoStipulations_18);
    all_values.push_back(Stipulations_NoStipulations_18);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::Confirmation::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_14;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_TMO"}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_PR"}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(17, 50, 57, 7, 1, 2007)}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1314439585"}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{4}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_14);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_27;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_542009482"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1733282032}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1530941719"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1786643899}, UnderlyingInstrument_27);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_27;
    UnderlyingAdjustedQuantity_27.setString("16136919");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_27, UnderlyingInstrument_27);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_27;
    UnderlyingAllocationPercent_27.setString("16.410000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_27, UnderlyingInstrument_27);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_27;
    UnderlyingAttachmentPoint_27.setString("94.130000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_403358125"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_2029723857"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_137373204"}, UnderlyingInstrument_27);
    FIX::UnderlyingCapValue UnderlyingCapValue_27;
    UnderlyingCapValue_27.setString("3484348");
set_field(noUnderlyings_0_0, UnderlyingCapValue_27, UnderlyingInstrument_27);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_27;
    UnderlyingCashAmount_27.setString("8080958");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_27);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_27;
    UnderlyingContractMultiplier_27.setString("2941468");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{2066506166}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1160948658"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1647005820"}, UnderlyingInstrument_27);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_27;
    UnderlyingCouponRate_27.setString("48.680000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_642590047"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_27);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_27;
    UnderlyingCurrentValue_27.setString("10205072");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_27, UnderlyingInstrument_27);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_27;
    UnderlyingDetachmentPoint_27.setString("0.220000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_27, UnderlyingInstrument_27);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_27;
    UnderlyingDirtyPrice_27.setString("5936570");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_27, UnderlyingInstrument_27);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_27;
    UnderlyingEndPrice_27.setString("10561212");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_27, UnderlyingInstrument_27);
    FIX::UnderlyingEndValue UnderlyingEndValue_27;
    UnderlyingEndValue_27.setString("6792539");
set_field(noUnderlyings_0_0, UnderlyingEndValue_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1092826518}, UnderlyingInstrument_27);
    FIX::UnderlyingFXRate UnderlyingFXRate_27;
    UnderlyingFXRate_27.setString("9450468");
set_field(noUnderlyings_0_0, UnderlyingFXRate_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_27);
    FIX::UnderlyingFactor UnderlyingFactor_27;
    UnderlyingFactor_27.setString("20792868");
set_field(noUnderlyings_0_0, UnderlyingFactor_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{61056713}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_388219341"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1665085199"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1591998432"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_27379592"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1131293473"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2075090073"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_959199005"}, UnderlyingInstrument_27);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_27;
    UnderlyingNotionalPercentageOutstanding_27.setString("15.980000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_27);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_27;
    UnderlyingOriginalNotionalPercentageOutstanding_27.setString("22.100000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1883086449"}, UnderlyingInstrument_27);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_27;
    UnderlyingPriceUnitOfMeasureQty_27.setString("6179424");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{2058177390}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{29749679}, UnderlyingInstrument_27);
    FIX::UnderlyingPx UnderlyingPx_27;
    UnderlyingPx_27.setString("5369649");
set_field(noUnderlyings_0_0, UnderlyingPx_27, UnderlyingInstrument_27);
    FIX::UnderlyingQty UnderlyingQty_27;
    UnderlyingQty_27.setString("10716424");
set_field(noUnderlyings_0_0, UnderlyingQty_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1676755499"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_204896203"}, UnderlyingInstrument_27);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_27;
    UnderlyingRepurchaseRate_27.setString("24.470000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{2040989296}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_94514364"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_587256085"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_2108859318"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_688171434"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1643377328"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_640629591"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1780997953"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_440940510"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_486839450"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_27);
    FIX::UnderlyingStartValue UnderlyingStartValue_27;
    UnderlyingStartValue_27.setString("5019972");
set_field(noUnderlyings_0_0, UnderlyingStartValue_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_875058791"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_27);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_27;
    UnderlyingStrikePrice_27.setString("9024383");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_27, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_214212496"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_2021602081"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1861637388"}, UnderlyingInstrument_27);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1748864095"}, UnderlyingInstrument_27);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_27;
    UnderlyingUnitOfMeasureQty_27.setString("18314487");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_27, UnderlyingInstrument_27);
    all_values.push_back(UnderlyingInstrument_27);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_61;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1484466896"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_61);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_301907533"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_61);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_61);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_62;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_721419692"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_62);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1514216576"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_62);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_62);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_56;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1793062092"}, UnderlyingStipulations_NoUnderlyingStips_56);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1043488427"}, UnderlyingStipulations_NoUnderlyingStips_56);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_56);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_54;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1359810891"}, UndlyInstrumentParties_NoUndlyInstrumentParties_54);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_54);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1138283084}, UndlyInstrumentParties_NoUndlyInstrumentParties_54);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_54);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_898369745"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1826454518}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1442960656"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1538999337}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_55;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1459968823"}, UndlyInstrumentParties_NoUndlyInstrumentParties_55);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_55);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{2025838787}, UndlyInstrumentParties_NoUndlyInstrumentParties_55);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_55);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_238414742"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{753413930}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_108205318"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{184926750}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_56;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1655852313"}, UndlyInstrumentParties_NoUndlyInstrumentParties_56);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_56);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{59045183}, UndlyInstrumentParties_NoUndlyInstrumentParties_56);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_56);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2071281910"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1890493899}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_33248356"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1408265158}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_3;
  FIX::Yield Yield_3;
  Yield_3.setString("77.840000");
set_field(msg, Yield_3, YieldData_3);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_754668048"}, YieldData_3);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_774998086"}, YieldData_3);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_3;
  YieldRedemptionPrice_3.setString("8837903");
set_field(msg, YieldRedemptionPrice_3, YieldData_3);
  set_field(msg, FIX::YieldRedemptionPriceType{400246493}, YieldData_3);
  set_field(msg, FIX::YieldType{"STRING_LASTQUARTER"}, YieldData_3);
  all_values.push_back(YieldData_3);
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
