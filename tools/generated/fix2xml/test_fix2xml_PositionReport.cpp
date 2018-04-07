#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionReport_0;
  set_field(msg, FIX::Account{"STRING_418714030"}, PositionReport_0);
  set_field(msg, FIX::AccountType{8}, PositionReport_0);
  set_field(msg, FIX::AcctIDSource{5}, PositionReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_379672047"}, PositionReport_0);
  set_field(msg, FIX::Currency{"USD"}, PositionReport_0);
  set_field(msg, FIX::DeliveryDate{"LOCALMKTDATE_1307270115"}, PositionReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1700974428"}, PositionReport_0);
  set_field(msg, FIX::EncodedTextLen{1173061514}, PositionReport_0);
  set_field(msg, FIX::MatchStatus{'1'}, PositionReport_0);
  set_field(msg, FIX::MessageEventSource{"STRING_419446641"}, PositionReport_0);
  set_field(msg, FIX::ModelType{0}, PositionReport_0);
  set_field(msg, FIX::PosMaintRptID{"STRING_1828106857"}, PositionReport_0);
  set_field(msg, FIX::PosReqID{"STRING_631257696"}, PositionReport_0);
  set_field(msg, FIX::PosReqResult{1}, PositionReport_0);
  set_field(msg, FIX::PosReqType{2}, PositionReport_0);
  FIX::PriceDelta PriceDelta_5;
  PriceDelta_5.setString("18820589");
set_field(msg, PriceDelta_5, PositionReport_0);
  set_field(msg, FIX::PriceType{19}, PositionReport_0);
  FIX::PriorSettlPrice PriorSettlPrice_2;
  PriorSettlPrice_2.setString("14015744");
set_field(msg, PriorSettlPrice_2, PositionReport_0);
  set_field(msg, FIX::RegistStatus{'N'}, PositionReport_0);
  set_field(msg, FIX::SettlCurrency{"EUR"}, PositionReport_0);
  FIX::SettlPrice SettlPrice_2;
  SettlPrice_2.setString("12508010");
set_field(msg, SettlPrice_2, PositionReport_0);
  set_field(msg, FIX::SettlPriceType{1}, PositionReport_0);
  set_field(msg, FIX::SettlSessID{"STRING_ETH"}, PositionReport_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_1900454335"}, PositionReport_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, PositionReport_0);
  set_field(msg, FIX::Text{"STRING_2112286475"}, PositionReport_0);
  set_field(msg, FIX::TotalNumPosReports{1150484430}, PositionReport_0);
  set_field(msg, FIX::UnsolicitedIndicator{true}, PositionReport_0);
  all_values.push_back(PositionReport_0);

  all_compo_names.insert("PositionReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_11;
  set_field(msg, FIX::ApplID{"STRING_571243033"}, ApplicationSequenceControl_11);
  set_field(msg, FIX::ApplLastSeqNum{1569198460}, ApplicationSequenceControl_11);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_11);
  set_field(msg, FIX::ApplSeqNum{398346154}, ApplicationSequenceControl_11);
  all_values.push_back(ApplicationSequenceControl_11);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_69;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1477215065"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1673120182}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1108656974"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1030705845}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_698698048"}, InstrumentLeg_69);
    FIX::LegContractMultiplier LegContractMultiplier_69;
    LegContractMultiplier_69.setString("11840134");
set_field(noLegs_0_0, LegContractMultiplier_69, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1450152486}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_88727896"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_864636654"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2081410183"}, InstrumentLeg_69);
    FIX::LegCouponRate LegCouponRate_69;
    LegCouponRate_69.setString("27.790000");
set_field(noLegs_0_0, LegCouponRate_69, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1235053003"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_489143767"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{576968027}, InstrumentLeg_69);
    FIX::LegFactor LegFactor_69;
    LegFactor_69.setString("9848488");
set_field(noLegs_0_0, LegFactor_69, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1170348}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1827769065"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1973743310"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1638702575"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1580739753"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1652828122"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1603505402"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_583740535"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_449775320"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_69);
    FIX::LegOptionRatio LegOptionRatio_69;
    LegOptionRatio_69.setString("54553");
set_field(noLegs_0_0, LegOptionRatio_69, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_338404354"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_425610941"}, InstrumentLeg_69);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_69;
    LegPriceUnitOfMeasureQty_69.setString("19543258");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_69, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegProduct{1815619419}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegPutOrCall{2098731124}, InstrumentLeg_69);
    FIX::LegRatioQty LegRatioQty_69;
    LegRatioQty_69.setString("9154991");
set_field(noLegs_0_0, LegRatioQty_69, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_698841617"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_649945524"}, InstrumentLeg_69);
    FIX::LegRepurchaseRate LegRepurchaseRate_69;
    LegRepurchaseRate_69.setString("26.260000");
set_field(noLegs_0_0, LegRepurchaseRate_69, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1510455}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_738673421"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_816665632"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_2082920638"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_592232552"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_2051718635"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1751422522"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegSide{'3'}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_393378754"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_69);
    FIX::LegStrikePrice LegStrikePrice_69;
    LegStrikePrice_69.setString("3945491");
set_field(noLegs_0_0, LegStrikePrice_69, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_2008675966"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1174402582"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_2033251677"}, InstrumentLeg_69);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1441932071"}, InstrumentLeg_69);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_69;
    LegUnitOfMeasureQty_69.setString("6797470");
set_field(noLegs_0_0, LegUnitOfMeasureQty_69, InstrumentLeg_69);
    all_values.push_back(InstrumentLeg_69);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_142;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_2025672606"}, LegSecAltIDGrp_NoLegSecurityAltID_142);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1129522376"}, LegSecAltIDGrp_NoLegSecurityAltID_142);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_142);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::PositionReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_70;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1516538219"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{2031127954}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1467926731"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1942149160}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1837970161"}, InstrumentLeg_70);
    FIX::LegContractMultiplier LegContractMultiplier_70;
    LegContractMultiplier_70.setString("11360625");
set_field(noLegs_0_1, LegContractMultiplier_70, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1893396636}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_605985694"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1834904119"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_395858513"}, InstrumentLeg_70);
    FIX::LegCouponRate LegCouponRate_70;
    LegCouponRate_70.setString("46.720000");
set_field(noLegs_0_1, LegCouponRate_70, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1836414575"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegCurrency{"USD"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1771851565"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1726764486}, InstrumentLeg_70);
    FIX::LegFactor LegFactor_70;
    LegFactor_70.setString("12789152");
set_field(noLegs_0_1, LegFactor_70, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1375790439}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_2090058532"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1672294045"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1556697340"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1290717803"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_2066843148"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1417889659"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_317636737"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1952611177"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'7'}, InstrumentLeg_70);
    FIX::LegOptionRatio LegOptionRatio_70;
    LegOptionRatio_70.setString("9973837");
set_field(noLegs_0_1, LegOptionRatio_70, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1294400961"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_590527041"}, InstrumentLeg_70);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_70;
    LegPriceUnitOfMeasureQty_70.setString("21269061");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_70, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegProduct{663455532}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegPutOrCall{474171347}, InstrumentLeg_70);
    FIX::LegRatioQty LegRatioQty_70;
    LegRatioQty_70.setString("14473492");
set_field(noLegs_0_1, LegRatioQty_70, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_458121044"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_164657860"}, InstrumentLeg_70);
    FIX::LegRepurchaseRate LegRepurchaseRate_70;
    LegRepurchaseRate_70.setString("81.070000");
set_field(noLegs_0_1, LegRepurchaseRate_70, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{204034033}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_770643554"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_123348579"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_599892546"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1328658227"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1959763154"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1734424480"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegSide{'5'}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1584131071"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_70);
    FIX::LegStrikePrice LegStrikePrice_70;
    LegStrikePrice_70.setString("8124378");
set_field(noLegs_0_1, LegStrikePrice_70, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1256280202"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1359580572"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_221651555"}, InstrumentLeg_70);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_399514358"}, InstrumentLeg_70);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_70;
    LegUnitOfMeasureQty_70.setString("12789400");
set_field(noLegs_0_1, LegUnitOfMeasureQty_70, InstrumentLeg_70);
    all_values.push_back(InstrumentLeg_70);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_143;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_717151095"}, LegSecAltIDGrp_NoLegSecurityAltID_143);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1084067602"}, LegSecAltIDGrp_NoLegSecurityAltID_143);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_143);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_52;
  FIX::AttachmentPoint AttachmentPoint_52;
  AttachmentPoint_52.setString("56.490000");
set_field(msg, AttachmentPoint_52, Instrument_52);
  set_field(msg, FIX::CFICode{"STRING_1714534889"}, Instrument_52);
  set_field(msg, FIX::CPProgram{99}, Instrument_52);
  set_field(msg, FIX::CPRegType{"STRING_794922690"}, Instrument_52);
  FIX::CapPrice CapPrice_52;
  CapPrice_52.setString("16939574");
set_field(msg, CapPrice_52, Instrument_52);
  FIX::ContractMultiplier ContractMultiplier_52;
  ContractMultiplier_52.setString("8944404");
set_field(msg, ContractMultiplier_52, Instrument_52);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_52);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_993823016"}, Instrument_52);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1352561491"}, Instrument_52);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1433751897"}, Instrument_52);
  FIX::CouponRate CouponRate_52;
  CouponRate_52.setString("11.230000");
set_field(msg, CouponRate_52, Instrument_52);
  set_field(msg, FIX::CreditRating{"STRING_1556595524"}, Instrument_52);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_56911803"}, Instrument_52);
  FIX::DetachmentPoint DetachmentPoint_52;
  DetachmentPoint_52.setString("97.020000");
set_field(msg, DetachmentPoint_52, Instrument_52);
  set_field(msg, FIX::EncodedIssuer{"DATA_9004422"}, Instrument_52);
  set_field(msg, FIX::EncodedIssuerLen{1385570030}, Instrument_52);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1365379208"}, Instrument_52);
  set_field(msg, FIX::EncodedSecurityDescLen{1743428902}, Instrument_52);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_52);
  FIX::Factor Factor_52;
  Factor_52.setString("8020266");
set_field(msg, Factor_52, Instrument_52);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_52);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_52);
  FIX::FloorPrice FloorPrice_52;
  FloorPrice_52.setString("16144644");
set_field(msg, FloorPrice_52, Instrument_52);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_52);
  set_field(msg, FIX::InstrRegistry{"STRING_840808365"}, Instrument_52);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_52);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_417961485"}, Instrument_52);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_2119748438"}, Instrument_52);
  set_field(msg, FIX::Issuer{"STRING_1328173617"}, Instrument_52);
  set_field(msg, FIX::ListMethod{1}, Instrument_52);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1056332392"}, Instrument_52);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1532569266"}, Instrument_52);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_702163822"}, Instrument_52);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1287317307"}, Instrument_52);
  FIX::MinPriceIncrement MinPriceIncrement_52;
  MinPriceIncrement_52.setString("1800083");
set_field(msg, MinPriceIncrement_52, Instrument_52);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_52;
  MinPriceIncrementAmount_52.setString("2486375");
set_field(msg, MinPriceIncrementAmount_52, Instrument_52);
  set_field(msg, FIX::NTPositionLimit{34274106}, Instrument_52);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_52;
  NotionalPercentageOutstanding_52.setString("23.450000");
set_field(msg, NotionalPercentageOutstanding_52, Instrument_52);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_52);
  FIX::OptPayoutAmount OptPayoutAmount_52;
  OptPayoutAmount_52.setString("13868355");
set_field(msg, OptPayoutAmount_52, Instrument_52);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_52);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_52;
  OriginalNotionalPercentageOutstanding_52.setString("80.760000");
set_field(msg, OriginalNotionalPercentageOutstanding_52, Instrument_52);
  set_field(msg, FIX::Pool{"STRING_795947474"}, Instrument_52);
  set_field(msg, FIX::PositionLimit{792282397}, Instrument_52);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_52);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_804951896"}, Instrument_52);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_52;
  PriceUnitOfMeasureQty_52.setString("303687");
set_field(msg, PriceUnitOfMeasureQty_52, Instrument_52);
  set_field(msg, FIX::Product{2}, Instrument_52);
  set_field(msg, FIX::ProductComplex{"STRING_400897151"}, Instrument_52);
  set_field(msg, FIX::PutOrCall{0}, Instrument_52);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_2097749971"}, Instrument_52);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1310547724"}, Instrument_52);
  FIX::RepurchaseRate RepurchaseRate_52;
  RepurchaseRate_52.setString("14.870000");
set_field(msg, RepurchaseRate_52, Instrument_52);
  set_field(msg, FIX::RepurchaseTerm{1564730818}, Instrument_52);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_52);
  set_field(msg, FIX::SecurityDesc{"STRING_146346204"}, Instrument_52);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1253363221"}, Instrument_52);
  set_field(msg, FIX::SecurityGroup{"STRING_1746956337"}, Instrument_52);
  set_field(msg, FIX::SecurityID{"STRING_118610994"}, Instrument_52);
  set_field(msg, FIX::SecurityIDSource{"STRING_B"}, Instrument_52);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_52);
  set_field(msg, FIX::SecuritySubType{"STRING_1174943386"}, Instrument_52);
  set_field(msg, FIX::SecurityType{"STRING_UST"}, Instrument_52);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_52);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_52);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_2146630764"}, Instrument_52);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1685386677"}, Instrument_52);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_52);
  FIX::StrikeMultiplier StrikeMultiplier_52;
  StrikeMultiplier_52.setString("7803636");
set_field(msg, StrikeMultiplier_52, Instrument_52);
  FIX::StrikePrice StrikePrice_52;
  StrikePrice_52.setString("17358867");
set_field(msg, StrikePrice_52, Instrument_52);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_52);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_52;
  StrikePriceBoundaryPrecision_52.setString("17.060000");
set_field(msg, StrikePriceBoundaryPrecision_52, Instrument_52);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_52);
  FIX::StrikeValue StrikeValue_52;
  StrikeValue_52.setString("8284188");
set_field(msg, StrikeValue_52, Instrument_52);
  set_field(msg, FIX::Symbol{"STRING_1235435837"}, Instrument_52);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_52);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_52);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_52);
  set_field(msg, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_52);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_52;
  UnitOfMeasureQty_52.setString("6830976");
set_field(msg, UnitOfMeasureQty_52, Instrument_52);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_52);
  all_values.push_back(Instrument_52);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_104;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_104);
    FIX::ComplexEventPrice ComplexEventPrice_104;
    ComplexEventPrice_104.setString("18986726");
set_field(noComplexEvents_0_0, ComplexEventPrice_104, ComplexEvents_NoComplexEvents_104);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_104);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_104;
    ComplexEventPriceBoundaryPrecision_104.setString("16.740000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_104, ComplexEvents_NoComplexEvents_104);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_104);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_104);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_104;
    ComplexOptPayoutAmount_104.setString("2535926");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_104, ComplexEvents_NoComplexEvents_104);
    all_values.push_back(ComplexEvents_NoComplexEvents_104);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_223;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 2, 53, 4, 7, 2000)}, ComplexEventDates_NoComplexEventDates_223);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 12, 13, 14, 7, 2014)}, ComplexEventDates_NoComplexEventDates_223);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_223);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_447;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 59, 49)}, ComplexEventTimes_NoComplexEventTimes_447);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 21, 44)}, ComplexEventTimes_NoComplexEventTimes_447);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_447);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_224;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 46, 13, 20, 2, 2005)}, ComplexEventDates_NoComplexEventDates_224);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 48, 8, 7, 2, 2014)}, ComplexEventDates_NoComplexEventDates_224);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_224);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_448;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 49, 38)}, ComplexEventTimes_NoComplexEventTimes_448);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 38, 50)}, ComplexEventTimes_NoComplexEventTimes_448);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_448);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_225;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 49, 41, 23, 11, 2012)}, ComplexEventDates_NoComplexEventDates_225);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 39, 30, 18, 4, 2000)}, ComplexEventDates_NoComplexEventDates_225);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_225);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_449;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 24, 2)}, ComplexEventTimes_NoComplexEventTimes_449);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 21, 59)}, ComplexEventTimes_NoComplexEventTimes_449);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_449);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_105;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_105);
    FIX::ComplexEventPrice ComplexEventPrice_105;
    ComplexEventPrice_105.setString("10910395");
set_field(noComplexEvents_0_1, ComplexEventPrice_105, ComplexEvents_NoComplexEvents_105);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_105);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_105;
    ComplexEventPriceBoundaryPrecision_105.setString("59.200000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_105, ComplexEvents_NoComplexEvents_105);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_105);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_105);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_105;
    ComplexOptPayoutAmount_105.setString("9982301");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_105, ComplexEvents_NoComplexEvents_105);
    all_values.push_back(ComplexEvents_NoComplexEvents_105);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_226;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 21, 10, 19, 8, 2016)}, ComplexEventDates_NoComplexEventDates_226);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 43, 18, 27, 4, 2006)}, ComplexEventDates_NoComplexEventDates_226);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_226);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_450;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 52, 55)}, ComplexEventTimes_NoComplexEventTimes_450);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 16, 42)}, ComplexEventTimes_NoComplexEventTimes_450);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_450);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_451;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 23, 12)}, ComplexEventTimes_NoComplexEventTimes_451);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 55, 29)}, ComplexEventTimes_NoComplexEventTimes_451);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_451);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_452;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 50, 55)}, ComplexEventTimes_NoComplexEventTimes_452);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 51, 6)}, ComplexEventTimes_NoComplexEventTimes_452);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_452);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_227;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 24, 26, 18, 7, 2001)}, ComplexEventDates_NoComplexEventDates_227);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 53, 38, 17, 4, 2005)}, ComplexEventDates_NoComplexEventDates_227);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_227);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_453;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 58, 59)}, ComplexEventTimes_NoComplexEventTimes_453);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 54, 56)}, ComplexEventTimes_NoComplexEventTimes_453);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_453);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_454;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 38, 22)}, ComplexEventTimes_NoComplexEventTimes_454);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 13, 10)}, ComplexEventTimes_NoComplexEventTimes_454);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_454);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::PositionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_455;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 26, 28)}, ComplexEventTimes_NoComplexEventTimes_455);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 21, 57)}, ComplexEventTimes_NoComplexEventTimes_455);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_455);
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
    FIX50SP2::PositionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_108;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_761086207"}, EvntGrp_NoEvents_108);
    FIX::EventPx EventPx_108;
    EventPx_108.setString("17153957");
set_field(noEvents_0_0, EventPx_108, EvntGrp_NoEvents_108);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1112414883"}, EvntGrp_NoEvents_108);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(19, 38, 49, 1, 5, 2006)}, EvntGrp_NoEvents_108);
    set_field(noEvents_0_0, FIX::EventType{1}, EvntGrp_NoEvents_108);
    all_values.push_back(EvntGrp_NoEvents_108);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_109;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_4630038"}, EvntGrp_NoEvents_109);
    FIX::EventPx EventPx_109;
    EventPx_109.setString("614284");
set_field(noEvents_0_1, EventPx_109, EvntGrp_NoEvents_109);
    set_field(noEvents_0_1, FIX::EventText{"STRING_242662988"}, EvntGrp_NoEvents_109);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(16, 46, 15, 24, 6, 2015)}, EvntGrp_NoEvents_109);
    set_field(noEvents_0_1, FIX::EventType{15}, EvntGrp_NoEvents_109);
    all_values.push_back(EvntGrp_NoEvents_109);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_98;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1739315581"}, InstrumentParties_NoInstrumentParties_98);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_98);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1488132119}, InstrumentParties_NoInstrumentParties_98);
    all_values.push_back(InstrumentParties_NoInstrumentParties_98);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_632816872"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{298002853}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_58357017"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1851697023}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1059089060"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1773752725}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::PositionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_99;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_816628258"}, InstrumentParties_NoInstrumentParties_99);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_99);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{408134064}, InstrumentParties_NoInstrumentParties_99);
    all_values.push_back(InstrumentParties_NoInstrumentParties_99);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1737725411"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{763120389}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1382292057"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{665210571}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202;
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubID{"STRING_546444381"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202);
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubIDType{1386922096}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_107;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_789107369"}, SecAltIDGrp_NoSecurityAltID_107);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_2015160429"}, SecAltIDGrp_NoSecurityAltID_107);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_107);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_108;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1541516995"}, SecAltIDGrp_NoSecurityAltID_108);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1363665435"}, SecAltIDGrp_NoSecurityAltID_108);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_108);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::PositionReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_109;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1022458937"}, SecAltIDGrp_NoSecurityAltID_109);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1129148179"}, SecAltIDGrp_NoSecurityAltID_109);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_109);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_104;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1614096765"}, SecurityXML_104);
  set_field(msg, FIX::SecurityXMLLen{1175402378}, SecurityXML_104);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_482127526"}, SecurityXML_104);
  all_values.push_back(SecurityXML_104);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_97;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_767234311"}, Parties_NoPartyIDs_97);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_97);
    set_field(noPartyIDs_0_0, FIX::PartyRole{34}, Parties_NoPartyIDs_97);
    all_values.push_back(Parties_NoPartyIDs_97);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_198;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1420408591"}, PtysSubGrp_NoPartySubIDs_198);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_198);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_198);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_98;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_966893077"}, Parties_NoPartyIDs_98);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_98);
    set_field(noPartyIDs_0_1, FIX::PartyRole{83}, Parties_NoPartyIDs_98);
    all_values.push_back(Parties_NoPartyIDs_98);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_199;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1941250224"}, PtysSubGrp_NoPartySubIDs_199);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_199);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_199);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PosUndInstrmtGrp
  // Group PosUndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionReport::NoUnderlyings noUnderlyings_0_0;
    // PosUndInstrmtGrp.NoUnderlyings
    multiset<string> PosUndInstrmtGrp_NoUnderlyings_0;
    FIX::UnderlyingDeliveryAmount UnderlyingDeliveryAmount_0;
    UnderlyingDeliveryAmount_0.setString("20935380");
set_field(noUnderlyings_0_0, UnderlyingDeliveryAmount_0, PosUndInstrmtGrp_NoUnderlyings_0);
    FIX::UnderlyingSettlPrice UnderlyingSettlPrice_1;
    UnderlyingSettlPrice_1.setString("15327980");
set_field(noUnderlyings_0_0, UnderlyingSettlPrice_1, PosUndInstrmtGrp_NoUnderlyings_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlPriceType{1764416608}, PosUndInstrmtGrp_NoUnderlyings_0);
    all_values.push_back(PosUndInstrmtGrp_NoUnderlyings_0);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingAmount
    // Group UnderlyingAmount.NoUnderlyingAmounts
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_0_1_0;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_0;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_0;
      UnderlyingCollectAmount_0.setString("505249");
set_field(noUnderlyingAmounts_0_1_0, UnderlyingCollectAmount_0, UnderlyingAmount_NoUnderlyingAmounts_0);
      FIX::UnderlyingPayAmount UnderlyingPayAmount_0;
      UnderlyingPayAmount_0.setString("1633773");
set_field(noUnderlyingAmounts_0_1_0, UnderlyingPayAmount_0, UnderlyingAmount_NoUnderlyingAmounts_0);
      set_field(noUnderlyingAmounts_0_1_0, FIX::UnderlyingSettlementDate{"LOCALMKTDATE_567784911"}, UnderlyingAmount_NoUnderlyingAmounts_0);
      set_field(noUnderlyingAmounts_0_1_0, FIX::UnderlyingSettlementStatus{"STRING_777163988"}, UnderlyingAmount_NoUnderlyingAmounts_0);
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_0);
      all_compo_names.insert("...NoUnderlyings...NoUnderlyingAmounts");

      noUnderlyings_0_0.addGroup(noUnderlyingAmounts_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_0_1_1;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_1;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_1;
      UnderlyingCollectAmount_1.setString("9524847");
set_field(noUnderlyingAmounts_0_1_1, UnderlyingCollectAmount_1, UnderlyingAmount_NoUnderlyingAmounts_1);
      FIX::UnderlyingPayAmount UnderlyingPayAmount_1;
      UnderlyingPayAmount_1.setString("4354616");
set_field(noUnderlyingAmounts_0_1_1, UnderlyingPayAmount_1, UnderlyingAmount_NoUnderlyingAmounts_1);
      set_field(noUnderlyingAmounts_0_1_1, FIX::UnderlyingSettlementDate{"LOCALMKTDATE_171197335"}, UnderlyingAmount_NoUnderlyingAmounts_1);
      set_field(noUnderlyingAmounts_0_1_1, FIX::UnderlyingSettlementStatus{"STRING_168666499"}, UnderlyingAmount_NoUnderlyingAmounts_1);
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_1);
      all_compo_names.insert("...NoUnderlyings...NoUnderlyingAmounts");

      noUnderlyings_0_0.addGroup(noUnderlyingAmounts_0_1_1);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_90;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1457920629"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1300345514}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1782763264"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{485839359}, UnderlyingInstrument_90);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_90;
    UnderlyingAdjustedQuantity_90.setString("17824730");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_90, UnderlyingInstrument_90);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_90;
    UnderlyingAllocationPercent_90.setString("80.320000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_90, UnderlyingInstrument_90);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_90;
    UnderlyingAttachmentPoint_90.setString("36.710000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_422581111"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_410281272"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_14126082"}, UnderlyingInstrument_90);
    FIX::UnderlyingCapValue UnderlyingCapValue_90;
    UnderlyingCapValue_90.setString("18429897");
set_field(noUnderlyings_0_0, UnderlyingCapValue_90, UnderlyingInstrument_90);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_90;
    UnderlyingCashAmount_90.setString("18398510");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_90);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_90;
    UnderlyingContractMultiplier_90.setString("8201280");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{33542518}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1574181314"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_613894596"}, UnderlyingInstrument_90);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_90;
    UnderlyingCouponRate_90.setString("87.930000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_427993885"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_90);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_90;
    UnderlyingCurrentValue_90.setString("449268");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_90, UnderlyingInstrument_90);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_90;
    UnderlyingDetachmentPoint_90.setString("54.650000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_90, UnderlyingInstrument_90);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_90;
    UnderlyingDirtyPrice_90.setString("14119381");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_90, UnderlyingInstrument_90);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_90;
    UnderlyingEndPrice_90.setString("2083041");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_90, UnderlyingInstrument_90);
    FIX::UnderlyingEndValue UnderlyingEndValue_90;
    UnderlyingEndValue_90.setString("3085967");
set_field(noUnderlyings_0_0, UnderlyingEndValue_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{41618485}, UnderlyingInstrument_90);
    FIX::UnderlyingFXRate UnderlyingFXRate_90;
    UnderlyingFXRate_90.setString("11607888");
set_field(noUnderlyings_0_0, UnderlyingFXRate_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_90);
    FIX::UnderlyingFactor UnderlyingFactor_90;
    UnderlyingFactor_90.setString("2128158");
set_field(noUnderlyings_0_0, UnderlyingFactor_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1329455398}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_54495402"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1513161334"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_964735014"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_540334761"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1148150727"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_243449398"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1793408432"}, UnderlyingInstrument_90);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_90;
    UnderlyingNotionalPercentageOutstanding_90.setString("18.380000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'6'}, UnderlyingInstrument_90);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_90;
    UnderlyingOriginalNotionalPercentageOutstanding_90.setString("45.150000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1266237892"}, UnderlyingInstrument_90);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_90;
    UnderlyingPriceUnitOfMeasureQty_90.setString("3460980");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{641070026}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{2086365912}, UnderlyingInstrument_90);
    FIX::UnderlyingPx UnderlyingPx_90;
    UnderlyingPx_90.setString("3796405");
set_field(noUnderlyings_0_0, UnderlyingPx_90, UnderlyingInstrument_90);
    FIX::UnderlyingQty UnderlyingQty_90;
    UnderlyingQty_90.setString("677676");
set_field(noUnderlyings_0_0, UnderlyingQty_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_552776860"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_208255700"}, UnderlyingInstrument_90);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_90;
    UnderlyingRepurchaseRate_90.setString("15.770000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1112725862}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1569668884"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_540688423"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_853537679"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_834123381"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_748992610"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1162134407"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_875741866"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1909781509"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1906192828"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_90);
    FIX::UnderlyingStartValue UnderlyingStartValue_90;
    UnderlyingStartValue_90.setString("10917532");
set_field(noUnderlyings_0_0, UnderlyingStartValue_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1960688230"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_90);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_90;
    UnderlyingStrikePrice_90.setString("3535393");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_90, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1602386099"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_152454024"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_2146947776"}, UnderlyingInstrument_90);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1025634289"}, UnderlyingInstrument_90);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_90;
    UnderlyingUnitOfMeasureQty_90.setString("8061846");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_90, UnderlyingInstrument_90);
    all_values.push_back(UnderlyingInstrument_90);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_191;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_144388533"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_191);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1152282731"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_191);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_191);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_180;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_83270797"}, UnderlyingStipulations_NoUnderlyingStips_180);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1531923286"}, UnderlyingStipulations_NoUnderlyingStips_180);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_180);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_186;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_636047658"}, UndlyInstrumentParties_NoUndlyInstrumentParties_186);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_186);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{864114291}, UndlyInstrumentParties_NoUndlyInstrumentParties_186);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_186);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1162364223"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1404802714}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_369);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_454827552"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1996487604}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_370);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_6311677"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1616961959}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_371);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::PositionReport::NoUnderlyings noUnderlyings_0_1;
    // PosUndInstrmtGrp.NoUnderlyings
    multiset<string> PosUndInstrmtGrp_NoUnderlyings_1;
    FIX::UnderlyingDeliveryAmount UnderlyingDeliveryAmount_1;
    UnderlyingDeliveryAmount_1.setString("7247458");
set_field(noUnderlyings_0_1, UnderlyingDeliveryAmount_1, PosUndInstrmtGrp_NoUnderlyings_1);
    FIX::UnderlyingSettlPrice UnderlyingSettlPrice_2;
    UnderlyingSettlPrice_2.setString("19160931");
set_field(noUnderlyings_0_1, UnderlyingSettlPrice_2, PosUndInstrmtGrp_NoUnderlyings_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlPriceType{1375671139}, PosUndInstrmtGrp_NoUnderlyings_1);
    all_values.push_back(PosUndInstrmtGrp_NoUnderlyings_1);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingAmount
    // Group UnderlyingAmount.NoUnderlyingAmounts
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_1_1_0;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_2;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_2;
      UnderlyingCollectAmount_2.setString("8603627");
set_field(noUnderlyingAmounts_1_1_0, UnderlyingCollectAmount_2, UnderlyingAmount_NoUnderlyingAmounts_2);
      FIX::UnderlyingPayAmount UnderlyingPayAmount_2;
      UnderlyingPayAmount_2.setString("11888757");
set_field(noUnderlyingAmounts_1_1_0, UnderlyingPayAmount_2, UnderlyingAmount_NoUnderlyingAmounts_2);
      set_field(noUnderlyingAmounts_1_1_0, FIX::UnderlyingSettlementDate{"LOCALMKTDATE_120055232"}, UnderlyingAmount_NoUnderlyingAmounts_2);
      set_field(noUnderlyingAmounts_1_1_0, FIX::UnderlyingSettlementStatus{"STRING_769367423"}, UnderlyingAmount_NoUnderlyingAmounts_2);
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_2);
      all_compo_names.insert("...NoUnderlyings...NoUnderlyingAmounts");

      noUnderlyings_0_1.addGroup(noUnderlyingAmounts_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_1_1_1;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_3;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_3;
      UnderlyingCollectAmount_3.setString("15424150");
set_field(noUnderlyingAmounts_1_1_1, UnderlyingCollectAmount_3, UnderlyingAmount_NoUnderlyingAmounts_3);
      FIX::UnderlyingPayAmount UnderlyingPayAmount_3;
      UnderlyingPayAmount_3.setString("17224413");
set_field(noUnderlyingAmounts_1_1_1, UnderlyingPayAmount_3, UnderlyingAmount_NoUnderlyingAmounts_3);
      set_field(noUnderlyingAmounts_1_1_1, FIX::UnderlyingSettlementDate{"LOCALMKTDATE_921821447"}, UnderlyingAmount_NoUnderlyingAmounts_3);
      set_field(noUnderlyingAmounts_1_1_1, FIX::UnderlyingSettlementStatus{"STRING_1541879193"}, UnderlyingAmount_NoUnderlyingAmounts_3);
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_3);
      all_compo_names.insert("...NoUnderlyings...NoUnderlyingAmounts");

      noUnderlyings_0_1.addGroup(noUnderlyingAmounts_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingAmounts noUnderlyingAmounts_1_1_2;
      // UnderlyingAmount.NoUnderlyingAmounts
      multiset<string> UnderlyingAmount_NoUnderlyingAmounts_4;
      FIX::UnderlyingCollectAmount UnderlyingCollectAmount_4;
      UnderlyingCollectAmount_4.setString("6005919");
set_field(noUnderlyingAmounts_1_1_2, UnderlyingCollectAmount_4, UnderlyingAmount_NoUnderlyingAmounts_4);
      FIX::UnderlyingPayAmount UnderlyingPayAmount_4;
      UnderlyingPayAmount_4.setString("17280061");
set_field(noUnderlyingAmounts_1_1_2, UnderlyingPayAmount_4, UnderlyingAmount_NoUnderlyingAmounts_4);
      set_field(noUnderlyingAmounts_1_1_2, FIX::UnderlyingSettlementDate{"LOCALMKTDATE_1201394188"}, UnderlyingAmount_NoUnderlyingAmounts_4);
      set_field(noUnderlyingAmounts_1_1_2, FIX::UnderlyingSettlementStatus{"STRING_744980507"}, UnderlyingAmount_NoUnderlyingAmounts_4);
      all_values.push_back(UnderlyingAmount_NoUnderlyingAmounts_4);
      all_compo_names.insert("...NoUnderlyings...NoUnderlyingAmounts");

      noUnderlyings_0_1.addGroup(noUnderlyingAmounts_1_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_91;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_732805226"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1501979209}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_828251304"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{117244864}, UnderlyingInstrument_91);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_91;
    UnderlyingAdjustedQuantity_91.setString("18703319");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_91, UnderlyingInstrument_91);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_91;
    UnderlyingAllocationPercent_91.setString("89.620000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_91, UnderlyingInstrument_91);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_91;
    UnderlyingAttachmentPoint_91.setString("38.510000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_586962567"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1065588835"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_872304426"}, UnderlyingInstrument_91);
    FIX::UnderlyingCapValue UnderlyingCapValue_91;
    UnderlyingCapValue_91.setString("19917652");
set_field(noUnderlyings_0_1, UnderlyingCapValue_91, UnderlyingInstrument_91);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_91;
    UnderlyingCashAmount_91.setString("15204163");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_91);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_91;
    UnderlyingContractMultiplier_91.setString("19980769");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{989894698}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1446054204"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1766686497"}, UnderlyingInstrument_91);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_91;
    UnderlyingCouponRate_91.setString("21.900000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1111874064"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_91);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_91;
    UnderlyingCurrentValue_91.setString("12319292");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_91, UnderlyingInstrument_91);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_91;
    UnderlyingDetachmentPoint_91.setString("30.700000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_91, UnderlyingInstrument_91);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_91;
    UnderlyingDirtyPrice_91.setString("8018893");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_91, UnderlyingInstrument_91);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_91;
    UnderlyingEndPrice_91.setString("8068869");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_91, UnderlyingInstrument_91);
    FIX::UnderlyingEndValue UnderlyingEndValue_91;
    UnderlyingEndValue_91.setString("232708");
set_field(noUnderlyings_0_1, UnderlyingEndValue_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{196284873}, UnderlyingInstrument_91);
    FIX::UnderlyingFXRate UnderlyingFXRate_91;
    UnderlyingFXRate_91.setString("14074789");
set_field(noUnderlyings_0_1, UnderlyingFXRate_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_91);
    FIX::UnderlyingFactor UnderlyingFactor_91;
    UnderlyingFactor_91.setString("13976790");
set_field(noUnderlyings_0_1, UnderlyingFactor_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{4975813}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_336598590"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_752174623"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_833227118"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_453843455"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_475022898"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_150042432"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_163783658"}, UnderlyingInstrument_91);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_91;
    UnderlyingNotionalPercentageOutstanding_91.setString("54.650000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_91);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_91;
    UnderlyingOriginalNotionalPercentageOutstanding_91.setString("80.850000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_906267099"}, UnderlyingInstrument_91);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_91;
    UnderlyingPriceUnitOfMeasureQty_91.setString("5885640");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1757396467}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{756860409}, UnderlyingInstrument_91);
    FIX::UnderlyingPx UnderlyingPx_91;
    UnderlyingPx_91.setString("15784587");
set_field(noUnderlyings_0_1, UnderlyingPx_91, UnderlyingInstrument_91);
    FIX::UnderlyingQty UnderlyingQty_91;
    UnderlyingQty_91.setString("10559670");
set_field(noUnderlyings_0_1, UnderlyingQty_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_376063258"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1796540895"}, UnderlyingInstrument_91);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_91;
    UnderlyingRepurchaseRate_91.setString("74.400000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{855628905}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1056015158"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1252286737"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_2104561976"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1857904487"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_2059173718"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_2127832846"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_2054189360"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1319169025"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1731626210"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_91);
    FIX::UnderlyingStartValue UnderlyingStartValue_91;
    UnderlyingStartValue_91.setString("13241448");
set_field(noUnderlyings_0_1, UnderlyingStartValue_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2068224801"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_91);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_91;
    UnderlyingStrikePrice_91.setString("3745846");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_384098647"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_159930741"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_538368266"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1446084113"}, UnderlyingInstrument_91);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_91;
    UnderlyingUnitOfMeasureQty_91.setString("13755620");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_91, UnderlyingInstrument_91);
    all_values.push_back(UnderlyingInstrument_91);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_192;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_204867564"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_192);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1964126015"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_192);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_192);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_193;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1184369171"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_193);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_961727973"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_193);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_193);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_194;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1395101072"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_194);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_92852547"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_194);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_194);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_181;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1044158319"}, UnderlyingStipulations_NoUnderlyingStips_181);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_113209987"}, UnderlyingStipulations_NoUnderlyingStips_181);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_181);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_182;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_45936489"}, UnderlyingStipulations_NoUnderlyingStips_182);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_2100173477"}, UnderlyingStipulations_NoUnderlyingStips_182);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_182);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_183;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_1365496725"}, UnderlyingStipulations_NoUnderlyingStips_183);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_3014817"}, UnderlyingStipulations_NoUnderlyingStips_183);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_183);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_187;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1277186795"}, UndlyInstrumentParties_NoUndlyInstrumentParties_187);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_187);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1717300029}, UndlyInstrumentParties_NoUndlyInstrumentParties_187);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_187);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1714990226"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{874201155}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_372);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1773017011"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1635731379}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_373);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_188;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_783276904"}, UndlyInstrumentParties_NoUndlyInstrumentParties_188);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_188);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{2010315987}, UndlyInstrumentParties_NoUndlyInstrumentParties_188);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_188);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1942836060"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{401200605}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_374);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_465976016"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1170914421}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_375);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1975656957"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{670843580}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_376);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_189;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_987556788"}, UndlyInstrumentParties_NoUndlyInstrumentParties_189);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_189);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{1632571554}, UndlyInstrumentParties_NoUndlyInstrumentParties_189);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_189);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1105395027"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{822879138}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_377);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_11;
    FIX::PosAmt PosAmt_11;
    PosAmt_11.setString("12186050");
set_field(noPosAmt_0_0, PosAmt_11, PositionAmountData_NoPosAmt_11);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_DLV"}, PositionAmountData_NoPosAmt_11);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_1232022360"}, PositionAmountData_NoPosAmt_11);
    all_values.push_back(PositionAmountData_NoPosAmt_11);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_8;
    FIX::LongQty LongQty_8;
    LongQty_8.setString("8718304");
set_field(noPositions_0_0, LongQty_8, PositionQty_NoPositions_8);
    set_field(noPositions_0_0, FIX::PosQtyStatus{1}, PositionQty_NoPositions_8);
    set_field(noPositions_0_0, FIX::PosType{"STRING_ASF"}, PositionQty_NoPositions_8);
    set_field(noPositions_0_0, FIX::QuantityDate{"LOCALMKTDATE_855194460"}, PositionQty_NoPositions_8);
    FIX::ShortQty ShortQty_8;
    ShortQty_8.setString("4649494");
set_field(noPositions_0_0, ShortQty_8, PositionQty_NoPositions_8);
    all_values.push_back(PositionQty_NoPositions_8);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_99;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_422701038"}, NestedParties_NoNestedPartyIDs_99);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_99);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1788210422}, NestedParties_NoNestedPartyIDs_99);
      all_values.push_back(NestedParties_NoNestedPartyIDs_99);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_206;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_2122427469"}, NstdPtysSubGrp_NoNestedPartySubIDs_206);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1423632094}, NstdPtysSubGrp_NoNestedPartySubIDs_206);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_206);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_100;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1921264756"}, NestedParties_NoNestedPartyIDs_100);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_100);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1218984506}, NestedParties_NoNestedPartyIDs_100);
      all_values.push_back(NestedParties_NoNestedPartyIDs_100);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_207;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1608295389"}, NstdPtysSubGrp_NoNestedPartySubIDs_207);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{242415279}, NstdPtysSubGrp_NoNestedPartySubIDs_207);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_207);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_9;
    FIX::LongQty LongQty_9;
    LongQty_9.setString("31550");
set_field(noPositions_0_1, LongQty_9, PositionQty_NoPositions_9);
    set_field(noPositions_0_1, FIX::PosQtyStatus{0}, PositionQty_NoPositions_9);
    set_field(noPositions_0_1, FIX::PosType{"STRING_ALC"}, PositionQty_NoPositions_9);
    set_field(noPositions_0_1, FIX::QuantityDate{"LOCALMKTDATE_1015697503"}, PositionQty_NoPositions_9);
    FIX::ShortQty ShortQty_9;
    ShortQty_9.setString("17642268");
set_field(noPositions_0_1, ShortQty_9, PositionQty_NoPositions_9);
    all_values.push_back(PositionQty_NoPositions_9);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_101;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_2121092530"}, NestedParties_NoNestedPartyIDs_101);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_101);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{596995162}, NestedParties_NoNestedPartyIDs_101);
      all_values.push_back(NestedParties_NoNestedPartyIDs_101);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_208;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1308437993"}, NstdPtysSubGrp_NoNestedPartySubIDs_208);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1829017523}, NstdPtysSubGrp_NoNestedPartySubIDs_208);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_208);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noPositions_0_1);
  }
  {
    FIX50SP2::PositionReport::NoPositions noPositions_0_2;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_10;
    FIX::LongQty LongQty_10;
    LongQty_10.setString("16288319");
set_field(noPositions_0_2, LongQty_10, PositionQty_NoPositions_10);
    set_field(noPositions_0_2, FIX::PosQtyStatus{1}, PositionQty_NoPositions_10);
    set_field(noPositions_0_2, FIX::PosType{"STRING_TA"}, PositionQty_NoPositions_10);
    set_field(noPositions_0_2, FIX::QuantityDate{"LOCALMKTDATE_1195153227"}, PositionQty_NoPositions_10);
    FIX::ShortQty ShortQty_10;
    ShortQty_10.setString("8879792");
set_field(noPositions_0_2, ShortQty_10, PositionQty_NoPositions_10);
    all_values.push_back(PositionQty_NoPositions_10);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_102;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_1210346638"}, NestedParties_NoNestedPartyIDs_102);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_102);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{233283231}, NestedParties_NoNestedPartyIDs_102);
      all_values.push_back(NestedParties_NoNestedPartyIDs_102);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_209;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1221629058"}, NstdPtysSubGrp_NoNestedPartySubIDs_209);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{208227052}, NstdPtysSubGrp_NoNestedPartySubIDs_209);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_209);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_210;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_127221859"}, NstdPtysSubGrp_NoNestedPartySubIDs_210);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{995410167}, NstdPtysSubGrp_NoNestedPartySubIDs_210);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_210);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::PositionReport::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_211;
        set_field(noNestedPartySubIDs_2_0_2_2, FIX::NestedPartySubID{"STRING_1350546424"}, NstdPtysSubGrp_NoNestedPartySubIDs_211);
        set_field(noNestedPartySubIDs_2_0_2_2, FIX::NestedPartySubIDType{1346206365}, NstdPtysSubGrp_NoNestedPartySubIDs_211);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_211);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_2);
      }
      noPositions_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noPositions_0_2);
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
