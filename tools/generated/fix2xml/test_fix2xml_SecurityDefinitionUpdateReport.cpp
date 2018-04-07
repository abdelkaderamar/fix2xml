#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityDefinitionUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionUpdateReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityDefinitionUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionUpdateReport_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_823332487"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::CorporateAction{"MULTIPLECHARVALUE_O"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::Currency{"USD"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedText{"DATA_130527541"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedTextLen{1289276572}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::SecurityReportID{668297765}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::SecurityReqID{"STRING_302353081"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_918238244"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::SecurityResponseType{3}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::SecurityUpdateAction{'D'}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::Text{"STRING_1280766882"}, SecurityDefinitionUpdateReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(17, 13, 58, 6, 8, 2011)}, SecurityDefinitionUpdateReport_0);
  all_values.push_back(SecurityDefinitionUpdateReport_0);

  all_compo_names.insert("SecurityDefinitionUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_13;
  set_field(msg, FIX::ApplID{"STRING_1653360354"}, ApplicationSequenceControl_13);
  set_field(msg, FIX::ApplLastSeqNum{241160736}, ApplicationSequenceControl_13);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_13);
  set_field(msg, FIX::ApplSeqNum{56996110}, ApplicationSequenceControl_13);
  all_values.push_back(ApplicationSequenceControl_13);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_97;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1600617588"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{32287333}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1108137366"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1742851749}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_490392703"}, InstrumentLeg_97);
    FIX::LegContractMultiplier LegContractMultiplier_97;
    LegContractMultiplier_97.setString("1737660");
set_field(noLegs_0_0, LegContractMultiplier_97, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1865801114}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1313725190"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_897298823"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1772077746"}, InstrumentLeg_97);
    FIX::LegCouponRate LegCouponRate_97;
    LegCouponRate_97.setString("69.440000");
set_field(noLegs_0_0, LegCouponRate_97, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1027826365"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1330179446"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1832108915}, InstrumentLeg_97);
    FIX::LegFactor LegFactor_97;
    LegFactor_97.setString("12730040");
set_field(noLegs_0_0, LegFactor_97, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{62131412}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_965392149"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1581196850"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1332628693"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1351694722"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1535070400"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1742840263"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_904897246"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_884827501"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_97);
    FIX::LegOptionRatio LegOptionRatio_97;
    LegOptionRatio_97.setString("11460579");
set_field(noLegs_0_0, LegOptionRatio_97, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1540962670"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1305713079"}, InstrumentLeg_97);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_97;
    LegPriceUnitOfMeasureQty_97.setString("4119395");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_97, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegProduct{994096610}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1338000413}, InstrumentLeg_97);
    FIX::LegRatioQty LegRatioQty_97;
    LegRatioQty_97.setString("15200768");
set_field(noLegs_0_0, LegRatioQty_97, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_589464711"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1828393116"}, InstrumentLeg_97);
    FIX::LegRepurchaseRate LegRepurchaseRate_97;
    LegRepurchaseRate_97.setString("29.340000");
set_field(noLegs_0_0, LegRepurchaseRate_97, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{307782178}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_994634659"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_443658109"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_2079859924"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1943191603"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1471484474"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_846246946"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_654180273"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_97);
    FIX::LegStrikePrice LegStrikePrice_97;
    LegStrikePrice_97.setString("7163116");
set_field(noLegs_0_0, LegStrikePrice_97, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1496264362"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_2119279956"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_2048940378"}, InstrumentLeg_97);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_700475437"}, InstrumentLeg_97);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_97;
    LegUnitOfMeasureQty_97.setString("15068667");
set_field(noLegs_0_0, LegUnitOfMeasureQty_97, InstrumentLeg_97);
    all_values.push_back(InstrumentLeg_97);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_200;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1605372683"}, LegSecAltIDGrp_NoLegSecurityAltID_200);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_244210562"}, LegSecAltIDGrp_NoLegSecurityAltID_200);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_200);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_201;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_745530314"}, LegSecAltIDGrp_NoLegSecurityAltID_201);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_603947017"}, LegSecAltIDGrp_NoLegSecurityAltID_201);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_201);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_202;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1785173232"}, LegSecAltIDGrp_NoLegSecurityAltID_202);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_2051243394"}, LegSecAltIDGrp_NoLegSecurityAltID_202);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_202);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_98;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1015886533"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{631786194}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1241760159"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{388479768}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1221250905"}, InstrumentLeg_98);
    FIX::LegContractMultiplier LegContractMultiplier_98;
    LegContractMultiplier_98.setString("9226696");
set_field(noLegs_0_1, LegContractMultiplier_98, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{2082322702}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1529033083"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1917304286"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_378497163"}, InstrumentLeg_98);
    FIX::LegCouponRate LegCouponRate_98;
    LegCouponRate_98.setString("93.590000");
set_field(noLegs_0_1, LegCouponRate_98, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1713012242"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegCurrency{"USD"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_978091259"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{356678263}, InstrumentLeg_98);
    FIX::LegFactor LegFactor_98;
    LegFactor_98.setString("6910448");
set_field(noLegs_0_1, LegFactor_98, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1516174365}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1072989948"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_39825586"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1487970673"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_974446678"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_740301023"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_847353734"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_471260023"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_198190058"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_98);
    FIX::LegOptionRatio LegOptionRatio_98;
    LegOptionRatio_98.setString("12167903");
set_field(noLegs_0_1, LegOptionRatio_98, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_802137075"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_729253880"}, InstrumentLeg_98);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_98;
    LegPriceUnitOfMeasureQty_98.setString("11205500");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_98, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegProduct{1818023608}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1361040074}, InstrumentLeg_98);
    FIX::LegRatioQty LegRatioQty_98;
    LegRatioQty_98.setString("2148265");
set_field(noLegs_0_1, LegRatioQty_98, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_59019728"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_434807331"}, InstrumentLeg_98);
    FIX::LegRepurchaseRate LegRepurchaseRate_98;
    LegRepurchaseRate_98.setString("62.220000");
set_field(noLegs_0_1, LegRepurchaseRate_98, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{2141342430}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1963840415"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_907316860"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_372355946"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1277766126"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_472845454"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_74853936"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1450936714"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_98);
    FIX::LegStrikePrice LegStrikePrice_98;
    LegStrikePrice_98.setString("8196274");
set_field(noLegs_0_1, LegStrikePrice_98, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1504522147"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_21325594"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_160114457"}, InstrumentLeg_98);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_331485177"}, InstrumentLeg_98);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_98;
    LegUnitOfMeasureQty_98.setString("7616266");
set_field(noLegs_0_1, LegUnitOfMeasureQty_98, InstrumentLeg_98);
    all_values.push_back(InstrumentLeg_98);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_203;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_802745200"}, LegSecAltIDGrp_NoLegSecurityAltID_203);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_959816675"}, LegSecAltIDGrp_NoLegSecurityAltID_203);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_203);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_204;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_2099032487"}, LegSecAltIDGrp_NoLegSecurityAltID_204);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_2019535537"}, LegSecAltIDGrp_NoLegSecurityAltID_204);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_204);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_68;
  FIX::AttachmentPoint AttachmentPoint_68;
  AttachmentPoint_68.setString("37.500000");
set_field(msg, AttachmentPoint_68, Instrument_68);
  set_field(msg, FIX::CFICode{"STRING_680802719"}, Instrument_68);
  set_field(msg, FIX::CPProgram{2}, Instrument_68);
  set_field(msg, FIX::CPRegType{"STRING_1432493710"}, Instrument_68);
  FIX::CapPrice CapPrice_68;
  CapPrice_68.setString("20418427");
set_field(msg, CapPrice_68, Instrument_68);
  FIX::ContractMultiplier ContractMultiplier_68;
  ContractMultiplier_68.setString("12074285");
set_field(msg, ContractMultiplier_68, Instrument_68);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_68);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_329166476"}, Instrument_68);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_197441141"}, Instrument_68);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1485372221"}, Instrument_68);
  FIX::CouponRate CouponRate_68;
  CouponRate_68.setString("32.430000");
set_field(msg, CouponRate_68, Instrument_68);
  set_field(msg, FIX::CreditRating{"STRING_1104758002"}, Instrument_68);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1857728167"}, Instrument_68);
  FIX::DetachmentPoint DetachmentPoint_68;
  DetachmentPoint_68.setString("93.700000");
set_field(msg, DetachmentPoint_68, Instrument_68);
  set_field(msg, FIX::EncodedIssuer{"DATA_1577603456"}, Instrument_68);
  set_field(msg, FIX::EncodedIssuerLen{1932582103}, Instrument_68);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_713744506"}, Instrument_68);
  set_field(msg, FIX::EncodedSecurityDescLen{881056522}, Instrument_68);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_68);
  FIX::Factor Factor_68;
  Factor_68.setString("6952445");
set_field(msg, Factor_68, Instrument_68);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_68);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_68);
  FIX::FloorPrice FloorPrice_68;
  FloorPrice_68.setString("7165701");
set_field(msg, FloorPrice_68, Instrument_68);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_68);
  set_field(msg, FIX::InstrRegistry{"STRING_2052637978"}, Instrument_68);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_68);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_720782954"}, Instrument_68);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_707899530"}, Instrument_68);
  set_field(msg, FIX::Issuer{"STRING_290529752"}, Instrument_68);
  set_field(msg, FIX::ListMethod{1}, Instrument_68);
  set_field(msg, FIX::LocaleOfIssue{"STRING_579951420"}, Instrument_68);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_2052483502"}, Instrument_68);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1353134512"}, Instrument_68);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1572553393"}, Instrument_68);
  FIX::MinPriceIncrement MinPriceIncrement_68;
  MinPriceIncrement_68.setString("13374935");
set_field(msg, MinPriceIncrement_68, Instrument_68);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_68;
  MinPriceIncrementAmount_68.setString("12474936");
set_field(msg, MinPriceIncrementAmount_68, Instrument_68);
  set_field(msg, FIX::NTPositionLimit{632498312}, Instrument_68);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_68;
  NotionalPercentageOutstanding_68.setString("33.560000");
set_field(msg, NotionalPercentageOutstanding_68, Instrument_68);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_68);
  FIX::OptPayoutAmount OptPayoutAmount_68;
  OptPayoutAmount_68.setString("8299394");
set_field(msg, OptPayoutAmount_68, Instrument_68);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_68);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_68;
  OriginalNotionalPercentageOutstanding_68.setString("33.770000");
set_field(msg, OriginalNotionalPercentageOutstanding_68, Instrument_68);
  set_field(msg, FIX::Pool{"STRING_1934697456"}, Instrument_68);
  set_field(msg, FIX::PositionLimit{1877140097}, Instrument_68);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_68);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1364817264"}, Instrument_68);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_68;
  PriceUnitOfMeasureQty_68.setString("16622385");
set_field(msg, PriceUnitOfMeasureQty_68, Instrument_68);
  set_field(msg, FIX::Product{11}, Instrument_68);
  set_field(msg, FIX::ProductComplex{"STRING_98390139"}, Instrument_68);
  set_field(msg, FIX::PutOrCall{1}, Instrument_68);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_259494472"}, Instrument_68);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1799074093"}, Instrument_68);
  FIX::RepurchaseRate RepurchaseRate_68;
  RepurchaseRate_68.setString("83.600000");
set_field(msg, RepurchaseRate_68, Instrument_68);
  set_field(msg, FIX::RepurchaseTerm{976064580}, Instrument_68);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_68);
  set_field(msg, FIX::SecurityDesc{"STRING_1357692691"}, Instrument_68);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_306777658"}, Instrument_68);
  set_field(msg, FIX::SecurityGroup{"STRING_85688162"}, Instrument_68);
  set_field(msg, FIX::SecurityID{"STRING_2065592221"}, Instrument_68);
  set_field(msg, FIX::SecurityIDSource{"STRING_J"}, Instrument_68);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_68);
  set_field(msg, FIX::SecuritySubType{"STRING_498059993"}, Instrument_68);
  set_field(msg, FIX::SecurityType{"STRING_REPO"}, Instrument_68);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_68);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_68);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1839800830"}, Instrument_68);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1211164476"}, Instrument_68);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_68);
  FIX::StrikeMultiplier StrikeMultiplier_68;
  StrikeMultiplier_68.setString("6403409");
set_field(msg, StrikeMultiplier_68, Instrument_68);
  FIX::StrikePrice StrikePrice_68;
  StrikePrice_68.setString("13855675");
set_field(msg, StrikePrice_68, Instrument_68);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_68);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_68;
  StrikePriceBoundaryPrecision_68.setString("6.900000");
set_field(msg, StrikePriceBoundaryPrecision_68, Instrument_68);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_68);
  FIX::StrikeValue StrikeValue_68;
  StrikeValue_68.setString("1229089");
set_field(msg, StrikeValue_68, Instrument_68);
  set_field(msg, FIX::Symbol{"STRING_1213029789"}, Instrument_68);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_68);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_68);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_68);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_68);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_68;
  UnitOfMeasureQty_68.setString("15165330");
set_field(msg, UnitOfMeasureQty_68, Instrument_68);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_68);
  all_values.push_back(Instrument_68);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_141;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_141);
    FIX::ComplexEventPrice ComplexEventPrice_141;
    ComplexEventPrice_141.setString("20128387");
set_field(noComplexEvents_0_0, ComplexEventPrice_141, ComplexEvents_NoComplexEvents_141);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_141);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_141;
    ComplexEventPriceBoundaryPrecision_141.setString("67.830000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_141, ComplexEvents_NoComplexEvents_141);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_141);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_141);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_141;
    ComplexOptPayoutAmount_141.setString("20973890");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_141, ComplexEvents_NoComplexEvents_141);
    all_values.push_back(ComplexEvents_NoComplexEvents_141);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_295;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 25, 37, 1, 4, 2013)}, ComplexEventDates_NoComplexEventDates_295);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 27, 17, 20, 10, 2012)}, ComplexEventDates_NoComplexEventDates_295);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_295);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_596;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 30, 26)}, ComplexEventTimes_NoComplexEventTimes_596);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 45, 13)}, ComplexEventTimes_NoComplexEventTimes_596);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_596);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_597;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 23, 14)}, ComplexEventTimes_NoComplexEventTimes_597);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 31, 46)}, ComplexEventTimes_NoComplexEventTimes_597);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_597);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_296;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 3, 2, 18, 7, 2014)}, ComplexEventDates_NoComplexEventDates_296);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 35, 39, 15, 9, 2007)}, ComplexEventDates_NoComplexEventDates_296);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_296);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_598;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 22, 57)}, ComplexEventTimes_NoComplexEventTimes_598);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 34, 6)}, ComplexEventTimes_NoComplexEventTimes_598);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_598);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_599;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 21, 1)}, ComplexEventTimes_NoComplexEventTimes_599);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 24, 15)}, ComplexEventTimes_NoComplexEventTimes_599);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_599);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_142;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_142);
    FIX::ComplexEventPrice ComplexEventPrice_142;
    ComplexEventPrice_142.setString("14221895");
set_field(noComplexEvents_0_1, ComplexEventPrice_142, ComplexEvents_NoComplexEvents_142);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_142);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_142;
    ComplexEventPriceBoundaryPrecision_142.setString("68.990000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_142, ComplexEvents_NoComplexEvents_142);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_142);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_142);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_142;
    ComplexOptPayoutAmount_142.setString("6013356");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_142, ComplexEvents_NoComplexEvents_142);
    all_values.push_back(ComplexEvents_NoComplexEvents_142);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_297;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 26, 2, 11, 4, 2007)}, ComplexEventDates_NoComplexEventDates_297);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 9, 20, 25, 3, 2012)}, ComplexEventDates_NoComplexEventDates_297);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_297);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_600;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 41, 54)}, ComplexEventTimes_NoComplexEventTimes_600);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 10, 53)}, ComplexEventTimes_NoComplexEventTimes_600);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_600);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_601;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 3, 18)}, ComplexEventTimes_NoComplexEventTimes_601);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 9, 26)}, ComplexEventTimes_NoComplexEventTimes_601);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_601);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_602;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 52, 21)}, ComplexEventTimes_NoComplexEventTimes_602);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 16, 49)}, ComplexEventTimes_NoComplexEventTimes_602);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_602);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_139;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_46821257"}, EvntGrp_NoEvents_139);
    FIX::EventPx EventPx_139;
    EventPx_139.setString("20331164");
set_field(noEvents_0_0, EventPx_139, EvntGrp_NoEvents_139);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1624256805"}, EvntGrp_NoEvents_139);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(20, 57, 24, 13, 8, 2010)}, EvntGrp_NoEvents_139);
    set_field(noEvents_0_0, FIX::EventType{13}, EvntGrp_NoEvents_139);
    all_values.push_back(EvntGrp_NoEvents_139);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_140;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_178320224"}, EvntGrp_NoEvents_140);
    FIX::EventPx EventPx_140;
    EventPx_140.setString("15722820");
set_field(noEvents_0_1, EventPx_140, EvntGrp_NoEvents_140);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1410177105"}, EvntGrp_NoEvents_140);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(8, 41, 13, 15, 9, 2010)}, EvntGrp_NoEvents_140);
    set_field(noEvents_0_1, FIX::EventType{10}, EvntGrp_NoEvents_140);
    all_values.push_back(EvntGrp_NoEvents_140);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_141;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_363024567"}, EvntGrp_NoEvents_141);
    FIX::EventPx EventPx_141;
    EventPx_141.setString("8261919");
set_field(noEvents_0_2, EventPx_141, EvntGrp_NoEvents_141);
    set_field(noEvents_0_2, FIX::EventText{"STRING_817455301"}, EvntGrp_NoEvents_141);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(1, 13, 4, 27, 10, 2009)}, EvntGrp_NoEvents_141);
    set_field(noEvents_0_2, FIX::EventType{17}, EvntGrp_NoEvents_141);
    all_values.push_back(EvntGrp_NoEvents_141);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_129;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1483793085"}, InstrumentParties_NoInstrumentParties_129);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_129);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1293941240}, InstrumentParties_NoInstrumentParties_129);
    all_values.push_back(InstrumentParties_NoInstrumentParties_129);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_478715590"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{81550243}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1264824192"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1356285902}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_130;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_259870467"}, InstrumentParties_NoInstrumentParties_130);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_130);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{618979359}, InstrumentParties_NoInstrumentParties_130);
    all_values.push_back(InstrumentParties_NoInstrumentParties_130);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_280356216"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1276245500}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_134;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1794861028"}, SecAltIDGrp_NoSecurityAltID_134);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1901381849"}, SecAltIDGrp_NoSecurityAltID_134);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_134);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_135;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1956583746"}, SecAltIDGrp_NoSecurityAltID_135);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1810891777"}, SecAltIDGrp_NoSecurityAltID_135);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_135);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_136;
  set_field(msg, FIX::SecurityXML{"XMLDATA_116922768"}, SecurityXML_136);
  set_field(msg, FIX::SecurityXMLLen{635292056}, SecurityXML_136);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_480863431"}, SecurityXML_136);
  all_values.push_back(SecurityXML_136);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_9;
  set_field(msg, FIX::DeliveryForm{1}, InstrumentExtension_9);
  FIX::PctAtRisk PctAtRisk_9;
  PctAtRisk_9.setString("32.020000");
set_field(msg, PctAtRisk_9, InstrumentExtension_9);
  all_values.push_back(InstrumentExtension_9);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_14;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{3}, AttrbGrp_NoInstrAttrib_14);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_452369"}, AttrbGrp_NoInstrAttrib_14);
    all_values.push_back(AttrbGrp_NoInstrAttrib_14);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_15;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{99}, AttrbGrp_NoInstrAttrib_15);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_474134085"}, AttrbGrp_NoInstrAttrib_15);
    all_values.push_back(AttrbGrp_NoInstrAttrib_15);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_16;
    set_field(noInstrAttrib_0_2, FIX::InstrAttribType{16}, AttrbGrp_NoInstrAttrib_16);
    set_field(noInstrAttrib_0_2, FIX::InstrAttribValue{"STRING_1462582311"}, AttrbGrp_NoInstrAttrib_16);
    all_values.push_back(AttrbGrp_NoInstrAttrib_16);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_2);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_4;
    set_field(noMarketSegments_0_0, FIX::MarketID{"EXCHANGE_1127428430"}, MarketSegmentGrp_NoMarketSegments_4);
    set_field(noMarketSegments_0_0, FIX::MarketSegmentID{"STRING_609039903"}, MarketSegmentGrp_NoMarketSegments_4);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_4);
    all_compo_names.insert("...NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_6;
    set_field(noMarketSegments_0_0, FIX::ExpirationCycle{0}, BaseTradingRules_6);
    set_field(noMarketSegments_0_0, FIX::ImpliedMarketIndicator{0}, BaseTradingRules_6);
    FIX::MaxPriceVariation MaxPriceVariation_6;
    MaxPriceVariation_6.setString("6905901");
set_field(noMarketSegments_0_0, MaxPriceVariation_6, BaseTradingRules_6);
    FIX::MaxTradeVol MaxTradeVol_6;
    MaxTradeVol_6.setString("16590390");
set_field(noMarketSegments_0_0, MaxTradeVol_6, BaseTradingRules_6);
    FIX::MinTradeVol MinTradeVol_6;
    MinTradeVol_6.setString("8149462");
set_field(noMarketSegments_0_0, MinTradeVol_6, BaseTradingRules_6);
    set_field(noMarketSegments_0_0, FIX::MultilegModel{2}, BaseTradingRules_6);
    set_field(noMarketSegments_0_0, FIX::MultilegPriceMethod{4}, BaseTradingRules_6);
    set_field(noMarketSegments_0_0, FIX::PriceType{4}, BaseTradingRules_6);
    FIX::RoundLot RoundLot_6;
    RoundLot_6.setString("19259575");
set_field(noMarketSegments_0_0, RoundLot_6, BaseTradingRules_6);
    set_field(noMarketSegments_0_0, FIX::TradingCurrency{"JPY"}, BaseTradingRules_6);
    all_values.push_back(BaseTradingRules_6);
    all_compo_names.insert("...NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_11;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'2'}, LotTypeRules_NoLotTypeRules_11);
      FIX::MinLotSize MinLotSize_11;
      MinLotSize_11.setString("3165856");
set_field(noLotTypeRules_0_1_0, MinLotSize_11, LotTypeRules_NoLotTypeRules_11);
      all_values.push_back(LotTypeRules_NoLotTypeRules_11);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_12;
      set_field(noLotTypeRules_0_1_1, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_12);
      FIX::MinLotSize MinLotSize_12;
      MinLotSize_12.setString("19398033");
set_field(noLotTypeRules_0_1_1, MinLotSize_12, LotTypeRules_NoLotTypeRules_12);
      all_values.push_back(LotTypeRules_NoLotTypeRules_12);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_13;
      set_field(noLotTypeRules_0_1_2, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_13);
      FIX::MinLotSize MinLotSize_13;
      MinLotSize_13.setString("15634887");
set_field(noLotTypeRules_0_1_2, MinLotSize_13, LotTypeRules_NoLotTypeRules_13);
      all_values.push_back(LotTypeRules_NoLotTypeRules_13);
      all_compo_names.insert("...NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_6;
    FIX::HighLimitPrice HighLimitPrice_6;
    HighLimitPrice_6.setString("2731831");
set_field(noMarketSegments_0_0, HighLimitPrice_6, PriceLimits_6);
    FIX::LowLimitPrice LowLimitPrice_6;
    LowLimitPrice_6.setString("12017565");
set_field(noMarketSegments_0_0, LowLimitPrice_6, PriceLimits_6);
    set_field(noMarketSegments_0_0, FIX::PriceLimitType{1}, PriceLimits_6);
    FIX::TradingReferencePrice TradingReferencePrice_6;
    TradingReferencePrice_6.setString("9951390");
set_field(noMarketSegments_0_0, TradingReferencePrice_6, PriceLimits_6);
    all_values.push_back(PriceLimits_6);
    all_compo_names.insert("...NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_11;
      FIX::EndTickPriceRange EndTickPriceRange_11;
      EndTickPriceRange_11.setString("6370706");
set_field(noTickRules_0_1_0, EndTickPriceRange_11, TickRules_NoTickRules_11);
      FIX::StartTickPriceRange StartTickPriceRange_11;
      StartTickPriceRange_11.setString("2015378");
set_field(noTickRules_0_1_0, StartTickPriceRange_11, TickRules_NoTickRules_11);
      FIX::TickIncrement TickIncrement_11;
      TickIncrement_11.setString("1261874");
set_field(noTickRules_0_1_0, TickIncrement_11, TickRules_NoTickRules_11);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{3}, TickRules_NoTickRules_11);
      all_values.push_back(TickRules_NoTickRules_11);
      all_compo_names.insert("...NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_9;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{2084114591}, NestedInstrumentAttribute_NoNestedInstrAttrib_9);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_430423465"}, NestedInstrumentAttribute_NoNestedInstrAttrib_9);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_9);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_10;
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribType{125676461}, NestedInstrumentAttribute_NoNestedInstrAttrib_10);
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribValue{"STRING_330845787"}, NestedInstrumentAttribute_NoNestedInstrAttrib_10);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_10);
      all_compo_names.insert("...NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_9;
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_9);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_9);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_9);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_21;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_21);
        all_values.push_back(ExecInstRules_NoExecInstRules_21);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_22;
        set_field(noExecInstRules_0_0_2_1, FIX::ExecInstValue{'4'}, ExecInstRules_NoExecInstRules_22);
        all_values.push_back(ExecInstRules_NoExecInstRules_22);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_23;
        set_field(noExecInstRules_0_0_2_2, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_23);
        all_values.push_back(ExecInstRules_NoExecInstRules_23);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_19;
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_19);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_553159582"}, MarketDataFeedTypes_NoMDFeedTypes_19);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{516814050}, MarketDataFeedTypes_NoMDFeedTypes_19);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_19);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_19;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_869745269"}, MatchRules_NoMatchRules_19);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_7"}, MatchRules_NoMatchRules_19);
        all_values.push_back(MatchRules_NoMatchRules_19);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_20;
        set_field(noMatchRules_0_0_2_1, FIX::MatchAlgorithm{"STRING_446344764"}, MatchRules_NoMatchRules_20);
        set_field(noMatchRules_0_0_2_1, FIX::MatchType{"STRING_7"}, MatchRules_NoMatchRules_20);
        all_values.push_back(MatchRules_NoMatchRules_20);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_21;
        set_field(noMatchRules_0_0_2_2, FIX::MatchAlgorithm{"STRING_861015895"}, MatchRules_NoMatchRules_21);
        set_field(noMatchRules_0_0_2_2, FIX::MatchType{"STRING_8"}, MatchRules_NoMatchRules_21);
        all_values.push_back(MatchRules_NoMatchRules_21);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_21;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'Q'}, OrdTypeRules_NoOrdTypeRules_21);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_21);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_22;
        set_field(noOrdTypeRules_0_0_2_1, FIX::OrdType{'Q'}, OrdTypeRules_NoOrdTypeRules_22);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_22);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_23;
        set_field(noOrdTypeRules_0_0_2_2, FIX::OrdType{'7'}, OrdTypeRules_NoOrdTypeRules_23);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_23);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_25;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_25);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_25);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_10;
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_10);
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionSubID{"STRING_1"}, TradingSessionRulesGrp_NoTradingSessionRules_10);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_10);
      all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_24;
        set_field(noExecInstRules_0_1_2_0, FIX::ExecInstValue{'7'}, ExecInstRules_NoExecInstRules_24);
        all_values.push_back(ExecInstRules_NoExecInstRules_24);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_25;
        set_field(noExecInstRules_0_1_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_25);
        all_values.push_back(ExecInstRules_NoExecInstRules_25);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_20;
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_20);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDFeedType{"STRING_1757207258"}, MarketDataFeedTypes_NoMDFeedTypes_20);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MarketDepth{227300841}, MarketDataFeedTypes_NoMDFeedTypes_20);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_20);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_21;
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_21);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDFeedType{"STRING_313753721"}, MarketDataFeedTypes_NoMDFeedTypes_21);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MarketDepth{1994028063}, MarketDataFeedTypes_NoMDFeedTypes_21);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_21);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_22;
        set_field(noMatchRules_0_1_2_0, FIX::MatchAlgorithm{"STRING_304225817"}, MatchRules_NoMatchRules_22);
        set_field(noMatchRules_0_1_2_0, FIX::MatchType{"STRING_S4"}, MatchRules_NoMatchRules_22);
        all_values.push_back(MatchRules_NoMatchRules_22);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_23;
        set_field(noMatchRules_0_1_2_1, FIX::MatchAlgorithm{"STRING_814337872"}, MatchRules_NoMatchRules_23);
        set_field(noMatchRules_0_1_2_1, FIX::MatchType{"STRING_A3"}, MatchRules_NoMatchRules_23);
        all_values.push_back(MatchRules_NoMatchRules_23);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_24;
        set_field(noMatchRules_0_1_2_2, FIX::MatchAlgorithm{"STRING_1908559544"}, MatchRules_NoMatchRules_24);
        set_field(noMatchRules_0_1_2_2, FIX::MatchType{"STRING_2"}, MatchRules_NoMatchRules_24);
        all_values.push_back(MatchRules_NoMatchRules_24);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_24;
        set_field(noOrdTypeRules_0_1_2_0, FIX::OrdType{'1'}, OrdTypeRules_NoOrdTypeRules_24);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_24);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_26;
        set_field(noTimeInForceRules_0_1_2_0, FIX::TimeInForce{'6'}, TimeInForceRules_NoTimeInForceRules_26);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_26);
        all_compo_names.insert("...NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_8;
      FIX::EndStrikePxRange EndStrikePxRange_8;
      EndStrikePxRange_8.setString("4867519");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_8, StrikeRules_NoStrikeRules_8);
      FIX::StartStrikePxRange StartStrikePxRange_8;
      StartStrikePxRange_8.setString("12404273");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_8, StrikeRules_NoStrikeRules_8);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{1417253135}, StrikeRules_NoStrikeRules_8);
      FIX::StrikeIncrement StrikeIncrement_8;
      StrikeIncrement_8.setString("539352");
set_field(noStrikeRules_0_1_0, StrikeIncrement_8, StrikeRules_NoStrikeRules_8);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_1250007296"}, StrikeRules_NoStrikeRules_8);
      all_values.push_back(StrikeRules_NoStrikeRules_8);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_14;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1970140127"}, MaturityRules_NoMaturityRules_14);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_14);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{694690716}, MaturityRules_NoMaturityRules_14);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_14);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_1458172965"}, MaturityRules_NoMaturityRules_14);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_415330489"}, MaturityRules_NoMaturityRules_14);
        all_values.push_back(MaturityRules_NoMaturityRules_14);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_9;
      FIX::EndStrikePxRange EndStrikePxRange_9;
      EndStrikePxRange_9.setString("6665321");
set_field(noStrikeRules_0_1_1, EndStrikePxRange_9, StrikeRules_NoStrikeRules_9);
      FIX::StartStrikePxRange StartStrikePxRange_9;
      StartStrikePxRange_9.setString("18614170");
set_field(noStrikeRules_0_1_1, StartStrikePxRange_9, StrikeRules_NoStrikeRules_9);
      set_field(noStrikeRules_0_1_1, FIX::StrikeExerciseStyle{25054099}, StrikeRules_NoStrikeRules_9);
      FIX::StrikeIncrement StrikeIncrement_9;
      StrikeIncrement_9.setString("8938329");
set_field(noStrikeRules_0_1_1, StrikeIncrement_9, StrikeRules_NoStrikeRules_9);
      set_field(noStrikeRules_0_1_1, FIX::StrikeRuleID{"STRING_2107062326"}, StrikeRules_NoStrikeRules_9);
      all_values.push_back(StrikeRules_NoStrikeRules_9);
      all_compo_names.insert("...NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_15;
        set_field(noMaturityRules_0_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_740377388"}, MaturityRules_NoMaturityRules_15);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_15);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrement{643033637}, MaturityRules_NoMaturityRules_15);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_15);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityRuleID{"STRING_1063141005"}, MaturityRules_NoMaturityRules_15);
        set_field(noMaturityRules_0_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1500419037"}, MaturityRules_NoMaturityRules_15);
        all_values.push_back(MaturityRules_NoMaturityRules_15);
        all_compo_names.insert("...NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_28;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CAN"}, SpreadOrBenchmarkCurveData_28);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_Treasury"}, SpreadOrBenchmarkCurveData_28);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_951801794"}, SpreadOrBenchmarkCurveData_28);
  FIX::BenchmarkPrice BenchmarkPrice_28;
  BenchmarkPrice_28.setString("1512442");
set_field(msg, BenchmarkPrice_28, SpreadOrBenchmarkCurveData_28);
  set_field(msg, FIX::BenchmarkPriceType{1962966805}, SpreadOrBenchmarkCurveData_28);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_871420705"}, SpreadOrBenchmarkCurveData_28);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_637996215"}, SpreadOrBenchmarkCurveData_28);
  FIX::Spread Spread_28;
  Spread_28.setString("10559105");
set_field(msg, Spread_28, SpreadOrBenchmarkCurveData_28);
  all_values.push_back(SpreadOrBenchmarkCurveData_28);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_44;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_SUBSLEFT"}, Stipulations_NoStipulations_44);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_158434158"}, Stipulations_NoStipulations_44);
    all_values.push_back(Stipulations_NoStipulations_44);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_45;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_SUBSFREQ"}, Stipulations_NoStipulations_45);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_514587961"}, Stipulations_NoStipulations_45);
    all_values.push_back(Stipulations_NoStipulations_45);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_121;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_92871668"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1770085860}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_854898134"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{508202157}, UnderlyingInstrument_121);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_121;
    UnderlyingAdjustedQuantity_121.setString("2891343");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_121, UnderlyingInstrument_121);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_121;
    UnderlyingAllocationPercent_121.setString("15.440000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_121, UnderlyingInstrument_121);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_121;
    UnderlyingAttachmentPoint_121.setString("62.560000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1182967317"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_528410222"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_872064076"}, UnderlyingInstrument_121);
    FIX::UnderlyingCapValue UnderlyingCapValue_121;
    UnderlyingCapValue_121.setString("19233447");
set_field(noUnderlyings_0_0, UnderlyingCapValue_121, UnderlyingInstrument_121);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_121;
    UnderlyingCashAmount_121.setString("7772133");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_121);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_121;
    UnderlyingContractMultiplier_121.setString("19079839");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1840354361}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_868033103"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1653699068"}, UnderlyingInstrument_121);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_121;
    UnderlyingCouponRate_121.setString("9.680000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1948099162"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_121);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_121;
    UnderlyingCurrentValue_121.setString("17635823");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_121, UnderlyingInstrument_121);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_121;
    UnderlyingDetachmentPoint_121.setString("79.190000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_121, UnderlyingInstrument_121);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_121;
    UnderlyingDirtyPrice_121.setString("8661314");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_121, UnderlyingInstrument_121);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_121;
    UnderlyingEndPrice_121.setString("6720091");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_121, UnderlyingInstrument_121);
    FIX::UnderlyingEndValue UnderlyingEndValue_121;
    UnderlyingEndValue_121.setString("14706281");
set_field(noUnderlyings_0_0, UnderlyingEndValue_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1558062934}, UnderlyingInstrument_121);
    FIX::UnderlyingFXRate UnderlyingFXRate_121;
    UnderlyingFXRate_121.setString("8304433");
set_field(noUnderlyings_0_0, UnderlyingFXRate_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_121);
    FIX::UnderlyingFactor UnderlyingFactor_121;
    UnderlyingFactor_121.setString("20726508");
set_field(noUnderlyings_0_0, UnderlyingFactor_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{227168510}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_961680733"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1695253107"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1082066644"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1469882890"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1984387451"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1650898189"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2003139147"}, UnderlyingInstrument_121);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_121;
    UnderlyingNotionalPercentageOutstanding_121.setString("11.200000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_121);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_121;
    UnderlyingOriginalNotionalPercentageOutstanding_121.setString("95.750000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_795732177"}, UnderlyingInstrument_121);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_121;
    UnderlyingPriceUnitOfMeasureQty_121.setString("8090381");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{95333641}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{556232467}, UnderlyingInstrument_121);
    FIX::UnderlyingPx UnderlyingPx_121;
    UnderlyingPx_121.setString("5019088");
set_field(noUnderlyings_0_0, UnderlyingPx_121, UnderlyingInstrument_121);
    FIX::UnderlyingQty UnderlyingQty_121;
    UnderlyingQty_121.setString("9633667");
set_field(noUnderlyings_0_0, UnderlyingQty_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_62447887"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_578799801"}, UnderlyingInstrument_121);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_121;
    UnderlyingRepurchaseRate_121.setString("22.590000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{520465101}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_806935038"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_380080931"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1849903021"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1673066491"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1052090113"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1173047485"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1083645777"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1882533453"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_2041856549"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_121);
    FIX::UnderlyingStartValue UnderlyingStartValue_121;
    UnderlyingStartValue_121.setString("21097019");
set_field(noUnderlyings_0_0, UnderlyingStartValue_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_856053634"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_121);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_121;
    UnderlyingStrikePrice_121.setString("1784528");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_121, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_393486286"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_547699501"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_34108376"}, UnderlyingInstrument_121);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1413357406"}, UnderlyingInstrument_121);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_121;
    UnderlyingUnitOfMeasureQty_121.setString("5795242");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_121, UnderlyingInstrument_121);
    all_values.push_back(UnderlyingInstrument_121);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_254;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_61605935"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_254);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1388562384"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_254);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_254);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_255;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_857161593"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_255);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_617838402"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_255);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_255);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_244;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1820528338"}, UnderlyingStipulations_NoUnderlyingStips_244);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_680286290"}, UnderlyingStipulations_NoUnderlyingStips_244);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_244);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_245;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_321787370"}, UnderlyingStipulations_NoUnderlyingStips_245);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_437026949"}, UnderlyingStipulations_NoUnderlyingStips_245);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_245);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_247;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1128722409"}, UndlyInstrumentParties_NoUndlyInstrumentParties_247);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_247);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{903170764}, UndlyInstrumentParties_NoUndlyInstrumentParties_247);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_247);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1869197993"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2076218249}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1737951029"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1604247799}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1970591151"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{599280405}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_248;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1566466114"}, UndlyInstrumentParties_NoUndlyInstrumentParties_248);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_248);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1155862888}, UndlyInstrumentParties_NoUndlyInstrumentParties_248);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_248);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_857614014"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1549349174}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1010966927"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{891722390}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_249;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_815222932"}, UndlyInstrumentParties_NoUndlyInstrumentParties_249);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_249);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1653550342}, UndlyInstrumentParties_NoUndlyInstrumentParties_249);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_249);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_831569928"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{363228287}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_496);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_122;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1494667269"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{574557497}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_36272977"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{27469911}, UnderlyingInstrument_122);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_122;
    UnderlyingAdjustedQuantity_122.setString("8963448");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_122, UnderlyingInstrument_122);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_122;
    UnderlyingAllocationPercent_122.setString("99.260000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_122, UnderlyingInstrument_122);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_122;
    UnderlyingAttachmentPoint_122.setString("13.030000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_2025067276"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1290407807"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_2131392067"}, UnderlyingInstrument_122);
    FIX::UnderlyingCapValue UnderlyingCapValue_122;
    UnderlyingCapValue_122.setString("5318888");
set_field(noUnderlyings_0_1, UnderlyingCapValue_122, UnderlyingInstrument_122);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_122;
    UnderlyingCashAmount_122.setString("10121221");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_122);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_122;
    UnderlyingContractMultiplier_122.setString("1223562");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{468886303}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1883234172"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_721636666"}, UnderlyingInstrument_122);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_122;
    UnderlyingCouponRate_122.setString("24.180000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_414911661"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_122);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_122;
    UnderlyingCurrentValue_122.setString("12725256");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_122, UnderlyingInstrument_122);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_122;
    UnderlyingDetachmentPoint_122.setString("50.800000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_122, UnderlyingInstrument_122);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_122;
    UnderlyingDirtyPrice_122.setString("13621031");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_122, UnderlyingInstrument_122);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_122;
    UnderlyingEndPrice_122.setString("167644");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_122, UnderlyingInstrument_122);
    FIX::UnderlyingEndValue UnderlyingEndValue_122;
    UnderlyingEndValue_122.setString("20945880");
set_field(noUnderlyings_0_1, UnderlyingEndValue_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{805110668}, UnderlyingInstrument_122);
    FIX::UnderlyingFXRate UnderlyingFXRate_122;
    UnderlyingFXRate_122.setString("16703147");
set_field(noUnderlyings_0_1, UnderlyingFXRate_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_122);
    FIX::UnderlyingFactor UnderlyingFactor_122;
    UnderlyingFactor_122.setString("16366805");
set_field(noUnderlyings_0_1, UnderlyingFactor_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{2033543047}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_171116853"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_63754445"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_2069816024"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_198586764"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_960099312"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_395632303"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1426808067"}, UnderlyingInstrument_122);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_122;
    UnderlyingNotionalPercentageOutstanding_122.setString("29.410000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_122);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_122;
    UnderlyingOriginalNotionalPercentageOutstanding_122.setString("64.870000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1369571821"}, UnderlyingInstrument_122);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_122;
    UnderlyingPriceUnitOfMeasureQty_122.setString("5506786");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1323359508}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1491928083}, UnderlyingInstrument_122);
    FIX::UnderlyingPx UnderlyingPx_122;
    UnderlyingPx_122.setString("10195649");
set_field(noUnderlyings_0_1, UnderlyingPx_122, UnderlyingInstrument_122);
    FIX::UnderlyingQty UnderlyingQty_122;
    UnderlyingQty_122.setString("10591100");
set_field(noUnderlyings_0_1, UnderlyingQty_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_66081101"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_907433688"}, UnderlyingInstrument_122);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_122;
    UnderlyingRepurchaseRate_122.setString("16.930000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1943580656}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1258569884"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_599063721"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1075462088"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_473189360"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_615828140"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1022566453"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1278300028"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_138659252"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1846499684"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_122);
    FIX::UnderlyingStartValue UnderlyingStartValue_122;
    UnderlyingStartValue_122.setString("247186");
set_field(noUnderlyings_0_1, UnderlyingStartValue_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2017616537"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_122);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_122;
    UnderlyingStrikePrice_122.setString("687196");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_122, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1791350734"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_342683331"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1495527721"}, UnderlyingInstrument_122);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_481550027"}, UnderlyingInstrument_122);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_122;
    UnderlyingUnitOfMeasureQty_122.setString("20287234");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_122, UnderlyingInstrument_122);
    all_values.push_back(UnderlyingInstrument_122);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_256;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1851121848"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_256);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_431918408"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_256);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_256);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_257;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_2082120068"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_257);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1195566283"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_257);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_257);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_258;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1451483326"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_258);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_993746452"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_258);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_258);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_246;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_211433366"}, UnderlyingStipulations_NoUnderlyingStips_246);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_320284498"}, UnderlyingStipulations_NoUnderlyingStips_246);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_246);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_247;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1057744393"}, UnderlyingStipulations_NoUnderlyingStips_247);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1470003250"}, UnderlyingStipulations_NoUnderlyingStips_247);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_247);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_250;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2133206481"}, UndlyInstrumentParties_NoUndlyInstrumentParties_250);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_250);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1535176359}, UndlyInstrumentParties_NoUndlyInstrumentParties_250);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_250);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1074008991"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1673835612}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_497);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_707305323"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1841505968}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_498);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1698554264"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{577438212}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_499);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_251;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_525273741"}, UndlyInstrumentParties_NoUndlyInstrumentParties_251);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_251);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{646157866}, UndlyInstrumentParties_NoUndlyInstrumentParties_251);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_251);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1988288624"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{2141685588}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_500);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_650690854"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1869528417}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_501);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::SecurityDefinitionUpdateReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_752962500"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{354329055}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_502);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_23;
  FIX::Yield Yield_23;
  Yield_23.setString("31.770000");
set_field(msg, Yield_23, YieldData_23);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_687598921"}, YieldData_23);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1549895338"}, YieldData_23);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_23;
  YieldRedemptionPrice_23.setString("16054465");
set_field(msg, YieldRedemptionPrice_23, YieldData_23);
  set_field(msg, FIX::YieldRedemptionPriceType{1681345373}, YieldData_23);
  set_field(msg, FIX::YieldType{"STRING_CURRENT"}, YieldData_23);
  all_values.push_back(YieldData_23);
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
