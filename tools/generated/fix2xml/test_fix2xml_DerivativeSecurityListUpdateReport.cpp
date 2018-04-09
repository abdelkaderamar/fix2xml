#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DerivativeSecurityListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityListUpdateReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::DerivativeSecurityListUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListUpdateReport_0;
  set_field(msg, FIX::LastFragment{true}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityReqID{"STRING_939196547"}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityRequestResult{4}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_584959314"}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityUpdateAction{'M'}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::TotNoRelatedSym{623240848}, DerivativeSecurityListUpdateReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(3, 9, 46, 27, 12, 2005)}, DerivativeSecurityListUpdateReport_0);
  all_values.push_back(DerivativeSecurityListUpdateReport_0);

  all_compo_names.insert("DerivativeSecurityListUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_3;
  set_field(msg, FIX::ApplID{"STRING_1010942839"}, ApplicationSequenceControl_3);
  set_field(msg, FIX::ApplLastSeqNum{1005784935}, ApplicationSequenceControl_3);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_3);
  set_field(msg, FIX::ApplSeqNum{1793919637}, ApplicationSequenceControl_3);
  all_values.push_back(ApplicationSequenceControl_3);
  all_compo_names.insert(".");

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_2;
  set_field(msg, FIX::DerivFlexProductEligibilityIndicator{true}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeCFICode{"STRING_301973644"}, DerivativeInstrument_2);
  FIX::DerivativeCapPrice DerivativeCapPrice_2;
  DerivativeCapPrice_2.setString("16007226");
set_field(msg, DerivativeCapPrice_2, DerivativeInstrument_2);
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_2;
  DerivativeContractMultiplier_2.setString("10097626");
set_field(msg, DerivativeContractMultiplier_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeContractMultiplierUnit{1464793985}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeContractSettlMonth{"MONTHYEAR_542969117"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeCountryOfIssue{"COUNTRY_912806389"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeEncodedIssuer{"DATA_1961102750"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeEncodedIssuerLen{273282863}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeEncodedSecurityDesc{"DATA_2102091651"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeEncodedSecurityDescLen{916204971}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeExerciseStyle{'4'}, DerivativeInstrument_2);
  FIX::DerivativeFloorPrice DerivativeFloorPrice_2;
  DerivativeFloorPrice_2.setString("15045666");
set_field(msg, DerivativeFloorPrice_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeFlowScheduleType{1747253132}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeInstrRegistry{"STRING_36345863"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeInstrmtAssignmentMethod{'2'}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeIssueDate{"LOCALMKTDATE_1778191033"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeIssuer{"STRING_621305177"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeListMethod{791011502}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeLocaleOfIssue{"STRING_253948233"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeMaturityDate{"LOCALMKTDATE_657838230"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeMaturityMonthYear{"MONTHYEAR_1786246793"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeMaturityTime{"TZTIMEONLY_1606766202"}, DerivativeInstrument_2);
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_2;
  DerivativeMinPriceIncrement_2.setString("11816965");
set_field(msg, DerivativeMinPriceIncrement_2, DerivativeInstrument_2);
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_2;
  DerivativeMinPriceIncrementAmount_2.setString("3967900");
set_field(msg, DerivativeMinPriceIncrementAmount_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeNTPositionLimit{1520472549}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeOptAttribute{'5'}, DerivativeInstrument_2);
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_2;
  DerivativeOptPayAmount_2.setString("14077329");
set_field(msg, DerivativeOptPayAmount_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativePositionLimit{378773836}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativePriceQuoteMethod{"STRING_1150051014"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativePriceUnitOfMeasure{"STRING_1054168920"}, DerivativeInstrument_2);
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_2;
  DerivativePriceUnitOfMeasureQty_2.setString("4227777");
set_field(msg, DerivativePriceUnitOfMeasureQty_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeProduct{1452024659}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeProductComplex{"STRING_507407927"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativePutOrCall{1432540465}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityDesc{"STRING_769334996"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityExchange{"EXCHANGE_1050377044"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityGroup{"STRING_197863206"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityID{"STRING_582954098"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityIDSource{"STRING_1323659908"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityStatus{"STRING_152471209"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecuritySubType{"STRING_1499159069"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSecurityType{"STRING_1743673221"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSettlMethod{'1'}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSettleOnOpenFlag{"STRING_1098928554"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeStateOrProvinceOfIssue{"STRING_1780019085"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeStrikeCurrency{"CAN"}, DerivativeInstrument_2);
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_2;
  DerivativeStrikeMultiplier_2.setString("2538406");
set_field(msg, DerivativeStrikeMultiplier_2, DerivativeInstrument_2);
  FIX::DerivativeStrikePrice DerivativeStrikePrice_2;
  DerivativeStrikePrice_2.setString("5968453");
set_field(msg, DerivativeStrikePrice_2, DerivativeInstrument_2);
  FIX::DerivativeStrikeValue DerivativeStrikeValue_2;
  DerivativeStrikeValue_2.setString("9835841");
set_field(msg, DerivativeStrikeValue_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSymbol{"STRING_911678844"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeSymbolSfx{"STRING_235608475"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeTimeUnit{"STRING_442866726"}, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeUnitOfMeasure{"STRING_2093375381"}, DerivativeInstrument_2);
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_2;
  DerivativeUnitOfMeasureQty_2.setString("6323985");
set_field(msg, DerivativeUnitOfMeasureQty_2, DerivativeInstrument_2);
  set_field(msg, FIX::DerivativeValuationMethod{"STRING_1963339276"}, DerivativeInstrument_2);
  all_values.push_back(DerivativeInstrument_2);
  all_compo_names.insert("..");

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_5;
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventDate{"LOCALMKTDATE_2040131498"}, DerivativeEventsGrp_NoDerivativeEvents_5);
    FIX::DerivativeEventPx DerivativeEventPx_5;
    DerivativeEventPx_5.setString("1946294");
set_field(noDerivativeEvents_0_0, DerivativeEventPx_5, DerivativeEventsGrp_NoDerivativeEvents_5);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventText{"STRING_1599582419"}, DerivativeEventsGrp_NoDerivativeEvents_5);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(5, 50, 17, 14, 11, 2001)}, DerivativeEventsGrp_NoDerivativeEvents_5);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventType{100327276}, DerivativeEventsGrp_NoDerivativeEvents_5);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_5);
    all_compo_names.insert(".....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_6;
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventDate{"LOCALMKTDATE_108928877"}, DerivativeEventsGrp_NoDerivativeEvents_6);
    FIX::DerivativeEventPx DerivativeEventPx_6;
    DerivativeEventPx_6.setString("16807780");
set_field(noDerivativeEvents_0_1, DerivativeEventPx_6, DerivativeEventsGrp_NoDerivativeEvents_6);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventText{"STRING_252798485"}, DerivativeEventsGrp_NoDerivativeEvents_6);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(7, 18, 32, 12, 3, 2007)}, DerivativeEventsGrp_NoDerivativeEvents_6);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventType{1163343626}, DerivativeEventsGrp_NoDerivativeEvents_6);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_6);
    all_compo_names.insert(".....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeEvents noDerivativeEvents_0_2;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_7;
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventDate{"LOCALMKTDATE_165031888"}, DerivativeEventsGrp_NoDerivativeEvents_7);
    FIX::DerivativeEventPx DerivativeEventPx_7;
    DerivativeEventPx_7.setString("1252693");
set_field(noDerivativeEvents_0_2, DerivativeEventPx_7, DerivativeEventsGrp_NoDerivativeEvents_7);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventText{"STRING_2075022471"}, DerivativeEventsGrp_NoDerivativeEvents_7);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(2, 24, 30, 6, 10, 2006)}, DerivativeEventsGrp_NoDerivativeEvents_7);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventType{578621134}, DerivativeEventsGrp_NoDerivativeEvents_7);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_7);
    all_compo_names.insert(".....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_2);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_5;
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyID{"STRING_1872503550"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyIDSource{"STRING_1196028388"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyRole{679184163}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);
    all_compo_names.insert(".....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8;
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_1098492458"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8);
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubIDType{205158941}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_6;
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyID{"STRING_1536362693"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_6);
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyIDSource{"STRING_1198819735"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_6);
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyRole{314087818}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_6);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_6);
    all_compo_names.insert(".....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_1451618220"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_0, FIX::DerivativeInstrumentPartySubIDType{1922175765}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_1, FIX::DerivativeInstrumentPartySubID{"STRING_199140973"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_1, FIX::DerivativeInstrumentPartySubIDType{1213970951}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_2;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_2, FIX::DerivativeInstrumentPartySubID{"STRING_334224969"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_2, FIX::DerivativeInstrumentPartySubIDType{1108643985}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_11);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_2;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_7;
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyID{"STRING_782157509"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_7);
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyIDSource{"STRING_1623393761"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_7);
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyRole{124503964}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_7);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_7);
    all_compo_names.insert(".....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_12;
      set_field(noDerivativeInstrumentPartySubIDs_2_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_1748663076"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_12);
      set_field(noDerivativeInstrumentPartySubIDs_2_1_0, FIX::DerivativeInstrumentPartySubIDType{52042787}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_12);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_12);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_13;
      set_field(noDerivativeInstrumentPartySubIDs_2_1_1, FIX::DerivativeInstrumentPartySubID{"STRING_1347829761"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_13);
      set_field(noDerivativeInstrumentPartySubIDs_2_1_1, FIX::DerivativeInstrumentPartySubIDType{169315470}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_13);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_13);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_2);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2;
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltID{"STRING_233385044"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2);
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltIDSource{"STRING_553307140"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2);
    all_compo_names.insert(".....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_1;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3;
    set_field(noDerivativeSecurityAltID_0_1, FIX::DerivativeSecurityAltID{"STRING_248435304"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3);
    set_field(noDerivativeSecurityAltID_0_1, FIX::DerivativeSecurityAltIDSource{"STRING_1159071824"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3);
    all_compo_names.insert(".....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_2;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4;
    set_field(noDerivativeSecurityAltID_0_2, FIX::DerivativeSecurityAltID{"STRING_1131928275"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4);
    set_field(noDerivativeSecurityAltID_0_2, FIX::DerivativeSecurityAltIDSource{"STRING_23496036"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4);
    all_compo_names.insert(".....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_2);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_4;
  set_field(msg, FIX::DerivativeSecurityXML{"DATA_884091727"}, DerivativeSecurityXML_4);
  set_field(msg, FIX::DerivativeSecurityXMLLen{180473015}, DerivativeSecurityXML_4);
  set_field(msg, FIX::DerivativeSecurityXMLSchema{"STRING_702680199"}, DerivativeSecurityXML_4);
  all_values.push_back(DerivativeSecurityXML_4);
  all_compo_names.insert("...");

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_3;
    set_field(noDerivativeInstrAttrib_0_0, FIX::DerivativeInstrAttribType{1278965473}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_3);
    set_field(noDerivativeInstrAttrib_0_0, FIX::DerivativeInstrAttribValue{"STRING_907839141"}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_3);
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_3);
    all_compo_names.insert("....NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_1;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_4;
    set_field(noDerivativeInstrAttrib_0_1, FIX::DerivativeInstrAttribType{1452215371}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_4);
    set_field(noDerivativeInstrAttrib_0_1, FIX::DerivativeInstrAttribValue{"STRING_330301560"}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_4);
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_4);
    all_compo_names.insert("....NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_1);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_1;
    set_field(noMarketSegments_0_0, FIX::MarketID{"EXCHANGE_374388770"}, MarketSegmentGrp_NoMarketSegments_1);
    set_field(noMarketSegments_0_0, FIX::MarketSegmentID{"STRING_1781919781"}, MarketSegmentGrp_NoMarketSegments_1);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_1);
    all_compo_names.insert("....NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_1;
    set_field(noMarketSegments_0_0, FIX::ExpirationCycle{2}, BaseTradingRules_1);
    set_field(noMarketSegments_0_0, FIX::ImpliedMarketIndicator{3}, BaseTradingRules_1);
    FIX::MaxPriceVariation MaxPriceVariation_1;
    MaxPriceVariation_1.setString("8484070");
set_field(noMarketSegments_0_0, MaxPriceVariation_1, BaseTradingRules_1);
    FIX::MaxTradeVol MaxTradeVol_1;
    MaxTradeVol_1.setString("13308440");
set_field(noMarketSegments_0_0, MaxTradeVol_1, BaseTradingRules_1);
    FIX::MinTradeVol MinTradeVol_1;
    MinTradeVol_1.setString("16821737");
set_field(noMarketSegments_0_0, MinTradeVol_1, BaseTradingRules_1);
    set_field(noMarketSegments_0_0, FIX::MultilegModel{0}, BaseTradingRules_1);
    set_field(noMarketSegments_0_0, FIX::MultilegPriceMethod{3}, BaseTradingRules_1);
    set_field(noMarketSegments_0_0, FIX::PriceType{19}, BaseTradingRules_1);
    FIX::RoundLot RoundLot_1;
    RoundLot_1.setString("4302703");
set_field(noMarketSegments_0_0, RoundLot_1, BaseTradingRules_1);
    set_field(noMarketSegments_0_0, FIX::TradingCurrency{"JPY"}, BaseTradingRules_1);
    all_values.push_back(BaseTradingRules_1);
    all_compo_names.insert("....NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_3;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_3);
      FIX::MinLotSize MinLotSize_3;
      MinLotSize_3.setString("17841938");
set_field(noLotTypeRules_0_1_0, MinLotSize_3, LotTypeRules_NoLotTypeRules_3);
      all_values.push_back(LotTypeRules_NoLotTypeRules_3);
      all_compo_names.insert("....NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_1;
    FIX::HighLimitPrice HighLimitPrice_1;
    HighLimitPrice_1.setString("20114851");
set_field(noMarketSegments_0_0, HighLimitPrice_1, PriceLimits_1);
    FIX::LowLimitPrice LowLimitPrice_1;
    LowLimitPrice_1.setString("11305561");
set_field(noMarketSegments_0_0, LowLimitPrice_1, PriceLimits_1);
    set_field(noMarketSegments_0_0, FIX::PriceLimitType{1}, PriceLimits_1);
    FIX::TradingReferencePrice TradingReferencePrice_1;
    TradingReferencePrice_1.setString("10230733");
set_field(noMarketSegments_0_0, TradingReferencePrice_1, PriceLimits_1);
    all_values.push_back(PriceLimits_1);
    all_compo_names.insert("....NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_1;
      FIX::EndTickPriceRange EndTickPriceRange_1;
      EndTickPriceRange_1.setString("20561251");
set_field(noTickRules_0_1_0, EndTickPriceRange_1, TickRules_NoTickRules_1);
      FIX::StartTickPriceRange StartTickPriceRange_1;
      StartTickPriceRange_1.setString("19071650");
set_field(noTickRules_0_1_0, StartTickPriceRange_1, TickRules_NoTickRules_1);
      FIX::TickIncrement TickIncrement_1;
      TickIncrement_1.setString("2954738");
set_field(noTickRules_0_1_0, TickIncrement_1, TickRules_NoTickRules_1);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{0}, TickRules_NoTickRules_1);
      all_values.push_back(TickRules_NoTickRules_1);
      all_compo_names.insert("....NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_2;
      FIX::EndTickPriceRange EndTickPriceRange_2;
      EndTickPriceRange_2.setString("18230177");
set_field(noTickRules_0_1_1, EndTickPriceRange_2, TickRules_NoTickRules_2);
      FIX::StartTickPriceRange StartTickPriceRange_2;
      StartTickPriceRange_2.setString("15744393");
set_field(noTickRules_0_1_1, StartTickPriceRange_2, TickRules_NoTickRules_2);
      FIX::TickIncrement TickIncrement_2;
      TickIncrement_2.setString("15191608");
set_field(noTickRules_0_1_1, TickIncrement_2, TickRules_NoTickRules_2);
      set_field(noTickRules_0_1_1, FIX::TickRuleType{4}, TickRules_NoTickRules_2);
      all_values.push_back(TickRules_NoTickRules_2);
      all_compo_names.insert("....NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_3;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{593604167}, NestedInstrumentAttribute_NoNestedInstrAttrib_3);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_1502138224"}, NestedInstrumentAttribute_NoNestedInstrAttrib_3);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_3);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_4;
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribType{1539177007}, NestedInstrumentAttribute_NoNestedInstrAttrib_4);
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribValue{"STRING_1590223244"}, NestedInstrumentAttribute_NoNestedInstrAttrib_4);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_4);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_5;
      set_field(noNestedInstrAttrib_0_1_2, FIX::NestedInstrAttribType{2075667968}, NestedInstrumentAttribute_NoNestedInstrAttrib_5);
      set_field(noNestedInstrAttrib_0_1_2, FIX::NestedInstrAttribValue{"STRING_240100443"}, NestedInstrumentAttribute_NoNestedInstrAttrib_5);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_5);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_3;
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_3);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_3);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_3);
      all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_6;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_6);
        all_values.push_back(ExecInstRules_NoExecInstRules_6);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_8;
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_8);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_980788926"}, MarketDataFeedTypes_NoMDFeedTypes_8);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{1931551837}, MarketDataFeedTypes_NoMDFeedTypes_8);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_8);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_9;
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_9);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDFeedType{"STRING_617499101"}, MarketDataFeedTypes_NoMDFeedTypes_9);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MarketDepth{1795553338}, MarketDataFeedTypes_NoMDFeedTypes_9);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_9);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_3;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_502644580"}, MatchRules_NoMatchRules_3);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_M2"}, MatchRules_NoMatchRules_3);
        all_values.push_back(MatchRules_NoMatchRules_3);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_4;
        set_field(noMatchRules_0_0_2_1, FIX::MatchAlgorithm{"STRING_1663593822"}, MatchRules_NoMatchRules_4);
        set_field(noMatchRules_0_0_2_1, FIX::MatchType{"STRING_MT"}, MatchRules_NoMatchRules_4);
        all_values.push_back(MatchRules_NoMatchRules_4);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_5;
        set_field(noMatchRules_0_0_2_2, FIX::MatchAlgorithm{"STRING_430824420"}, MatchRules_NoMatchRules_5);
        set_field(noMatchRules_0_0_2_2, FIX::MatchType{"STRING_8"}, MatchRules_NoMatchRules_5);
        all_values.push_back(MatchRules_NoMatchRules_5);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_8;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'8'}, OrdTypeRules_NoOrdTypeRules_8);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_8);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_4;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_4);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_4);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_5;
        set_field(noTimeInForceRules_0_0_2_1, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_5);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_5);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_1;
      FIX::EndStrikePxRange EndStrikePxRange_1;
      EndStrikePxRange_1.setString("9878891");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_1, StrikeRules_NoStrikeRules_1);
      FIX::StartStrikePxRange StartStrikePxRange_1;
      StartStrikePxRange_1.setString("5887625");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_1, StrikeRules_NoStrikeRules_1);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{534973915}, StrikeRules_NoStrikeRules_1);
      FIX::StrikeIncrement StrikeIncrement_1;
      StrikeIncrement_1.setString("4306287");
set_field(noStrikeRules_0_1_0, StrikeIncrement_1, StrikeRules_NoStrikeRules_1);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_516946854"}, StrikeRules_NoStrikeRules_1);
      all_values.push_back(StrikeRules_NoStrikeRules_1);
      all_compo_names.insert("....NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_3;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1204212424"}, MaturityRules_NoMaturityRules_3);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_3);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{498255747}, MaturityRules_NoMaturityRules_3);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_3);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_1249373349"}, MaturityRules_NoMaturityRules_3);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_651707480"}, MaturityRules_NoMaturityRules_3);
        all_values.push_back(MaturityRules_NoMaturityRules_3);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_4;
        set_field(noMaturityRules_0_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_477854317"}, MaturityRules_NoMaturityRules_4);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_4);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrement{435775669}, MaturityRules_NoMaturityRules_4);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_4);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityRuleID{"STRING_700177728"}, MaturityRules_NoMaturityRules_4);
        set_field(noMaturityRules_0_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_83845360"}, MaturityRules_NoMaturityRules_4);
        all_values.push_back(MaturityRules_NoMaturityRules_4);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_2;
      FIX::EndStrikePxRange EndStrikePxRange_2;
      EndStrikePxRange_2.setString("2970004");
set_field(noStrikeRules_0_1_1, EndStrikePxRange_2, StrikeRules_NoStrikeRules_2);
      FIX::StartStrikePxRange StartStrikePxRange_2;
      StartStrikePxRange_2.setString("12028223");
set_field(noStrikeRules_0_1_1, StartStrikePxRange_2, StrikeRules_NoStrikeRules_2);
      set_field(noStrikeRules_0_1_1, FIX::StrikeExerciseStyle{754988376}, StrikeRules_NoStrikeRules_2);
      FIX::StrikeIncrement StrikeIncrement_2;
      StrikeIncrement_2.setString("19605942");
set_field(noStrikeRules_0_1_1, StrikeIncrement_2, StrikeRules_NoStrikeRules_2);
      set_field(noStrikeRules_0_1_1, FIX::StrikeRuleID{"STRING_1614108404"}, StrikeRules_NoStrikeRules_2);
      all_values.push_back(StrikeRules_NoStrikeRules_2);
      all_compo_names.insert("....NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_5;
        set_field(noMaturityRules_0_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1772178302"}, MaturityRules_NoMaturityRules_5);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_5);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrement{1292171300}, MaturityRules_NoMaturityRules_5);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_5);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityRuleID{"STRING_883517585"}, MaturityRules_NoMaturityRules_5);
        set_field(noMaturityRules_0_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_378795610"}, MaturityRules_NoMaturityRules_5);
        all_values.push_back(MaturityRules_NoMaturityRules_5);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments noMarketSegments_0_1;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_2;
    set_field(noMarketSegments_0_1, FIX::MarketID{"EXCHANGE_6514891"}, MarketSegmentGrp_NoMarketSegments_2);
    set_field(noMarketSegments_0_1, FIX::MarketSegmentID{"STRING_1871406771"}, MarketSegmentGrp_NoMarketSegments_2);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_2);
    all_compo_names.insert("....NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_2;
    set_field(noMarketSegments_0_1, FIX::ExpirationCycle{1}, BaseTradingRules_2);
    set_field(noMarketSegments_0_1, FIX::ImpliedMarketIndicator{2}, BaseTradingRules_2);
    FIX::MaxPriceVariation MaxPriceVariation_2;
    MaxPriceVariation_2.setString("1545519");
set_field(noMarketSegments_0_1, MaxPriceVariation_2, BaseTradingRules_2);
    FIX::MaxTradeVol MaxTradeVol_2;
    MaxTradeVol_2.setString("14845049");
set_field(noMarketSegments_0_1, MaxTradeVol_2, BaseTradingRules_2);
    FIX::MinTradeVol MinTradeVol_2;
    MinTradeVol_2.setString("13165631");
set_field(noMarketSegments_0_1, MinTradeVol_2, BaseTradingRules_2);
    set_field(noMarketSegments_0_1, FIX::MultilegModel{0}, BaseTradingRules_2);
    set_field(noMarketSegments_0_1, FIX::MultilegPriceMethod{4}, BaseTradingRules_2);
    set_field(noMarketSegments_0_1, FIX::PriceType{18}, BaseTradingRules_2);
    FIX::RoundLot RoundLot_2;
    RoundLot_2.setString("19958309");
set_field(noMarketSegments_0_1, RoundLot_2, BaseTradingRules_2);
    set_field(noMarketSegments_0_1, FIX::TradingCurrency{"JPY"}, BaseTradingRules_2);
    all_values.push_back(BaseTradingRules_2);
    all_compo_names.insert("....NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_4;
      set_field(noLotTypeRules_1_1_0, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_4);
      FIX::MinLotSize MinLotSize_4;
      MinLotSize_4.setString("7548184");
set_field(noLotTypeRules_1_1_0, MinLotSize_4, LotTypeRules_NoLotTypeRules_4);
      all_values.push_back(LotTypeRules_NoLotTypeRules_4);
      all_compo_names.insert("....NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_5;
      set_field(noLotTypeRules_1_1_1, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_5);
      FIX::MinLotSize MinLotSize_5;
      MinLotSize_5.setString("13490723");
set_field(noLotTypeRules_1_1_1, MinLotSize_5, LotTypeRules_NoLotTypeRules_5);
      all_values.push_back(LotTypeRules_NoLotTypeRules_5);
      all_compo_names.insert("....NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_2;
    FIX::HighLimitPrice HighLimitPrice_2;
    HighLimitPrice_2.setString("8386637");
set_field(noMarketSegments_0_1, HighLimitPrice_2, PriceLimits_2);
    FIX::LowLimitPrice LowLimitPrice_2;
    LowLimitPrice_2.setString("15190931");
set_field(noMarketSegments_0_1, LowLimitPrice_2, PriceLimits_2);
    set_field(noMarketSegments_0_1, FIX::PriceLimitType{1}, PriceLimits_2);
    FIX::TradingReferencePrice TradingReferencePrice_2;
    TradingReferencePrice_2.setString("15936521");
set_field(noMarketSegments_0_1, TradingReferencePrice_2, PriceLimits_2);
    all_values.push_back(PriceLimits_2);
    all_compo_names.insert("....NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_3;
      FIX::EndTickPriceRange EndTickPriceRange_3;
      EndTickPriceRange_3.setString("20185193");
set_field(noTickRules_1_1_0, EndTickPriceRange_3, TickRules_NoTickRules_3);
      FIX::StartTickPriceRange StartTickPriceRange_3;
      StartTickPriceRange_3.setString("6319812");
set_field(noTickRules_1_1_0, StartTickPriceRange_3, TickRules_NoTickRules_3);
      FIX::TickIncrement TickIncrement_3;
      TickIncrement_3.setString("9568984");
set_field(noTickRules_1_1_0, TickIncrement_3, TickRules_NoTickRules_3);
      set_field(noTickRules_1_1_0, FIX::TickRuleType{0}, TickRules_NoTickRules_3);
      all_values.push_back(TickRules_NoTickRules_3);
      all_compo_names.insert("....NoMarketSegments.....NoTickRules");

      noMarketSegments_0_1.addGroup(noTickRules_1_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_6;
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribType{1967616434}, NestedInstrumentAttribute_NoNestedInstrAttrib_6);
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribValue{"STRING_1243785880"}, NestedInstrumentAttribute_NoNestedInstrAttrib_6);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_6);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_7;
      set_field(noNestedInstrAttrib_1_1_1, FIX::NestedInstrAttribType{155464560}, NestedInstrumentAttribute_NoNestedInstrAttrib_7);
      set_field(noNestedInstrAttrib_1_1_1, FIX::NestedInstrAttribValue{"STRING_1974131325"}, NestedInstrumentAttribute_NoNestedInstrAttrib_7);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_7);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_4;
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_4);
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionSubID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_4);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_4);
      all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_7;
        set_field(noExecInstRules_1_0_2_0, FIX::ExecInstValue{'4'}, ExecInstRules_NoExecInstRules_7);
        all_values.push_back(ExecInstRules_NoExecInstRules_7);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_8;
        set_field(noExecInstRules_1_0_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_8);
        all_values.push_back(ExecInstRules_NoExecInstRules_8);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_10;
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_10);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDFeedType{"STRING_1352034911"}, MarketDataFeedTypes_NoMDFeedTypes_10);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MarketDepth{181888847}, MarketDataFeedTypes_NoMDFeedTypes_10);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_10);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_11;
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_11);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDFeedType{"STRING_1671077655"}, MarketDataFeedTypes_NoMDFeedTypes_11);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MarketDepth{508090422}, MarketDataFeedTypes_NoMDFeedTypes_11);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_11);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_12;
        set_field(noMDFeedTypes_1_0_2_2, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_12);
        set_field(noMDFeedTypes_1_0_2_2, FIX::MDFeedType{"STRING_278412421"}, MarketDataFeedTypes_NoMDFeedTypes_12);
        set_field(noMDFeedTypes_1_0_2_2, FIX::MarketDepth{1730183114}, MarketDataFeedTypes_NoMDFeedTypes_12);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_12);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_6;
        set_field(noMatchRules_1_0_2_0, FIX::MatchAlgorithm{"STRING_1117076194"}, MatchRules_NoMatchRules_6);
        set_field(noMatchRules_1_0_2_0, FIX::MatchType{"STRING_M3"}, MatchRules_NoMatchRules_6);
        all_values.push_back(MatchRules_NoMatchRules_6);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_7;
        set_field(noMatchRules_1_0_2_1, FIX::MatchAlgorithm{"STRING_597996838"}, MatchRules_NoMatchRules_7);
        set_field(noMatchRules_1_0_2_1, FIX::MatchType{"STRING_A3"}, MatchRules_NoMatchRules_7);
        all_values.push_back(MatchRules_NoMatchRules_7);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_8;
        set_field(noMatchRules_1_0_2_2, FIX::MatchAlgorithm{"STRING_286512770"}, MatchRules_NoMatchRules_8);
        set_field(noMatchRules_1_0_2_2, FIX::MatchType{"STRING_3"}, MatchRules_NoMatchRules_8);
        all_values.push_back(MatchRules_NoMatchRules_8);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_9;
        set_field(noOrdTypeRules_1_0_2_0, FIX::OrdType{'M'}, OrdTypeRules_NoOrdTypeRules_9);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_9);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_10;
        set_field(noOrdTypeRules_1_0_2_1, FIX::OrdType{'E'}, OrdTypeRules_NoOrdTypeRules_10);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_10);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_11;
        set_field(noOrdTypeRules_1_0_2_2, FIX::OrdType{'H'}, OrdTypeRules_NoOrdTypeRules_11);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_11);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_6;
        set_field(noTimeInForceRules_1_0_2_0, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_6);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_6);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_5;
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_5);
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionSubID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_5);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_5);
      all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_9;
        set_field(noExecInstRules_1_1_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_9);
        all_values.push_back(ExecInstRules_NoExecInstRules_9);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_10;
        set_field(noExecInstRules_1_1_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_10);
        all_values.push_back(ExecInstRules_NoExecInstRules_10);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_11;
        set_field(noExecInstRules_1_1_2_2, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_11);
        all_values.push_back(ExecInstRules_NoExecInstRules_11);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_13;
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_13);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDFeedType{"STRING_201630945"}, MarketDataFeedTypes_NoMDFeedTypes_13);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MarketDepth{339829278}, MarketDataFeedTypes_NoMDFeedTypes_13);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_13);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_14;
        set_field(noMDFeedTypes_1_1_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_14);
        set_field(noMDFeedTypes_1_1_2_1, FIX::MDFeedType{"STRING_383519792"}, MarketDataFeedTypes_NoMDFeedTypes_14);
        set_field(noMDFeedTypes_1_1_2_1, FIX::MarketDepth{682931896}, MarketDataFeedTypes_NoMDFeedTypes_14);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_14);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_15;
        set_field(noMDFeedTypes_1_1_2_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_15);
        set_field(noMDFeedTypes_1_1_2_2, FIX::MDFeedType{"STRING_891610215"}, MarketDataFeedTypes_NoMDFeedTypes_15);
        set_field(noMDFeedTypes_1_1_2_2, FIX::MarketDepth{1674929097}, MarketDataFeedTypes_NoMDFeedTypes_15);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_15);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_9;
        set_field(noMatchRules_1_1_2_0, FIX::MatchAlgorithm{"STRING_474309681"}, MatchRules_NoMatchRules_9);
        set_field(noMatchRules_1_1_2_0, FIX::MatchType{"STRING_4"}, MatchRules_NoMatchRules_9);
        all_values.push_back(MatchRules_NoMatchRules_9);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_10;
        set_field(noMatchRules_1_1_2_1, FIX::MatchAlgorithm{"STRING_919178053"}, MatchRules_NoMatchRules_10);
        set_field(noMatchRules_1_1_2_1, FIX::MatchType{"STRING_M4"}, MatchRules_NoMatchRules_10);
        all_values.push_back(MatchRules_NoMatchRules_10);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_12;
        set_field(noOrdTypeRules_1_1_2_0, FIX::OrdType{'E'}, OrdTypeRules_NoOrdTypeRules_12);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_12);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_13;
        set_field(noOrdTypeRules_1_1_2_1, FIX::OrdType{'B'}, OrdTypeRules_NoOrdTypeRules_13);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_13);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_14;
        set_field(noOrdTypeRules_1_1_2_2, FIX::OrdType{'8'}, OrdTypeRules_NoOrdTypeRules_14);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_14);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_7;
        set_field(noTimeInForceRules_1_1_2_0, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_7);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_7);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_8;
        set_field(noTimeInForceRules_1_1_2_1, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_8);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_8);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_1);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_1_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_6;
      set_field(noTradingSessionRules_1_1_2, FIX::TradingSessionID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_6);
      set_field(noTradingSessionRules_1_1_2, FIX::TradingSessionSubID{"STRING_1"}, TradingSessionRulesGrp_NoTradingSessionRules_6);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_6);
      all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_12;
        set_field(noExecInstRules_1_2_2_0, FIX::ExecInstValue{'4'}, ExecInstRules_NoExecInstRules_12);
        all_values.push_back(ExecInstRules_NoExecInstRules_12);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_2.addGroup(noExecInstRules_1_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_16;
        set_field(noMDFeedTypes_1_2_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_16);
        set_field(noMDFeedTypes_1_2_2_0, FIX::MDFeedType{"STRING_584834455"}, MarketDataFeedTypes_NoMDFeedTypes_16);
        set_field(noMDFeedTypes_1_2_2_0, FIX::MarketDepth{2023122857}, MarketDataFeedTypes_NoMDFeedTypes_16);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_16);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_2.addGroup(noMDFeedTypes_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_17;
        set_field(noMDFeedTypes_1_2_2_1, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_17);
        set_field(noMDFeedTypes_1_2_2_1, FIX::MDFeedType{"STRING_1147777071"}, MarketDataFeedTypes_NoMDFeedTypes_17);
        set_field(noMDFeedTypes_1_2_2_1, FIX::MarketDepth{671183375}, MarketDataFeedTypes_NoMDFeedTypes_17);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_17);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_2.addGroup(noMDFeedTypes_1_2_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_1_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_11;
        set_field(noMatchRules_1_2_2_0, FIX::MatchAlgorithm{"STRING_1487606349"}, MatchRules_NoMatchRules_11);
        set_field(noMatchRules_1_2_2_0, FIX::MatchType{"STRING_A4"}, MatchRules_NoMatchRules_11);
        all_values.push_back(MatchRules_NoMatchRules_11);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_2.addGroup(noMatchRules_1_2_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_15;
        set_field(noOrdTypeRules_1_2_2_0, FIX::OrdType{'6'}, OrdTypeRules_NoOrdTypeRules_15);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_15);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_16;
        set_field(noOrdTypeRules_1_2_2_1, FIX::OrdType{'K'}, OrdTypeRules_NoOrdTypeRules_16);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_16);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_17;
        set_field(noOrdTypeRules_1_2_2_2, FIX::OrdType{'9'}, OrdTypeRules_NoOrdTypeRules_17);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_17);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_9;
        set_field(noTimeInForceRules_1_2_2_0, FIX::TimeInForce{'9'}, TimeInForceRules_NoTimeInForceRules_9);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_9);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_2.addGroup(noTimeInForceRules_1_2_2_0);
      }
      noMarketSegments_0_1.addGroup(noTradingSessionRules_1_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_3;
      FIX::EndStrikePxRange EndStrikePxRange_3;
      EndStrikePxRange_3.setString("14190150");
set_field(noStrikeRules_1_1_0, EndStrikePxRange_3, StrikeRules_NoStrikeRules_3);
      FIX::StartStrikePxRange StartStrikePxRange_3;
      StartStrikePxRange_3.setString("9162481");
set_field(noStrikeRules_1_1_0, StartStrikePxRange_3, StrikeRules_NoStrikeRules_3);
      set_field(noStrikeRules_1_1_0, FIX::StrikeExerciseStyle{1536571769}, StrikeRules_NoStrikeRules_3);
      FIX::StrikeIncrement StrikeIncrement_3;
      StrikeIncrement_3.setString("17380431");
set_field(noStrikeRules_1_1_0, StrikeIncrement_3, StrikeRules_NoStrikeRules_3);
      set_field(noStrikeRules_1_1_0, FIX::StrikeRuleID{"STRING_251187255"}, StrikeRules_NoStrikeRules_3);
      all_values.push_back(StrikeRules_NoStrikeRules_3);
      all_compo_names.insert("....NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_6;
        set_field(noMaturityRules_1_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_378620234"}, MaturityRules_NoMaturityRules_6);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_6);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrement{62762194}, MaturityRules_NoMaturityRules_6);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_6);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityRuleID{"STRING_135928741"}, MaturityRules_NoMaturityRules_6);
        set_field(noMaturityRules_1_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_2084848848"}, MaturityRules_NoMaturityRules_6);
        all_values.push_back(MaturityRules_NoMaturityRules_6);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_7;
        set_field(noMaturityRules_1_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1391462842"}, MaturityRules_NoMaturityRules_7);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_7);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearIncrement{702159890}, MaturityRules_NoMaturityRules_7);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_7);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityRuleID{"STRING_1202699092"}, MaturityRules_NoMaturityRules_7);
        set_field(noMaturityRules_1_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_577799099"}, MaturityRules_NoMaturityRules_7);
        all_values.push_back(MaturityRules_NoMaturityRules_7);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_4;
      FIX::EndStrikePxRange EndStrikePxRange_4;
      EndStrikePxRange_4.setString("18371384");
set_field(noStrikeRules_1_1_1, EndStrikePxRange_4, StrikeRules_NoStrikeRules_4);
      FIX::StartStrikePxRange StartStrikePxRange_4;
      StartStrikePxRange_4.setString("2029925");
set_field(noStrikeRules_1_1_1, StartStrikePxRange_4, StrikeRules_NoStrikeRules_4);
      set_field(noStrikeRules_1_1_1, FIX::StrikeExerciseStyle{1248982474}, StrikeRules_NoStrikeRules_4);
      FIX::StrikeIncrement StrikeIncrement_4;
      StrikeIncrement_4.setString("481682");
set_field(noStrikeRules_1_1_1, StrikeIncrement_4, StrikeRules_NoStrikeRules_4);
      set_field(noStrikeRules_1_1_1, FIX::StrikeRuleID{"STRING_1690598865"}, StrikeRules_NoStrikeRules_4);
      all_values.push_back(StrikeRules_NoStrikeRules_4);
      all_compo_names.insert("....NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_8;
        set_field(noMaturityRules_1_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_790201439"}, MaturityRules_NoMaturityRules_8);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_8);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearIncrement{2115229523}, MaturityRules_NoMaturityRules_8);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_8);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityRuleID{"STRING_1264153509"}, MaturityRules_NoMaturityRules_8);
        set_field(noMaturityRules_1_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_2112299624"}, MaturityRules_NoMaturityRules_8);
        all_values.push_back(MaturityRules_NoMaturityRules_8);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_9;
        set_field(noMaturityRules_1_1_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_236830689"}, MaturityRules_NoMaturityRules_9);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_9);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearIncrement{881064131}, MaturityRules_NoMaturityRules_9);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_9);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityRuleID{"STRING_126244386"}, MaturityRules_NoMaturityRules_9);
        set_field(noMaturityRules_1_1_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1132251386"}, MaturityRules_NoMaturityRules_9);
        all_values.push_back(MaturityRules_NoMaturityRules_9);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_1);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules noStrikeRules_1_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_5;
      FIX::EndStrikePxRange EndStrikePxRange_5;
      EndStrikePxRange_5.setString("8776220");
set_field(noStrikeRules_1_1_2, EndStrikePxRange_5, StrikeRules_NoStrikeRules_5);
      FIX::StartStrikePxRange StartStrikePxRange_5;
      StartStrikePxRange_5.setString("5048646");
set_field(noStrikeRules_1_1_2, StartStrikePxRange_5, StrikeRules_NoStrikeRules_5);
      set_field(noStrikeRules_1_1_2, FIX::StrikeExerciseStyle{1913603737}, StrikeRules_NoStrikeRules_5);
      FIX::StrikeIncrement StrikeIncrement_5;
      StrikeIncrement_5.setString("9403841");
set_field(noStrikeRules_1_1_2, StrikeIncrement_5, StrikeRules_NoStrikeRules_5);
      set_field(noStrikeRules_1_1_2, FIX::StrikeRuleID{"STRING_353362788"}, StrikeRules_NoStrikeRules_5);
      all_values.push_back(StrikeRules_NoStrikeRules_5);
      all_compo_names.insert("....NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_10;
        set_field(noMaturityRules_1_2_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_877749399"}, MaturityRules_NoMaturityRules_10);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_10);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityMonthYearIncrement{519913467}, MaturityRules_NoMaturityRules_10);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_10);
        set_field(noMaturityRules_1_2_2_0, FIX::MaturityRuleID{"STRING_1277597947"}, MaturityRules_NoMaturityRules_10);
        set_field(noMaturityRules_1_2_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1722612559"}, MaturityRules_NoMaturityRules_10);
        all_values.push_back(MaturityRules_NoMaturityRules_10);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_2.addGroup(noMaturityRules_1_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_11;
        set_field(noMaturityRules_1_2_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_10224740"}, MaturityRules_NoMaturityRules_11);
        set_field(noMaturityRules_1_2_2_1, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_11);
        set_field(noMaturityRules_1_2_2_1, FIX::MaturityMonthYearIncrement{1925605074}, MaturityRules_NoMaturityRules_11);
        set_field(noMaturityRules_1_2_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_11);
        set_field(noMaturityRules_1_2_2_1, FIX::MaturityRuleID{"STRING_1015420965"}, MaturityRules_NoMaturityRules_11);
        set_field(noMaturityRules_1_2_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1468720291"}, MaturityRules_NoMaturityRules_11);
        all_values.push_back(MaturityRules_NoMaturityRules_11);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_2.addGroup(noMaturityRules_1_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_1_2_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_12;
        set_field(noMaturityRules_1_2_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1031984846"}, MaturityRules_NoMaturityRules_12);
        set_field(noMaturityRules_1_2_2_2, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_12);
        set_field(noMaturityRules_1_2_2_2, FIX::MaturityMonthYearIncrement{1034890106}, MaturityRules_NoMaturityRules_12);
        set_field(noMaturityRules_1_2_2_2, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_12);
        set_field(noMaturityRules_1_2_2_2, FIX::MaturityRuleID{"STRING_2081983628"}, MaturityRules_NoMaturityRules_12);
        set_field(noMaturityRules_1_2_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_151559967"}, MaturityRules_NoMaturityRules_12);
        all_values.push_back(MaturityRules_NoMaturityRules_12);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_2.addGroup(noMaturityRules_1_2_2_2);
      }
      noMarketSegments_0_1.addGroup(noStrikeRules_1_1_2);
    }
    msg.addGroup(noMarketSegments_0_1);
  }
  // RelSymDerivSecUpdGrp
  // Group RelSymDerivSecUpdGrp.NoRelatedSym
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym noRelatedSym_0_0;
    // RelSymDerivSecUpdGrp.NoRelatedSym
    multiset<string> RelSymDerivSecUpdGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::CorporateAction{"MULTIPLECHARVALUE_M"}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Currency{"CAN"}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedText{"DATA_1944733127"}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedTextLen{813489225}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::ListUpdateAction{'8'}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(6, 16, 3, 15, 12, 2004)}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Text{"STRING_1269058617"}, RelSymDerivSecUpdGrp_NoRelatedSym_0);
    all_values.push_back(RelSymDerivSecUpdGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_30;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_1925430723"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{399172917}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_593589865"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{1935655463}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_1366425661"}, InstrumentLeg_30);
      FIX::LegContractMultiplier LegContractMultiplier_30;
      LegContractMultiplier_30.setString("3717112");
set_field(noLegs_0_1_0, LegContractMultiplier_30, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{1047379029}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_234362978"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_1840431583"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2079363876"}, InstrumentLeg_30);
      FIX::LegCouponRate LegCouponRate_30;
      LegCouponRate_30.setString("53.830000");
set_field(noLegs_0_1_0, LegCouponRate_30, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_727838041"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_879398008"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{1896157647}, InstrumentLeg_30);
      FIX::LegFactor LegFactor_30;
      LegFactor_30.setString("21458160");
set_field(noLegs_0_1_0, LegFactor_30, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{1566642847}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_1594284828"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1943065511"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_232648425"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_277179748"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_470453347"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1551002271"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_873678404"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_2085709030"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_30);
      FIX::LegOptionRatio LegOptionRatio_30;
      LegOptionRatio_30.setString("13722258");
set_field(noLegs_0_1_0, LegOptionRatio_30, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_283746816"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_196810228"}, InstrumentLeg_30);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_30;
      LegPriceUnitOfMeasureQty_30.setString("2432031");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_30, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegProduct{61693891}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{595983145}, InstrumentLeg_30);
      FIX::LegRatioQty LegRatioQty_30;
      LegRatioQty_30.setString("8367930");
set_field(noLegs_0_1_0, LegRatioQty_30, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1997349354"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1962408806"}, InstrumentLeg_30);
      FIX::LegRepurchaseRate LegRepurchaseRate_30;
      LegRepurchaseRate_30.setString("43.540000");
set_field(noLegs_0_1_0, LegRepurchaseRate_30, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{897244735}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_49288136"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_901452289"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_829124963"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_2089273519"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_1629290330"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_1760735913"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_361204690"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_30);
      FIX::LegStrikePrice LegStrikePrice_30;
      LegStrikePrice_30.setString("19278475");
set_field(noLegs_0_1_0, LegStrikePrice_30, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_956211093"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_1710189481"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_13012315"}, InstrumentLeg_30);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_1233390841"}, InstrumentLeg_30);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_30;
      LegUnitOfMeasureQty_30.setString("331591");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_30, InstrumentLeg_30);
      all_values.push_back(InstrumentLeg_30);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_62;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_2107069245"}, LegSecAltIDGrp_NoLegSecurityAltID_62);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_2118868210"}, LegSecAltIDGrp_NoLegSecurityAltID_62);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_62);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_63;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_491766197"}, LegSecAltIDGrp_NoLegSecurityAltID_63);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_1331811489"}, LegSecAltIDGrp_NoLegSecurityAltID_63);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_63);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_31;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_255131378"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{688576425}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_1575014686"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{316825269}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_1284559570"}, InstrumentLeg_31);
      FIX::LegContractMultiplier LegContractMultiplier_31;
      LegContractMultiplier_31.setString("2643241");
set_field(noLegs_0_1_1, LegContractMultiplier_31, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{166690975}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_1099484728"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_1472828455"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1063935711"}, InstrumentLeg_31);
      FIX::LegCouponRate LegCouponRate_31;
      LegCouponRate_31.setString("28.640000");
set_field(noLegs_0_1_1, LegCouponRate_31, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_226797096"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"USD"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_1856087426"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{1506312939}, InstrumentLeg_31);
      FIX::LegFactor LegFactor_31;
      LegFactor_31.setString("8593543");
set_field(noLegs_0_1_1, LegFactor_31, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{69808468}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_868239204"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_626478293"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_1997656006"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_1824450297"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_189184126"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_2010668321"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_910357490"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_222343307"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_31);
      FIX::LegOptionRatio LegOptionRatio_31;
      LegOptionRatio_31.setString("8699430");
set_field(noLegs_0_1_1, LegOptionRatio_31, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_193727869"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_1918965457"}, InstrumentLeg_31);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_31;
      LegPriceUnitOfMeasureQty_31.setString("542709");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_31, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegProduct{448859248}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{460058234}, InstrumentLeg_31);
      FIX::LegRatioQty LegRatioQty_31;
      LegRatioQty_31.setString("16292856");
set_field(noLegs_0_1_1, LegRatioQty_31, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_765684517"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_1744617804"}, InstrumentLeg_31);
      FIX::LegRepurchaseRate LegRepurchaseRate_31;
      LegRepurchaseRate_31.setString("97.160000");
set_field(noLegs_0_1_1, LegRepurchaseRate_31, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{932375493}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_696618884"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_1218954523"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_1996311204"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_1845391748"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_1445751619"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_1741888230"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegSide{'7'}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_1154355397"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_31);
      FIX::LegStrikePrice LegStrikePrice_31;
      LegStrikePrice_31.setString("12241638");
set_field(noLegs_0_1_1, LegStrikePrice_31, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_1968956726"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_126819804"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_1074336224"}, InstrumentLeg_31);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_1645923375"}, InstrumentLeg_31);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_31;
      LegUnitOfMeasureQty_31.setString("3160039");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_31, InstrumentLeg_31);
      all_values.push_back(InstrumentLeg_31);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_64;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_408797217"}, LegSecAltIDGrp_NoLegSecurityAltID_64);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_538347237"}, LegSecAltIDGrp_NoLegSecurityAltID_64);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_64);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_65;
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltID{"STRING_217236509"}, LegSecAltIDGrp_NoLegSecurityAltID_65);
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltIDSource{"STRING_1278740304"}, LegSecAltIDGrp_NoLegSecurityAltID_65);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_65);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_66;
        set_field(noLegSecurityAltID_0_1_2_2, FIX::LegSecurityAltID{"STRING_732075107"}, LegSecAltIDGrp_NoLegSecurityAltID_66);
        set_field(noLegSecurityAltID_0_1_2_2, FIX::LegSecurityAltIDSource{"STRING_2136201966"}, LegSecAltIDGrp_NoLegSecurityAltID_66);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_66);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_32;
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuer{"DATA_1333011233"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuerLen{1180934355}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDesc{"DATA_448776552"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDescLen{814813200}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegCFICode{"STRING_1946618872"}, InstrumentLeg_32);
      FIX::LegContractMultiplier LegContractMultiplier_32;
      LegContractMultiplier_32.setString("459107");
set_field(noLegs_0_1_2, LegContractMultiplier_32, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegContractMultiplierUnit{560939268}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_731510717"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegCountryOfIssue{"COUNTRY_742529592"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1779893791"}, InstrumentLeg_32);
      FIX::LegCouponRate LegCouponRate_32;
      LegCouponRate_32.setString("82.730000");
set_field(noLegs_0_1_2, LegCouponRate_32, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegCreditRating{"STRING_440437693"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegCurrency{"GBP"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegDatedDate{"LOCALMKTDATE_1228908529"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegExerciseStyle{85033511}, InstrumentLeg_32);
      FIX::LegFactor LegFactor_32;
      LegFactor_32.setString("12754603");
set_field(noLegs_0_1_2, LegFactor_32, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegFlowScheduleType{729250040}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegInstrRegistry{"STRING_1309197376"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1096933456"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegIssueDate{"LOCALMKTDATE_856069844"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegIssuer{"STRING_236049952"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegLocaleOfIssue{"STRING_595373183"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_1172073775"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1173570850"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegMaturityTime{"TZTIMEONLY_1004170400"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_32);
      FIX::LegOptionRatio LegOptionRatio_32;
      LegOptionRatio_32.setString("13908073");
set_field(noLegs_0_1_2, LegOptionRatio_32, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegPool{"STRING_135427056"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegPriceUnitOfMeasure{"STRING_295012471"}, InstrumentLeg_32);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_32;
      LegPriceUnitOfMeasureQty_32.setString("13795256");
set_field(noLegs_0_1_2, LegPriceUnitOfMeasureQty_32, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegProduct{1468438289}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegPutOrCall{1475946826}, InstrumentLeg_32);
      FIX::LegRatioQty LegRatioQty_32;
      LegRatioQty_32.setString("18283022");
set_field(noLegs_0_1_2, LegRatioQty_32, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_135767841"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegRepoCollateralSecurityType{"STRING_1275082051"}, InstrumentLeg_32);
      FIX::LegRepurchaseRate LegRepurchaseRate_32;
      LegRepurchaseRate_32.setString("29.390000");
set_field(noLegs_0_1_2, LegRepurchaseRate_32, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegRepurchaseTerm{696707109}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegSecurityDesc{"STRING_2006592768"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegSecurityExchange{"EXCHANGE_469258883"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegSecurityID{"STRING_329117252"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegSecurityIDSource{"STRING_439447394"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegSecuritySubType{"STRING_909696576"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegSecurityType{"STRING_1407279014"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegSide{'6'}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_2138605106"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_32);
      FIX::LegStrikePrice LegStrikePrice_32;
      LegStrikePrice_32.setString("7203714");
set_field(noLegs_0_1_2, LegStrikePrice_32, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegSymbol{"STRING_654026254"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegSymbolSfx{"STRING_839100436"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegTimeUnit{"STRING_1576441343"}, InstrumentLeg_32);
      set_field(noLegs_0_1_2, FIX::LegUnitOfMeasure{"STRING_890076206"}, InstrumentLeg_32);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_32;
      LegUnitOfMeasureQty_32.setString("14344736");
set_field(noLegs_0_1_2, LegUnitOfMeasureQty_32, InstrumentLeg_32);
      all_values.push_back(InstrumentLeg_32);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_67;
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltID{"STRING_2063647056"}, LegSecAltIDGrp_NoLegSecurityAltID_67);
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltIDSource{"STRING_291160371"}, LegSecAltIDGrp_NoLegSecurityAltID_67);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_67);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_68;
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltID{"STRING_163968834"}, LegSecAltIDGrp_NoLegSecurityAltID_68);
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltIDSource{"STRING_1306970768"}, LegSecAltIDGrp_NoLegSecurityAltID_68);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_68);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_21;
    FIX::AttachmentPoint AttachmentPoint_21;
    AttachmentPoint_21.setString("74.270000");
set_field(noRelatedSym_0_0, AttachmentPoint_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_458981306"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::CPProgram{99}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_1895025717"}, Instrument_21);
    FIX::CapPrice CapPrice_21;
    CapPrice_21.setString("19349281");
set_field(noRelatedSym_0_0, CapPrice_21, Instrument_21);
    FIX::ContractMultiplier ContractMultiplier_21;
    ContractMultiplier_21.setString("2198313");
set_field(noRelatedSym_0_0, ContractMultiplier_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{0}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1062526535"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_2094044319"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_580017020"}, Instrument_21);
    FIX::CouponRate CouponRate_21;
    CouponRate_21.setString("56.560000");
set_field(noRelatedSym_0_0, CouponRate_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_415819555"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_909134272"}, Instrument_21);
    FIX::DetachmentPoint DetachmentPoint_21;
    DetachmentPoint_21.setString("30.500000");
set_field(noRelatedSym_0_0, DetachmentPoint_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_1325516131"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{168929639}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1975273300"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{1316637589}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{0}, Instrument_21);
    FIX::Factor Factor_21;
    Factor_21.setString("17174402");
set_field(noRelatedSym_0_0, Factor_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{true}, Instrument_21);
    FIX::FloorPrice FloorPrice_21;
    FloorPrice_21.setString("4090570");
set_field(noRelatedSym_0_0, FloorPrice_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{3}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_1057860977"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_2066998253"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_974024385"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_2134691058"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_133511505"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_413794837"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_542464745"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_672524303"}, Instrument_21);
    FIX::MinPriceIncrement MinPriceIncrement_21;
    MinPriceIncrement_21.setString("1613369");
set_field(noRelatedSym_0_0, MinPriceIncrement_21, Instrument_21);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_21;
    MinPriceIncrementAmount_21.setString("3299092");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{892355684}, Instrument_21);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_21;
    NotionalPercentageOutstanding_21.setString("68.170000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_21);
    FIX::OptPayoutAmount OptPayoutAmount_21;
    OptPayoutAmount_21.setString("8389163");
set_field(noRelatedSym_0_0, OptPayoutAmount_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{1}, Instrument_21);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_21;
    OriginalNotionalPercentageOutstanding_21.setString("77.730000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1254735910"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{1533798109}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_432768394"}, Instrument_21);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_21;
    PriceUnitOfMeasureQty_21.setString("17027277");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::Product{6}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_1749405983"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_925417107"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_1638931423"}, Instrument_21);
    FIX::RepurchaseRate RepurchaseRate_21;
    RepurchaseRate_21.setString("10.350000");
set_field(noRelatedSym_0_0, RepurchaseRate_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{1334474175}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_294648364"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_1030521214"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_876929163"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_1268672750"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_1"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_1402184255"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_PFAND"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SD"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'P'}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_1592860368"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1832786578"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"EUR"}, Instrument_21);
    FIX::StrikeMultiplier StrikeMultiplier_21;
    StrikeMultiplier_21.setString("10777386");
set_field(noRelatedSym_0_0, StrikeMultiplier_21, Instrument_21);
    FIX::StrikePrice StrikePrice_21;
    StrikePrice_21.setString("16584969");
set_field(noRelatedSym_0_0, StrikePrice_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_21);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_21;
    StrikePriceBoundaryPrecision_21.setString("64.690000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{2}, Instrument_21);
    FIX::StrikeValue StrikeValue_21;
    StrikeValue_21.setString("16484854");
set_field(noRelatedSym_0_0, StrikeValue_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_624513645"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Min"}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_21);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_21;
    UnitOfMeasureQty_21.setString("2727322");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_21, Instrument_21);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_21);
    all_values.push_back(Instrument_21);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_40;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_40);
      FIX::ComplexEventPrice ComplexEventPrice_40;
      ComplexEventPrice_40.setString("20923817");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_40, ComplexEvents_NoComplexEvents_40);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_40);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_40;
      ComplexEventPriceBoundaryPrecision_40.setString("16.010000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_40, ComplexEvents_NoComplexEvents_40);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_40);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_40);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_40;
      ComplexOptPayoutAmount_40.setString("10728407");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_40, ComplexEvents_NoComplexEvents_40);
      all_values.push_back(ComplexEvents_NoComplexEvents_40);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_81;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 40, 55, 18, 10, 2000)}, ComplexEventDates_NoComplexEventDates_81);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 22, 59, 25, 8, 2010)}, ComplexEventDates_NoComplexEventDates_81);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_81);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_177;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 33, 1)}, ComplexEventTimes_NoComplexEventTimes_177);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 1, 12)}, ComplexEventTimes_NoComplexEventTimes_177);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_177);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_82;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 40, 17, 22, 1, 2005)}, ComplexEventDates_NoComplexEventDates_82);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 32, 41, 23, 7, 2008)}, ComplexEventDates_NoComplexEventDates_82);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_82);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_178;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 23, 22)}, ComplexEventTimes_NoComplexEventTimes_178);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 7, 15)}, ComplexEventTimes_NoComplexEventTimes_178);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_178);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_83;
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 48, 28, 4, 8, 2017)}, ComplexEventDates_NoComplexEventDates_83);
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 29, 49, 17, 1, 2001)}, ComplexEventDates_NoComplexEventDates_83);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_83);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_179;
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 54, 54)}, ComplexEventTimes_NoComplexEventTimes_179);
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 49, 45)}, ComplexEventTimes_NoComplexEventTimes_179);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_179);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_48;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1920075922"}, EvntGrp_NoEvents_48);
      FIX::EventPx EventPx_48;
      EventPx_48.setString("3328094");
set_field(noEvents_0_1_0, EventPx_48, EvntGrp_NoEvents_48);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_62673329"}, EvntGrp_NoEvents_48);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(18, 36, 55, 17, 12, 2013)}, EvntGrp_NoEvents_48);
      set_field(noEvents_0_1_0, FIX::EventType{2}, EvntGrp_NoEvents_48);
      all_values.push_back(EvntGrp_NoEvents_48);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_42;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1998614259"}, InstrumentParties_NoInstrumentParties_42);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_42);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{536501100}, InstrumentParties_NoInstrumentParties_42);
      all_values.push_back(InstrumentParties_NoInstrumentParties_42);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_716790652"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{926444629}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_88);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_745630199"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{1491160324}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_89);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_47;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_2119618709"}, SecAltIDGrp_NoSecurityAltID_47);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_105894669"}, SecAltIDGrp_NoSecurityAltID_47);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_47);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_48;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_75636903"}, SecAltIDGrp_NoSecurityAltID_48);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_1217448495"}, SecAltIDGrp_NoSecurityAltID_48);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_48);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_49;
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltID{"STRING_2133148743"}, SecAltIDGrp_NoSecurityAltID_49);
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltIDSource{"STRING_68600139"}, SecAltIDGrp_NoSecurityAltID_49);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_49);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_42;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_441369427"}, SecurityXML_42);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{1853036084}, SecurityXML_42);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1850172264"}, SecurityXML_42);
    all_values.push_back(SecurityXML_42);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_7;
    set_field(noRelatedSym_0_0, FIX::DeliveryForm{1}, InstrumentExtension_7);
    FIX::PctAtRisk PctAtRisk_7;
    PctAtRisk_7.setString("83.580000");
set_field(noRelatedSym_0_0, PctAtRisk_7, InstrumentExtension_7);
    all_values.push_back(InstrumentExtension_7);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_12;
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribType{23}, AttrbGrp_NoInstrAttrib_12);
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribValue{"STRING_1778200958"}, AttrbGrp_NoInstrAttrib_12);
      all_values.push_back(AttrbGrp_NoInstrAttrib_12);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_13;
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribType{24}, AttrbGrp_NoInstrAttrib_13);
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribValue{"STRING_1980498748"}, AttrbGrp_NoInstrAttrib_13);
      all_values.push_back(AttrbGrp_NoInstrAttrib_13);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_3;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_3;
    SecondaryHighLimitPrice_3.setString("21390311");
set_field(noRelatedSym_0_0, SecondaryHighLimitPrice_3, SecondaryPriceLimits_3);
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_3;
    SecondaryLowLimitPrice_3.setString("18920639");
set_field(noRelatedSym_0_0, SecondaryLowLimitPrice_3, SecondaryPriceLimits_3);
    set_field(noRelatedSym_0_0, FIX::SecondaryPriceLimitType{129195607}, SecondaryPriceLimits_3);
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_3;
    SecondaryTradingReferencePrice_3.setString("15926419");
set_field(noRelatedSym_0_0, SecondaryTradingReferencePrice_3, SecondaryPriceLimits_3);
    all_values.push_back(SecondaryPriceLimits_3);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_29;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_511248050"}, UnderlyingInstrument_29);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{872042759}, UnderlyingInstrument_29);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_1443772600"}, UnderlyingInstrument_29);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{595853052}, UnderlyingInstrument_29);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_29;
  UnderlyingAdjustedQuantity_29.setString("14085438");
set_field(msg, UnderlyingAdjustedQuantity_29, UnderlyingInstrument_29);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_29;
  UnderlyingAllocationPercent_29.setString("79.020000");
set_field(msg, UnderlyingAllocationPercent_29, UnderlyingInstrument_29);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_29;
  UnderlyingAttachmentPoint_29.setString("37.040000");
set_field(msg, UnderlyingAttachmentPoint_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_187504840"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_1104828102"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_656320380"}, UnderlyingInstrument_29);
  FIX::UnderlyingCapValue UnderlyingCapValue_29;
  UnderlyingCapValue_29.setString("20789303");
set_field(msg, UnderlyingCapValue_29, UnderlyingInstrument_29);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_29;
  UnderlyingCashAmount_29.setString("10769631");
set_field(msg, UnderlyingCashAmount_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_29);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_29;
  UnderlyingContractMultiplier_29.setString("70836");
set_field(msg, UnderlyingContractMultiplier_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{146928011}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_747880145"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_75683765"}, UnderlyingInstrument_29);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_29;
  UnderlyingCouponRate_29.setString("74.380000");
set_field(msg, UnderlyingCouponRate_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_453432581"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_29);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_29;
  UnderlyingCurrentValue_29.setString("20790609");
set_field(msg, UnderlyingCurrentValue_29, UnderlyingInstrument_29);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_29;
  UnderlyingDetachmentPoint_29.setString("40.860000");
set_field(msg, UnderlyingDetachmentPoint_29, UnderlyingInstrument_29);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_29;
  UnderlyingDirtyPrice_29.setString("2349437");
set_field(msg, UnderlyingDirtyPrice_29, UnderlyingInstrument_29);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_29;
  UnderlyingEndPrice_29.setString("17097782");
set_field(msg, UnderlyingEndPrice_29, UnderlyingInstrument_29);
  FIX::UnderlyingEndValue UnderlyingEndValue_29;
  UnderlyingEndValue_29.setString("10353374");
set_field(msg, UnderlyingEndValue_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingExerciseStyle{67958865}, UnderlyingInstrument_29);
  FIX::UnderlyingFXRate UnderlyingFXRate_29;
  UnderlyingFXRate_29.setString("17013257");
set_field(msg, UnderlyingFXRate_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_29);
  FIX::UnderlyingFactor UnderlyingFactor_29;
  UnderlyingFactor_29.setString("1971544");
set_field(msg, UnderlyingFactor_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingFlowScheduleType{1146484057}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_1291165840"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1069197232"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_442773009"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_1887018892"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_330257443"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_801970911"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1052178949"}, UnderlyingInstrument_29);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_29;
  UnderlyingNotionalPercentageOutstanding_29.setString("22.830000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_29);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_29;
  UnderlyingOriginalNotionalPercentageOutstanding_29.setString("93.290000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_449209005"}, UnderlyingInstrument_29);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_29;
  UnderlyingPriceUnitOfMeasureQty_29.setString("8362785");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingProduct{323230731}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingPutOrCall{456292631}, UnderlyingInstrument_29);
  FIX::UnderlyingPx UnderlyingPx_29;
  UnderlyingPx_29.setString("9832065");
set_field(msg, UnderlyingPx_29, UnderlyingInstrument_29);
  FIX::UnderlyingQty UnderlyingQty_29;
  UnderlyingQty_29.setString("10711108");
set_field(msg, UnderlyingQty_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_531976397"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1571503978"}, UnderlyingInstrument_29);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_29;
  UnderlyingRepurchaseRate_29.setString("34.570000");
set_field(msg, UnderlyingRepurchaseRate_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{310348779}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_878046091"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_1456120749"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_124219217"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_1112989856"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_1018415352"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_1159556659"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_1180948722"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_572257420"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_1939474449"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_29);
  FIX::UnderlyingStartValue UnderlyingStartValue_29;
  UnderlyingStartValue_29.setString("17187414");
set_field(msg, UnderlyingStartValue_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1083156641"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_29);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_29;
  UnderlyingStrikePrice_29.setString("8226918");
set_field(msg, UnderlyingStrikePrice_29, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_630074222"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_816001749"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_1874870834"}, UnderlyingInstrument_29);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_1147836505"}, UnderlyingInstrument_29);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_29;
  UnderlyingUnitOfMeasureQty_29.setString("5753171");
set_field(msg, UnderlyingUnitOfMeasureQty_29, UnderlyingInstrument_29);
  all_values.push_back(UnderlyingInstrument_29);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_55;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_1597045510"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_55);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1411595644"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_55);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_55);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_56;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_1759117247"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_56);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_2053338142"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_56);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_56);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_57;
    set_field(noUnderlyingSecurityAltID_0_2, FIX::UnderlyingSecurityAltID{"STRING_247318536"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_57);
    set_field(noUnderlyingSecurityAltID_0_2, FIX::UnderlyingSecurityAltIDSource{"STRING_682744475"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_57);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_57);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_2);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_51;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_1818822514"}, UnderlyingStipulations_NoUnderlyingStips_51);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_59804284"}, UnderlyingStipulations_NoUnderlyingStips_51);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_51);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_52;
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipType{"STRING_748179670"}, UnderlyingStipulations_NoUnderlyingStips_52);
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipValue{"STRING_549384958"}, UnderlyingStipulations_NoUnderlyingStips_52);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_52);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_60;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_872398887"}, UndlyInstrumentParties_NoUndlyInstrumentParties_60);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_60);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{386856738}, UndlyInstrumentParties_NoUndlyInstrumentParties_60);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_60);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_695839888"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{959114158}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1823946347"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{2073943083}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_117);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_61;
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyID{"STRING_530371987"}, UndlyInstrumentParties_NoUndlyInstrumentParties_61);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_61);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyRole{226276214}, UndlyInstrumentParties_NoUndlyInstrumentParties_61);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_61);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118;
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1582311226"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118);
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubIDType{856350436}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_118);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119;
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1360404574"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119);
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubIDType{1309698412}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_119);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_62;
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyID{"STRING_2004186941"}, UndlyInstrumentParties_NoUndlyInstrumentParties_62);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_62);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyRole{598101280}, UndlyInstrumentParties_NoUndlyInstrumentParties_62);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_62);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120;
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1199833685"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120);
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubIDType{209734879}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_120);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121;
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1359603298"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121);
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubIDType{1447152221}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_121);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListUpdateReport::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122;
      set_field(noUndlyInstrumentPartySubIDs_2_1_2, FIX::UnderlyingInstrumentPartySubID{"STRING_892479354"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122);
      set_field(noUndlyInstrumentPartySubIDs_2_1_2, FIX::UnderlyingInstrumentPartySubIDType{1797434189}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
  }
  // header
  multiset<string> header_28;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_8"}, header_28);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_952283639"}, header_28);
  set_header_field(msg.getHeader(), FIX::BodyLength{398130211}, header_28);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1667876046"}, header_28);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_320725025"}, header_28);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1270529098"}, header_28);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1182767212"}, header_28);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{707581763}, header_28);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_28);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1878607101}, header_28);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1666695921"}, header_28);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_831463696"}, header_28);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1805066536"}, header_28);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(13, 31, 45, 23, 4, 2007)}, header_28);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_28);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_28);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1742629701"}, header_28);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{786226660}, header_28);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_2050661637"}, header_28);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_794979738"}, header_28);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_995961539"}, header_28);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(16, 54, 8, 4, 10, 2015)}, header_28);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_733531798"}, header_28);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1013965910"}, header_28);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_433907489"}, header_28);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1916299010"}, header_28);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1721547673}, header_28);
  all_values.push_back(header_28);
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
