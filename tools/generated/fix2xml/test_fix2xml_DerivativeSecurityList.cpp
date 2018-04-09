#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DerivativeSecurityList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityList, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::DerivativeSecurityList msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityList_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1514019827"}, DerivativeSecurityList_0);
  set_field(msg, FIX::LastFragment{true}, DerivativeSecurityList_0);
  set_field(msg, FIX::SecurityReportID{907093481}, DerivativeSecurityList_0);
  set_field(msg, FIX::SecurityReqID{"STRING_816192947"}, DerivativeSecurityList_0);
  set_field(msg, FIX::SecurityRequestResult{1}, DerivativeSecurityList_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_307861181"}, DerivativeSecurityList_0);
  set_field(msg, FIX::TotNoRelatedSym{224472506}, DerivativeSecurityList_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(9, 34, 1, 14, 3, 2009)}, DerivativeSecurityList_0);
  all_values.push_back(DerivativeSecurityList_0);

  all_compo_names.insert("DerivativeSecurityList");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_2;
  set_field(msg, FIX::ApplID{"STRING_1630191931"}, ApplicationSequenceControl_2);
  set_field(msg, FIX::ApplLastSeqNum{1932357328}, ApplicationSequenceControl_2);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_2);
  set_field(msg, FIX::ApplSeqNum{1363129968}, ApplicationSequenceControl_2);
  all_values.push_back(ApplicationSequenceControl_2);
  all_compo_names.insert(".");

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_0;
  set_field(msg, FIX::DerivFlexProductEligibilityIndicator{true}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeCFICode{"STRING_1955763918"}, DerivativeInstrument_0);
  FIX::DerivativeCapPrice DerivativeCapPrice_0;
  DerivativeCapPrice_0.setString("19191235");
set_field(msg, DerivativeCapPrice_0, DerivativeInstrument_0);
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_0;
  DerivativeContractMultiplier_0.setString("5438038");
set_field(msg, DerivativeContractMultiplier_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeContractMultiplierUnit{1841507161}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeContractSettlMonth{"MONTHYEAR_332495967"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeCountryOfIssue{"COUNTRY_831357042"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeEncodedIssuer{"DATA_665815403"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeEncodedIssuerLen{673177592}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeEncodedSecurityDesc{"DATA_543140511"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeEncodedSecurityDescLen{613755808}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeExerciseStyle{'7'}, DerivativeInstrument_0);
  FIX::DerivativeFloorPrice DerivativeFloorPrice_0;
  DerivativeFloorPrice_0.setString("20497432");
set_field(msg, DerivativeFloorPrice_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeFlowScheduleType{2127775636}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeInstrRegistry{"STRING_868662400"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeInstrmtAssignmentMethod{'8'}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeIssueDate{"LOCALMKTDATE_796484935"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeIssuer{"STRING_180769017"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeListMethod{1117214296}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeLocaleOfIssue{"STRING_1020957441"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeMaturityDate{"LOCALMKTDATE_975597138"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeMaturityMonthYear{"MONTHYEAR_545323601"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeMaturityTime{"TZTIMEONLY_1732645015"}, DerivativeInstrument_0);
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_0;
  DerivativeMinPriceIncrement_0.setString("1062457");
set_field(msg, DerivativeMinPriceIncrement_0, DerivativeInstrument_0);
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_0;
  DerivativeMinPriceIncrementAmount_0.setString("19296362");
set_field(msg, DerivativeMinPriceIncrementAmount_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeNTPositionLimit{115125098}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeOptAttribute{'1'}, DerivativeInstrument_0);
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_0;
  DerivativeOptPayAmount_0.setString("14123445");
set_field(msg, DerivativeOptPayAmount_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativePositionLimit{2047482426}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativePriceQuoteMethod{"STRING_116107114"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativePriceUnitOfMeasure{"STRING_627990826"}, DerivativeInstrument_0);
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_0;
  DerivativePriceUnitOfMeasureQty_0.setString("7975182");
set_field(msg, DerivativePriceUnitOfMeasureQty_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeProduct{2071871032}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeProductComplex{"STRING_399630743"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativePutOrCall{1341322164}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityDesc{"STRING_1765894545"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityExchange{"EXCHANGE_732126710"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityGroup{"STRING_25195558"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityID{"STRING_284226300"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityIDSource{"STRING_1405304303"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityStatus{"STRING_568336069"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecuritySubType{"STRING_897982108"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityType{"STRING_2109642229"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSettlMethod{'4'}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSettleOnOpenFlag{"STRING_878274096"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeStateOrProvinceOfIssue{"STRING_830820981"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeStrikeCurrency{"EUR"}, DerivativeInstrument_0);
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_0;
  DerivativeStrikeMultiplier_0.setString("10115899");
set_field(msg, DerivativeStrikeMultiplier_0, DerivativeInstrument_0);
  FIX::DerivativeStrikePrice DerivativeStrikePrice_0;
  DerivativeStrikePrice_0.setString("2496794");
set_field(msg, DerivativeStrikePrice_0, DerivativeInstrument_0);
  FIX::DerivativeStrikeValue DerivativeStrikeValue_0;
  DerivativeStrikeValue_0.setString("5482328");
set_field(msg, DerivativeStrikeValue_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSymbol{"STRING_1987187137"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSymbolSfx{"STRING_795003067"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeTimeUnit{"STRING_133394192"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeUnitOfMeasure{"STRING_2093432868"}, DerivativeInstrument_0);
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_0;
  DerivativeUnitOfMeasureQty_0.setString("5771556");
set_field(msg, DerivativeUnitOfMeasureQty_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeValuationMethod{"STRING_248519290"}, DerivativeInstrument_0);
  all_values.push_back(DerivativeInstrument_0);
  all_compo_names.insert("..");

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_0;
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventDate{"LOCALMKTDATE_1989500148"}, DerivativeEventsGrp_NoDerivativeEvents_0);
    FIX::DerivativeEventPx DerivativeEventPx_0;
    DerivativeEventPx_0.setString("1485180");
set_field(noDerivativeEvents_0_0, DerivativeEventPx_0, DerivativeEventsGrp_NoDerivativeEvents_0);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventText{"STRING_1350936653"}, DerivativeEventsGrp_NoDerivativeEvents_0);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(19, 37, 50, 15, 3, 2004)}, DerivativeEventsGrp_NoDerivativeEvents_0);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventType{165070413}, DerivativeEventsGrp_NoDerivativeEvents_0);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_0);
    all_compo_names.insert(".....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_1;
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventDate{"LOCALMKTDATE_1177961234"}, DerivativeEventsGrp_NoDerivativeEvents_1);
    FIX::DerivativeEventPx DerivativeEventPx_1;
    DerivativeEventPx_1.setString("8595854");
set_field(noDerivativeEvents_0_1, DerivativeEventPx_1, DerivativeEventsGrp_NoDerivativeEvents_1);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventText{"STRING_733406482"}, DerivativeEventsGrp_NoDerivativeEvents_1);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(0, 5, 11, 14, 4, 2005)}, DerivativeEventsGrp_NoDerivativeEvents_1);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventType{516671349}, DerivativeEventsGrp_NoDerivativeEvents_1);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_1);
    all_compo_names.insert(".....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_1);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_0;
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyID{"STRING_882241999"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyIDSource{"STRING_356374838"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyRole{1381149888}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);
    all_compo_names.insert(".....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0;
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_302324058"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0);
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubIDType{1958305530}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_1;
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyID{"STRING_1264155481"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyIDSource{"STRING_1537153598"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyRole{1800322031}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);
    all_compo_names.insert(".....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_740606603"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_0, FIX::DerivativeInstrumentPartySubIDType{122845710}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_1, FIX::DerivativeInstrumentPartySubID{"STRING_211226241"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_1, FIX::DerivativeInstrumentPartySubIDType{2015930641}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_2;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_2;
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyID{"STRING_992483780"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyIDSource{"STRING_351101097"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyRole{762181927}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);
    all_compo_names.insert(".....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3;
      set_field(noDerivativeInstrumentPartySubIDs_2_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_516171510"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3);
      set_field(noDerivativeInstrumentPartySubIDs_2_1_0, FIX::DerivativeInstrumentPartySubIDType{1940143162}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4;
      set_field(noDerivativeInstrumentPartySubIDs_2_1_1, FIX::DerivativeInstrumentPartySubID{"STRING_1306350348"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4);
      set_field(noDerivativeInstrumentPartySubIDs_2_1_1, FIX::DerivativeInstrumentPartySubIDType{1249577993}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_2);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0;
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltID{"STRING_2128094364"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0);
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltIDSource{"STRING_306096530"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0);
    all_compo_names.insert(".....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_0;
  set_field(msg, FIX::DerivativeSecurityXML{"DATA_527853000"}, DerivativeSecurityXML_0);
  set_field(msg, FIX::DerivativeSecurityXMLLen{1633175714}, DerivativeSecurityXML_0);
  set_field(msg, FIX::DerivativeSecurityXMLSchema{"STRING_642563886"}, DerivativeSecurityXML_0);
  all_values.push_back(DerivativeSecurityXML_0);
  all_compo_names.insert("...");

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0;
    set_field(noDerivativeInstrAttrib_0_0, FIX::DerivativeInstrAttribType{2363415}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0);
    set_field(noDerivativeInstrAttrib_0_0, FIX::DerivativeInstrAttribValue{"STRING_1228710707"}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0);
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0);
    all_compo_names.insert("....NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_1;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1;
    set_field(noDerivativeInstrAttrib_0_1, FIX::DerivativeInstrAttribType{1744104175}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1);
    set_field(noDerivativeInstrAttrib_0_1, FIX::DerivativeInstrAttribValue{"STRING_358738253"}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1);
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1);
    all_compo_names.insert("....NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_2;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2;
    set_field(noDerivativeInstrAttrib_0_2, FIX::DerivativeInstrAttribType{462376948}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2);
    set_field(noDerivativeInstrAttrib_0_2, FIX::DerivativeInstrAttribValue{"STRING_612256718"}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2);
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_2);
    all_compo_names.insert("....NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_2);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::DerivativeSecurityList::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_0;
    set_field(noMarketSegments_0_0, FIX::MarketID{"EXCHANGE_273198830"}, MarketSegmentGrp_NoMarketSegments_0);
    set_field(noMarketSegments_0_0, FIX::MarketSegmentID{"STRING_1876412200"}, MarketSegmentGrp_NoMarketSegments_0);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_0);
    all_compo_names.insert("....NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_0;
    set_field(noMarketSegments_0_0, FIX::ExpirationCycle{0}, BaseTradingRules_0);
    set_field(noMarketSegments_0_0, FIX::ImpliedMarketIndicator{1}, BaseTradingRules_0);
    FIX::MaxPriceVariation MaxPriceVariation_0;
    MaxPriceVariation_0.setString("11416021");
set_field(noMarketSegments_0_0, MaxPriceVariation_0, BaseTradingRules_0);
    FIX::MaxTradeVol MaxTradeVol_0;
    MaxTradeVol_0.setString("7913388");
set_field(noMarketSegments_0_0, MaxTradeVol_0, BaseTradingRules_0);
    FIX::MinTradeVol MinTradeVol_0;
    MinTradeVol_0.setString("488829");
set_field(noMarketSegments_0_0, MinTradeVol_0, BaseTradingRules_0);
    set_field(noMarketSegments_0_0, FIX::MultilegModel{0}, BaseTradingRules_0);
    set_field(noMarketSegments_0_0, FIX::MultilegPriceMethod{4}, BaseTradingRules_0);
    set_field(noMarketSegments_0_0, FIX::PriceType{15}, BaseTradingRules_0);
    FIX::RoundLot RoundLot_0;
    RoundLot_0.setString("17039294");
set_field(noMarketSegments_0_0, RoundLot_0, BaseTradingRules_0);
    set_field(noMarketSegments_0_0, FIX::TradingCurrency{"USD"}, BaseTradingRules_0);
    all_values.push_back(BaseTradingRules_0);
    all_compo_names.insert("....NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_0;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_0);
      FIX::MinLotSize MinLotSize_0;
      MinLotSize_0.setString("6469983");
set_field(noLotTypeRules_0_1_0, MinLotSize_0, LotTypeRules_NoLotTypeRules_0);
      all_values.push_back(LotTypeRules_NoLotTypeRules_0);
      all_compo_names.insert("....NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_1;
      set_field(noLotTypeRules_0_1_1, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_1);
      FIX::MinLotSize MinLotSize_1;
      MinLotSize_1.setString("9357465");
set_field(noLotTypeRules_0_1_1, MinLotSize_1, LotTypeRules_NoLotTypeRules_1);
      all_values.push_back(LotTypeRules_NoLotTypeRules_1);
      all_compo_names.insert("....NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_2;
      set_field(noLotTypeRules_0_1_2, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_2);
      FIX::MinLotSize MinLotSize_2;
      MinLotSize_2.setString("16282918");
set_field(noLotTypeRules_0_1_2, MinLotSize_2, LotTypeRules_NoLotTypeRules_2);
      all_values.push_back(LotTypeRules_NoLotTypeRules_2);
      all_compo_names.insert("....NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_0;
    FIX::HighLimitPrice HighLimitPrice_0;
    HighLimitPrice_0.setString("14635995");
set_field(noMarketSegments_0_0, HighLimitPrice_0, PriceLimits_0);
    FIX::LowLimitPrice LowLimitPrice_0;
    LowLimitPrice_0.setString("1133010");
set_field(noMarketSegments_0_0, LowLimitPrice_0, PriceLimits_0);
    set_field(noMarketSegments_0_0, FIX::PriceLimitType{1}, PriceLimits_0);
    FIX::TradingReferencePrice TradingReferencePrice_0;
    TradingReferencePrice_0.setString("1779780");
set_field(noMarketSegments_0_0, TradingReferencePrice_0, PriceLimits_0);
    all_values.push_back(PriceLimits_0);
    all_compo_names.insert("....NoMarketSegments...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_0;
      FIX::EndTickPriceRange EndTickPriceRange_0;
      EndTickPriceRange_0.setString("13520827");
set_field(noTickRules_0_1_0, EndTickPriceRange_0, TickRules_NoTickRules_0);
      FIX::StartTickPriceRange StartTickPriceRange_0;
      StartTickPriceRange_0.setString("19220822");
set_field(noTickRules_0_1_0, StartTickPriceRange_0, TickRules_NoTickRules_0);
      FIX::TickIncrement TickIncrement_0;
      TickIncrement_0.setString("4744027");
set_field(noTickRules_0_1_0, TickIncrement_0, TickRules_NoTickRules_0);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{0}, TickRules_NoTickRules_0);
      all_values.push_back(TickRules_NoTickRules_0);
      all_compo_names.insert("....NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_0;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{1135465080}, NestedInstrumentAttribute_NoNestedInstrAttrib_0);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_2087658550"}, NestedInstrumentAttribute_NoNestedInstrAttrib_0);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_0);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_1;
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribType{115783834}, NestedInstrumentAttribute_NoNestedInstrAttrib_1);
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribValue{"STRING_1186197342"}, NestedInstrumentAttribute_NoNestedInstrAttrib_1);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_1);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_2;
      set_field(noNestedInstrAttrib_0_1_2, FIX::NestedInstrAttribType{2013695764}, NestedInstrumentAttribute_NoNestedInstrAttrib_2);
      set_field(noNestedInstrAttrib_0_1_2, FIX::NestedInstrAttribValue{"STRING_1257385936"}, NestedInstrumentAttribute_NoNestedInstrAttrib_2);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_2);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_0;
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_0);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_1"}, TradingSessionRulesGrp_NoTradingSessionRules_0);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_0);
      all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_0;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'9'}, ExecInstRules_NoExecInstRules_0);
        all_values.push_back(ExecInstRules_NoExecInstRules_0);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_1;
        set_field(noExecInstRules_0_0_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_1);
        all_values.push_back(ExecInstRules_NoExecInstRules_1);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_2;
        set_field(noExecInstRules_0_0_2_2, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_2);
        all_values.push_back(ExecInstRules_NoExecInstRules_2);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_0;
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_0);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_978949856"}, MarketDataFeedTypes_NoMDFeedTypes_0);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{944108027}, MarketDataFeedTypes_NoMDFeedTypes_0);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_0);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_1;
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_1);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDFeedType{"STRING_1914696365"}, MarketDataFeedTypes_NoMDFeedTypes_1);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MarketDepth{1571717059}, MarketDataFeedTypes_NoMDFeedTypes_1);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_1);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_0;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_1230812226"}, MatchRules_NoMatchRules_0);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_S1"}, MatchRules_NoMatchRules_0);
        all_values.push_back(MatchRules_NoMatchRules_0);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_0;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'8'}, OrdTypeRules_NoOrdTypeRules_0);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_0);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_1;
        set_field(noOrdTypeRules_0_0_2_1, FIX::OrdType{'I'}, OrdTypeRules_NoOrdTypeRules_1);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_1);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_0;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_0);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_0);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_1;
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_1);
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionSubID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_1);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_1);
      all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_3;
        set_field(noExecInstRules_0_1_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_3);
        all_values.push_back(ExecInstRules_NoExecInstRules_3);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_4;
        set_field(noExecInstRules_0_1_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_4);
        all_values.push_back(ExecInstRules_NoExecInstRules_4);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_2;
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_2);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDFeedType{"STRING_1843615129"}, MarketDataFeedTypes_NoMDFeedTypes_2);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MarketDepth{795930233}, MarketDataFeedTypes_NoMDFeedTypes_2);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_2);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_3;
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_3);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDFeedType{"STRING_1758710168"}, MarketDataFeedTypes_NoMDFeedTypes_3);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MarketDepth{1258660865}, MarketDataFeedTypes_NoMDFeedTypes_3);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_3);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_4;
        set_field(noMDFeedTypes_0_1_2_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_4);
        set_field(noMDFeedTypes_0_1_2_2, FIX::MDFeedType{"STRING_567688263"}, MarketDataFeedTypes_NoMDFeedTypes_4);
        set_field(noMDFeedTypes_0_1_2_2, FIX::MarketDepth{1277837289}, MarketDataFeedTypes_NoMDFeedTypes_4);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_4);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_1;
        set_field(noMatchRules_0_1_2_0, FIX::MatchAlgorithm{"STRING_864797974"}, MatchRules_NoMatchRules_1);
        set_field(noMatchRules_0_1_2_0, FIX::MatchType{"STRING_2"}, MatchRules_NoMatchRules_1);
        all_values.push_back(MatchRules_NoMatchRules_1);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_2;
        set_field(noOrdTypeRules_0_1_2_0, FIX::OrdType{'A'}, OrdTypeRules_NoOrdTypeRules_2);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_2);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_3;
        set_field(noOrdTypeRules_0_1_2_1, FIX::OrdType{'1'}, OrdTypeRules_NoOrdTypeRules_3);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_3);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_4;
        set_field(noOrdTypeRules_0_1_2_2, FIX::OrdType{'I'}, OrdTypeRules_NoOrdTypeRules_4);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_4);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_1;
        set_field(noTimeInForceRules_0_1_2_0, FIX::TimeInForce{'4'}, TimeInForceRules_NoTimeInForceRules_1);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_1);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_2;
      set_field(noTradingSessionRules_0_1_2, FIX::TradingSessionID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_2);
      set_field(noTradingSessionRules_0_1_2, FIX::TradingSessionSubID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_2);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_2);
      all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_5;
        set_field(noExecInstRules_0_2_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_5);
        all_values.push_back(ExecInstRules_NoExecInstRules_5);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_5;
        set_field(noMDFeedTypes_0_2_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_5);
        set_field(noMDFeedTypes_0_2_2_0, FIX::MDFeedType{"STRING_660180695"}, MarketDataFeedTypes_NoMDFeedTypes_5);
        set_field(noMDFeedTypes_0_2_2_0, FIX::MarketDepth{551474741}, MarketDataFeedTypes_NoMDFeedTypes_5);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_5);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_6;
        set_field(noMDFeedTypes_0_2_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_6);
        set_field(noMDFeedTypes_0_2_2_1, FIX::MDFeedType{"STRING_82941157"}, MarketDataFeedTypes_NoMDFeedTypes_6);
        set_field(noMDFeedTypes_0_2_2_1, FIX::MarketDepth{1814541614}, MarketDataFeedTypes_NoMDFeedTypes_6);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_6);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_7;
        set_field(noMDFeedTypes_0_2_2_2, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_7);
        set_field(noMDFeedTypes_0_2_2_2, FIX::MDFeedType{"STRING_1768969101"}, MarketDataFeedTypes_NoMDFeedTypes_7);
        set_field(noMDFeedTypes_0_2_2_2, FIX::MarketDepth{2116322181}, MarketDataFeedTypes_NoMDFeedTypes_7);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_7);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_2;
        set_field(noMatchRules_0_2_2_0, FIX::MatchAlgorithm{"STRING_417415686"}, MatchRules_NoMatchRules_2);
        set_field(noMatchRules_0_2_2_0, FIX::MatchType{"STRING_M2"}, MatchRules_NoMatchRules_2);
        all_values.push_back(MatchRules_NoMatchRules_2);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_5;
        set_field(noOrdTypeRules_0_2_2_0, FIX::OrdType{'Q'}, OrdTypeRules_NoOrdTypeRules_5);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_5);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_6;
        set_field(noOrdTypeRules_0_2_2_1, FIX::OrdType{'D'}, OrdTypeRules_NoOrdTypeRules_6);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_6);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_7;
        set_field(noOrdTypeRules_0_2_2_2, FIX::OrdType{'H'}, OrdTypeRules_NoOrdTypeRules_7);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_7);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_2;
        set_field(noTimeInForceRules_0_2_2_0, FIX::TimeInForce{'5'}, TimeInForceRules_NoTimeInForceRules_2);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_2);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_3;
        set_field(noTimeInForceRules_0_2_2_1, FIX::TimeInForce{'0'}, TimeInForceRules_NoTimeInForceRules_3);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_3);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_0;
      FIX::EndStrikePxRange EndStrikePxRange_0;
      EndStrikePxRange_0.setString("3257976");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_0, StrikeRules_NoStrikeRules_0);
      FIX::StartStrikePxRange StartStrikePxRange_0;
      StartStrikePxRange_0.setString("7453180");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_0, StrikeRules_NoStrikeRules_0);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{664713954}, StrikeRules_NoStrikeRules_0);
      FIX::StrikeIncrement StrikeIncrement_0;
      StrikeIncrement_0.setString("14579542");
set_field(noStrikeRules_0_1_0, StrikeIncrement_0, StrikeRules_NoStrikeRules_0);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_1978457437"}, StrikeRules_NoStrikeRules_0);
      all_values.push_back(StrikeRules_NoStrikeRules_0);
      all_compo_names.insert("....NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_0;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1673439539"}, MaturityRules_NoMaturityRules_0);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_0);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{449783114}, MaturityRules_NoMaturityRules_0);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_0);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_1025520661"}, MaturityRules_NoMaturityRules_0);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1074170717"}, MaturityRules_NoMaturityRules_0);
        all_values.push_back(MaturityRules_NoMaturityRules_0);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_1;
        set_field(noMaturityRules_0_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1810412101"}, MaturityRules_NoMaturityRules_1);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_1);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrement{1588302783}, MaturityRules_NoMaturityRules_1);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_1);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityRuleID{"STRING_1244053369"}, MaturityRules_NoMaturityRules_1);
        set_field(noMaturityRules_0_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1932354214"}, MaturityRules_NoMaturityRules_1);
        all_values.push_back(MaturityRules_NoMaturityRules_1);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_2;
        set_field(noMaturityRules_0_0_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1514838712"}, MaturityRules_NoMaturityRules_2);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_2);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityMonthYearIncrement{1972537126}, MaturityRules_NoMaturityRules_2);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_2);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityRuleID{"STRING_1313563562"}, MaturityRules_NoMaturityRules_2);
        set_field(noMaturityRules_0_0_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_1623946559"}, MaturityRules_NoMaturityRules_2);
        all_values.push_back(MaturityRules_NoMaturityRules_2);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  // RelSymDerivSecGrp
  // Group RelSymDerivSecGrp.NoRelatedSym
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_0;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::CorporateAction{"MULTIPLECHARVALUE_M"}, RelSymDerivSecGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Currency{"EUR"}, RelSymDerivSecGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedText{"DATA_996760424"}, RelSymDerivSecGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedTextLen{779456277}, RelSymDerivSecGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(21, 1, 43, 0, 7, 2006)}, RelSymDerivSecGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Text{"STRING_158984567"}, RelSymDerivSecGrp_NoRelatedSym_0);
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_25;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_1311032378"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{1309215974}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_835432816"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{237719448}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_972144427"}, InstrumentLeg_25);
      FIX::LegContractMultiplier LegContractMultiplier_25;
      LegContractMultiplier_25.setString("2649445");
set_field(noLegs_0_1_0, LegContractMultiplier_25, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{1826022231}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_718014038"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_1508997939"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1610892798"}, InstrumentLeg_25);
      FIX::LegCouponRate LegCouponRate_25;
      LegCouponRate_25.setString("91.020000");
set_field(noLegs_0_1_0, LegCouponRate_25, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_574406194"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1887969756"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{912409187}, InstrumentLeg_25);
      FIX::LegFactor LegFactor_25;
      LegFactor_25.setString("13309871");
set_field(noLegs_0_1_0, LegFactor_25, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{1776392875}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_607969794"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1450781001"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_625669651"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_1387426072"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_1599152410"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1948227689"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_764716725"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_264754126"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'4'}, InstrumentLeg_25);
      FIX::LegOptionRatio LegOptionRatio_25;
      LegOptionRatio_25.setString("21204648");
set_field(noLegs_0_1_0, LegOptionRatio_25, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_1126003390"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_592757285"}, InstrumentLeg_25);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_25;
      LegPriceUnitOfMeasureQty_25.setString("19303769");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_25, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegProduct{289552121}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{1901973259}, InstrumentLeg_25);
      FIX::LegRatioQty LegRatioQty_25;
      LegRatioQty_25.setString("6183261");
set_field(noLegs_0_1_0, LegRatioQty_25, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_527271569"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_726634038"}, InstrumentLeg_25);
      FIX::LegRepurchaseRate LegRepurchaseRate_25;
      LegRepurchaseRate_25.setString("7.090000");
set_field(noLegs_0_1_0, LegRepurchaseRate_25, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{205810152}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_1444648076"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_244785001"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_1816702950"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_1530017178"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_819191195"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_1105165579"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_559677303"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_25);
      FIX::LegStrikePrice LegStrikePrice_25;
      LegStrikePrice_25.setString("1885865");
set_field(noLegs_0_1_0, LegStrikePrice_25, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_478060913"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_2034441539"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_814256182"}, InstrumentLeg_25);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_1865486985"}, InstrumentLeg_25);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_25;
      LegUnitOfMeasureQty_25.setString("14861103");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_25, InstrumentLeg_25);
      all_values.push_back(InstrumentLeg_25);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_52;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_482720062"}, LegSecAltIDGrp_NoLegSecurityAltID_52);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_1750864427"}, LegSecAltIDGrp_NoLegSecurityAltID_52);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_52);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_53;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_1048772941"}, LegSecAltIDGrp_NoLegSecurityAltID_53);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_455701230"}, LegSecAltIDGrp_NoLegSecurityAltID_53);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_53);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_26;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_729384170"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{1641530226}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_238594553"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{1018936291}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_1396019837"}, InstrumentLeg_26);
      FIX::LegContractMultiplier LegContractMultiplier_26;
      LegContractMultiplier_26.setString("8569206");
set_field(noLegs_0_1_1, LegContractMultiplier_26, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{1546207860}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_2122653875"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_1740191402"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1752018012"}, InstrumentLeg_26);
      FIX::LegCouponRate LegCouponRate_26;
      LegCouponRate_26.setString("83.040000");
set_field(noLegs_0_1_1, LegCouponRate_26, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_1984976403"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_656683950"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{378919246}, InstrumentLeg_26);
      FIX::LegFactor LegFactor_26;
      LegFactor_26.setString("550252");
set_field(noLegs_0_1_1, LegFactor_26, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{1216361253}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_249010364"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_638685755"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_1404947784"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_727071277"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_525643646"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_71720319"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_445074614"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_2011753947"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'6'}, InstrumentLeg_26);
      FIX::LegOptionRatio LegOptionRatio_26;
      LegOptionRatio_26.setString("9277946");
set_field(noLegs_0_1_1, LegOptionRatio_26, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_1615134727"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_1735493483"}, InstrumentLeg_26);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_26;
      LegPriceUnitOfMeasureQty_26.setString("13834959");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_26, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegProduct{197035249}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{1229540061}, InstrumentLeg_26);
      FIX::LegRatioQty LegRatioQty_26;
      LegRatioQty_26.setString("16220904");
set_field(noLegs_0_1_1, LegRatioQty_26, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1215971540"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_478076250"}, InstrumentLeg_26);
      FIX::LegRepurchaseRate LegRepurchaseRate_26;
      LegRepurchaseRate_26.setString("75.050000");
set_field(noLegs_0_1_1, LegRepurchaseRate_26, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{614695752}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_453246478"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_2071718907"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_219230116"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_1873064782"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_1909211662"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_1640467431"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegSide{'5'}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_418411964"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_26);
      FIX::LegStrikePrice LegStrikePrice_26;
      LegStrikePrice_26.setString("16347732");
set_field(noLegs_0_1_1, LegStrikePrice_26, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_120913394"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_1221643941"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_892237354"}, InstrumentLeg_26);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_847984671"}, InstrumentLeg_26);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_26;
      LegUnitOfMeasureQty_26.setString("17472875");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_26, InstrumentLeg_26);
      all_values.push_back(InstrumentLeg_26);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_54;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_1293059286"}, LegSecAltIDGrp_NoLegSecurityAltID_54);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_1611557886"}, LegSecAltIDGrp_NoLegSecurityAltID_54);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_54);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_55;
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltID{"STRING_1650678216"}, LegSecAltIDGrp_NoLegSecurityAltID_55);
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltIDSource{"STRING_73370315"}, LegSecAltIDGrp_NoLegSecurityAltID_55);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_55);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_27;
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuer{"DATA_1079208965"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuerLen{1238688051}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDesc{"DATA_1456866222"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDescLen{1276244214}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegCFICode{"STRING_320744465"}, InstrumentLeg_27);
      FIX::LegContractMultiplier LegContractMultiplier_27;
      LegContractMultiplier_27.setString("9314730");
set_field(noLegs_0_1_2, LegContractMultiplier_27, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegContractMultiplierUnit{344732106}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_798820715"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegCountryOfIssue{"COUNTRY_1263000541"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_959427858"}, InstrumentLeg_27);
      FIX::LegCouponRate LegCouponRate_27;
      LegCouponRate_27.setString("71.930000");
set_field(noLegs_0_1_2, LegCouponRate_27, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegCreditRating{"STRING_1187235800"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegCurrency{"CAN"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegDatedDate{"LOCALMKTDATE_948963815"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegExerciseStyle{671641758}, InstrumentLeg_27);
      FIX::LegFactor LegFactor_27;
      LegFactor_27.setString("15055812");
set_field(noLegs_0_1_2, LegFactor_27, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegFlowScheduleType{1367375779}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegInstrRegistry{"STRING_543544788"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2088539482"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegIssueDate{"LOCALMKTDATE_854665349"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegIssuer{"STRING_664458182"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegLocaleOfIssue{"STRING_1162699775"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_1746902704"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1512442853"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegMaturityTime{"TZTIMEONLY_762503714"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegOptAttribute{'5'}, InstrumentLeg_27);
      FIX::LegOptionRatio LegOptionRatio_27;
      LegOptionRatio_27.setString("6580184");
set_field(noLegs_0_1_2, LegOptionRatio_27, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegPool{"STRING_226577952"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegPriceUnitOfMeasure{"STRING_66571297"}, InstrumentLeg_27);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_27;
      LegPriceUnitOfMeasureQty_27.setString("7313888");
set_field(noLegs_0_1_2, LegPriceUnitOfMeasureQty_27, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegProduct{1305786918}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegPutOrCall{1305259349}, InstrumentLeg_27);
      FIX::LegRatioQty LegRatioQty_27;
      LegRatioQty_27.setString("407713");
set_field(noLegs_0_1_2, LegRatioQty_27, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_434547484"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegRepoCollateralSecurityType{"STRING_1626003814"}, InstrumentLeg_27);
      FIX::LegRepurchaseRate LegRepurchaseRate_27;
      LegRepurchaseRate_27.setString("44.160000");
set_field(noLegs_0_1_2, LegRepurchaseRate_27, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegRepurchaseTerm{779279591}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegSecurityDesc{"STRING_277340881"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegSecurityExchange{"EXCHANGE_87761309"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegSecurityID{"STRING_1738707449"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegSecurityIDSource{"STRING_1529408075"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegSecuritySubType{"STRING_1274997110"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegSecurityType{"STRING_769881776"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegSide{'3'}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_76477277"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_27);
      FIX::LegStrikePrice LegStrikePrice_27;
      LegStrikePrice_27.setString("14438530");
set_field(noLegs_0_1_2, LegStrikePrice_27, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegSymbol{"STRING_1985068323"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegSymbolSfx{"STRING_1806209884"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegTimeUnit{"STRING_151034758"}, InstrumentLeg_27);
      set_field(noLegs_0_1_2, FIX::LegUnitOfMeasure{"STRING_502042857"}, InstrumentLeg_27);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_27;
      LegUnitOfMeasureQty_27.setString("8214260");
set_field(noLegs_0_1_2, LegUnitOfMeasureQty_27, InstrumentLeg_27);
      all_values.push_back(InstrumentLeg_27);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_56;
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltID{"STRING_2014485710"}, LegSecAltIDGrp_NoLegSecurityAltID_56);
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltIDSource{"STRING_1583929725"}, LegSecAltIDGrp_NoLegSecurityAltID_56);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_56);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_57;
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltID{"STRING_313830543"}, LegSecAltIDGrp_NoLegSecurityAltID_57);
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltIDSource{"STRING_525020554"}, LegSecAltIDGrp_NoLegSecurityAltID_57);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_57);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_58;
        set_field(noLegSecurityAltID_0_2_2_2, FIX::LegSecurityAltID{"STRING_1810507678"}, LegSecAltIDGrp_NoLegSecurityAltID_58);
        set_field(noLegSecurityAltID_0_2_2_2, FIX::LegSecurityAltIDSource{"STRING_380401841"}, LegSecAltIDGrp_NoLegSecurityAltID_58);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_58);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_18;
    FIX::AttachmentPoint AttachmentPoint_18;
    AttachmentPoint_18.setString("93.600000");
set_field(noRelatedSym_0_0, AttachmentPoint_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_968810948"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CPProgram{2}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_1297180741"}, Instrument_18);
    FIX::CapPrice CapPrice_18;
    CapPrice_18.setString("14033584");
set_field(noRelatedSym_0_0, CapPrice_18, Instrument_18);
    FIX::ContractMultiplier ContractMultiplier_18;
    ContractMultiplier_18.setString("11641813");
set_field(noRelatedSym_0_0, ContractMultiplier_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{0}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_35154375"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_1441522237"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_209702819"}, Instrument_18);
    FIX::CouponRate CouponRate_18;
    CouponRate_18.setString("18.250000");
set_field(noRelatedSym_0_0, CouponRate_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_823446664"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_1484699929"}, Instrument_18);
    FIX::DetachmentPoint DetachmentPoint_18;
    DetachmentPoint_18.setString("99.530000");
set_field(noRelatedSym_0_0, DetachmentPoint_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_1183019419"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1561177206}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1837783488"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{900689821}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{2}, Instrument_18);
    FIX::Factor Factor_18;
    Factor_18.setString("16753681");
set_field(noRelatedSym_0_0, Factor_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{false}, Instrument_18);
    FIX::FloorPrice FloorPrice_18;
    FloorPrice_18.setString("299273");
set_field(noRelatedSym_0_0, FloorPrice_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{4}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_759035187"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'2'}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_817288147"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_1072865730"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_421949989"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_1453267571"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1678359349"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1449123125"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_991445113"}, Instrument_18);
    FIX::MinPriceIncrement MinPriceIncrement_18;
    MinPriceIncrement_18.setString("8280564");
set_field(noRelatedSym_0_0, MinPriceIncrement_18, Instrument_18);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_18;
    MinPriceIncrementAmount_18.setString("7049979");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{8142821}, Instrument_18);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_18;
    NotionalPercentageOutstanding_18.setString("79.530000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'7'}, Instrument_18);
    FIX::OptPayoutAmount OptPayoutAmount_18;
    OptPayoutAmount_18.setString("14496650");
set_field(noRelatedSym_0_0, OptPayoutAmount_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{1}, Instrument_18);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_18;
    OriginalNotionalPercentageOutstanding_18.setString("4.620000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_125628075"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{496917054}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1308647494"}, Instrument_18);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_18;
    PriceUnitOfMeasureQty_18.setString("20580942");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::Product{9}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_61853668"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_2128458419"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_621269726"}, Instrument_18);
    FIX::RepurchaseRate RepurchaseRate_18;
    RepurchaseRate_18.setString("86.000000");
set_field(noRelatedSym_0_0, RepurchaseRate_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{10902144}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_XR"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_388290139"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_2055315227"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_671916294"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_1461155870"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_7"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_766939793"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_TPRN"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SD"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'P'}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_688713712"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1158865858"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_18);
    FIX::StrikeMultiplier StrikeMultiplier_18;
    StrikeMultiplier_18.setString("18990181");
set_field(noRelatedSym_0_0, StrikeMultiplier_18, Instrument_18);
    FIX::StrikePrice StrikePrice_18;
    StrikePrice_18.setString("10687091");
set_field(noRelatedSym_0_0, StrikePrice_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{1}, Instrument_18);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_18;
    StrikePriceBoundaryPrecision_18.setString("49.570000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_18);
    FIX::StrikeValue StrikeValue_18;
    StrikeValue_18.setString("11478458");
set_field(noRelatedSym_0_0, StrikeValue_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_880855372"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Min"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_18);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_18;
    UnitOfMeasureQty_18.setString("18266136");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_18);
    all_values.push_back(Instrument_18);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_33;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_33);
      FIX::ComplexEventPrice ComplexEventPrice_33;
      ComplexEventPrice_33.setString("13258225");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_33, ComplexEvents_NoComplexEvents_33);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_33);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_33;
      ComplexEventPriceBoundaryPrecision_33.setString("87.760000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_33, ComplexEvents_NoComplexEvents_33);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_33);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_33);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_33;
      ComplexOptPayoutAmount_33.setString("11578309");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_33, ComplexEvents_NoComplexEvents_33);
      all_values.push_back(ComplexEvents_NoComplexEvents_33);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_68;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 40, 49, 10, 10, 2015)}, ComplexEventDates_NoComplexEventDates_68);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 2, 42, 12, 8, 2009)}, ComplexEventDates_NoComplexEventDates_68);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_68);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_159;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 25, 12)}, ComplexEventTimes_NoComplexEventTimes_159);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 4, 16)}, ComplexEventTimes_NoComplexEventTimes_159);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_159);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_69;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 39, 25, 23, 1, 2017)}, ComplexEventDates_NoComplexEventDates_69);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 47, 19, 3, 2, 2008)}, ComplexEventDates_NoComplexEventDates_69);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_69);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_160;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 5, 15)}, ComplexEventTimes_NoComplexEventTimes_160);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 12, 15)}, ComplexEventTimes_NoComplexEventTimes_160);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_160);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_161;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 40, 25)}, ComplexEventTimes_NoComplexEventTimes_161);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 21, 40)}, ComplexEventTimes_NoComplexEventTimes_161);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_161);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_34;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_34);
      FIX::ComplexEventPrice ComplexEventPrice_34;
      ComplexEventPrice_34.setString("7806074");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_34, ComplexEvents_NoComplexEvents_34);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_34);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_34;
      ComplexEventPriceBoundaryPrecision_34.setString("78.360000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_34, ComplexEvents_NoComplexEvents_34);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_34);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_34);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_34;
      ComplexOptPayoutAmount_34.setString("13480674");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_34, ComplexEvents_NoComplexEvents_34);
      all_values.push_back(ComplexEvents_NoComplexEvents_34);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_70;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 3, 4, 4, 4, 2008)}, ComplexEventDates_NoComplexEventDates_70);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 11, 20, 20, 5, 2000)}, ComplexEventDates_NoComplexEventDates_70);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_70);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_162;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 12, 5)}, ComplexEventTimes_NoComplexEventTimes_162);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 27, 56)}, ComplexEventTimes_NoComplexEventTimes_162);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_162);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_163;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 7, 13)}, ComplexEventTimes_NoComplexEventTimes_163);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 17, 42)}, ComplexEventTimes_NoComplexEventTimes_163);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_163);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_71;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 37, 19, 25, 5, 2010)}, ComplexEventDates_NoComplexEventDates_71);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 37, 58, 22, 6, 2010)}, ComplexEventDates_NoComplexEventDates_71);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_71);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_164;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 19, 51)}, ComplexEventTimes_NoComplexEventTimes_164);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 10, 34)}, ComplexEventTimes_NoComplexEventTimes_164);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_164);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_72;
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 33, 35, 6, 1, 2017)}, ComplexEventDates_NoComplexEventDates_72);
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 53, 22, 7, 3, 2012)}, ComplexEventDates_NoComplexEventDates_72);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_72);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_165;
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 10, 2)}, ComplexEventTimes_NoComplexEventTimes_165);
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 17, 57)}, ComplexEventTimes_NoComplexEventTimes_165);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_165);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_35;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_35);
      FIX::ComplexEventPrice ComplexEventPrice_35;
      ComplexEventPrice_35.setString("19049577");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_35, ComplexEvents_NoComplexEvents_35);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_35);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_35;
      ComplexEventPriceBoundaryPrecision_35.setString("58.250000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_35, ComplexEvents_NoComplexEvents_35);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_35);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_35);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_35;
      ComplexOptPayoutAmount_35.setString("2215793");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_35, ComplexEvents_NoComplexEvents_35);
      all_values.push_back(ComplexEvents_NoComplexEvents_35);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_73;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 26, 35, 5, 7, 2008)}, ComplexEventDates_NoComplexEventDates_73);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 13, 16, 4, 5, 2010)}, ComplexEventDates_NoComplexEventDates_73);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_73);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_166;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 56, 39)}, ComplexEventTimes_NoComplexEventTimes_166);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 48, 51)}, ComplexEventTimes_NoComplexEventTimes_166);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_166);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_74;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 52, 27, 1, 2, 2009)}, ComplexEventDates_NoComplexEventDates_74);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 15, 40, 16, 5, 2004)}, ComplexEventDates_NoComplexEventDates_74);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_74);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_167;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 29, 26)}, ComplexEventTimes_NoComplexEventTimes_167);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 5, 49)}, ComplexEventTimes_NoComplexEventTimes_167);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_167);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_42;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_768374716"}, EvntGrp_NoEvents_42);
      FIX::EventPx EventPx_42;
      EventPx_42.setString("15332819");
set_field(noEvents_0_1_0, EventPx_42, EvntGrp_NoEvents_42);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_854011269"}, EvntGrp_NoEvents_42);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(9, 57, 9, 11, 5, 2013)}, EvntGrp_NoEvents_42);
      set_field(noEvents_0_1_0, FIX::EventType{16}, EvntGrp_NoEvents_42);
      all_values.push_back(EvntGrp_NoEvents_42);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_43;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_1972969374"}, EvntGrp_NoEvents_43);
      FIX::EventPx EventPx_43;
      EventPx_43.setString("10547111");
set_field(noEvents_0_1_1, EventPx_43, EvntGrp_NoEvents_43);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_1902118970"}, EvntGrp_NoEvents_43);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(12, 57, 48, 24, 3, 2014)}, EvntGrp_NoEvents_43);
      set_field(noEvents_0_1_1, FIX::EventType{9}, EvntGrp_NoEvents_43);
      all_values.push_back(EvntGrp_NoEvents_43);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_44;
      set_field(noEvents_0_1_2, FIX::EventDate{"LOCALMKTDATE_2065240224"}, EvntGrp_NoEvents_44);
      FIX::EventPx EventPx_44;
      EventPx_44.setString("12731296");
set_field(noEvents_0_1_2, EventPx_44, EvntGrp_NoEvents_44);
      set_field(noEvents_0_1_2, FIX::EventText{"STRING_1379672989"}, EvntGrp_NoEvents_44);
      set_field(noEvents_0_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(5, 43, 48, 15, 2, 2002)}, EvntGrp_NoEvents_44);
      set_field(noEvents_0_1_2, FIX::EventType{1}, EvntGrp_NoEvents_44);
      all_values.push_back(EvntGrp_NoEvents_44);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_37;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1591713374"}, InstrumentParties_NoInstrumentParties_37);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_37);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1732827799}, InstrumentParties_NoInstrumentParties_37);
      all_values.push_back(InstrumentParties_NoInstrumentParties_37);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_531377853"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{221779107}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_76);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_38;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_759221049"}, InstrumentParties_NoInstrumentParties_38);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_38);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{47264833}, InstrumentParties_NoInstrumentParties_38);
      all_values.push_back(InstrumentParties_NoInstrumentParties_38);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_649648431"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{747390501}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_77);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_1873041880"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{81627220}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_78);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_44;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_274931976"}, SecAltIDGrp_NoSecurityAltID_44);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1832225394"}, SecAltIDGrp_NoSecurityAltID_44);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_44);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_36;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_1969593911"}, SecurityXML_36);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{272262656}, SecurityXML_36);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1749981971"}, SecurityXML_36);
    all_values.push_back(SecurityXML_36);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_4;
    set_field(noRelatedSym_0_0, FIX::DeliveryForm{2}, InstrumentExtension_4);
    FIX::PctAtRisk PctAtRisk_4;
    PctAtRisk_4.setString("56.450000");
set_field(noRelatedSym_0_0, PctAtRisk_4, InstrumentExtension_4);
    all_values.push_back(InstrumentExtension_4);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_6;
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribType{1}, AttrbGrp_NoInstrAttrib_6);
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribValue{"STRING_104978000"}, AttrbGrp_NoInstrAttrib_6);
      all_values.push_back(AttrbGrp_NoInstrAttrib_6);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_7;
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribType{27}, AttrbGrp_NoInstrAttrib_7);
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribValue{"STRING_1853114993"}, AttrbGrp_NoInstrAttrib_7);
      all_values.push_back(AttrbGrp_NoInstrAttrib_7);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_0;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_0;
    SecondaryHighLimitPrice_0.setString("1173084");
set_field(noRelatedSym_0_0, SecondaryHighLimitPrice_0, SecondaryPriceLimits_0);
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_0;
    SecondaryLowLimitPrice_0.setString("8501816");
set_field(noRelatedSym_0_0, SecondaryLowLimitPrice_0, SecondaryPriceLimits_0);
    set_field(noRelatedSym_0_0, FIX::SecondaryPriceLimitType{1345586026}, SecondaryPriceLimits_0);
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_0;
    SecondaryTradingReferencePrice_0.setString("9836502");
set_field(noRelatedSym_0_0, SecondaryTradingReferencePrice_0, SecondaryPriceLimits_0);
    all_values.push_back(SecondaryPriceLimits_0);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_1;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_1;
    set_field(noRelatedSym_0_1, FIX::CorporateAction{"MULTIPLECHARVALUE_M"}, RelSymDerivSecGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::Currency{"USD"}, RelSymDerivSecGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::EncodedText{"DATA_1355508583"}, RelSymDerivSecGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::EncodedTextLen{1214127217}, RelSymDerivSecGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(16, 46, 47, 8, 6, 2009)}, RelSymDerivSecGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::Text{"STRING_1506736436"}, RelSymDerivSecGrp_NoRelatedSym_1);
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_1);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_28;
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuer{"DATA_1390101670"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuerLen{1781668412}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDesc{"DATA_377674076"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDescLen{1212211934}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegCFICode{"STRING_2053931068"}, InstrumentLeg_28);
      FIX::LegContractMultiplier LegContractMultiplier_28;
      LegContractMultiplier_28.setString("21276560");
set_field(noLegs_1_1_0, LegContractMultiplier_28, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegContractMultiplierUnit{159968215}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1558383066"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegCountryOfIssue{"COUNTRY_889174365"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1906410445"}, InstrumentLeg_28);
      FIX::LegCouponRate LegCouponRate_28;
      LegCouponRate_28.setString("10.660000");
set_field(noLegs_1_1_0, LegCouponRate_28, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegCreditRating{"STRING_1384578791"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegCurrency{"USD"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegDatedDate{"LOCALMKTDATE_87276745"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegExerciseStyle{810144169}, InstrumentLeg_28);
      FIX::LegFactor LegFactor_28;
      LegFactor_28.setString("6168361");
set_field(noLegs_1_1_0, LegFactor_28, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegFlowScheduleType{381688073}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegInstrRegistry{"STRING_1492893533"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1185830574"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1737196656"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegIssuer{"STRING_559537102"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegLocaleOfIssue{"STRING_1976604088"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1704442641"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_521193780"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegMaturityTime{"TZTIMEONLY_667158787"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_28);
      FIX::LegOptionRatio LegOptionRatio_28;
      LegOptionRatio_28.setString("11324988");
set_field(noLegs_1_1_0, LegOptionRatio_28, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegPool{"STRING_105103988"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegPriceUnitOfMeasure{"STRING_697389986"}, InstrumentLeg_28);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_28;
      LegPriceUnitOfMeasureQty_28.setString("18254312");
set_field(noLegs_1_1_0, LegPriceUnitOfMeasureQty_28, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegProduct{1495205659}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegPutOrCall{331574750}, InstrumentLeg_28);
      FIX::LegRatioQty LegRatioQty_28;
      LegRatioQty_28.setString("556216");
set_field(noLegs_1_1_0, LegRatioQty_28, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_559933945"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegRepoCollateralSecurityType{"STRING_238022171"}, InstrumentLeg_28);
      FIX::LegRepurchaseRate LegRepurchaseRate_28;
      LegRepurchaseRate_28.setString("40.460000");
set_field(noLegs_1_1_0, LegRepurchaseRate_28, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegRepurchaseTerm{719902160}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegSecurityDesc{"STRING_1796405237"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegSecurityExchange{"EXCHANGE_924968411"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegSecurityID{"STRING_478828957"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegSecurityIDSource{"STRING_1312282655"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegSecuritySubType{"STRING_162063554"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegSecurityType{"STRING_2090870748"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegSide{'9'}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_249340299"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_28);
      FIX::LegStrikePrice LegStrikePrice_28;
      LegStrikePrice_28.setString("6310283");
set_field(noLegs_1_1_0, LegStrikePrice_28, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegSymbol{"STRING_98941154"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegSymbolSfx{"STRING_600651661"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegTimeUnit{"STRING_220741380"}, InstrumentLeg_28);
      set_field(noLegs_1_1_0, FIX::LegUnitOfMeasure{"STRING_658478257"}, InstrumentLeg_28);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_28;
      LegUnitOfMeasureQty_28.setString("4297721");
set_field(noLegs_1_1_0, LegUnitOfMeasureQty_28, InstrumentLeg_28);
      all_values.push_back(InstrumentLeg_28);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_59;
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltID{"STRING_1179672037"}, LegSecAltIDGrp_NoLegSecurityAltID_59);
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltIDSource{"STRING_1096930888"}, LegSecAltIDGrp_NoLegSecurityAltID_59);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_59);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    // Instrument
    multiset<string> Instrument_19;
    FIX::AttachmentPoint AttachmentPoint_19;
    AttachmentPoint_19.setString("75.710000");
set_field(noRelatedSym_0_1, AttachmentPoint_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_164687279"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::CPProgram{2}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_1813227557"}, Instrument_19);
    FIX::CapPrice CapPrice_19;
    CapPrice_19.setString("19901184");
set_field(noRelatedSym_0_1, CapPrice_19, Instrument_19);
    FIX::ContractMultiplier ContractMultiplier_19;
    ContractMultiplier_19.setString("5497568");
set_field(noRelatedSym_0_1, ContractMultiplier_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{1}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_2045740145"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_1109690833"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_235340830"}, Instrument_19);
    FIX::CouponRate CouponRate_19;
    CouponRate_19.setString("41.910000");
set_field(noRelatedSym_0_1, CouponRate_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_1829592993"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_2031746067"}, Instrument_19);
    FIX::DetachmentPoint DetachmentPoint_19;
    DetachmentPoint_19.setString("89.540000");
set_field(noRelatedSym_0_1, DetachmentPoint_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_160938302"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{1196545075}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_1021082508"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{104325403}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{1}, Instrument_19);
    FIX::Factor Factor_19;
    Factor_19.setString("12704228");
set_field(noRelatedSym_0_1, Factor_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{false}, Instrument_19);
    FIX::FloorPrice FloorPrice_19;
    FloorPrice_19.setString("19014511");
set_field(noRelatedSym_0_1, FloorPrice_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{2}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_10002742"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'2'}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1615276084"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_439774843"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_1899892933"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::ListMethod{1}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_1536705732"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_868246856"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_812151752"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_591256961"}, Instrument_19);
    FIX::MinPriceIncrement MinPriceIncrement_19;
    MinPriceIncrement_19.setString("5339907");
set_field(noRelatedSym_0_1, MinPriceIncrement_19, Instrument_19);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_19;
    MinPriceIncrementAmount_19.setString("6547866");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{1141013849}, Instrument_19);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_19;
    NotionalPercentageOutstanding_19.setString("94.240000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'5'}, Instrument_19);
    FIX::OptPayoutAmount OptPayoutAmount_19;
    OptPayoutAmount_19.setString("1032210");
set_field(noRelatedSym_0_1, OptPayoutAmount_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{1}, Instrument_19);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_19;
    OriginalNotionalPercentageOutstanding_19.setString("36.420000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_1932814027"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{650912674}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_2093752329"}, Instrument_19);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_19;
    PriceUnitOfMeasureQty_19.setString("18474577");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::Product{4}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_50594084"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{0}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_1490134263"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_908450757"}, Instrument_19);
    FIX::RepurchaseRate RepurchaseRate_19;
    RepurchaseRate_19.setString("88.250000");
set_field(noRelatedSym_0_1, RepurchaseRate_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{1244101794}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_FR"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_1261341568"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_1218810706"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_1333041020"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_1701116411"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_6"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_1090338495"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_EUCORP"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SD"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'C'}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_225973964"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_1299960200"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"USD"}, Instrument_19);
    FIX::StrikeMultiplier StrikeMultiplier_19;
    StrikeMultiplier_19.setString("18530033");
set_field(noRelatedSym_0_1, StrikeMultiplier_19, Instrument_19);
    FIX::StrikePrice StrikePrice_19;
    StrikePrice_19.setString("7783466");
set_field(noRelatedSym_0_1, StrikePrice_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{4}, Instrument_19);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_19;
    StrikePriceBoundaryPrecision_19.setString("32.940000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_19);
    FIX::StrikeValue StrikeValue_19;
    StrikeValue_19.setString("273626");
set_field(noRelatedSym_0_1, StrikeValue_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_1538725891"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_D"}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_19);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_19;
    UnitOfMeasureQty_19.setString("15693245");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_19, Instrument_19);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_CDS"}, Instrument_19);
    all_values.push_back(Instrument_19);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_36;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_36);
      FIX::ComplexEventPrice ComplexEventPrice_36;
      ComplexEventPrice_36.setString("1977061");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_36, ComplexEvents_NoComplexEvents_36);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_36);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_36;
      ComplexEventPriceBoundaryPrecision_36.setString("12.610000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_36, ComplexEvents_NoComplexEvents_36);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_36);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_36);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_36;
      ComplexOptPayoutAmount_36.setString("14881540");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_36, ComplexEvents_NoComplexEvents_36);
      all_values.push_back(ComplexEvents_NoComplexEvents_36);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_75;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 5, 5, 16, 6, 2011)}, ComplexEventDates_NoComplexEventDates_75);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 37, 9, 25, 1, 2012)}, ComplexEventDates_NoComplexEventDates_75);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_75);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_168;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 47, 34)}, ComplexEventTimes_NoComplexEventTimes_168);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 29, 46)}, ComplexEventTimes_NoComplexEventTimes_168);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_168);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_169;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 35, 48)}, ComplexEventTimes_NoComplexEventTimes_169);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 45, 13)}, ComplexEventTimes_NoComplexEventTimes_169);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_169);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_45;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_1847864217"}, EvntGrp_NoEvents_45);
      FIX::EventPx EventPx_45;
      EventPx_45.setString("17911141");
set_field(noEvents_1_1_0, EventPx_45, EvntGrp_NoEvents_45);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_694206861"}, EvntGrp_NoEvents_45);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(16, 38, 7, 26, 9, 2017)}, EvntGrp_NoEvents_45);
      set_field(noEvents_1_1_0, FIX::EventType{99}, EvntGrp_NoEvents_45);
      all_values.push_back(EvntGrp_NoEvents_45);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_39;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_1559127069"}, InstrumentParties_NoInstrumentParties_39);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_39);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{1746657887}, InstrumentParties_NoInstrumentParties_39);
      all_values.push_back(InstrumentParties_NoInstrumentParties_39);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_1375227802"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{649971673}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_79);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_661647665"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{843711816}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_80);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81;
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubID{"STRING_654373423"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81);
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubIDType{888426651}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_81);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_45;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_856481282"}, SecAltIDGrp_NoSecurityAltID_45);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_154477519"}, SecAltIDGrp_NoSecurityAltID_45);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_45);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_38;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_914076844"}, SecurityXML_38);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{327622308}, SecurityXML_38);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_1940324936"}, SecurityXML_38);
    all_values.push_back(SecurityXML_38);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_5;
    set_field(noRelatedSym_0_1, FIX::DeliveryForm{2}, InstrumentExtension_5);
    FIX::PctAtRisk PctAtRisk_5;
    PctAtRisk_5.setString("64.930000");
set_field(noRelatedSym_0_1, PctAtRisk_5, InstrumentExtension_5);
    all_values.push_back(InstrumentExtension_5);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_8;
      set_field(noInstrAttrib_1_1_0, FIX::InstrAttribType{9}, AttrbGrp_NoInstrAttrib_8);
      set_field(noInstrAttrib_1_1_0, FIX::InstrAttribValue{"STRING_1830130684"}, AttrbGrp_NoInstrAttrib_8);
      all_values.push_back(AttrbGrp_NoInstrAttrib_8);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_1;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_1;
    SecondaryHighLimitPrice_1.setString("3307466");
set_field(noRelatedSym_0_1, SecondaryHighLimitPrice_1, SecondaryPriceLimits_1);
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_1;
    SecondaryLowLimitPrice_1.setString("16968140");
set_field(noRelatedSym_0_1, SecondaryLowLimitPrice_1, SecondaryPriceLimits_1);
    set_field(noRelatedSym_0_1, FIX::SecondaryPriceLimitType{1631971548}, SecondaryPriceLimits_1);
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_1;
    SecondaryTradingReferencePrice_1.setString("10279384");
set_field(noRelatedSym_0_1, SecondaryTradingReferencePrice_1, SecondaryPriceLimits_1);
    all_values.push_back(SecondaryPriceLimits_1);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_2;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_2;
    set_field(noRelatedSym_0_2, FIX::CorporateAction{"MULTIPLECHARVALUE_K"}, RelSymDerivSecGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::Currency{"CAN"}, RelSymDerivSecGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::EncodedText{"DATA_1579418564"}, RelSymDerivSecGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::EncodedTextLen{1211100753}, RelSymDerivSecGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(9, 0, 2, 10, 11, 2004)}, RelSymDerivSecGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::Text{"STRING_1409085276"}, RelSymDerivSecGrp_NoRelatedSym_2);
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_2);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_2_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_29;
      set_field(noLegs_2_1_0, FIX::EncodedLegIssuer{"DATA_496484571"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::EncodedLegIssuerLen{150028279}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::EncodedLegSecurityDesc{"DATA_1449033255"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::EncodedLegSecurityDescLen{1352965853}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegCFICode{"STRING_304505798"}, InstrumentLeg_29);
      FIX::LegContractMultiplier LegContractMultiplier_29;
      LegContractMultiplier_29.setString("2156264");
set_field(noLegs_2_1_0, LegContractMultiplier_29, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegContractMultiplierUnit{1680588161}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_97347086"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegCountryOfIssue{"COUNTRY_399074993"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1719604655"}, InstrumentLeg_29);
      FIX::LegCouponRate LegCouponRate_29;
      LegCouponRate_29.setString("5.380000");
set_field(noLegs_2_1_0, LegCouponRate_29, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegCreditRating{"STRING_282904103"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1979718111"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegExerciseStyle{886739591}, InstrumentLeg_29);
      FIX::LegFactor LegFactor_29;
      LegFactor_29.setString("10925719");
set_field(noLegs_2_1_0, LegFactor_29, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegFlowScheduleType{1834796059}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegInstrRegistry{"STRING_1088562065"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_378723062"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1266730975"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegIssuer{"STRING_152179170"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegLocaleOfIssue{"STRING_2119171946"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_110309313"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_544380931"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1311311420"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegOptAttribute{'8'}, InstrumentLeg_29);
      FIX::LegOptionRatio LegOptionRatio_29;
      LegOptionRatio_29.setString("1643268");
set_field(noLegs_2_1_0, LegOptionRatio_29, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegPool{"STRING_1153422568"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegPriceUnitOfMeasure{"STRING_119348551"}, InstrumentLeg_29);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_29;
      LegPriceUnitOfMeasureQty_29.setString("6279845");
set_field(noLegs_2_1_0, LegPriceUnitOfMeasureQty_29, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegProduct{1649907139}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegPutOrCall{269376831}, InstrumentLeg_29);
      FIX::LegRatioQty LegRatioQty_29;
      LegRatioQty_29.setString("20770178");
set_field(noLegs_2_1_0, LegRatioQty_29, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_855389344"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegRepoCollateralSecurityType{"STRING_573882629"}, InstrumentLeg_29);
      FIX::LegRepurchaseRate LegRepurchaseRate_29;
      LegRepurchaseRate_29.setString("6.350000");
set_field(noLegs_2_1_0, LegRepurchaseRate_29, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegRepurchaseTerm{388493858}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegSecurityDesc{"STRING_671229716"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegSecurityExchange{"EXCHANGE_544235628"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegSecurityID{"STRING_2108098513"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegSecurityIDSource{"STRING_405116606"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegSecuritySubType{"STRING_827139731"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegSecurityType{"STRING_1362866556"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegSide{'4'}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_659374195"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_29);
      FIX::LegStrikePrice LegStrikePrice_29;
      LegStrikePrice_29.setString("3466866");
set_field(noLegs_2_1_0, LegStrikePrice_29, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegSymbol{"STRING_1190684564"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegSymbolSfx{"STRING_1941045203"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegTimeUnit{"STRING_1613417581"}, InstrumentLeg_29);
      set_field(noLegs_2_1_0, FIX::LegUnitOfMeasure{"STRING_1342863734"}, InstrumentLeg_29);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_29;
      LegUnitOfMeasureQty_29.setString("19127335");
set_field(noLegs_2_1_0, LegUnitOfMeasureQty_29, InstrumentLeg_29);
      all_values.push_back(InstrumentLeg_29);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_60;
        set_field(noLegSecurityAltID_2_0_2_0, FIX::LegSecurityAltID{"STRING_1887244665"}, LegSecAltIDGrp_NoLegSecurityAltID_60);
        set_field(noLegSecurityAltID_2_0_2_0, FIX::LegSecurityAltIDSource{"STRING_1076561274"}, LegSecAltIDGrp_NoLegSecurityAltID_60);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_60);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_61;
        set_field(noLegSecurityAltID_2_0_2_1, FIX::LegSecurityAltID{"STRING_433990170"}, LegSecAltIDGrp_NoLegSecurityAltID_61);
        set_field(noLegSecurityAltID_2_0_2_1, FIX::LegSecurityAltIDSource{"STRING_2051571511"}, LegSecAltIDGrp_NoLegSecurityAltID_61);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_61);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    // Instrument
    multiset<string> Instrument_20;
    FIX::AttachmentPoint AttachmentPoint_20;
    AttachmentPoint_20.setString("1.940000");
set_field(noRelatedSym_0_2, AttachmentPoint_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::CFICode{"STRING_553338721"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::CPProgram{99}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::CPRegType{"STRING_1732407334"}, Instrument_20);
    FIX::CapPrice CapPrice_20;
    CapPrice_20.setString("8227155");
set_field(noRelatedSym_0_2, CapPrice_20, Instrument_20);
    FIX::ContractMultiplier ContractMultiplier_20;
    ContractMultiplier_20.setString("4616066");
set_field(noRelatedSym_0_2, ContractMultiplier_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::ContractMultiplierUnit{0}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::ContractSettlMonth{"MONTHYEAR_1396598182"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::CountryOfIssue{"COUNTRY_606767258"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::CouponPaymentDate{"LOCALMKTDATE_828806888"}, Instrument_20);
    FIX::CouponRate CouponRate_20;
    CouponRate_20.setString("78.980000");
set_field(noRelatedSym_0_2, CouponRate_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::CreditRating{"STRING_1151002886"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::DatedDate{"LOCALMKTDATE_789421753"}, Instrument_20);
    FIX::DetachmentPoint DetachmentPoint_20;
    DetachmentPoint_20.setString("8.560000");
set_field(noRelatedSym_0_2, DetachmentPoint_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::EncodedIssuer{"DATA_1978142617"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::EncodedIssuerLen{4804661}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::EncodedSecurityDesc{"DATA_795211018"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::EncodedSecurityDescLen{490033164}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::ExerciseStyle{2}, Instrument_20);
    FIX::Factor Factor_20;
    Factor_20.setString("2100495");
set_field(noRelatedSym_0_2, Factor_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::FlexProductEligibilityIndicator{true}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::FlexibleIndicator{true}, Instrument_20);
    FIX::FloorPrice FloorPrice_20;
    FloorPrice_20.setString("36110");
set_field(noRelatedSym_0_2, FloorPrice_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::FlowScheduleType{4}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::InstrRegistry{"STRING_492991811"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::InstrmtAssignmentMethod{'1'}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::InterestAccrualDate{"LOCALMKTDATE_2026380598"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::IssueDate{"LOCALMKTDATE_232752828"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::Issuer{"STRING_845422194"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::ListMethod{0}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::LocaleOfIssue{"STRING_136840691"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::MaturityDate{"LOCALMKTDATE_927922389"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::MaturityMonthYear{"MONTHYEAR_866225842"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::MaturityTime{"TZTIMEONLY_668913131"}, Instrument_20);
    FIX::MinPriceIncrement MinPriceIncrement_20;
    MinPriceIncrement_20.setString("5128460");
set_field(noRelatedSym_0_2, MinPriceIncrement_20, Instrument_20);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_20;
    MinPriceIncrementAmount_20.setString("16889413");
set_field(noRelatedSym_0_2, MinPriceIncrementAmount_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::NTPositionLimit{1130519754}, Instrument_20);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_20;
    NotionalPercentageOutstanding_20.setString("91.050000");
set_field(noRelatedSym_0_2, NotionalPercentageOutstanding_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::OptAttribute{'9'}, Instrument_20);
    FIX::OptPayoutAmount OptPayoutAmount_20;
    OptPayoutAmount_20.setString("17372870");
set_field(noRelatedSym_0_2, OptPayoutAmount_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::OptPayoutType{3}, Instrument_20);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_20;
    OriginalNotionalPercentageOutstanding_20.setString("1.780000");
set_field(noRelatedSym_0_2, OriginalNotionalPercentageOutstanding_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::Pool{"STRING_740806250"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::PositionLimit{423904099}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::PriceUnitOfMeasure{"STRING_571465219"}, Instrument_20);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_20;
    PriceUnitOfMeasureQty_20.setString("4287087");
set_field(noRelatedSym_0_2, PriceUnitOfMeasureQty_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::Product{11}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::ProductComplex{"STRING_1061498384"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::PutOrCall{1}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::RedemptionDate{"LOCALMKTDATE_41637917"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::RepoCollateralSecurityType{"STRING_1898218154"}, Instrument_20);
    FIX::RepurchaseRate RepurchaseRate_20;
    RepurchaseRate_20.setString("76.460000");
set_field(noRelatedSym_0_2, RepurchaseRate_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::RepurchaseTerm{45248984}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::RestructuringType{"STRING_MM"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::SecurityDesc{"STRING_178755809"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::SecurityExchange{"EXCHANGE_1961593552"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::SecurityGroup{"STRING_2079768809"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::SecurityID{"STRING_411508637"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::SecurityIDSource{"STRING_I"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::SecurityStatus{"STRING_2"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::SecuritySubType{"STRING_548349329"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::SecurityType{"STRING_YANK"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::Seniority{"STRING_SD"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::SettlMethod{'C'}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::SettleOnOpenFlag{"STRING_2100300563"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::StateOrProvinceOfIssue{"STRING_652855870"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::StrikeCurrency{"GBP"}, Instrument_20);
    FIX::StrikeMultiplier StrikeMultiplier_20;
    StrikeMultiplier_20.setString("15909117");
set_field(noRelatedSym_0_2, StrikeMultiplier_20, Instrument_20);
    FIX::StrikePrice StrikePrice_20;
    StrikePrice_20.setString("19375855");
set_field(noRelatedSym_0_2, StrikePrice_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::StrikePriceBoundaryMethod{2}, Instrument_20);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_20;
    StrikePriceBoundaryPrecision_20.setString("83.290000");
set_field(noRelatedSym_0_2, StrikePriceBoundaryPrecision_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::StrikePriceDeterminationMethod{1}, Instrument_20);
    FIX::StrikeValue StrikeValue_20;
    StrikeValue_20.setString("9643624");
set_field(noRelatedSym_0_2, StrikeValue_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::Symbol{"STRING_1485689364"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::SymbolSfx{"STRING_WI"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::TimeUnit{"STRING_S"}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::UnitOfMeasure{"STRING_tn"}, Instrument_20);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_20;
    UnitOfMeasureQty_20.setString("19287071");
set_field(noRelatedSym_0_2, UnitOfMeasureQty_20, Instrument_20);
    set_field(noRelatedSym_0_2, FIX::ValuationMethod{"STRING_FUT"}, Instrument_20);
    all_values.push_back(Instrument_20);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_37;
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_37);
      FIX::ComplexEventPrice ComplexEventPrice_37;
      ComplexEventPrice_37.setString("14041646");
set_field(noComplexEvents_2_1_0, ComplexEventPrice_37, ComplexEvents_NoComplexEvents_37);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_37);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_37;
      ComplexEventPriceBoundaryPrecision_37.setString("69.550000");
set_field(noComplexEvents_2_1_0, ComplexEventPriceBoundaryPrecision_37, ComplexEvents_NoComplexEvents_37);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_37);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_37);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_37;
      ComplexOptPayoutAmount_37.setString("572519");
set_field(noComplexEvents_2_1_0, ComplexOptPayoutAmount_37, ComplexEvents_NoComplexEvents_37);
      all_values.push_back(ComplexEvents_NoComplexEvents_37);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_76;
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 34, 18, 6, 2, 2004)}, ComplexEventDates_NoComplexEventDates_76);
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 59, 30, 24, 9, 2008)}, ComplexEventDates_NoComplexEventDates_76);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_76);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_170;
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 53, 45)}, ComplexEventTimes_NoComplexEventTimes_170);
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 32, 19)}, ComplexEventTimes_NoComplexEventTimes_170);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_170);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_171;
          set_field(noComplexEventTimes_2_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 31, 7)}, ComplexEventTimes_NoComplexEventTimes_171);
          set_field(noComplexEventTimes_2_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 12, 55)}, ComplexEventTimes_NoComplexEventTimes_171);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_171);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_172;
          set_field(noComplexEventTimes_2_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 21, 38)}, ComplexEventTimes_NoComplexEventTimes_172);
          set_field(noComplexEventTimes_2_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 59, 24)}, ComplexEventTimes_NoComplexEventTimes_172);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_172);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_38;
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_38);
      FIX::ComplexEventPrice ComplexEventPrice_38;
      ComplexEventPrice_38.setString("4361199");
set_field(noComplexEvents_2_1_1, ComplexEventPrice_38, ComplexEvents_NoComplexEvents_38);
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_38);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_38;
      ComplexEventPriceBoundaryPrecision_38.setString("95.320000");
set_field(noComplexEvents_2_1_1, ComplexEventPriceBoundaryPrecision_38, ComplexEvents_NoComplexEvents_38);
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_38);
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_38);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_38;
      ComplexOptPayoutAmount_38.setString("20056171");
set_field(noComplexEvents_2_1_1, ComplexOptPayoutAmount_38, ComplexEvents_NoComplexEvents_38);
      all_values.push_back(ComplexEvents_NoComplexEvents_38);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_77;
        set_field(noComplexEventDates_2_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 59, 11, 0, 8, 2006)}, ComplexEventDates_NoComplexEventDates_77);
        set_field(noComplexEventDates_2_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 53, 36, 19, 11, 2016)}, ComplexEventDates_NoComplexEventDates_77);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_77);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_173;
          set_field(noComplexEventTimes_2_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 28, 49)}, ComplexEventTimes_NoComplexEventTimes_173);
          set_field(noComplexEventTimes_2_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 40, 20)}, ComplexEventTimes_NoComplexEventTimes_173);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_173);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_78;
        set_field(noComplexEventDates_2_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 58, 7, 8, 4, 2009)}, ComplexEventDates_NoComplexEventDates_78);
        set_field(noComplexEventDates_2_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 16, 33, 20, 9, 2015)}, ComplexEventDates_NoComplexEventDates_78);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_78);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_174;
          set_field(noComplexEventTimes_2_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 47, 37)}, ComplexEventTimes_NoComplexEventTimes_174);
          set_field(noComplexEventTimes_2_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 17, 41)}, ComplexEventTimes_NoComplexEventTimes_174);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_174);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_0);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_79;
        set_field(noComplexEventDates_2_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 2, 45, 12, 10, 2007)}, ComplexEventDates_NoComplexEventDates_79);
        set_field(noComplexEventDates_2_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 47, 50, 27, 8, 2017)}, ComplexEventDates_NoComplexEventDates_79);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_79);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_175;
          set_field(noComplexEventTimes_2_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 8, 7)}, ComplexEventTimes_NoComplexEventTimes_175);
          set_field(noComplexEventTimes_2_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 56, 0)}, ComplexEventTimes_NoComplexEventTimes_175);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_175);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_1_2_2.addGroup(noComplexEventTimes_2_1_2_3_0);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_39;
      set_field(noComplexEvents_2_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_39);
      FIX::ComplexEventPrice ComplexEventPrice_39;
      ComplexEventPrice_39.setString("8567016");
set_field(noComplexEvents_2_1_2, ComplexEventPrice_39, ComplexEvents_NoComplexEvents_39);
      set_field(noComplexEvents_2_1_2, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_39);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_39;
      ComplexEventPriceBoundaryPrecision_39.setString("23.580000");
set_field(noComplexEvents_2_1_2, ComplexEventPriceBoundaryPrecision_39, ComplexEvents_NoComplexEvents_39);
      set_field(noComplexEvents_2_1_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_39);
      set_field(noComplexEvents_2_1_2, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_39);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_39;
      ComplexOptPayoutAmount_39.setString("12883740");
set_field(noComplexEvents_2_1_2, ComplexOptPayoutAmount_39, ComplexEvents_NoComplexEvents_39);
      all_values.push_back(ComplexEvents_NoComplexEvents_39);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_80;
        set_field(noComplexEventDates_2_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 5, 0, 0, 3, 2017)}, ComplexEventDates_NoComplexEventDates_80);
        set_field(noComplexEventDates_2_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 5, 3, 1, 1, 2006)}, ComplexEventDates_NoComplexEventDates_80);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_80);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_176;
          set_field(noComplexEventTimes_2_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 45, 45)}, ComplexEventTimes_NoComplexEventTimes_176);
          set_field(noComplexEventTimes_2_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 41, 6)}, ComplexEventTimes_NoComplexEventTimes_176);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_176);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_0);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_0);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_46;
      set_field(noEvents_2_1_0, FIX::EventDate{"LOCALMKTDATE_1985901884"}, EvntGrp_NoEvents_46);
      FIX::EventPx EventPx_46;
      EventPx_46.setString("3254408");
set_field(noEvents_2_1_0, EventPx_46, EvntGrp_NoEvents_46);
      set_field(noEvents_2_1_0, FIX::EventText{"STRING_1896488485"}, EvntGrp_NoEvents_46);
      set_field(noEvents_2_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(0, 53, 8, 2, 11, 2017)}, EvntGrp_NoEvents_46);
      set_field(noEvents_2_1_0, FIX::EventType{7}, EvntGrp_NoEvents_46);
      all_values.push_back(EvntGrp_NoEvents_46);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_47;
      set_field(noEvents_2_1_1, FIX::EventDate{"LOCALMKTDATE_1305330086"}, EvntGrp_NoEvents_47);
      FIX::EventPx EventPx_47;
      EventPx_47.setString("4501322");
set_field(noEvents_2_1_1, EventPx_47, EvntGrp_NoEvents_47);
      set_field(noEvents_2_1_1, FIX::EventText{"STRING_1664734064"}, EvntGrp_NoEvents_47);
      set_field(noEvents_2_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(1, 41, 42, 2, 6, 2000)}, EvntGrp_NoEvents_47);
      set_field(noEvents_2_1_1, FIX::EventType{4}, EvntGrp_NoEvents_47);
      all_values.push_back(EvntGrp_NoEvents_47);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_40;
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyID{"STRING_437334425"}, InstrumentParties_NoInstrumentParties_40);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_40);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyRole{742638496}, InstrumentParties_NoInstrumentParties_40);
      all_values.push_back(InstrumentParties_NoInstrumentParties_40);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82;
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubID{"STRING_553878346"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82);
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubIDType{1871838717}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_82);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83;
        set_field(noInstrumentPartySubIDs_2_0_2_1, FIX::InstrumentPartySubID{"STRING_1118428277"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83);
        set_field(noInstrumentPartySubIDs_2_0_2_1, FIX::InstrumentPartySubIDType{1963134473}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_83);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84;
        set_field(noInstrumentPartySubIDs_2_0_2_2, FIX::InstrumentPartySubID{"STRING_1710256953"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84);
        set_field(noInstrumentPartySubIDs_2_0_2_2, FIX::InstrumentPartySubIDType{1443869103}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_84);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_41;
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyID{"STRING_1712139310"}, InstrumentParties_NoInstrumentParties_41);
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_41);
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyRole{461851927}, InstrumentParties_NoInstrumentParties_41);
      all_values.push_back(InstrumentParties_NoInstrumentParties_41);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85;
        set_field(noInstrumentPartySubIDs_2_1_2_0, FIX::InstrumentPartySubID{"STRING_157044211"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85);
        set_field(noInstrumentPartySubIDs_2_1_2_0, FIX::InstrumentPartySubIDType{889308693}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_85);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86;
        set_field(noInstrumentPartySubIDs_2_1_2_1, FIX::InstrumentPartySubID{"STRING_400469446"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86);
        set_field(noInstrumentPartySubIDs_2_1_2_1, FIX::InstrumentPartySubIDType{1033569277}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_86);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87;
        set_field(noInstrumentPartySubIDs_2_1_2_2, FIX::InstrumentPartySubID{"STRING_2128695540"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87);
        set_field(noInstrumentPartySubIDs_2_1_2_2, FIX::InstrumentPartySubIDType{1705799532}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_87);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_46;
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltID{"STRING_1645945956"}, SecAltIDGrp_NoSecurityAltID_46);
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltIDSource{"STRING_1686964911"}, SecAltIDGrp_NoSecurityAltID_46);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_46);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_40;
    set_field(noRelatedSym_0_2, FIX::SecurityXML{"XMLDATA_66828918"}, SecurityXML_40);
    set_field(noRelatedSym_0_2, FIX::SecurityXMLLen{1849041677}, SecurityXML_40);
    set_field(noRelatedSym_0_2, FIX::SecurityXMLSchema{"STRING_79083025"}, SecurityXML_40);
    all_values.push_back(SecurityXML_40);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_6;
    set_field(noRelatedSym_0_2, FIX::DeliveryForm{1}, InstrumentExtension_6);
    FIX::PctAtRisk PctAtRisk_6;
    PctAtRisk_6.setString("31.620000");
set_field(noRelatedSym_0_2, PctAtRisk_6, InstrumentExtension_6);
    all_values.push_back(InstrumentExtension_6);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_9;
      set_field(noInstrAttrib_2_1_0, FIX::InstrAttribType{1}, AttrbGrp_NoInstrAttrib_9);
      set_field(noInstrAttrib_2_1_0, FIX::InstrAttribValue{"STRING_1770090094"}, AttrbGrp_NoInstrAttrib_9);
      all_values.push_back(AttrbGrp_NoInstrAttrib_9);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_10;
      set_field(noInstrAttrib_2_1_1, FIX::InstrAttribType{8}, AttrbGrp_NoInstrAttrib_10);
      set_field(noInstrAttrib_2_1_1, FIX::InstrAttribValue{"STRING_1304763860"}, AttrbGrp_NoInstrAttrib_10);
      all_values.push_back(AttrbGrp_NoInstrAttrib_10);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_11;
      set_field(noInstrAttrib_2_1_2, FIX::InstrAttribType{13}, AttrbGrp_NoInstrAttrib_11);
      set_field(noInstrAttrib_2_1_2, FIX::InstrAttribValue{"STRING_1798939368"}, AttrbGrp_NoInstrAttrib_11);
      all_values.push_back(AttrbGrp_NoInstrAttrib_11);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_2);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_2;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_2;
    SecondaryHighLimitPrice_2.setString("18586422");
set_field(noRelatedSym_0_2, SecondaryHighLimitPrice_2, SecondaryPriceLimits_2);
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_2;
    SecondaryLowLimitPrice_2.setString("896000");
set_field(noRelatedSym_0_2, SecondaryLowLimitPrice_2, SecondaryPriceLimits_2);
    set_field(noRelatedSym_0_2, FIX::SecondaryPriceLimitType{769883997}, SecondaryPriceLimits_2);
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_2;
    SecondaryTradingReferencePrice_2.setString("16742930");
set_field(noRelatedSym_0_2, SecondaryTradingReferencePrice_2, SecondaryPriceLimits_2);
    all_values.push_back(SecondaryPriceLimits_2);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_2);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_27;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_1799856965"}, UnderlyingInstrument_27);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{66269452}, UnderlyingInstrument_27);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_1238948694"}, UnderlyingInstrument_27);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{121639888}, UnderlyingInstrument_27);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_27;
  UnderlyingAdjustedQuantity_27.setString("5281213");
set_field(msg, UnderlyingAdjustedQuantity_27, UnderlyingInstrument_27);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_27;
  UnderlyingAllocationPercent_27.setString("32.900000");
set_field(msg, UnderlyingAllocationPercent_27, UnderlyingInstrument_27);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_27;
  UnderlyingAttachmentPoint_27.setString("41.000000");
set_field(msg, UnderlyingAttachmentPoint_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_1417430073"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_93969088"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1312253377"}, UnderlyingInstrument_27);
  FIX::UnderlyingCapValue UnderlyingCapValue_27;
  UnderlyingCapValue_27.setString("13986419");
set_field(msg, UnderlyingCapValue_27, UnderlyingInstrument_27);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_27;
  UnderlyingCashAmount_27.setString("17997686");
set_field(msg, UnderlyingCashAmount_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_27);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_27;
  UnderlyingContractMultiplier_27.setString("8971042");
set_field(msg, UnderlyingContractMultiplier_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{1339249884}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_715300139"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_598662302"}, UnderlyingInstrument_27);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_27;
  UnderlyingCouponRate_27.setString("29.090000");
set_field(msg, UnderlyingCouponRate_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_998844916"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_27);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_27;
  UnderlyingCurrentValue_27.setString("6952076");
set_field(msg, UnderlyingCurrentValue_27, UnderlyingInstrument_27);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_27;
  UnderlyingDetachmentPoint_27.setString("19.100000");
set_field(msg, UnderlyingDetachmentPoint_27, UnderlyingInstrument_27);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_27;
  UnderlyingDirtyPrice_27.setString("18697100");
set_field(msg, UnderlyingDirtyPrice_27, UnderlyingInstrument_27);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_27;
  UnderlyingEndPrice_27.setString("19999715");
set_field(msg, UnderlyingEndPrice_27, UnderlyingInstrument_27);
  FIX::UnderlyingEndValue UnderlyingEndValue_27;
  UnderlyingEndValue_27.setString("18807068");
set_field(msg, UnderlyingEndValue_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingExerciseStyle{1521165751}, UnderlyingInstrument_27);
  FIX::UnderlyingFXRate UnderlyingFXRate_27;
  UnderlyingFXRate_27.setString("17111300");
set_field(msg, UnderlyingFXRate_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_27);
  FIX::UnderlyingFactor UnderlyingFactor_27;
  UnderlyingFactor_27.setString("1435661");
set_field(msg, UnderlyingFactor_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingFlowScheduleType{1237939450}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_1622680182"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_209835553"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_329404496"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_1744320071"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_737956933"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_22904138"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2023004171"}, UnderlyingInstrument_27);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_27;
  UnderlyingNotionalPercentageOutstanding_27.setString("33.580000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_27);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_27;
  UnderlyingOriginalNotionalPercentageOutstanding_27.setString("39.000000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1406545323"}, UnderlyingInstrument_27);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_27;
  UnderlyingPriceUnitOfMeasureQty_27.setString("19166418");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingProduct{1836245121}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingPutOrCall{156165948}, UnderlyingInstrument_27);
  FIX::UnderlyingPx UnderlyingPx_27;
  UnderlyingPx_27.setString("11084080");
set_field(msg, UnderlyingPx_27, UnderlyingInstrument_27);
  FIX::UnderlyingQty UnderlyingQty_27;
  UnderlyingQty_27.setString("4040616");
set_field(msg, UnderlyingQty_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_754828250"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_379257344"}, UnderlyingInstrument_27);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_27;
  UnderlyingRepurchaseRate_27.setString("65.290000");
set_field(msg, UnderlyingRepurchaseRate_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{500200066}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_730869778"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_2098114177"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_2015661977"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_453096161"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_1950602037"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_1748885182"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_1974261912"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_1514248456"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_1571708399"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_27);
  FIX::UnderlyingStartValue UnderlyingStartValue_27;
  UnderlyingStartValue_27.setString("6047042");
set_field(msg, UnderlyingStartValue_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1046904933"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_27);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_27;
  UnderlyingStrikePrice_27.setString("6437413");
set_field(msg, UnderlyingStrikePrice_27, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_918136852"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_957012894"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_519261879"}, UnderlyingInstrument_27);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_926040210"}, UnderlyingInstrument_27);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_27;
  UnderlyingUnitOfMeasureQty_27.setString("10738861");
set_field(msg, UnderlyingUnitOfMeasureQty_27, UnderlyingInstrument_27);
  all_values.push_back(UnderlyingInstrument_27);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_52;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_185101885"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_52);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_843044319"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_52);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_52);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_53;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_1395797253"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_53);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_341267833"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_53);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_53);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_49;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_1799858866"}, UnderlyingStipulations_NoUnderlyingStips_49);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_1096096083"}, UnderlyingStipulations_NoUnderlyingStips_49);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_49);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_55;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_1055281747"}, UndlyInstrumentParties_NoUndlyInstrumentParties_55);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_55);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{914095877}, UndlyInstrumentParties_NoUndlyInstrumentParties_55);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_55);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1464474478"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{1367192038}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_56;
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyID{"STRING_809030665"}, UndlyInstrumentParties_NoUndlyInstrumentParties_56);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_56);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyRole{1193970302}, UndlyInstrumentParties_NoUndlyInstrumentParties_56);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_56);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108;
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_490100763"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108);
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubIDType{1164314668}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109;
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_780499733"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109);
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubIDType{1537005697}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  // header
  multiset<string> header_26;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_26);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1714608488"}, header_26);
  set_header_field(msg.getHeader(), FIX::BodyLength{33263405}, header_26);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_115147791"}, header_26);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_524137734"}, header_26);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_552525285"}, header_26);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1041188001"}, header_26);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1598023855}, header_26);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_26);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1226289886}, header_26);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_293584526"}, header_26);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1507874669"}, header_26);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1567557719"}, header_26);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(7, 54, 20, 6, 8, 2013)}, header_26);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_26);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_26);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_414583647"}, header_26);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1882990928}, header_26);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_347849498"}, header_26);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1608553949"}, header_26);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_2058786402"}, header_26);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(1, 27, 11, 8, 4, 2010)}, header_26);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_2085027347"}, header_26);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_783065062"}, header_26);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_813261001"}, header_26);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_978731700"}, header_26);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{233605269}, header_26);
  all_values.push_back(header_26);
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
