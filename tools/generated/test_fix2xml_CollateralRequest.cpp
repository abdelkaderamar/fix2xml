#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralRequest_0;
  set_field(msg, FIX::Account{"STRING_50196461"}, CollateralRequest_0);
  set_field(msg, FIX::AccountType{4}, CollateralRequest_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_6;
  AccruedInterestAmt_6.setString("17896236");
set_field(msg, AccruedInterestAmt_6, CollateralRequest_0);
  FIX::CashOutstanding CashOutstanding_3;
  CashOutstanding_3.setString("6741540");
set_field(msg, CashOutstanding_3, CollateralRequest_0);
  set_field(msg, FIX::ClOrdID{"STRING_1836900166"}, CollateralRequest_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_414335261"}, CollateralRequest_0);
  set_field(msg, FIX::CollAsgnReason{6}, CollateralRequest_0);
  set_field(msg, FIX::CollReqID{"STRING_69993779"}, CollateralRequest_0);
  set_field(msg, FIX::Currency{"CAN"}, CollateralRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1540992239"}, CollateralRequest_0);
  set_field(msg, FIX::EncodedTextLen{449368292}, CollateralRequest_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_6;
  EndAccruedInterestAmt_6.setString("5793506");
set_field(msg, EndAccruedInterestAmt_6, CollateralRequest_0);
  FIX::EndCash EndCash_6;
  EndCash_6.setString("12620575");
set_field(msg, EndCash_6, CollateralRequest_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(4, 41, 26, 23, 2, 2016)}, CollateralRequest_0);
  FIX::MarginExcess MarginExcess_3;
  MarginExcess_3.setString("1359026");
set_field(msg, MarginExcess_3, CollateralRequest_0);
  set_field(msg, FIX::OrderID{"STRING_1041136004"}, CollateralRequest_0);
  FIX::Price Price_6;
  Price_6.setString("18996026");
set_field(msg, Price_6, CollateralRequest_0);
  set_field(msg, FIX::PriceType{8}, CollateralRequest_0);
  set_field(msg, FIX::QtyType{0}, CollateralRequest_0);
  FIX::Quantity Quantity_9;
  Quantity_9.setString("19439399");
set_field(msg, Quantity_9, CollateralRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1104920323"}, CollateralRequest_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_321220703"}, CollateralRequest_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1769266802"}, CollateralRequest_0);
  set_field(msg, FIX::SettlSessID{"STRING_ETH"}, CollateralRequest_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_371417164"}, CollateralRequest_0);
  set_field(msg, FIX::Side{'1'}, CollateralRequest_0);
  FIX::StartCash StartCash_6;
  StartCash_6.setString("8389248");
set_field(msg, StartCash_6, CollateralRequest_0);
  set_field(msg, FIX::Text{"STRING_1045571168"}, CollateralRequest_0);
  FIX::TotalNetValue TotalNetValue_3;
  TotalNetValue_3.setString("16286317");
set_field(msg, TotalNetValue_3, CollateralRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_4"}, CollateralRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_5"}, CollateralRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(19, 21, 37, 0, 2, 2012)}, CollateralRequest_0);
  all_values.push_back(CollateralRequest_0);

  all_compo_names.insert("CollateralRequest");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_9;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_1829855765"}, ExecCollGrp_NoExecs_9);
    all_values.push_back(ExecCollGrp_NoExecs_9);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_10;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_1944507833"}, ExecCollGrp_NoExecs_10);
    all_values.push_back(ExecCollGrp_NoExecs_10);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_2;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_11;
    set_field(noExecs_0_2, FIX::ExecID{"STRING_145542290"}, ExecCollGrp_NoExecs_11);
    all_values.push_back(ExecCollGrp_NoExecs_11);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_7;
  set_field(msg, FIX::AgreementCurrency{"JPY"}, FinancingDetails_7);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_893476056"}, FinancingDetails_7);
  set_field(msg, FIX::AgreementDesc{"STRING_774072481"}, FinancingDetails_7);
  set_field(msg, FIX::AgreementID{"STRING_2026597350"}, FinancingDetails_7);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_7);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1644762854"}, FinancingDetails_7);
  FIX::MarginRatio MarginRatio_7;
  MarginRatio_7.setString("32.400000");
set_field(msg, MarginRatio_7, FinancingDetails_7);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_442051361"}, FinancingDetails_7);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_7);
  all_values.push_back(FinancingDetails_7);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_19;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_63834516"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1798984392}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_286347459"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{2003049764}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_490425608"}, InstrumentLeg_19);
    FIX::LegContractMultiplier LegContractMultiplier_19;
    LegContractMultiplier_19.setString("13319186");
set_field(noLegs_0_0, LegContractMultiplier_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1484197883}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1743685734"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_2134178818"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1035339781"}, InstrumentLeg_19);
    FIX::LegCouponRate LegCouponRate_19;
    LegCouponRate_19.setString("85.450000");
set_field(noLegs_0_0, LegCouponRate_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1226164331"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_897500524"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{186698322}, InstrumentLeg_19);
    FIX::LegFactor LegFactor_19;
    LegFactor_19.setString("7693842");
set_field(noLegs_0_0, LegFactor_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{579872641}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_2131206155"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_914926512"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1218042506"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_969183854"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1808402569"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1992114987"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_848297556"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_306513947"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_19);
    FIX::LegOptionRatio LegOptionRatio_19;
    LegOptionRatio_19.setString("4420071");
set_field(noLegs_0_0, LegOptionRatio_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_748565309"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_2091593723"}, InstrumentLeg_19);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_19;
    LegPriceUnitOfMeasureQty_19.setString("3569374");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegProduct{812399825}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1743094467}, InstrumentLeg_19);
    FIX::LegRatioQty LegRatioQty_19;
    LegRatioQty_19.setString("6432849");
set_field(noLegs_0_0, LegRatioQty_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_667965941"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_86036428"}, InstrumentLeg_19);
    FIX::LegRepurchaseRate LegRepurchaseRate_19;
    LegRepurchaseRate_19.setString("35.300000");
set_field(noLegs_0_0, LegRepurchaseRate_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{4680176}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1829722162"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1961898700"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1040019957"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_300287059"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1040579384"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1020010227"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSide{'2'}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1938079908"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_19);
    FIX::LegStrikePrice LegStrikePrice_19;
    LegStrikePrice_19.setString("3704689");
set_field(noLegs_0_0, LegStrikePrice_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1190431057"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1926377443"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1588511408"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_12131263"}, InstrumentLeg_19);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_19;
    LegUnitOfMeasureQty_19.setString("15872963");
set_field(noLegs_0_0, LegUnitOfMeasureQty_19, InstrumentLeg_19);
    all_values.push_back(InstrumentLeg_19);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_38;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_860428819"}, LegSecAltIDGrp_NoLegSecurityAltID_38);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1893810312"}, LegSecAltIDGrp_NoLegSecurityAltID_38);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_38);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_20;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_775053292"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1302435968}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_494891973"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{719163368}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1659373411"}, InstrumentLeg_20);
    FIX::LegContractMultiplier LegContractMultiplier_20;
    LegContractMultiplier_20.setString("13072917");
set_field(noLegs_0_1, LegContractMultiplier_20, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{314774187}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_155174666"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1975257739"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_400810615"}, InstrumentLeg_20);
    FIX::LegCouponRate LegCouponRate_20;
    LegCouponRate_20.setString("81.970000");
set_field(noLegs_0_1, LegCouponRate_20, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1979937916"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_872474225"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{383336189}, InstrumentLeg_20);
    FIX::LegFactor LegFactor_20;
    LegFactor_20.setString("8378889");
set_field(noLegs_0_1, LegFactor_20, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1892484453}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_625402898"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_628485246"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_951709354"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1636853829"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_998954148"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_2142140411"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1415747624"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_439981908"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'6'}, InstrumentLeg_20);
    FIX::LegOptionRatio LegOptionRatio_20;
    LegOptionRatio_20.setString("8555603");
set_field(noLegs_0_1, LegOptionRatio_20, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1873124655"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_867216846"}, InstrumentLeg_20);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_20;
    LegPriceUnitOfMeasureQty_20.setString("6018870");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_20, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegProduct{500694299}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegPutOrCall{22169166}, InstrumentLeg_20);
    FIX::LegRatioQty LegRatioQty_20;
    LegRatioQty_20.setString("10967789");
set_field(noLegs_0_1, LegRatioQty_20, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1219857667"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1681542577"}, InstrumentLeg_20);
    FIX::LegRepurchaseRate LegRepurchaseRate_20;
    LegRepurchaseRate_20.setString("71.280000");
set_field(noLegs_0_1, LegRepurchaseRate_20, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1534631855}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1836717244"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_84361219"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1935442470"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1819611793"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_2064299135"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_2018491600"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_789289713"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_20);
    FIX::LegStrikePrice LegStrikePrice_20;
    LegStrikePrice_20.setString("5342905");
set_field(noLegs_0_1, LegStrikePrice_20, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_879747039"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_935811978"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1485999872"}, InstrumentLeg_20);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_369117220"}, InstrumentLeg_20);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_20;
    LegUnitOfMeasureQty_20.setString("19347661");
set_field(noLegs_0_1, LegUnitOfMeasureQty_20, InstrumentLeg_20);
    all_values.push_back(InstrumentLeg_20);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_39;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1784864844"}, LegSecAltIDGrp_NoLegSecurityAltID_39);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_227264386"}, LegSecAltIDGrp_NoLegSecurityAltID_39);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_39);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_12;
  FIX::AttachmentPoint AttachmentPoint_12;
  AttachmentPoint_12.setString("46.620000");
set_field(msg, AttachmentPoint_12, Instrument_12);
  set_field(msg, FIX::CFICode{"STRING_492941537"}, Instrument_12);
  set_field(msg, FIX::CPProgram{2}, Instrument_12);
  set_field(msg, FIX::CPRegType{"STRING_207177860"}, Instrument_12);
  FIX::CapPrice CapPrice_12;
  CapPrice_12.setString("10948285");
set_field(msg, CapPrice_12, Instrument_12);
  FIX::ContractMultiplier ContractMultiplier_12;
  ContractMultiplier_12.setString("4535996");
set_field(msg, ContractMultiplier_12, Instrument_12);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_12);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_44123872"}, Instrument_12);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1673457360"}, Instrument_12);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1910889604"}, Instrument_12);
  FIX::CouponRate CouponRate_12;
  CouponRate_12.setString("10.000000");
set_field(msg, CouponRate_12, Instrument_12);
  set_field(msg, FIX::CreditRating{"STRING_1060605567"}, Instrument_12);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1600123200"}, Instrument_12);
  FIX::DetachmentPoint DetachmentPoint_12;
  DetachmentPoint_12.setString("22.200000");
set_field(msg, DetachmentPoint_12, Instrument_12);
  set_field(msg, FIX::EncodedIssuer{"DATA_848564389"}, Instrument_12);
  set_field(msg, FIX::EncodedIssuerLen{1272251345}, Instrument_12);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_301887707"}, Instrument_12);
  set_field(msg, FIX::EncodedSecurityDescLen{719572341}, Instrument_12);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_12);
  FIX::Factor Factor_12;
  Factor_12.setString("10911774");
set_field(msg, Factor_12, Instrument_12);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_12);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_12);
  FIX::FloorPrice FloorPrice_12;
  FloorPrice_12.setString("16254679");
set_field(msg, FloorPrice_12, Instrument_12);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_12);
  set_field(msg, FIX::InstrRegistry{"STRING_1984827801"}, Instrument_12);
  set_field(msg, FIX::InstrmtAssignmentMethod{'9'}, Instrument_12);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_75297093"}, Instrument_12);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1772110279"}, Instrument_12);
  set_field(msg, FIX::Issuer{"STRING_297157151"}, Instrument_12);
  set_field(msg, FIX::ListMethod{0}, Instrument_12);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1999374665"}, Instrument_12);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1784601813"}, Instrument_12);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_205619827"}, Instrument_12);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1952280058"}, Instrument_12);
  FIX::MinPriceIncrement MinPriceIncrement_12;
  MinPriceIncrement_12.setString("19917796");
set_field(msg, MinPriceIncrement_12, Instrument_12);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_12;
  MinPriceIncrementAmount_12.setString("13004483");
set_field(msg, MinPriceIncrementAmount_12, Instrument_12);
  set_field(msg, FIX::NTPositionLimit{258396103}, Instrument_12);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_12;
  NotionalPercentageOutstanding_12.setString("30.520000");
set_field(msg, NotionalPercentageOutstanding_12, Instrument_12);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_12);
  FIX::OptPayoutAmount OptPayoutAmount_12;
  OptPayoutAmount_12.setString("19318534");
set_field(msg, OptPayoutAmount_12, Instrument_12);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_12);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_12;
  OriginalNotionalPercentageOutstanding_12.setString("32.430000");
set_field(msg, OriginalNotionalPercentageOutstanding_12, Instrument_12);
  set_field(msg, FIX::Pool{"STRING_844975382"}, Instrument_12);
  set_field(msg, FIX::PositionLimit{1437172208}, Instrument_12);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_12);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1693539771"}, Instrument_12);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_12;
  PriceUnitOfMeasureQty_12.setString("5619399");
set_field(msg, PriceUnitOfMeasureQty_12, Instrument_12);
  set_field(msg, FIX::Product{13}, Instrument_12);
  set_field(msg, FIX::ProductComplex{"STRING_265628465"}, Instrument_12);
  set_field(msg, FIX::PutOrCall{1}, Instrument_12);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1275936943"}, Instrument_12);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1239544947"}, Instrument_12);
  FIX::RepurchaseRate RepurchaseRate_12;
  RepurchaseRate_12.setString("11.720000");
set_field(msg, RepurchaseRate_12, Instrument_12);
  set_field(msg, FIX::RepurchaseTerm{753921233}, Instrument_12);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_12);
  set_field(msg, FIX::SecurityDesc{"STRING_42505326"}, Instrument_12);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1717905396"}, Instrument_12);
  set_field(msg, FIX::SecurityGroup{"STRING_1021021914"}, Instrument_12);
  set_field(msg, FIX::SecurityID{"STRING_1814615605"}, Instrument_12);
  set_field(msg, FIX::SecurityIDSource{"STRING_4"}, Instrument_12);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_12);
  set_field(msg, FIX::SecuritySubType{"STRING_1666506623"}, Instrument_12);
  set_field(msg, FIX::SecurityType{"STRING_MATURED"}, Instrument_12);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_12);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_12);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1496476739"}, Instrument_12);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_92284754"}, Instrument_12);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_12);
  FIX::StrikeMultiplier StrikeMultiplier_12;
  StrikeMultiplier_12.setString("14368569");
set_field(msg, StrikeMultiplier_12, Instrument_12);
  FIX::StrikePrice StrikePrice_12;
  StrikePrice_12.setString("15140689");
set_field(msg, StrikePrice_12, Instrument_12);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_12);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_12;
  StrikePriceBoundaryPrecision_12.setString("65.910000");
set_field(msg, StrikePriceBoundaryPrecision_12, Instrument_12);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_12);
  FIX::StrikeValue StrikeValue_12;
  StrikeValue_12.setString("6968573");
set_field(msg, StrikeValue_12, Instrument_12);
  set_field(msg, FIX::Symbol{"STRING_817528406"}, Instrument_12);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_12);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_12);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_12);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_12);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_12;
  UnitOfMeasureQty_12.setString("4149426");
set_field(msg, UnitOfMeasureQty_12, Instrument_12);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_12);
  all_values.push_back(Instrument_12);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_25;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_25);
    FIX::ComplexEventPrice ComplexEventPrice_25;
    ComplexEventPrice_25.setString("8846624");
set_field(noComplexEvents_0_0, ComplexEventPrice_25, ComplexEvents_NoComplexEvents_25);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_25);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_25;
    ComplexEventPriceBoundaryPrecision_25.setString("91.130000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_25, ComplexEvents_NoComplexEvents_25);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_25);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_25);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_25;
    ComplexOptPayoutAmount_25.setString("3297410");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_25, ComplexEvents_NoComplexEvents_25);
    all_values.push_back(ComplexEvents_NoComplexEvents_25);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_55;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 38, 17, 23, 6, 2001)}, ComplexEventDates_NoComplexEventDates_55);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 8, 11, 25, 4, 2007)}, ComplexEventDates_NoComplexEventDates_55);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_55);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_103;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 31, 59)}, ComplexEventTimes_NoComplexEventTimes_103);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 23, 41)}, ComplexEventTimes_NoComplexEventTimes_103);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_103);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_104;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 36, 59)}, ComplexEventTimes_NoComplexEventTimes_104);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 30, 44)}, ComplexEventTimes_NoComplexEventTimes_104);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_104);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_105;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 14, 0)}, ComplexEventTimes_NoComplexEventTimes_105);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 31, 56)}, ComplexEventTimes_NoComplexEventTimes_105);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_105);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_56;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 7, 2, 3, 1, 2017)}, ComplexEventDates_NoComplexEventDates_56);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 23, 24, 26, 2, 2017)}, ComplexEventDates_NoComplexEventDates_56);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_56);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_106;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 32, 39)}, ComplexEventTimes_NoComplexEventTimes_106);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 1, 22)}, ComplexEventTimes_NoComplexEventTimes_106);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_106);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_107;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 36, 23)}, ComplexEventTimes_NoComplexEventTimes_107);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 47, 6)}, ComplexEventTimes_NoComplexEventTimes_107);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_107);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_108;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 5, 15)}, ComplexEventTimes_NoComplexEventTimes_108);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 15, 58)}, ComplexEventTimes_NoComplexEventTimes_108);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_108);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_26;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_26);
    FIX::ComplexEventPrice ComplexEventPrice_26;
    ComplexEventPrice_26.setString("13256360");
set_field(noComplexEvents_0_1, ComplexEventPrice_26, ComplexEvents_NoComplexEvents_26);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_26);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_26;
    ComplexEventPriceBoundaryPrecision_26.setString("97.590000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_26, ComplexEvents_NoComplexEvents_26);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_26);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_26);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_26;
    ComplexOptPayoutAmount_26.setString("4981815");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_26, ComplexEvents_NoComplexEvents_26);
    all_values.push_back(ComplexEvents_NoComplexEvents_26);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_57;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 50, 51, 24, 4, 2007)}, ComplexEventDates_NoComplexEventDates_57);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 41, 7, 7, 7, 2004)}, ComplexEventDates_NoComplexEventDates_57);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_57);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_109;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 23, 31)}, ComplexEventTimes_NoComplexEventTimes_109);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 46, 12)}, ComplexEventTimes_NoComplexEventTimes_109);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_109);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_110;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 27, 20)}, ComplexEventTimes_NoComplexEventTimes_110);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 27, 6)}, ComplexEventTimes_NoComplexEventTimes_110);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_110);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_111;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 48, 24)}, ComplexEventTimes_NoComplexEventTimes_111);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 29, 10)}, ComplexEventTimes_NoComplexEventTimes_111);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_111);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_58;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 9, 45, 17, 8, 2008)}, ComplexEventDates_NoComplexEventDates_58);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 17, 51, 1, 3, 2017)}, ComplexEventDates_NoComplexEventDates_58);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_58);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_112;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 45, 28)}, ComplexEventTimes_NoComplexEventTimes_112);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 56, 31)}, ComplexEventTimes_NoComplexEventTimes_112);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_112);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_27;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_27);
    FIX::ComplexEventPrice ComplexEventPrice_27;
    ComplexEventPrice_27.setString("2562296");
set_field(noComplexEvents_0_2, ComplexEventPrice_27, ComplexEvents_NoComplexEvents_27);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_27);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_27;
    ComplexEventPriceBoundaryPrecision_27.setString("44.150000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_27, ComplexEvents_NoComplexEvents_27);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_27);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_27);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_27;
    ComplexOptPayoutAmount_27.setString("9365099");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_27, ComplexEvents_NoComplexEvents_27);
    all_values.push_back(ComplexEvents_NoComplexEvents_27);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_59;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 32, 10, 13, 8, 2005)}, ComplexEventDates_NoComplexEventDates_59);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 22, 37, 8, 2, 2012)}, ComplexEventDates_NoComplexEventDates_59);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_59);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_113;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 3, 5)}, ComplexEventTimes_NoComplexEventTimes_113);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 1, 32)}, ComplexEventTimes_NoComplexEventTimes_113);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_113);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_114;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 44, 27)}, ComplexEventTimes_NoComplexEventTimes_114);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 52, 32)}, ComplexEventTimes_NoComplexEventTimes_114);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_114);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_115;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 56, 4)}, ComplexEventTimes_NoComplexEventTimes_115);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 1, 38)}, ComplexEventTimes_NoComplexEventTimes_115);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_115);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_60;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 15, 9, 17, 3, 2015)}, ComplexEventDates_NoComplexEventDates_60);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 30, 51, 27, 8, 2015)}, ComplexEventDates_NoComplexEventDates_60);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_60);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_116;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 8, 29)}, ComplexEventTimes_NoComplexEventTimes_116);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 13, 58)}, ComplexEventTimes_NoComplexEventTimes_116);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_116);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_117;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 46, 27)}, ComplexEventTimes_NoComplexEventTimes_117);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 20, 57)}, ComplexEventTimes_NoComplexEventTimes_117);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_117);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_118;
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 12, 4)}, ComplexEventTimes_NoComplexEventTimes_118);
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 23, 23)}, ComplexEventTimes_NoComplexEventTimes_118);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_118);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_61;
      set_field(noComplexEventDates_2_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 7, 59, 17, 9, 2017)}, ComplexEventDates_NoComplexEventDates_61);
      set_field(noComplexEventDates_2_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 23, 33, 23, 4, 2010)}, ComplexEventDates_NoComplexEventDates_61);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_61);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_119;
        set_field(noComplexEventTimes_2_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 19, 41)}, ComplexEventTimes_NoComplexEventTimes_119);
        set_field(noComplexEventTimes_2_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 1, 27)}, ComplexEventTimes_NoComplexEventTimes_119);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_119);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_30;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_520580138"}, EvntGrp_NoEvents_30);
    FIX::EventPx EventPx_30;
    EventPx_30.setString("5223616");
set_field(noEvents_0_0, EventPx_30, EvntGrp_NoEvents_30);
    set_field(noEvents_0_0, FIX::EventText{"STRING_14340354"}, EvntGrp_NoEvents_30);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(2, 18, 39, 7, 5, 2008)}, EvntGrp_NoEvents_30);
    set_field(noEvents_0_0, FIX::EventType{19}, EvntGrp_NoEvents_30);
    all_values.push_back(EvntGrp_NoEvents_30);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_31;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1037280493"}, EvntGrp_NoEvents_31);
    FIX::EventPx EventPx_31;
    EventPx_31.setString("165747");
set_field(noEvents_0_1, EventPx_31, EvntGrp_NoEvents_31);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1231177993"}, EvntGrp_NoEvents_31);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(11, 36, 49, 6, 9, 2016)}, EvntGrp_NoEvents_31);
    set_field(noEvents_0_1, FIX::EventType{12}, EvntGrp_NoEvents_31);
    all_values.push_back(EvntGrp_NoEvents_31);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_22;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_584904392"}, InstrumentParties_NoInstrumentParties_22);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_22);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1983250155}, InstrumentParties_NoInstrumentParties_22);
    all_values.push_back(InstrumentParties_NoInstrumentParties_22);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1573532334"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1883972048}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1258951162"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1731899392}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_257068538"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1781312814}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_22;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_544832274"}, SecAltIDGrp_NoSecurityAltID_22);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_379969056"}, SecAltIDGrp_NoSecurityAltID_22);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_22);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_23;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_354767217"}, SecAltIDGrp_NoSecurityAltID_23);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_277424665"}, SecAltIDGrp_NoSecurityAltID_23);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_23);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_24;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1885310915"}, SecAltIDGrp_NoSecurityAltID_24);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1419840061"}, SecAltIDGrp_NoSecurityAltID_24);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_24);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_24;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1377842703"}, SecurityXML_24);
  set_field(msg, FIX::SecurityXMLLen{1771961486}, SecurityXML_24);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_309636906"}, SecurityXML_24);
  all_values.push_back(SecurityXML_24);
  all_compo_names.insert("..");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralRequest::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_13;
    FIX::MiscFeeAmt MiscFeeAmt_13;
    MiscFeeAmt_13.setString("8556558");
set_field(noMiscFees_0_0, MiscFeeAmt_13, MiscFeesGrp_NoMiscFees_13);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_13);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"USD"}, MiscFeesGrp_NoMiscFees_13);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_3"}, MiscFeesGrp_NoMiscFees_13);
    all_values.push_back(MiscFeesGrp_NoMiscFees_13);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_14;
    FIX::MiscFeeAmt MiscFeeAmt_14;
    MiscFeeAmt_14.setString("10587854");
set_field(noMiscFees_0_1, MiscFeeAmt_14, MiscFeesGrp_NoMiscFees_14);
    set_field(noMiscFees_0_1, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_14);
    set_field(noMiscFees_0_1, FIX::MiscFeeCurr{"CAN"}, MiscFeesGrp_NoMiscFees_14);
    set_field(noMiscFees_0_1, FIX::MiscFeeType{"STRING_1"}, MiscFeesGrp_NoMiscFees_14);
    all_values.push_back(MiscFeesGrp_NoMiscFees_14);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoMiscFees noMiscFees_0_2;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_15;
    FIX::MiscFeeAmt MiscFeeAmt_15;
    MiscFeeAmt_15.setString("20137845");
set_field(noMiscFees_0_2, MiscFeeAmt_15, MiscFeesGrp_NoMiscFees_15);
    set_field(noMiscFees_0_2, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_15);
    set_field(noMiscFees_0_2, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_15);
    set_field(noMiscFees_0_2, FIX::MiscFeeType{"STRING_6"}, MiscFeesGrp_NoMiscFees_15);
    all_values.push_back(MiscFeesGrp_NoMiscFees_15);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_28;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_938722452"}, Parties_NoPartyIDs_28);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_28);
    set_field(noPartyIDs_0_0, FIX::PartyRole{66}, Parties_NoPartyIDs_28);
    all_values.push_back(Parties_NoPartyIDs_28);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_61;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1177685152"}, PtysSubGrp_NoPartySubIDs_61);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_61);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_61);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_62;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_952520675"}, PtysSubGrp_NoPartySubIDs_62);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_62);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_62);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_29;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1444098419"}, Parties_NoPartyIDs_29);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_29);
    set_field(noPartyIDs_0_1, FIX::PartyRole{80}, Parties_NoPartyIDs_29);
    all_values.push_back(Parties_NoPartyIDs_29);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_63;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_314825780"}, PtysSubGrp_NoPartySubIDs_63);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_63);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_63);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_6;
  set_field(msg, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_6);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_Treasury"}, SpreadOrBenchmarkCurveData_6);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_120886055"}, SpreadOrBenchmarkCurveData_6);
  FIX::BenchmarkPrice BenchmarkPrice_6;
  BenchmarkPrice_6.setString("19806223");
set_field(msg, BenchmarkPrice_6, SpreadOrBenchmarkCurveData_6);
  set_field(msg, FIX::BenchmarkPriceType{1829017995}, SpreadOrBenchmarkCurveData_6);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1179671525"}, SpreadOrBenchmarkCurveData_6);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_646088764"}, SpreadOrBenchmarkCurveData_6);
  FIX::Spread Spread_6;
  Spread_6.setString("11104145");
set_field(msg, Spread_6, SpreadOrBenchmarkCurveData_6);
  all_values.push_back(SpreadOrBenchmarkCurveData_6);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_15;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_PSA"}, Stipulations_NoStipulations_15);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_976715435"}, Stipulations_NoStipulations_15);
    all_values.push_back(Stipulations_NoStipulations_15);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_16;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_PXSOURCE"}, Stipulations_NoStipulations_16);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_2066891339"}, Stipulations_NoStipulations_16);
    all_values.push_back(Stipulations_NoStipulations_16);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralRequest::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_8;
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_1844305854"}, TrdCollGrp_NoTrades_8);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_284180632"}, TrdCollGrp_NoTrades_8);
    all_values.push_back(TrdCollGrp_NoTrades_8);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_9;
    set_field(noTrades_0_1, FIX::SecondaryTradeReportID{"STRING_1595209178"}, TrdCollGrp_NoTrades_9);
    set_field(noTrades_0_1, FIX::TradeReportID{"STRING_1275751259"}, TrdCollGrp_NoTrades_9);
    all_values.push_back(TrdCollGrp_NoTrades_9);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_9;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_E.W"}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_PR"}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(21, 57, 6, 12, 4, 2002)}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1610175956"}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{2}, TrdRegTimestamps_NoTrdRegTimestamps_9);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_9);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_10;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_TS"}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_AR"}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(6, 26, 58, 9, 5, 2000)}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_876308352"}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{7}, TrdRegTimestamps_NoTrdRegTimestamps_10);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_10);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_11;
    set_field(noTrdRegTimestamps_0_2, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_DIR"}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskType{"STRING_AR"}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(8, 27, 4, 0, 12, 2009)}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampOrigin{"STRING_1973595580"}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampType{5}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_11);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_3;
    set_field(noUnderlyings_0_0, FIX::CollAction{2}, UndInstrmtCollGrp_NoUnderlyings_3);
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_3);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_23;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1862015444"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{924254196}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1319745596"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1324707753}, UnderlyingInstrument_23);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_23;
    UnderlyingAdjustedQuantity_23.setString("7419299");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_23, UnderlyingInstrument_23);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_23;
    UnderlyingAllocationPercent_23.setString("14.590000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_23, UnderlyingInstrument_23);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_23;
    UnderlyingAttachmentPoint_23.setString("18.040000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_680491784"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1007339633"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1369013851"}, UnderlyingInstrument_23);
    FIX::UnderlyingCapValue UnderlyingCapValue_23;
    UnderlyingCapValue_23.setString("17987251");
set_field(noUnderlyings_0_0, UnderlyingCapValue_23, UnderlyingInstrument_23);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_23;
    UnderlyingCashAmount_23.setString("3400529");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_23);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_23;
    UnderlyingContractMultiplier_23.setString("1982863");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1111373012}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_2144915121"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_595123860"}, UnderlyingInstrument_23);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_23;
    UnderlyingCouponRate_23.setString("7.920000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1530226551"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_23);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_23;
    UnderlyingCurrentValue_23.setString("3632635");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_23, UnderlyingInstrument_23);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_23;
    UnderlyingDetachmentPoint_23.setString("44.550000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_23, UnderlyingInstrument_23);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_23;
    UnderlyingDirtyPrice_23.setString("3629724");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_23, UnderlyingInstrument_23);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_23;
    UnderlyingEndPrice_23.setString("13640612");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_23, UnderlyingInstrument_23);
    FIX::UnderlyingEndValue UnderlyingEndValue_23;
    UnderlyingEndValue_23.setString("15860744");
set_field(noUnderlyings_0_0, UnderlyingEndValue_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{21631527}, UnderlyingInstrument_23);
    FIX::UnderlyingFXRate UnderlyingFXRate_23;
    UnderlyingFXRate_23.setString("11901731");
set_field(noUnderlyings_0_0, UnderlyingFXRate_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_23);
    FIX::UnderlyingFactor UnderlyingFactor_23;
    UnderlyingFactor_23.setString("10496012");
set_field(noUnderlyings_0_0, UnderlyingFactor_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{531947249}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_519407823"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1973855456"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1851692846"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1844115576"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_568301770"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2024924305"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_128983732"}, UnderlyingInstrument_23);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_23;
    UnderlyingNotionalPercentageOutstanding_23.setString("35.540000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_23);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_23;
    UnderlyingOriginalNotionalPercentageOutstanding_23.setString("75.830000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_900035037"}, UnderlyingInstrument_23);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_23;
    UnderlyingPriceUnitOfMeasureQty_23.setString("12248332");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{619120704}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1098321436}, UnderlyingInstrument_23);
    FIX::UnderlyingPx UnderlyingPx_23;
    UnderlyingPx_23.setString("1887225");
set_field(noUnderlyings_0_0, UnderlyingPx_23, UnderlyingInstrument_23);
    FIX::UnderlyingQty UnderlyingQty_23;
    UnderlyingQty_23.setString("6165521");
set_field(noUnderlyings_0_0, UnderlyingQty_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1693445296"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1990823371"}, UnderlyingInstrument_23);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_23;
    UnderlyingRepurchaseRate_23.setString("87.280000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{234745176}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_472865279"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_362558591"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_145455983"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_835837711"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1726619858"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1731530481"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_857469239"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_769309410"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_388922860"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_23);
    FIX::UnderlyingStartValue UnderlyingStartValue_23;
    UnderlyingStartValue_23.setString("13012566");
set_field(noUnderlyings_0_0, UnderlyingStartValue_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_908330683"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_23);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_23;
    UnderlyingStrikePrice_23.setString("6049626");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_23, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_154260429"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_882906514"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_733946343"}, UnderlyingInstrument_23);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1403053984"}, UnderlyingInstrument_23);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_23;
    UnderlyingUnitOfMeasureQty_23.setString("17676868");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_23, UnderlyingInstrument_23);
    all_values.push_back(UnderlyingInstrument_23);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_53;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_155605373"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_53);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_845036371"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_53);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_53);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_54;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_703580983"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_54);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1253926809"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_54);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_54);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_46;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1320133160"}, UnderlyingStipulations_NoUnderlyingStips_46);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_799888457"}, UnderlyingStipulations_NoUnderlyingStips_46);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_46);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_47;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_877098673"}, UnderlyingStipulations_NoUnderlyingStips_47);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1319428240"}, UnderlyingStipulations_NoUnderlyingStips_47);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_47);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_48;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1034633634"}, UnderlyingStipulations_NoUnderlyingStips_48);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1349963952"}, UnderlyingStipulations_NoUnderlyingStips_48);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_48);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_48;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1180089617"}, UndlyInstrumentParties_NoUndlyInstrumentParties_48);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_48);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1261123041}, UndlyInstrumentParties_NoUndlyInstrumentParties_48);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_48);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_895787255"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2030432451}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1153059311"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{655374106}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_4;
    set_field(noUnderlyings_0_1, FIX::CollAction{1}, UndInstrmtCollGrp_NoUnderlyings_4);
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_4);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_24;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_2061389994"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{241332765}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_42187672"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{518868957}, UnderlyingInstrument_24);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_24;
    UnderlyingAdjustedQuantity_24.setString("3955931");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_24, UnderlyingInstrument_24);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_24;
    UnderlyingAllocationPercent_24.setString("41.870000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_24, UnderlyingInstrument_24);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_24;
    UnderlyingAttachmentPoint_24.setString("53.000000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1798647178"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_545297344"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1337275579"}, UnderlyingInstrument_24);
    FIX::UnderlyingCapValue UnderlyingCapValue_24;
    UnderlyingCapValue_24.setString("19542525");
set_field(noUnderlyings_0_1, UnderlyingCapValue_24, UnderlyingInstrument_24);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_24;
    UnderlyingCashAmount_24.setString("13903337");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_24);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_24;
    UnderlyingContractMultiplier_24.setString("10606957");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{276609018}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1213506074"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1860584170"}, UnderlyingInstrument_24);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_24;
    UnderlyingCouponRate_24.setString("76.910000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_385450666"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_24);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_24;
    UnderlyingCurrentValue_24.setString("20674374");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_24, UnderlyingInstrument_24);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_24;
    UnderlyingDetachmentPoint_24.setString("37.730000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_24, UnderlyingInstrument_24);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_24;
    UnderlyingDirtyPrice_24.setString("3945060");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_24, UnderlyingInstrument_24);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_24;
    UnderlyingEndPrice_24.setString("11810768");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_24, UnderlyingInstrument_24);
    FIX::UnderlyingEndValue UnderlyingEndValue_24;
    UnderlyingEndValue_24.setString("5444765");
set_field(noUnderlyings_0_1, UnderlyingEndValue_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1290293267}, UnderlyingInstrument_24);
    FIX::UnderlyingFXRate UnderlyingFXRate_24;
    UnderlyingFXRate_24.setString("10640256");
set_field(noUnderlyings_0_1, UnderlyingFXRate_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_24);
    FIX::UnderlyingFactor UnderlyingFactor_24;
    UnderlyingFactor_24.setString("19456673");
set_field(noUnderlyings_0_1, UnderlyingFactor_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{100747509}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1611442233"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_39516490"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_142935182"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_2130311190"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_435109684"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1068029369"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1235642843"}, UnderlyingInstrument_24);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_24;
    UnderlyingNotionalPercentageOutstanding_24.setString("32.150000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_24);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_24;
    UnderlyingOriginalNotionalPercentageOutstanding_24.setString("47.740000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2040525766"}, UnderlyingInstrument_24);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_24;
    UnderlyingPriceUnitOfMeasureQty_24.setString("8561767");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{318807689}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{953737831}, UnderlyingInstrument_24);
    FIX::UnderlyingPx UnderlyingPx_24;
    UnderlyingPx_24.setString("11327857");
set_field(noUnderlyings_0_1, UnderlyingPx_24, UnderlyingInstrument_24);
    FIX::UnderlyingQty UnderlyingQty_24;
    UnderlyingQty_24.setString("15323137");
set_field(noUnderlyings_0_1, UnderlyingQty_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_666838353"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_139009842"}, UnderlyingInstrument_24);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_24;
    UnderlyingRepurchaseRate_24.setString("44.300000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1414572509}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_495197838"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1837718279"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1194912634"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_889703850"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_871311522"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1739389211"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_32513469"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1935337217"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1289441450"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_24);
    FIX::UnderlyingStartValue UnderlyingStartValue_24;
    UnderlyingStartValue_24.setString("20360847");
set_field(noUnderlyings_0_1, UnderlyingStartValue_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_753400036"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_24);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_24;
    UnderlyingStrikePrice_24.setString("7362275");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_24, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_305323368"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1099565629"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1971870421"}, UnderlyingInstrument_24);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_391596583"}, UnderlyingInstrument_24);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_24;
    UnderlyingUnitOfMeasureQty_24.setString("5654086");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_24, UnderlyingInstrument_24);
    all_values.push_back(UnderlyingInstrument_24);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_55;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_284638702"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_55);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1421585475"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_55);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_55);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_56;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_568629237"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_56);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1238376533"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_56);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_56);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_49;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_2100943000"}, UnderlyingStipulations_NoUnderlyingStips_49);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1905214886"}, UnderlyingStipulations_NoUnderlyingStips_49);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_49);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_50;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_545897467"}, UnderlyingStipulations_NoUnderlyingStips_50);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1871223782"}, UnderlyingStipulations_NoUnderlyingStips_50);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_50);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_49;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1041095305"}, UndlyInstrumentParties_NoUndlyInstrumentParties_49);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_49);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{219732733}, UndlyInstrumentParties_NoUndlyInstrumentParties_49);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_49);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_285286288"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1959121944}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1963312624"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{73139857}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_50;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1101079747"}, UndlyInstrumentParties_NoUndlyInstrumentParties_50);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_50);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{2109224584}, UndlyInstrumentParties_NoUndlyInstrumentParties_50);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_50);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1664223502"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{2140760844}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_443223713"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1969546871}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1092842826"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{267610487}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_51;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_213659806"}, UndlyInstrumentParties_NoUndlyInstrumentParties_51);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_51);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{517432035}, UndlyInstrumentParties_NoUndlyInstrumentParties_51);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_51);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_932353347"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1086061272}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1736675041"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1339240973}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1039520624"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{1494406279}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }

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
