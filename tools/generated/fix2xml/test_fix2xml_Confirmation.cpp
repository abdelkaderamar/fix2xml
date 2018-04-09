#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::Confirmation msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Confirmation_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_8;
  AccruedInterestAmt_8.setString("10106632");
set_field(msg, AccruedInterestAmt_8, Confirmation_0);
  FIX::AccruedInterestRate AccruedInterestRate_3;
  AccruedInterestRate_3.setString("93.770000");
set_field(msg, AccruedInterestRate_3, Confirmation_0);
  set_field(msg, FIX::AllocAccount{"STRING_1767761837"}, Confirmation_0);
  set_field(msg, FIX::AllocAccountType{1}, Confirmation_0);
  set_field(msg, FIX::AllocAcctIDSource{1898224372}, Confirmation_0);
  set_field(msg, FIX::AllocID{"STRING_1718053725"}, Confirmation_0);
  FIX::AllocQty AllocQty_13;
  AllocQty_13.setString("9272930");
set_field(msg, AllocQty_13, Confirmation_0);
  FIX::AvgParPx AvgParPx_3;
  AvgParPx_3.setString("14729936");
set_field(msg, AvgParPx_3, Confirmation_0);
  FIX::AvgPx AvgPx_3;
  AvgPx_3.setString("10302959");
set_field(msg, AvgPx_3, Confirmation_0);
  set_field(msg, FIX::AvgPxPrecision{643298040}, Confirmation_0);
  FIX::Concession Concession_3;
  Concession_3.setString("11397832");
set_field(msg, Concession_3, Confirmation_0);
  set_field(msg, FIX::ConfirmID{"STRING_1617646372"}, Confirmation_0);
  set_field(msg, FIX::ConfirmRefID{"STRING_1992123294"}, Confirmation_0);
  set_field(msg, FIX::ConfirmReqID{"STRING_1683343010"}, Confirmation_0);
  set_field(msg, FIX::ConfirmStatus{5}, Confirmation_0);
  set_field(msg, FIX::ConfirmTransType{1}, Confirmation_0);
  set_field(msg, FIX::ConfirmType{1}, Confirmation_0);
  set_field(msg, FIX::CopyMsgIndicator{false}, Confirmation_0);
  set_field(msg, FIX::Currency{"CHF"}, Confirmation_0);
  set_field(msg, FIX::EncodedText{"DATA_1072977068"}, Confirmation_0);
  set_field(msg, FIX::EncodedTextLen{226667298}, Confirmation_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_8;
  EndAccruedInterestAmt_8.setString("1008242");
set_field(msg, EndAccruedInterestAmt_8, Confirmation_0);
  FIX::EndCash EndCash_8;
  EndCash_8.setString("4598226");
set_field(msg, EndCash_8, Confirmation_0);
  set_field(msg, FIX::ExDate{"LOCALMKTDATE_144059962"}, Confirmation_0);
  FIX::GrossTradeAmt GrossTradeAmt_3;
  GrossTradeAmt_3.setString("20908466");
set_field(msg, GrossTradeAmt_3, Confirmation_0);
  set_field(msg, FIX::IndividualAllocID{"STRING_1512273886"}, Confirmation_0);
  FIX::InterestAtMaturity InterestAtMaturity_3;
  InterestAtMaturity_3.setString("21219895");
set_field(msg, InterestAtMaturity_3, Confirmation_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_1960680719"}, Confirmation_0);
  set_field(msg, FIX::LegalConfirm{true}, Confirmation_0);
  FIX::MaturityNetMoney MaturityNetMoney_0;
  MaturityNetMoney_0.setString("14352280");
set_field(msg, MaturityNetMoney_0, Confirmation_0);
  FIX::NetMoney NetMoney_3;
  NetMoney_3.setString("8238603");
set_field(msg, NetMoney_3, Confirmation_0);
  set_field(msg, FIX::NumDaysInterest{1174681741}, Confirmation_0);
  set_field(msg, FIX::PriceType{10}, Confirmation_0);
  set_field(msg, FIX::ProcessCode{'0'}, Confirmation_0);
  set_field(msg, FIX::QtyType{1}, Confirmation_0);
  FIX::ReportedPx ReportedPx_0;
  ReportedPx_0.setString("6260762");
set_field(msg, ReportedPx_0, Confirmation_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_157497628"}, Confirmation_0);
  FIX::SettlCurrAmt SettlCurrAmt_8;
  SettlCurrAmt_8.setString("2509324");
set_field(msg, SettlCurrAmt_8, Confirmation_0);
  FIX::SettlCurrFxRate SettlCurrFxRate_8;
  SettlCurrFxRate_8.setString("16563722");
set_field(msg, SettlCurrFxRate_8, Confirmation_0);
  set_field(msg, FIX::SettlCurrFxRateCalc{'M'}, Confirmation_0);
  set_field(msg, FIX::SettlCurrency{"USD"}, Confirmation_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_645435315"}, Confirmation_0);
  set_field(msg, FIX::SettlType{"STRING_7"}, Confirmation_0);
  FIX::SharedCommission SharedCommission_0;
  SharedCommission_0.setString("18121276");
set_field(msg, SharedCommission_0, Confirmation_0);
  set_field(msg, FIX::Side{'1'}, Confirmation_0);
  FIX::StartCash StartCash_8;
  StartCash_8.setString("19830917");
set_field(msg, StartCash_8, Confirmation_0);
  set_field(msg, FIX::Text{"STRING_260974961"}, Confirmation_0);
  FIX::TotalTakedown TotalTakedown_3;
  TotalTakedown_3.setString("15517949");
set_field(msg, TotalTakedown_3, Confirmation_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1766491263"}, Confirmation_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(18, 32, 25, 17, 10, 2015)}, Confirmation_0);
  all_values.push_back(Confirmation_0);

  all_compo_names.insert("Confirmation");

  // CommissionData
  multiset<string> CommissionData_10;
  set_field(msg, FIX::CommCurrency{"USD"}, CommissionData_10);
  set_field(msg, FIX::CommType{'3'}, CommissionData_10);
  FIX::Commission Commission_10;
  Commission_10.setString("11847725");
set_field(msg, Commission_10, CommissionData_10);
  set_field(msg, FIX::FundRenewWaiv{'N'}, CommissionData_10);
  all_values.push_back(CommissionData_10);
  all_compo_names.insert(".");

  // CpctyConfGrp
  // Group CpctyConfGrp.NoCapacities
  {
    FIX50SP2::Confirmation::NoCapacities noCapacities_0_0;
    // CpctyConfGrp.NoCapacities
    multiset<string> CpctyConfGrp_NoCapacities_0;
    set_field(noCapacities_0_0, FIX::OrderCapacity{'P'}, CpctyConfGrp_NoCapacities_0);
    FIX::OrderCapacityQty OrderCapacityQty_0;
    OrderCapacityQty_0.setString("16779405");
set_field(noCapacities_0_0, OrderCapacityQty_0, CpctyConfGrp_NoCapacities_0);
    set_field(noCapacities_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_3"}, CpctyConfGrp_NoCapacities_0);
    all_values.push_back(CpctyConfGrp_NoCapacities_0);
    all_compo_names.insert("...NoCapacities");

    msg.addGroup(noCapacities_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_9;
  set_field(msg, FIX::AgreementCurrency{"CAN"}, FinancingDetails_9);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1050310292"}, FinancingDetails_9);
  set_field(msg, FIX::AgreementDesc{"STRING_227759998"}, FinancingDetails_9);
  set_field(msg, FIX::AgreementID{"STRING_488750168"}, FinancingDetails_9);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_9);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1354294991"}, FinancingDetails_9);
  FIX::MarginRatio MarginRatio_9;
  MarginRatio_9.setString("54.830000");
set_field(msg, MarginRatio_9, FinancingDetails_9);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1220117337"}, FinancingDetails_9);
  set_field(msg, FIX::TerminationType{1}, FinancingDetails_9);
  all_values.push_back(FinancingDetails_9);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Confirmation::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_20;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1055725467"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1279913985}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1380471043"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{674733082}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_466382367"}, InstrumentLeg_20);
    FIX::LegContractMultiplier LegContractMultiplier_20;
    LegContractMultiplier_20.setString("10114496");
set_field(noLegs_0_0, LegContractMultiplier_20, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{394564906}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_112673384"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_786488210"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_57759767"}, InstrumentLeg_20);
    FIX::LegCouponRate LegCouponRate_20;
    LegCouponRate_20.setString("82.870000");
set_field(noLegs_0_0, LegCouponRate_20, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_536032684"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1720805189"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1981887618}, InstrumentLeg_20);
    FIX::LegFactor LegFactor_20;
    LegFactor_20.setString("19919509");
set_field(noLegs_0_0, LegFactor_20, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1813600268}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1512344489"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_643845096"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_384987998"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1200298988"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1694155389"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_612747997"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1689049156"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1987697699"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_20);
    FIX::LegOptionRatio LegOptionRatio_20;
    LegOptionRatio_20.setString("6757509");
set_field(noLegs_0_0, LegOptionRatio_20, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1060331388"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_838498364"}, InstrumentLeg_20);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_20;
    LegPriceUnitOfMeasureQty_20.setString("5044270");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_20, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegProduct{2116056855}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegPutOrCall{2118412350}, InstrumentLeg_20);
    FIX::LegRatioQty LegRatioQty_20;
    LegRatioQty_20.setString("18848981");
set_field(noLegs_0_0, LegRatioQty_20, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_643306289"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_437311069"}, InstrumentLeg_20);
    FIX::LegRepurchaseRate LegRepurchaseRate_20;
    LegRepurchaseRate_20.setString("41.230000");
set_field(noLegs_0_0, LegRepurchaseRate_20, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1037871195}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_549984453"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1535352333"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1095630963"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1821222740"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_2071385017"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_629782663"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1644706559"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_20);
    FIX::LegStrikePrice LegStrikePrice_20;
    LegStrikePrice_20.setString("13108231");
set_field(noLegs_0_0, LegStrikePrice_20, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1976531122"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_132563365"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1695811178"}, InstrumentLeg_20);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1029346462"}, InstrumentLeg_20);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_20;
    LegUnitOfMeasureQty_20.setString("18267187");
set_field(noLegs_0_0, LegUnitOfMeasureQty_20, InstrumentLeg_20);
    all_values.push_back(InstrumentLeg_20);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_44;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_570911971"}, LegSecAltIDGrp_NoLegSecurityAltID_44);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1666932805"}, LegSecAltIDGrp_NoLegSecurityAltID_44);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_44);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_45;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_2128118515"}, LegSecAltIDGrp_NoLegSecurityAltID_45);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1246662962"}, LegSecAltIDGrp_NoLegSecurityAltID_45);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_45);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_14;
  FIX::AttachmentPoint AttachmentPoint_14;
  AttachmentPoint_14.setString("5.460000");
set_field(msg, AttachmentPoint_14, Instrument_14);
  set_field(msg, FIX::CFICode{"STRING_819133231"}, Instrument_14);
  set_field(msg, FIX::CPProgram{99}, Instrument_14);
  set_field(msg, FIX::CPRegType{"STRING_548353753"}, Instrument_14);
  FIX::CapPrice CapPrice_14;
  CapPrice_14.setString("7900619");
set_field(msg, CapPrice_14, Instrument_14);
  FIX::ContractMultiplier ContractMultiplier_14;
  ContractMultiplier_14.setString("14885045");
set_field(msg, ContractMultiplier_14, Instrument_14);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_14);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1227373002"}, Instrument_14);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_89884997"}, Instrument_14);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_82047590"}, Instrument_14);
  FIX::CouponRate CouponRate_14;
  CouponRate_14.setString("74.550000");
set_field(msg, CouponRate_14, Instrument_14);
  set_field(msg, FIX::CreditRating{"STRING_1625237331"}, Instrument_14);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1177678553"}, Instrument_14);
  FIX::DetachmentPoint DetachmentPoint_14;
  DetachmentPoint_14.setString("65.480000");
set_field(msg, DetachmentPoint_14, Instrument_14);
  set_field(msg, FIX::EncodedIssuer{"DATA_1549138700"}, Instrument_14);
  set_field(msg, FIX::EncodedIssuerLen{1807461216}, Instrument_14);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1095347548"}, Instrument_14);
  set_field(msg, FIX::EncodedSecurityDescLen{1046361611}, Instrument_14);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_14);
  FIX::Factor Factor_14;
  Factor_14.setString("5840658");
set_field(msg, Factor_14, Instrument_14);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_14);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_14);
  FIX::FloorPrice FloorPrice_14;
  FloorPrice_14.setString("7166291");
set_field(msg, FloorPrice_14, Instrument_14);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_14);
  set_field(msg, FIX::InstrRegistry{"STRING_982558138"}, Instrument_14);
  set_field(msg, FIX::InstrmtAssignmentMethod{'3'}, Instrument_14);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2066587848"}, Instrument_14);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1553470109"}, Instrument_14);
  set_field(msg, FIX::Issuer{"STRING_2062797094"}, Instrument_14);
  set_field(msg, FIX::ListMethod{1}, Instrument_14);
  set_field(msg, FIX::LocaleOfIssue{"STRING_652649423"}, Instrument_14);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_495093992"}, Instrument_14);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_718872298"}, Instrument_14);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_256255820"}, Instrument_14);
  FIX::MinPriceIncrement MinPriceIncrement_14;
  MinPriceIncrement_14.setString("10434477");
set_field(msg, MinPriceIncrement_14, Instrument_14);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_14;
  MinPriceIncrementAmount_14.setString("15089342");
set_field(msg, MinPriceIncrementAmount_14, Instrument_14);
  set_field(msg, FIX::NTPositionLimit{1744760343}, Instrument_14);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_14;
  NotionalPercentageOutstanding_14.setString("41.410000");
set_field(msg, NotionalPercentageOutstanding_14, Instrument_14);
  set_field(msg, FIX::OptAttribute{'5'}, Instrument_14);
  FIX::OptPayoutAmount OptPayoutAmount_14;
  OptPayoutAmount_14.setString("18346453");
set_field(msg, OptPayoutAmount_14, Instrument_14);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_14);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_14;
  OriginalNotionalPercentageOutstanding_14.setString("73.940000");
set_field(msg, OriginalNotionalPercentageOutstanding_14, Instrument_14);
  set_field(msg, FIX::Pool{"STRING_1312399023"}, Instrument_14);
  set_field(msg, FIX::PositionLimit{1347350285}, Instrument_14);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_14);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_714054076"}, Instrument_14);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_14;
  PriceUnitOfMeasureQty_14.setString("10073278");
set_field(msg, PriceUnitOfMeasureQty_14, Instrument_14);
  set_field(msg, FIX::Product{10}, Instrument_14);
  set_field(msg, FIX::ProductComplex{"STRING_1760415687"}, Instrument_14);
  set_field(msg, FIX::PutOrCall{1}, Instrument_14);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1201723659"}, Instrument_14);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1970116830"}, Instrument_14);
  FIX::RepurchaseRate RepurchaseRate_14;
  RepurchaseRate_14.setString("37.300000");
set_field(msg, RepurchaseRate_14, Instrument_14);
  set_field(msg, FIX::RepurchaseTerm{1918352841}, Instrument_14);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_14);
  set_field(msg, FIX::SecurityDesc{"STRING_2067261868"}, Instrument_14);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_166733482"}, Instrument_14);
  set_field(msg, FIX::SecurityGroup{"STRING_1647249703"}, Instrument_14);
  set_field(msg, FIX::SecurityID{"STRING_1473248329"}, Instrument_14);
  set_field(msg, FIX::SecurityIDSource{"STRING_K"}, Instrument_14);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_14);
  set_field(msg, FIX::SecuritySubType{"STRING_2125897753"}, Instrument_14);
  set_field(msg, FIX::SecurityType{"STRING_MPT"}, Instrument_14);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_14);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_14);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1620588667"}, Instrument_14);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1627311653"}, Instrument_14);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_14);
  FIX::StrikeMultiplier StrikeMultiplier_14;
  StrikeMultiplier_14.setString("686515");
set_field(msg, StrikeMultiplier_14, Instrument_14);
  FIX::StrikePrice StrikePrice_14;
  StrikePrice_14.setString("16665919");
set_field(msg, StrikePrice_14, Instrument_14);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_14);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_14;
  StrikePriceBoundaryPrecision_14.setString("89.850000");
set_field(msg, StrikePriceBoundaryPrecision_14, Instrument_14);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_14);
  FIX::StrikeValue StrikeValue_14;
  StrikeValue_14.setString("10777511");
set_field(msg, StrikeValue_14, Instrument_14);
  set_field(msg, FIX::Symbol{"STRING_1957142927"}, Instrument_14);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_14);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_14);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_14);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_14);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_14;
  UnitOfMeasureQty_14.setString("10690874");
set_field(msg, UnitOfMeasureQty_14, Instrument_14);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_14);
  all_values.push_back(Instrument_14);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_25;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_25);
    FIX::ComplexEventPrice ComplexEventPrice_25;
    ComplexEventPrice_25.setString("13999099");
set_field(noComplexEvents_0_0, ComplexEventPrice_25, ComplexEvents_NoComplexEvents_25);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_25);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_25;
    ComplexEventPriceBoundaryPrecision_25.setString("93.880000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_25, ComplexEvents_NoComplexEvents_25);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_25);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_25);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_25;
    ComplexOptPayoutAmount_25.setString("13993340");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_25, ComplexEvents_NoComplexEvents_25);
    all_values.push_back(ComplexEvents_NoComplexEvents_25);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_51;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 19, 17, 20, 3, 2014)}, ComplexEventDates_NoComplexEventDates_51);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 13, 54, 15, 12, 2012)}, ComplexEventDates_NoComplexEventDates_51);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_51);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_124;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 58, 40)}, ComplexEventTimes_NoComplexEventTimes_124);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 12, 53)}, ComplexEventTimes_NoComplexEventTimes_124);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_124);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_125;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 23, 48)}, ComplexEventTimes_NoComplexEventTimes_125);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 10, 12)}, ComplexEventTimes_NoComplexEventTimes_125);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_125);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_126;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 31, 46)}, ComplexEventTimes_NoComplexEventTimes_126);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 48, 51)}, ComplexEventTimes_NoComplexEventTimes_126);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_126);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_52;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 45, 48, 20, 8, 2006)}, ComplexEventDates_NoComplexEventDates_52);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 26, 55, 17, 3, 2017)}, ComplexEventDates_NoComplexEventDates_52);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_52);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_127;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 42, 3)}, ComplexEventTimes_NoComplexEventTimes_127);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 13, 9)}, ComplexEventTimes_NoComplexEventTimes_127);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_127);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_53;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 33, 18, 9, 12, 2010)}, ComplexEventDates_NoComplexEventDates_53);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 52, 57, 16, 5, 2008)}, ComplexEventDates_NoComplexEventDates_53);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_53);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_128;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 26, 38)}, ComplexEventTimes_NoComplexEventTimes_128);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 30, 11)}, ComplexEventTimes_NoComplexEventTimes_128);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_128);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_26;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_26);
    FIX::ComplexEventPrice ComplexEventPrice_26;
    ComplexEventPrice_26.setString("14203760");
set_field(noComplexEvents_0_1, ComplexEventPrice_26, ComplexEvents_NoComplexEvents_26);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_26);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_26;
    ComplexEventPriceBoundaryPrecision_26.setString("49.220000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_26, ComplexEvents_NoComplexEvents_26);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_26);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_26);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_26;
    ComplexOptPayoutAmount_26.setString("11105501");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_26, ComplexEvents_NoComplexEvents_26);
    all_values.push_back(ComplexEvents_NoComplexEvents_26);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_54;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 7, 40, 24, 11, 2015)}, ComplexEventDates_NoComplexEventDates_54);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 23, 1, 2, 4, 2003)}, ComplexEventDates_NoComplexEventDates_54);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_54);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_129;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 57, 5)}, ComplexEventTimes_NoComplexEventTimes_129);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 35, 56)}, ComplexEventTimes_NoComplexEventTimes_129);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_129);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_130;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 42, 44)}, ComplexEventTimes_NoComplexEventTimes_130);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 32, 55)}, ComplexEventTimes_NoComplexEventTimes_130);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_130);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_131;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 54, 26)}, ComplexEventTimes_NoComplexEventTimes_131);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 57, 51)}, ComplexEventTimes_NoComplexEventTimes_131);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_131);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_55;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 52, 54, 24, 6, 2006)}, ComplexEventDates_NoComplexEventDates_55);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 21, 44, 27, 8, 2008)}, ComplexEventDates_NoComplexEventDates_55);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_55);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_132;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 58, 29)}, ComplexEventTimes_NoComplexEventTimes_132);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 53, 23)}, ComplexEventTimes_NoComplexEventTimes_132);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_132);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_133;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 17, 26)}, ComplexEventTimes_NoComplexEventTimes_133);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 24, 26)}, ComplexEventTimes_NoComplexEventTimes_133);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_133);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_134;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 18, 36)}, ComplexEventTimes_NoComplexEventTimes_134);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 0, 11)}, ComplexEventTimes_NoComplexEventTimes_134);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_134);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Confirmation::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_35;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_442817654"}, EvntGrp_NoEvents_35);
    FIX::EventPx EventPx_35;
    EventPx_35.setString("15379158");
set_field(noEvents_0_0, EventPx_35, EvntGrp_NoEvents_35);
    set_field(noEvents_0_0, FIX::EventText{"STRING_809329072"}, EvntGrp_NoEvents_35);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(20, 8, 42, 23, 7, 2017)}, EvntGrp_NoEvents_35);
    set_field(noEvents_0_0, FIX::EventType{12}, EvntGrp_NoEvents_35);
    all_values.push_back(EvntGrp_NoEvents_35);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_28;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1702777324"}, InstrumentParties_NoInstrumentParties_28);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_28);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{856923620}, InstrumentParties_NoInstrumentParties_28);
    all_values.push_back(InstrumentParties_NoInstrumentParties_28);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1054874004"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1875962566}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1865489547"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1478170550}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_29;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1378430042"}, InstrumentParties_NoInstrumentParties_29);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_29);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1564019672}, InstrumentParties_NoInstrumentParties_29);
    all_values.push_back(InstrumentParties_NoInstrumentParties_29);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1723203963"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{574182540}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1497710351"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{684122687}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_30;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_15880313"}, InstrumentParties_NoInstrumentParties_30);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_30);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{672637332}, InstrumentParties_NoInstrumentParties_30);
    all_values.push_back(InstrumentParties_NoInstrumentParties_30);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1119183491"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1481966405}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_1425988504"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{2146286119}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_36;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_72117759"}, SecAltIDGrp_NoSecurityAltID_36);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_117779786"}, SecAltIDGrp_NoSecurityAltID_36);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_36);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_37;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_2085904751"}, SecAltIDGrp_NoSecurityAltID_37);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1456537430"}, SecAltIDGrp_NoSecurityAltID_37);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_37);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_38;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1595689278"}, SecAltIDGrp_NoSecurityAltID_38);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1166358743"}, SecAltIDGrp_NoSecurityAltID_38);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_38);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_28;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1011831107"}, SecurityXML_28);
  set_field(msg, FIX::SecurityXMLLen{1472092644}, SecurityXML_28);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_2023282363"}, SecurityXML_28);
  all_values.push_back(SecurityXML_28);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_3;
  set_field(msg, FIX::DeliveryForm{2}, InstrumentExtension_3);
  FIX::PctAtRisk PctAtRisk_3;
  PctAtRisk_3.setString("30.000000");
set_field(msg, PctAtRisk_3, InstrumentExtension_3);
  all_values.push_back(InstrumentExtension_3);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::Confirmation::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_5;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{22}, AttrbGrp_NoInstrAttrib_5);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1857653551"}, AttrbGrp_NoInstrAttrib_5);
    all_values.push_back(AttrbGrp_NoInstrAttrib_5);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::Confirmation::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_25;
    FIX::MiscFeeAmt MiscFeeAmt_25;
    MiscFeeAmt_25.setString("2743441");
set_field(noMiscFees_0_0, MiscFeeAmt_25, MiscFeesGrp_NoMiscFees_25);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_25);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_25);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_11"}, MiscFeesGrp_NoMiscFees_25);
    all_values.push_back(MiscFeesGrp_NoMiscFees_25);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::Confirmation::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_26;
    FIX::MiscFeeAmt MiscFeeAmt_26;
    MiscFeeAmt_26.setString("5584511");
set_field(noMiscFees_0_1, MiscFeeAmt_26, MiscFeesGrp_NoMiscFees_26);
    set_field(noMiscFees_0_1, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_26);
    set_field(noMiscFees_0_1, FIX::MiscFeeCurr{"CAN"}, MiscFeesGrp_NoMiscFees_26);
    set_field(noMiscFees_0_1, FIX::MiscFeeType{"STRING_6"}, MiscFeesGrp_NoMiscFees_26);
    all_values.push_back(MiscFeesGrp_NoMiscFees_26);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_1);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::Confirmation::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_7;
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_1258902256"}, OrdAllocGrp_NoOrders_7);
    set_field(noOrders_0_0, FIX::ListID{"STRING_541307248"}, OrdAllocGrp_NoOrders_7);
    FIX::OrderAvgPx OrderAvgPx_7;
    OrderAvgPx_7.setString("16014552");
set_field(noOrders_0_0, OrderAvgPx_7, OrdAllocGrp_NoOrders_7);
    FIX::OrderBookingQty OrderBookingQty_7;
    OrderBookingQty_7.setString("12577047");
set_field(noOrders_0_0, OrderBookingQty_7, OrdAllocGrp_NoOrders_7);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_589918533"}, OrdAllocGrp_NoOrders_7);
    FIX::OrderQty OrderQty_7;
    OrderQty_7.setString("16735730");
set_field(noOrders_0_0, OrderQty_7, OrdAllocGrp_NoOrders_7);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_1375484514"}, OrdAllocGrp_NoOrders_7);
    set_field(noOrders_0_0, FIX::SecondaryOrderID{"STRING_528339636"}, OrdAllocGrp_NoOrders_7);
    all_values.push_back(OrdAllocGrp_NoOrders_7);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_12;
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyID{"STRING_823690144"}, NestedParties2_NoNested2PartyIDs_12);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_12);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyRole{1994457901}, NestedParties2_NoNested2PartyIDs_12);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_12);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_22;
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubID{"STRING_1570497094"}, NstdPtys2SubGrp_NoNested2PartySubIDs_22);
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubIDType{559997844}, NstdPtys2SubGrp_NoNested2PartySubIDs_22);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_22);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_23;
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubID{"STRING_527782141"}, NstdPtys2SubGrp_NoNested2PartySubIDs_23);
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubIDType{1174774728}, NstdPtys2SubGrp_NoNested2PartySubIDs_23);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_23);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_24;
        set_field(noNested2PartySubIDs_0_0_2_2, FIX::Nested2PartySubID{"STRING_991027335"}, NstdPtys2SubGrp_NoNested2PartySubIDs_24);
        set_field(noNested2PartySubIDs_0_0_2_2, FIX::Nested2PartySubIDType{237952044}, NstdPtys2SubGrp_NoNested2PartySubIDs_24);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_24);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_13;
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyID{"STRING_9998756"}, NestedParties2_NoNested2PartyIDs_13);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_13);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyRole{1512141619}, NestedParties2_NoNested2PartyIDs_13);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_13);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_25;
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubID{"STRING_1115435964"}, NstdPtys2SubGrp_NoNested2PartySubIDs_25);
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubIDType{1213030087}, NstdPtys2SubGrp_NoNested2PartySubIDs_25);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_25);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_26;
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubID{"STRING_1776674313"}, NstdPtys2SubGrp_NoNested2PartySubIDs_26);
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubIDType{1649623123}, NstdPtys2SubGrp_NoNested2PartySubIDs_26);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_26);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_14;
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyID{"STRING_929798868"}, NestedParties2_NoNested2PartyIDs_14);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_14);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyRole{708963966}, NestedParties2_NoNested2PartyIDs_14);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_14);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_27;
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubID{"STRING_1027811687"}, NstdPtys2SubGrp_NoNested2PartySubIDs_27);
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubIDType{1250271215}, NstdPtys2SubGrp_NoNested2PartySubIDs_27);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_27);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Confirmation::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_32;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_138032767"}, Parties_NoPartyIDs_32);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_32);
    set_field(noPartyIDs_0_0, FIX::PartyRole{58}, Parties_NoPartyIDs_32);
    all_values.push_back(Parties_NoPartyIDs_32);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_69;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_221045737"}, PtysSubGrp_NoPartySubIDs_69);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_69);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_69);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_70;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_189723777"}, PtysSubGrp_NoPartySubIDs_70);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_70);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_70);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_11;
  set_field(msg, FIX::SettlDeliveryType{3}, SettlInstructionsData_11);
  set_field(msg, FIX::StandInstDbID{"STRING_338022917"}, SettlInstructionsData_11);
  set_field(msg, FIX::StandInstDbName{"STRING_1338757563"}, SettlInstructionsData_11);
  set_field(msg, FIX::StandInstDbType{1}, SettlInstructionsData_11);
  all_values.push_back(SettlInstructionsData_11);
  all_compo_names.insert(".");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_18;
    set_field(noDlvyInst_0_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_18);
    set_field(noDlvyInst_0_0, FIX::SettlInstSource{'3'}, DlvyInstGrp_NoDlvyInst_18);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_18);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_33;
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyID{"STRING_376047399"}, SettlParties_NoSettlPartyIDs_33);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_33);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyRole{468415074}, SettlParties_NoSettlPartyIDs_33);
      all_values.push_back(SettlParties_NoSettlPartyIDs_33);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_66;
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubID{"STRING_551792971"}, SettlPtysSubGrp_NoSettlPartySubIDs_66);
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubIDType{1681445161}, SettlPtysSubGrp_NoSettlPartySubIDs_66);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_66);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_67;
        set_field(noSettlPartySubIDs_0_0_2_1, FIX::SettlPartySubID{"STRING_1223461247"}, SettlPtysSubGrp_NoSettlPartySubIDs_67);
        set_field(noSettlPartySubIDs_0_0_2_1, FIX::SettlPartySubIDType{53932446}, SettlPtysSubGrp_NoSettlPartySubIDs_67);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_67);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_8;
  set_field(msg, FIX::BenchmarkCurveCurrency{"USD"}, SpreadOrBenchmarkCurveData_8);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_EUREPO"}, SpreadOrBenchmarkCurveData_8);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1569025998"}, SpreadOrBenchmarkCurveData_8);
  FIX::BenchmarkPrice BenchmarkPrice_8;
  BenchmarkPrice_8.setString("20201823");
set_field(msg, BenchmarkPrice_8, SpreadOrBenchmarkCurveData_8);
  set_field(msg, FIX::BenchmarkPriceType{2013167628}, SpreadOrBenchmarkCurveData_8);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_2128263219"}, SpreadOrBenchmarkCurveData_8);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_10731485"}, SpreadOrBenchmarkCurveData_8);
  FIX::Spread Spread_8;
  Spread_8.setString("17058737");
set_field(msg, Spread_8, SpreadOrBenchmarkCurveData_8);
  all_values.push_back(SpreadOrBenchmarkCurveData_8);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Confirmation::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_20;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_WALA"}, Stipulations_NoStipulations_20);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1926919465"}, Stipulations_NoStipulations_20);
    all_values.push_back(Stipulations_NoStipulations_20);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::Confirmation::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_21;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_LOT"}, Stipulations_NoStipulations_21);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1713972543"}, Stipulations_NoStipulations_21);
    all_values.push_back(Stipulations_NoStipulations_21);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::Confirmation::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_13;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_IO"}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_S"}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(7, 32, 37, 9, 12, 2003)}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_195005399"}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{4}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_13);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_21;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1876450561"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{151314424}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1736980583"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{192727295}, UnderlyingInstrument_21);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_21;
    UnderlyingAdjustedQuantity_21.setString("11436851");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_21, UnderlyingInstrument_21);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_21;
    UnderlyingAllocationPercent_21.setString("33.480000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_21, UnderlyingInstrument_21);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_21;
    UnderlyingAttachmentPoint_21.setString("32.930000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1016383821"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_218077328"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1742532865"}, UnderlyingInstrument_21);
    FIX::UnderlyingCapValue UnderlyingCapValue_21;
    UnderlyingCapValue_21.setString("10271153");
set_field(noUnderlyings_0_0, UnderlyingCapValue_21, UnderlyingInstrument_21);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_21;
    UnderlyingCashAmount_21.setString("19239510");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_21);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_21;
    UnderlyingContractMultiplier_21.setString("4038804");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1703386874}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_795214907"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2117852967"}, UnderlyingInstrument_21);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_21;
    UnderlyingCouponRate_21.setString("31.600000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_696718425"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_21);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_21;
    UnderlyingCurrentValue_21.setString("20731474");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_21, UnderlyingInstrument_21);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_21;
    UnderlyingDetachmentPoint_21.setString("80.020000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_21, UnderlyingInstrument_21);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_21;
    UnderlyingDirtyPrice_21.setString("12425558");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_21, UnderlyingInstrument_21);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_21;
    UnderlyingEndPrice_21.setString("16205619");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_21, UnderlyingInstrument_21);
    FIX::UnderlyingEndValue UnderlyingEndValue_21;
    UnderlyingEndValue_21.setString("3717883");
set_field(noUnderlyings_0_0, UnderlyingEndValue_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{723622096}, UnderlyingInstrument_21);
    FIX::UnderlyingFXRate UnderlyingFXRate_21;
    UnderlyingFXRate_21.setString("6043334");
set_field(noUnderlyings_0_0, UnderlyingFXRate_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_21);
    FIX::UnderlyingFactor UnderlyingFactor_21;
    UnderlyingFactor_21.setString("17989589");
set_field(noUnderlyings_0_0, UnderlyingFactor_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{139897934}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_295760640"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1950273345"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1876878517"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_488487935"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_946474800"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_81788217"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_102757581"}, UnderlyingInstrument_21);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_21;
    UnderlyingNotionalPercentageOutstanding_21.setString("86.210000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_21);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_21;
    UnderlyingOriginalNotionalPercentageOutstanding_21.setString("4.460000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_842490279"}, UnderlyingInstrument_21);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_21;
    UnderlyingPriceUnitOfMeasureQty_21.setString("763329");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1506445819}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1246370703}, UnderlyingInstrument_21);
    FIX::UnderlyingPx UnderlyingPx_21;
    UnderlyingPx_21.setString("17797198");
set_field(noUnderlyings_0_0, UnderlyingPx_21, UnderlyingInstrument_21);
    FIX::UnderlyingQty UnderlyingQty_21;
    UnderlyingQty_21.setString("1541770");
set_field(noUnderlyings_0_0, UnderlyingQty_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1216740022"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_883319340"}, UnderlyingInstrument_21);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_21;
    UnderlyingRepurchaseRate_21.setString("55.040000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1091621154}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_873372701"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_776559275"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1736819156"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_2115928554"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_249637556"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_2108607484"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_692067002"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_853971002"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_527917564"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_21);
    FIX::UnderlyingStartValue UnderlyingStartValue_21;
    UnderlyingStartValue_21.setString("9938689");
set_field(noUnderlyings_0_0, UnderlyingStartValue_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_823678204"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_21);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_21;
    UnderlyingStrikePrice_21.setString("13121661");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_21, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1092806773"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_805052024"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1414923721"}, UnderlyingInstrument_21);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_908181746"}, UnderlyingInstrument_21);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_21;
    UnderlyingUnitOfMeasureQty_21.setString("11049175");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_21, UnderlyingInstrument_21);
    all_values.push_back(UnderlyingInstrument_21);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_43;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1750672026"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_43);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1181250523"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_43);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_43);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_36;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_849559081"}, UnderlyingStipulations_NoUnderlyingStips_36);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_813486703"}, UnderlyingStipulations_NoUnderlyingStips_36);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_36);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_37;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_625869768"}, UnderlyingStipulations_NoUnderlyingStips_37);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_2066299104"}, UnderlyingStipulations_NoUnderlyingStips_37);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_37);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_38;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1696806043"}, UnderlyingStipulations_NoUnderlyingStips_38);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1476765272"}, UnderlyingStipulations_NoUnderlyingStips_38);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_38);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_43;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_422695096"}, UndlyInstrumentParties_NoUndlyInstrumentParties_43);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_43);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{599772118}, UndlyInstrumentParties_NoUndlyInstrumentParties_43);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_43);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_355478456"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{560895955}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1083207004"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1209449459}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1088813519"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1426749279}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_44;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_55834748"}, UndlyInstrumentParties_NoUndlyInstrumentParties_44);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_44);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1573081252}, UndlyInstrumentParties_NoUndlyInstrumentParties_44);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_44);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1077174215"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{518404377}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_22;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1584150578"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{344614288}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1426586123"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{541584500}, UnderlyingInstrument_22);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_22;
    UnderlyingAdjustedQuantity_22.setString("14573448");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_22, UnderlyingInstrument_22);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_22;
    UnderlyingAllocationPercent_22.setString("45.010000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_22, UnderlyingInstrument_22);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_22;
    UnderlyingAttachmentPoint_22.setString("50.230000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1929037497"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1879333583"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_388838079"}, UnderlyingInstrument_22);
    FIX::UnderlyingCapValue UnderlyingCapValue_22;
    UnderlyingCapValue_22.setString("4074236");
set_field(noUnderlyings_0_1, UnderlyingCapValue_22, UnderlyingInstrument_22);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_22;
    UnderlyingCashAmount_22.setString("17981490");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_22);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_22;
    UnderlyingContractMultiplier_22.setString("18841888");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{661102001}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_360855571"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1990029790"}, UnderlyingInstrument_22);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_22;
    UnderlyingCouponRate_22.setString("41.190000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_751995573"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_22);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_22;
    UnderlyingCurrentValue_22.setString("18352025");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_22, UnderlyingInstrument_22);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_22;
    UnderlyingDetachmentPoint_22.setString("40.580000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_22, UnderlyingInstrument_22);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_22;
    UnderlyingDirtyPrice_22.setString("7630999");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_22, UnderlyingInstrument_22);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_22;
    UnderlyingEndPrice_22.setString("11144682");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_22, UnderlyingInstrument_22);
    FIX::UnderlyingEndValue UnderlyingEndValue_22;
    UnderlyingEndValue_22.setString("14633088");
set_field(noUnderlyings_0_1, UnderlyingEndValue_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{528108021}, UnderlyingInstrument_22);
    FIX::UnderlyingFXRate UnderlyingFXRate_22;
    UnderlyingFXRate_22.setString("5400658");
set_field(noUnderlyings_0_1, UnderlyingFXRate_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_22);
    FIX::UnderlyingFactor UnderlyingFactor_22;
    UnderlyingFactor_22.setString("16052822");
set_field(noUnderlyings_0_1, UnderlyingFactor_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1058470190}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1679074291"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1949896525"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_337572666"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_73175143"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1259757684"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1367347167"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1796010166"}, UnderlyingInstrument_22);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_22;
    UnderlyingNotionalPercentageOutstanding_22.setString("15.340000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_22);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_22;
    UnderlyingOriginalNotionalPercentageOutstanding_22.setString("45.970000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1448735152"}, UnderlyingInstrument_22);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_22;
    UnderlyingPriceUnitOfMeasureQty_22.setString("7498624");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{2123008720}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1185440394}, UnderlyingInstrument_22);
    FIX::UnderlyingPx UnderlyingPx_22;
    UnderlyingPx_22.setString("14109644");
set_field(noUnderlyings_0_1, UnderlyingPx_22, UnderlyingInstrument_22);
    FIX::UnderlyingQty UnderlyingQty_22;
    UnderlyingQty_22.setString("3363806");
set_field(noUnderlyings_0_1, UnderlyingQty_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1027986537"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_524354966"}, UnderlyingInstrument_22);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_22;
    UnderlyingRepurchaseRate_22.setString("62.160000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1226011136}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_198641392"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_776095146"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_486001546"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_961741338"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1890563356"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1949310352"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1489849359"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_283145521"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_2044234064"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_22);
    FIX::UnderlyingStartValue UnderlyingStartValue_22;
    UnderlyingStartValue_22.setString("13416157");
set_field(noUnderlyings_0_1, UnderlyingStartValue_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1575824707"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_22);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_22;
    UnderlyingStrikePrice_22.setString("16489998");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_22, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_2009818509"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_899051897"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1297526369"}, UnderlyingInstrument_22);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_903646395"}, UnderlyingInstrument_22);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_22;
    UnderlyingUnitOfMeasureQty_22.setString("19982490");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_22, UnderlyingInstrument_22);
    all_values.push_back(UnderlyingInstrument_22);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_44;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_204897899"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_44);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_600627845"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_44);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_44);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_45;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1310416038"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_45);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1390338293"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_45);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_45);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_39;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1646796681"}, UnderlyingStipulations_NoUnderlyingStips_39);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_270841182"}, UnderlyingStipulations_NoUnderlyingStips_39);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_39);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_45;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_587689250"}, UndlyInstrumentParties_NoUndlyInstrumentParties_45);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_45);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{587105050}, UndlyInstrumentParties_NoUndlyInstrumentParties_45);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_45);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1982853864"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1548846388}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1106864104"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1784680568}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_891212099"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1390009626}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_3;
  FIX::Yield Yield_3;
  Yield_3.setString("9.850000");
set_field(msg, Yield_3, YieldData_3);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1838860047"}, YieldData_3);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_584141690"}, YieldData_3);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_3;
  YieldRedemptionPrice_3.setString("11097720");
set_field(msg, YieldRedemptionPrice_3, YieldData_3);
  set_field(msg, FIX::YieldRedemptionPriceType{441437223}, YieldData_3);
  set_field(msg, FIX::YieldType{"STRING_OPENAVG"}, YieldData_3);
  all_values.push_back(YieldData_3);
  all_compo_names.insert(".");

  // header
  multiset<string> header_20;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_20);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_303772084"}, header_20);
  set_header_field(msg.getHeader(), FIX::BodyLength{1014898317}, header_20);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1908814616"}, header_20);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1207418479"}, header_20);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_865663669"}, header_20);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1096221934"}, header_20);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1412316378}, header_20);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_20);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{259154325}, header_20);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_655171024"}, header_20);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1330400207"}, header_20);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1905951006"}, header_20);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(17, 48, 17, 3, 10, 2009)}, header_20);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_20);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_20);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1895431662"}, header_20);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{451060107}, header_20);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_2059331087"}, header_20);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1429378999"}, header_20);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_142436506"}, header_20);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(19, 50, 9, 10, 7, 2013)}, header_20);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_764286610"}, header_20);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_2095064294"}, header_20);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_344913888"}, header_20);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1860508545"}, header_20);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1359897024}, header_20);
  all_values.push_back(header_20);
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
