#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::DerivativeSecurityList msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityList_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_306864109"}, DerivativeSecurityList_0);
  set_field(msg, FIX::LastFragment{true}, DerivativeSecurityList_0);
  set_field(msg, FIX::SecurityReportID{524253633}, DerivativeSecurityList_0);
  set_field(msg, FIX::SecurityReqID{"STRING_1358951778"}, DerivativeSecurityList_0);
  set_field(msg, FIX::SecurityRequestResult{3}, DerivativeSecurityList_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_1705915125"}, DerivativeSecurityList_0);
  set_field(msg, FIX::TotNoRelatedSym{189555309}, DerivativeSecurityList_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(13, 27, 13, 13, 5, 2001)}, DerivativeSecurityList_0);
  all_values.push_back(DerivativeSecurityList_0);

  all_compo_names.insert("DerivativeSecurityList");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_2;
  set_field(msg, FIX::ApplID{"STRING_1030631051"}, ApplicationSequenceControl_2);
  set_field(msg, FIX::ApplLastSeqNum{1859942047}, ApplicationSequenceControl_2);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_2);
  set_field(msg, FIX::ApplSeqNum{1430109843}, ApplicationSequenceControl_2);
  all_values.push_back(ApplicationSequenceControl_2);
  all_compo_names.insert(".");

  // DerivativeSecurityDefinition
  // DerivativeInstrument
  multiset<string> DerivativeInstrument_0;
  set_field(msg, FIX::DerivFlexProductEligibilityIndicator{false}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeCFICode{"STRING_1166437180"}, DerivativeInstrument_0);
  FIX::DerivativeCapPrice DerivativeCapPrice_0;
  DerivativeCapPrice_0.setString("16832697");
set_field(msg, DerivativeCapPrice_0, DerivativeInstrument_0);
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_0;
  DerivativeContractMultiplier_0.setString("989802");
set_field(msg, DerivativeContractMultiplier_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeContractMultiplierUnit{1820950228}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeContractSettlMonth{"MONTHYEAR_79649385"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeCountryOfIssue{"COUNTRY_143929694"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeEncodedIssuer{"DATA_1287918018"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeEncodedIssuerLen{1867743535}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeEncodedSecurityDesc{"DATA_618558696"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeEncodedSecurityDescLen{2061326488}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeExerciseStyle{'1'}, DerivativeInstrument_0);
  FIX::DerivativeFloorPrice DerivativeFloorPrice_0;
  DerivativeFloorPrice_0.setString("8244733");
set_field(msg, DerivativeFloorPrice_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeFlowScheduleType{220706949}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeInstrRegistry{"STRING_84225847"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeInstrmtAssignmentMethod{'1'}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeIssueDate{"LOCALMKTDATE_1579658727"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeIssuer{"STRING_452084320"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeListMethod{907158435}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeLocaleOfIssue{"STRING_1769214037"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeMaturityDate{"LOCALMKTDATE_1370777535"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeMaturityMonthYear{"MONTHYEAR_1132637368"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeMaturityTime{"TZTIMEONLY_1518216176"}, DerivativeInstrument_0);
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_0;
  DerivativeMinPriceIncrement_0.setString("13693973");
set_field(msg, DerivativeMinPriceIncrement_0, DerivativeInstrument_0);
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_0;
  DerivativeMinPriceIncrementAmount_0.setString("21138440");
set_field(msg, DerivativeMinPriceIncrementAmount_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeNTPositionLimit{183492652}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeOptAttribute{'9'}, DerivativeInstrument_0);
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_0;
  DerivativeOptPayAmount_0.setString("9969914");
set_field(msg, DerivativeOptPayAmount_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativePositionLimit{2043434699}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativePriceQuoteMethod{"STRING_960921252"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativePriceUnitOfMeasure{"STRING_279617640"}, DerivativeInstrument_0);
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_0;
  DerivativePriceUnitOfMeasureQty_0.setString("15101568");
set_field(msg, DerivativePriceUnitOfMeasureQty_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeProduct{2127358432}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeProductComplex{"STRING_1962887351"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativePutOrCall{1609137080}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityDesc{"STRING_1800825012"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityExchange{"EXCHANGE_2042536736"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityGroup{"STRING_1753066774"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityID{"STRING_941259382"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityIDSource{"STRING_1762796624"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityStatus{"STRING_224141823"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecuritySubType{"STRING_855102222"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSecurityType{"STRING_999379277"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSettlMethod{'1'}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSettleOnOpenFlag{"STRING_1075809171"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeStateOrProvinceOfIssue{"STRING_1083605124"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeStrikeCurrency{"CAN"}, DerivativeInstrument_0);
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_0;
  DerivativeStrikeMultiplier_0.setString("15356894");
set_field(msg, DerivativeStrikeMultiplier_0, DerivativeInstrument_0);
  FIX::DerivativeStrikePrice DerivativeStrikePrice_0;
  DerivativeStrikePrice_0.setString("11570168");
set_field(msg, DerivativeStrikePrice_0, DerivativeInstrument_0);
  FIX::DerivativeStrikeValue DerivativeStrikeValue_0;
  DerivativeStrikeValue_0.setString("1297146");
set_field(msg, DerivativeStrikeValue_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSymbol{"STRING_758983332"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeSymbolSfx{"STRING_142170614"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeTimeUnit{"STRING_1647930816"}, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeUnitOfMeasure{"STRING_2128380692"}, DerivativeInstrument_0);
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_0;
  DerivativeUnitOfMeasureQty_0.setString("1085310");
set_field(msg, DerivativeUnitOfMeasureQty_0, DerivativeInstrument_0);
  set_field(msg, FIX::DerivativeValuationMethod{"STRING_1831423468"}, DerivativeInstrument_0);
  all_values.push_back(DerivativeInstrument_0);
  all_compo_names.insert("..");

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_0;
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventDate{"LOCALMKTDATE_1105522453"}, DerivativeEventsGrp_NoDerivativeEvents_0);
    FIX::DerivativeEventPx DerivativeEventPx_0;
    DerivativeEventPx_0.setString("17273745");
set_field(noDerivativeEvents_0_0, DerivativeEventPx_0, DerivativeEventsGrp_NoDerivativeEvents_0);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventText{"STRING_1032380995"}, DerivativeEventsGrp_NoDerivativeEvents_0);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(1, 39, 16, 17, 9, 2010)}, DerivativeEventsGrp_NoDerivativeEvents_0);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventType{157284279}, DerivativeEventsGrp_NoDerivativeEvents_0);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_0);
    all_compo_names.insert(".....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_1;
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventDate{"LOCALMKTDATE_1606856526"}, DerivativeEventsGrp_NoDerivativeEvents_1);
    FIX::DerivativeEventPx DerivativeEventPx_1;
    DerivativeEventPx_1.setString("7109098");
set_field(noDerivativeEvents_0_1, DerivativeEventPx_1, DerivativeEventsGrp_NoDerivativeEvents_1);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventText{"STRING_381426102"}, DerivativeEventsGrp_NoDerivativeEvents_1);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(9, 50, 32, 10, 5, 2007)}, DerivativeEventsGrp_NoDerivativeEvents_1);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventType{34616411}, DerivativeEventsGrp_NoDerivativeEvents_1);
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
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyID{"STRING_2027983163"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyIDSource{"STRING_793599743"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyRole{831603568}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_0);
    all_compo_names.insert(".....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0;
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_774496787"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0);
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubIDType{940134576}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_0);
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
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyID{"STRING_1212370151"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyIDSource{"STRING_845956530"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyRole{2045657029}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_1);
    all_compo_names.insert(".....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_1878337526"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_0, FIX::DerivativeInstrumentPartySubIDType{1283313474}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_1);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_1, FIX::DerivativeInstrumentPartySubID{"STRING_1882308743"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_1, FIX::DerivativeInstrumentPartySubIDType{743109657}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_2);
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
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyID{"STRING_336373622"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyIDSource{"STRING_286526248"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyRole{1408706801}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_2);
    all_compo_names.insert(".....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3;
      set_field(noDerivativeInstrumentPartySubIDs_2_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_443810528"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3);
      set_field(noDerivativeInstrumentPartySubIDs_2_1_0, FIX::DerivativeInstrumentPartySubIDType{868079680}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_3);
      all_compo_names.insert(".....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_2);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0;
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltID{"STRING_825236630"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0);
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltIDSource{"STRING_1182554781"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_0);
    all_compo_names.insert(".....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_1;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1;
    set_field(noDerivativeSecurityAltID_0_1, FIX::DerivativeSecurityAltID{"STRING_1705685856"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1);
    set_field(noDerivativeSecurityAltID_0_1, FIX::DerivativeSecurityAltIDSource{"STRING_107794233"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1);
    all_compo_names.insert(".....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_2;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2;
    set_field(noDerivativeSecurityAltID_0_2, FIX::DerivativeSecurityAltID{"STRING_425355405"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2);
    set_field(noDerivativeSecurityAltID_0_2, FIX::DerivativeSecurityAltIDSource{"STRING_204612822"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_2);
    all_compo_names.insert(".....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_2);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_0;
  set_field(msg, FIX::DerivativeSecurityXML{"DATA_1787693941"}, DerivativeSecurityXML_0);
  set_field(msg, FIX::DerivativeSecurityXMLLen{176140281}, DerivativeSecurityXML_0);
  set_field(msg, FIX::DerivativeSecurityXMLSchema{"STRING_239229233"}, DerivativeSecurityXML_0);
  all_values.push_back(DerivativeSecurityXML_0);
  all_compo_names.insert("...");

  // DerivativeInstrumentAttribute
  // Group DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_0;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0;
    set_field(noDerivativeInstrAttrib_0_0, FIX::DerivativeInstrAttribType{56639796}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0);
    set_field(noDerivativeInstrAttrib_0_0, FIX::DerivativeInstrAttribValue{"STRING_1032828976"}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0);
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_0);
    all_compo_names.insert("....NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoDerivativeInstrAttrib noDerivativeInstrAttrib_0_1;
    // DerivativeInstrumentAttribute.NoDerivativeInstrAttrib
    multiset<string> DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1;
    set_field(noDerivativeInstrAttrib_0_1, FIX::DerivativeInstrAttribType{1161246815}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1);
    set_field(noDerivativeInstrAttrib_0_1, FIX::DerivativeInstrAttribValue{"STRING_1585070128"}, DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1);
    all_values.push_back(DerivativeInstrumentAttribute_NoDerivativeInstrAttrib_1);
    all_compo_names.insert("....NoDerivativeInstrAttrib");

    msg.addGroup(noDerivativeInstrAttrib_0_1);
  }
  // MarketSegmentGrp
  // Group MarketSegmentGrp.NoMarketSegments
  {
    FIX50SP2::DerivativeSecurityList::NoMarketSegments noMarketSegments_0_0;
    // MarketSegmentGrp.NoMarketSegments
    multiset<string> MarketSegmentGrp_NoMarketSegments_0;
    set_field(noMarketSegments_0_0, FIX::MarketID{"EXCHANGE_2101381391"}, MarketSegmentGrp_NoMarketSegments_0);
    set_field(noMarketSegments_0_0, FIX::MarketSegmentID{"STRING_649956631"}, MarketSegmentGrp_NoMarketSegments_0);
    all_values.push_back(MarketSegmentGrp_NoMarketSegments_0);
    all_compo_names.insert("....NoMarketSegments");

    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_0;
    set_field(noMarketSegments_0_0, FIX::ExpirationCycle{2}, BaseTradingRules_0);
    set_field(noMarketSegments_0_0, FIX::ImpliedMarketIndicator{0}, BaseTradingRules_0);
    FIX::MaxPriceVariation MaxPriceVariation_0;
    MaxPriceVariation_0.setString("14422176");
set_field(noMarketSegments_0_0, MaxPriceVariation_0, BaseTradingRules_0);
    FIX::MaxTradeVol MaxTradeVol_0;
    MaxTradeVol_0.setString("2366525");
set_field(noMarketSegments_0_0, MaxTradeVol_0, BaseTradingRules_0);
    FIX::MinTradeVol MinTradeVol_0;
    MinTradeVol_0.setString("11353845");
set_field(noMarketSegments_0_0, MinTradeVol_0, BaseTradingRules_0);
    set_field(noMarketSegments_0_0, FIX::MultilegModel{0}, BaseTradingRules_0);
    set_field(noMarketSegments_0_0, FIX::MultilegPriceMethod{5}, BaseTradingRules_0);
    set_field(noMarketSegments_0_0, FIX::PriceType{11}, BaseTradingRules_0);
    FIX::RoundLot RoundLot_0;
    RoundLot_0.setString("14635689");
set_field(noMarketSegments_0_0, RoundLot_0, BaseTradingRules_0);
    set_field(noMarketSegments_0_0, FIX::TradingCurrency{"CHF"}, BaseTradingRules_0);
    all_values.push_back(BaseTradingRules_0);
    all_compo_names.insert("....NoMarketSegments..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_0;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_0);
      FIX::MinLotSize MinLotSize_0;
      MinLotSize_0.setString("7516417");
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
      MinLotSize_1.setString("1441361");
set_field(noLotTypeRules_0_1_1, MinLotSize_1, LotTypeRules_NoLotTypeRules_1);
      all_values.push_back(LotTypeRules_NoLotTypeRules_1);
      all_compo_names.insert("....NoMarketSegments.....NoLotTypeRules");

      noMarketSegments_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_0;
    FIX::HighLimitPrice HighLimitPrice_0;
    HighLimitPrice_0.setString("3098440");
set_field(noMarketSegments_0_0, HighLimitPrice_0, PriceLimits_0);
    FIX::LowLimitPrice LowLimitPrice_0;
    LowLimitPrice_0.setString("6929267");
set_field(noMarketSegments_0_0, LowLimitPrice_0, PriceLimits_0);
    set_field(noMarketSegments_0_0, FIX::PriceLimitType{2}, PriceLimits_0);
    FIX::TradingReferencePrice TradingReferencePrice_0;
    TradingReferencePrice_0.setString("5144568");
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
      EndTickPriceRange_0.setString("7456318");
set_field(noTickRules_0_1_0, EndTickPriceRange_0, TickRules_NoTickRules_0);
      FIX::StartTickPriceRange StartTickPriceRange_0;
      StartTickPriceRange_0.setString("7536860");
set_field(noTickRules_0_1_0, StartTickPriceRange_0, TickRules_NoTickRules_0);
      FIX::TickIncrement TickIncrement_0;
      TickIncrement_0.setString("6627802");
set_field(noTickRules_0_1_0, TickIncrement_0, TickRules_NoTickRules_0);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{1}, TickRules_NoTickRules_0);
      all_values.push_back(TickRules_NoTickRules_0);
      all_compo_names.insert("....NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_1;
      FIX::EndTickPriceRange EndTickPriceRange_1;
      EndTickPriceRange_1.setString("17865150");
set_field(noTickRules_0_1_1, EndTickPriceRange_1, TickRules_NoTickRules_1);
      FIX::StartTickPriceRange StartTickPriceRange_1;
      StartTickPriceRange_1.setString("18240270");
set_field(noTickRules_0_1_1, StartTickPriceRange_1, TickRules_NoTickRules_1);
      FIX::TickIncrement TickIncrement_1;
      TickIncrement_1.setString("2398581");
set_field(noTickRules_0_1_1, TickIncrement_1, TickRules_NoTickRules_1);
      set_field(noTickRules_0_1_1, FIX::TickRuleType{4}, TickRules_NoTickRules_1);
      all_values.push_back(TickRules_NoTickRules_1);
      all_compo_names.insert("....NoMarketSegments.....NoTickRules");

      noMarketSegments_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_0;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{889814742}, NestedInstrumentAttribute_NoNestedInstrAttrib_0);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_1952155800"}, NestedInstrumentAttribute_NoNestedInstrAttrib_0);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_0);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_1;
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribType{1629995966}, NestedInstrumentAttribute_NoNestedInstrAttrib_1);
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribValue{"STRING_184548748"}, NestedInstrumentAttribute_NoNestedInstrAttrib_1);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_1);
      all_compo_names.insert("....NoMarketSegments....NoNestedInstrAttrib");

      noMarketSegments_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_2;
      set_field(noNestedInstrAttrib_0_1_2, FIX::NestedInstrAttribType{41324676}, NestedInstrumentAttribute_NoNestedInstrAttrib_2);
      set_field(noNestedInstrAttrib_0_1_2, FIX::NestedInstrAttribValue{"STRING_617896916"}, NestedInstrumentAttribute_NoNestedInstrAttrib_2);
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
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_1"}, TradingSessionRulesGrp_NoTradingSessionRules_0);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_0);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_0);
      all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_0;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_0);
        all_values.push_back(ExecInstRules_NoExecInstRules_0);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_1;
        set_field(noExecInstRules_0_0_2_1, FIX::ExecInstValue{'6'}, ExecInstRules_NoExecInstRules_1);
        all_values.push_back(ExecInstRules_NoExecInstRules_1);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_2;
        set_field(noExecInstRules_0_0_2_2, FIX::ExecInstValue{'4'}, ExecInstRules_NoExecInstRules_2);
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
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_0);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_1022705234"}, MarketDataFeedTypes_NoMDFeedTypes_0);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{367789708}, MarketDataFeedTypes_NoMDFeedTypes_0);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_0);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_1;
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_1);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDFeedType{"STRING_1715631976"}, MarketDataFeedTypes_NoMDFeedTypes_1);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MarketDepth{937281261}, MarketDataFeedTypes_NoMDFeedTypes_1);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_1);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_2;
        set_field(noMDFeedTypes_0_0_2_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_2);
        set_field(noMDFeedTypes_0_0_2_2, FIX::MDFeedType{"STRING_2048769011"}, MarketDataFeedTypes_NoMDFeedTypes_2);
        set_field(noMDFeedTypes_0_0_2_2, FIX::MarketDepth{1682913096}, MarketDataFeedTypes_NoMDFeedTypes_2);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_2);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_0;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_564065645"}, MatchRules_NoMatchRules_0);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_2"}, MatchRules_NoMatchRules_0);
        all_values.push_back(MatchRules_NoMatchRules_0);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_1;
        set_field(noMatchRules_0_0_2_1, FIX::MatchAlgorithm{"STRING_519593007"}, MatchRules_NoMatchRules_1);
        set_field(noMatchRules_0_0_2_1, FIX::MatchType{"STRING_MT"}, MatchRules_NoMatchRules_1);
        all_values.push_back(MatchRules_NoMatchRules_1);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_2;
        set_field(noMatchRules_0_0_2_2, FIX::MatchAlgorithm{"STRING_577559190"}, MatchRules_NoMatchRules_2);
        set_field(noMatchRules_0_0_2_2, FIX::MatchType{"STRING_S2"}, MatchRules_NoMatchRules_2);
        all_values.push_back(MatchRules_NoMatchRules_2);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_0;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'D'}, OrdTypeRules_NoOrdTypeRules_0);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_0);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_1;
        set_field(noOrdTypeRules_0_0_2_1, FIX::OrdType{'J'}, OrdTypeRules_NoOrdTypeRules_1);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_1);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_2;
        set_field(noOrdTypeRules_0_0_2_2, FIX::OrdType{'Q'}, OrdTypeRules_NoOrdTypeRules_2);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_2);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_0;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'0'}, TimeInForceRules_NoTimeInForceRules_0);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_0);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_1;
        set_field(noTimeInForceRules_0_0_2_1, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_1);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_1);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_2;
        set_field(noTimeInForceRules_0_0_2_2, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_2);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_2);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_1;
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_1);
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionSubID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_1);
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
        set_field(noExecInstRules_0_1_2_1, FIX::ExecInstValue{'6'}, ExecInstRules_NoExecInstRules_4);
        all_values.push_back(ExecInstRules_NoExecInstRules_4);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_3;
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_3);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDFeedType{"STRING_2062105946"}, MarketDataFeedTypes_NoMDFeedTypes_3);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MarketDepth{856501691}, MarketDataFeedTypes_NoMDFeedTypes_3);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_3);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_4;
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_4);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDFeedType{"STRING_1674524671"}, MarketDataFeedTypes_NoMDFeedTypes_4);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MarketDepth{424650019}, MarketDataFeedTypes_NoMDFeedTypes_4);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_4);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_5;
        set_field(noMDFeedTypes_0_1_2_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_5);
        set_field(noMDFeedTypes_0_1_2_2, FIX::MDFeedType{"STRING_1801400224"}, MarketDataFeedTypes_NoMDFeedTypes_5);
        set_field(noMDFeedTypes_0_1_2_2, FIX::MarketDepth{325935382}, MarketDataFeedTypes_NoMDFeedTypes_5);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_5);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_3;
        set_field(noMatchRules_0_1_2_0, FIX::MatchAlgorithm{"STRING_534478192"}, MatchRules_NoMatchRules_3);
        set_field(noMatchRules_0_1_2_0, FIX::MatchType{"STRING_S3"}, MatchRules_NoMatchRules_3);
        all_values.push_back(MatchRules_NoMatchRules_3);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_4;
        set_field(noMatchRules_0_1_2_1, FIX::MatchAlgorithm{"STRING_1201993802"}, MatchRules_NoMatchRules_4);
        set_field(noMatchRules_0_1_2_1, FIX::MatchType{"STRING_MT"}, MatchRules_NoMatchRules_4);
        all_values.push_back(MatchRules_NoMatchRules_4);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_3;
        set_field(noOrdTypeRules_0_1_2_0, FIX::OrdType{'9'}, OrdTypeRules_NoOrdTypeRules_3);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_3);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_3;
        set_field(noTimeInForceRules_0_1_2_0, FIX::TimeInForce{'2'}, TimeInForceRules_NoTimeInForceRules_3);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_3);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_4;
        set_field(noTimeInForceRules_0_1_2_1, FIX::TimeInForce{'6'}, TimeInForceRules_NoTimeInForceRules_4);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_4);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      noMarketSegments_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_2;
      set_field(noTradingSessionRules_0_1_2, FIX::TradingSessionID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_2);
      set_field(noTradingSessionRules_0_1_2, FIX::TradingSessionSubID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_2);
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
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_6;
        set_field(noMDFeedTypes_0_2_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_6);
        set_field(noMDFeedTypes_0_2_2_0, FIX::MDFeedType{"STRING_845689922"}, MarketDataFeedTypes_NoMDFeedTypes_6);
        set_field(noMDFeedTypes_0_2_2_0, FIX::MarketDepth{240313555}, MarketDataFeedTypes_NoMDFeedTypes_6);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_6);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_5;
        set_field(noMatchRules_0_2_2_0, FIX::MatchAlgorithm{"STRING_645828667"}, MatchRules_NoMatchRules_5);
        set_field(noMatchRules_0_2_2_0, FIX::MatchType{"STRING_A5"}, MatchRules_NoMatchRules_5);
        all_values.push_back(MatchRules_NoMatchRules_5);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_6;
        set_field(noMatchRules_0_2_2_1, FIX::MatchAlgorithm{"STRING_699933028"}, MatchRules_NoMatchRules_6);
        set_field(noMatchRules_0_2_2_1, FIX::MatchType{"STRING_S4"}, MatchRules_NoMatchRules_6);
        all_values.push_back(MatchRules_NoMatchRules_6);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_4;
        set_field(noOrdTypeRules_0_2_2_0, FIX::OrdType{'H'}, OrdTypeRules_NoOrdTypeRules_4);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_4);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_5;
        set_field(noOrdTypeRules_0_2_2_1, FIX::OrdType{'3'}, OrdTypeRules_NoOrdTypeRules_5);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_5);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_6;
        set_field(noOrdTypeRules_0_2_2_2, FIX::OrdType{'2'}, OrdTypeRules_NoOrdTypeRules_6);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_6);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_5;
        set_field(noTimeInForceRules_0_2_2_0, FIX::TimeInForce{'3'}, TimeInForceRules_NoTimeInForceRules_5);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_5);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_6;
        set_field(noTimeInForceRules_0_2_2_1, FIX::TimeInForce{'2'}, TimeInForceRules_NoTimeInForceRules_6);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_6);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_7;
        set_field(noTimeInForceRules_0_2_2_2, FIX::TimeInForce{'4'}, TimeInForceRules_NoTimeInForceRules_7);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_7);
        all_compo_names.insert("....NoMarketSegments....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_2);
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
      EndStrikePxRange_0.setString("4824192");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_0, StrikeRules_NoStrikeRules_0);
      FIX::StartStrikePxRange StartStrikePxRange_0;
      StartStrikePxRange_0.setString("10495375");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_0, StrikeRules_NoStrikeRules_0);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{161385490}, StrikeRules_NoStrikeRules_0);
      FIX::StrikeIncrement StrikeIncrement_0;
      StrikeIncrement_0.setString("15364904");
set_field(noStrikeRules_0_1_0, StrikeIncrement_0, StrikeRules_NoStrikeRules_0);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_32663977"}, StrikeRules_NoStrikeRules_0);
      all_values.push_back(StrikeRules_NoStrikeRules_0);
      all_compo_names.insert("....NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_0;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_261544491"}, MaturityRules_NoMaturityRules_0);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_0);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{892898111}, MaturityRules_NoMaturityRules_0);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_0);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_1389547409"}, MaturityRules_NoMaturityRules_0);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1496780420"}, MaturityRules_NoMaturityRules_0);
        all_values.push_back(MaturityRules_NoMaturityRules_0);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_1;
      FIX::EndStrikePxRange EndStrikePxRange_1;
      EndStrikePxRange_1.setString("9173605");
set_field(noStrikeRules_0_1_1, EndStrikePxRange_1, StrikeRules_NoStrikeRules_1);
      FIX::StartStrikePxRange StartStrikePxRange_1;
      StartStrikePxRange_1.setString("17162299");
set_field(noStrikeRules_0_1_1, StartStrikePxRange_1, StrikeRules_NoStrikeRules_1);
      set_field(noStrikeRules_0_1_1, FIX::StrikeExerciseStyle{819209613}, StrikeRules_NoStrikeRules_1);
      FIX::StrikeIncrement StrikeIncrement_1;
      StrikeIncrement_1.setString("17630505");
set_field(noStrikeRules_0_1_1, StrikeIncrement_1, StrikeRules_NoStrikeRules_1);
      set_field(noStrikeRules_0_1_1, FIX::StrikeRuleID{"STRING_1956543508"}, StrikeRules_NoStrikeRules_1);
      all_values.push_back(StrikeRules_NoStrikeRules_1);
      all_compo_names.insert("....NoMarketSegments...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_1;
        set_field(noMaturityRules_0_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_261395533"}, MaturityRules_NoMaturityRules_1);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_1);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrement{237795565}, MaturityRules_NoMaturityRules_1);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_1);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityRuleID{"STRING_1428404430"}, MaturityRules_NoMaturityRules_1);
        set_field(noMaturityRules_0_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1794230285"}, MaturityRules_NoMaturityRules_1);
        all_values.push_back(MaturityRules_NoMaturityRules_1);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoMarketSegments::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_2;
        set_field(noMaturityRules_0_1_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1992219492"}, MaturityRules_NoMaturityRules_2);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_2);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityMonthYearIncrement{1627831376}, MaturityRules_NoMaturityRules_2);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_2);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityRuleID{"STRING_1670369922"}, MaturityRules_NoMaturityRules_2);
        set_field(noMaturityRules_0_1_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1787367850"}, MaturityRules_NoMaturityRules_2);
        all_values.push_back(MaturityRules_NoMaturityRules_2);
        all_compo_names.insert("....NoMarketSegments...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      noMarketSegments_0_0.addGroup(noStrikeRules_0_1_1);
    }
    msg.addGroup(noMarketSegments_0_0);
  }
  // RelSymDerivSecGrp
  // Group RelSymDerivSecGrp.NoRelatedSym
  {
    FIX50SP2::DerivativeSecurityList::NoRelatedSym noRelatedSym_0_0;
    // RelSymDerivSecGrp.NoRelatedSym
    multiset<string> RelSymDerivSecGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::CorporateAction{"MULTIPLECHARVALUE_V"}, RelSymDerivSecGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Currency{"CAN"}, RelSymDerivSecGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedText{"DATA_1541795926"}, RelSymDerivSecGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedTextLen{722085682}, RelSymDerivSecGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(1, 12, 50, 23, 10, 2003)}, RelSymDerivSecGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Text{"STRING_1330438231"}, RelSymDerivSecGrp_NoRelatedSym_0);
    all_values.push_back(RelSymDerivSecGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_26;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_62954968"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{946005096}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_376279998"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{1748301152}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_1207400629"}, InstrumentLeg_26);
      FIX::LegContractMultiplier LegContractMultiplier_26;
      LegContractMultiplier_26.setString("10377009");
set_field(noLegs_0_1_0, LegContractMultiplier_26, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{1986096717}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_2138417135"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_318621776"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1632843354"}, InstrumentLeg_26);
      FIX::LegCouponRate LegCouponRate_26;
      LegCouponRate_26.setString("29.800000");
set_field(noLegs_0_1_0, LegCouponRate_26, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_2041050664"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"USD"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1563936938"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{753075285}, InstrumentLeg_26);
      FIX::LegFactor LegFactor_26;
      LegFactor_26.setString("11171815");
set_field(noLegs_0_1_0, LegFactor_26, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{1569242439}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_1442496990"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_325277221"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_963554717"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_17099024"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_1474311341"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_619411487"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1773509096"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1368759923"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_26);
      FIX::LegOptionRatio LegOptionRatio_26;
      LegOptionRatio_26.setString("6244992");
set_field(noLegs_0_1_0, LegOptionRatio_26, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_612505278"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_215443709"}, InstrumentLeg_26);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_26;
      LegPriceUnitOfMeasureQty_26.setString("11917194");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_26, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegProduct{675460246}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{1161448806}, InstrumentLeg_26);
      FIX::LegRatioQty LegRatioQty_26;
      LegRatioQty_26.setString("15679994");
set_field(noLegs_0_1_0, LegRatioQty_26, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_276277751"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_221365787"}, InstrumentLeg_26);
      FIX::LegRepurchaseRate LegRepurchaseRate_26;
      LegRepurchaseRate_26.setString("67.630000");
set_field(noLegs_0_1_0, LegRepurchaseRate_26, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{114890820}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_212299275"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_776838540"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_1747734175"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_47968607"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_670405556"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_713441610"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegSide{'2'}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_86858847"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_26);
      FIX::LegStrikePrice LegStrikePrice_26;
      LegStrikePrice_26.setString("16561012");
set_field(noLegs_0_1_0, LegStrikePrice_26, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_761530237"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_1413415203"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_472172355"}, InstrumentLeg_26);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_778629261"}, InstrumentLeg_26);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_26;
      LegUnitOfMeasureQty_26.setString("7402428");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_26, InstrumentLeg_26);
      all_values.push_back(InstrumentLeg_26);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_51;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_404654709"}, LegSecAltIDGrp_NoLegSecurityAltID_51);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_2109002819"}, LegSecAltIDGrp_NoLegSecurityAltID_51);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_51);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_52;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_2124072969"}, LegSecAltIDGrp_NoLegSecurityAltID_52);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_1029153991"}, LegSecAltIDGrp_NoLegSecurityAltID_52);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_52);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_53;
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltID{"STRING_574024450"}, LegSecAltIDGrp_NoLegSecurityAltID_53);
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltIDSource{"STRING_192033030"}, LegSecAltIDGrp_NoLegSecurityAltID_53);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_53);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_27;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_73389762"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{1249484696}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_1353481836"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{1641389180}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_1525762447"}, InstrumentLeg_27);
      FIX::LegContractMultiplier LegContractMultiplier_27;
      LegContractMultiplier_27.setString("15748476");
set_field(noLegs_0_1_1, LegContractMultiplier_27, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{2099605943}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_1640653268"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_1787146899"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_728960835"}, InstrumentLeg_27);
      FIX::LegCouponRate LegCouponRate_27;
      LegCouponRate_27.setString("37.950000");
set_field(noLegs_0_1_1, LegCouponRate_27, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_1835115506"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_1806071903"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{1486225239}, InstrumentLeg_27);
      FIX::LegFactor LegFactor_27;
      LegFactor_27.setString("12733786");
set_field(noLegs_0_1_1, LegFactor_27, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{746726236}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_994842877"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2034908890"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_12657791"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_1467015232"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_666054503"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_752900687"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_411115427"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_1070709213"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'7'}, InstrumentLeg_27);
      FIX::LegOptionRatio LegOptionRatio_27;
      LegOptionRatio_27.setString("3877047");
set_field(noLegs_0_1_1, LegOptionRatio_27, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_2099863204"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_1288444309"}, InstrumentLeg_27);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_27;
      LegPriceUnitOfMeasureQty_27.setString("5797377");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_27, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegProduct{25769318}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{390445357}, InstrumentLeg_27);
      FIX::LegRatioQty LegRatioQty_27;
      LegRatioQty_27.setString("19332196");
set_field(noLegs_0_1_1, LegRatioQty_27, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1667158498"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_1916207805"}, InstrumentLeg_27);
      FIX::LegRepurchaseRate LegRepurchaseRate_27;
      LegRepurchaseRate_27.setString("35.910000");
set_field(noLegs_0_1_1, LegRepurchaseRate_27, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{1619280794}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_1409377425"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_1000246842"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_200757981"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_502797572"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_687878700"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_1600124373"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegSide{'3'}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_346466955"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_27);
      FIX::LegStrikePrice LegStrikePrice_27;
      LegStrikePrice_27.setString("10931931");
set_field(noLegs_0_1_1, LegStrikePrice_27, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_1933708841"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_1470463223"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_1105850983"}, InstrumentLeg_27);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_1253240426"}, InstrumentLeg_27);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_27;
      LegUnitOfMeasureQty_27.setString("21365177");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_27, InstrumentLeg_27);
      all_values.push_back(InstrumentLeg_27);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_54;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_1664355853"}, LegSecAltIDGrp_NoLegSecurityAltID_54);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_1059743292"}, LegSecAltIDGrp_NoLegSecurityAltID_54);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_54);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_18;
    FIX::AttachmentPoint AttachmentPoint_18;
    AttachmentPoint_18.setString("78.810000");
set_field(noRelatedSym_0_0, AttachmentPoint_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_2052060601"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CPProgram{99}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_1714132190"}, Instrument_18);
    FIX::CapPrice CapPrice_18;
    CapPrice_18.setString("4843147");
set_field(noRelatedSym_0_0, CapPrice_18, Instrument_18);
    FIX::ContractMultiplier ContractMultiplier_18;
    ContractMultiplier_18.setString("10378921");
set_field(noRelatedSym_0_0, ContractMultiplier_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{1}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_270050698"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_557567017"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1873301705"}, Instrument_18);
    FIX::CouponRate CouponRate_18;
    CouponRate_18.setString("42.890000");
set_field(noRelatedSym_0_0, CouponRate_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_29364163"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_1135195482"}, Instrument_18);
    FIX::DetachmentPoint DetachmentPoint_18;
    DetachmentPoint_18.setString("74.830000");
set_field(noRelatedSym_0_0, DetachmentPoint_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_230122144"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1637993054}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1171276183"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{1830246518}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{0}, Instrument_18);
    FIX::Factor Factor_18;
    Factor_18.setString("15177431");
set_field(noRelatedSym_0_0, Factor_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{true}, Instrument_18);
    FIX::FloorPrice FloorPrice_18;
    FloorPrice_18.setString("4634526");
set_field(noRelatedSym_0_0, FloorPrice_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{3}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_706186292"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1661094454"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_695220371"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1280571687"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_1754963663"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1706259569"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1082543612"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_619602863"}, Instrument_18);
    FIX::MinPriceIncrement MinPriceIncrement_18;
    MinPriceIncrement_18.setString("12729081");
set_field(noRelatedSym_0_0, MinPriceIncrement_18, Instrument_18);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_18;
    MinPriceIncrementAmount_18.setString("15668583");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{1657495029}, Instrument_18);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_18;
    NotionalPercentageOutstanding_18.setString("20.110000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_18);
    FIX::OptPayoutAmount OptPayoutAmount_18;
    OptPayoutAmount_18.setString("675783");
set_field(noRelatedSym_0_0, OptPayoutAmount_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{2}, Instrument_18);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_18;
    OriginalNotionalPercentageOutstanding_18.setString("96.830000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_96942561"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{2091015550}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_327064706"}, Instrument_18);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_18;
    PriceUnitOfMeasureQty_18.setString("15815249");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::Product{7}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_9827576"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_197509193"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_631456410"}, Instrument_18);
    FIX::RepurchaseRate RepurchaseRate_18;
    RepurchaseRate_18.setString("67.600000");
set_field(noRelatedSym_0_0, RepurchaseRate_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{660961875}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_1323603052"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_82781892"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_552921244"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_2018823423"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_6"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_1626303438"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_AN"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SR"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'P'}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_47553964"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_85322563"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_18);
    FIX::StrikeMultiplier StrikeMultiplier_18;
    StrikeMultiplier_18.setString("19222316");
set_field(noRelatedSym_0_0, StrikeMultiplier_18, Instrument_18);
    FIX::StrikePrice StrikePrice_18;
    StrikePrice_18.setString("18234960");
set_field(noRelatedSym_0_0, StrikePrice_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{2}, Instrument_18);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_18;
    StrikePriceBoundaryPrecision_18.setString("76.400000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_18);
    FIX::StrikeValue StrikeValue_18;
    StrikeValue_18.setString("294242");
set_field(noRelatedSym_0_0, StrikeValue_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_750781159"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Yr"}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_lbs"}, Instrument_18);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_18;
    UnitOfMeasureQty_18.setString("8451592");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_18, Instrument_18);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_18);
    all_values.push_back(Instrument_18);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_41;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_41);
      FIX::ComplexEventPrice ComplexEventPrice_41;
      ComplexEventPrice_41.setString("2890182");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_41, ComplexEvents_NoComplexEvents_41);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_41);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_41;
      ComplexEventPriceBoundaryPrecision_41.setString("54.620000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_41, ComplexEvents_NoComplexEvents_41);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_41);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_41);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_41;
      ComplexOptPayoutAmount_41.setString("5100352");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_41, ComplexEvents_NoComplexEvents_41);
      all_values.push_back(ComplexEvents_NoComplexEvents_41);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_87;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 6, 45, 0, 11, 2016)}, ComplexEventDates_NoComplexEventDates_87);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 45, 56, 9, 10, 2012)}, ComplexEventDates_NoComplexEventDates_87);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_87);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_175;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 47, 19)}, ComplexEventTimes_NoComplexEventTimes_175);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 26, 46)}, ComplexEventTimes_NoComplexEventTimes_175);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_175);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_176;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 52, 50)}, ComplexEventTimes_NoComplexEventTimes_176);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 8, 27)}, ComplexEventTimes_NoComplexEventTimes_176);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_176);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_88;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 33, 8, 0, 12, 2000)}, ComplexEventDates_NoComplexEventDates_88);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 21, 7, 6, 12, 2011)}, ComplexEventDates_NoComplexEventDates_88);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_88);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_177;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 5, 15)}, ComplexEventTimes_NoComplexEventTimes_177);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 33, 6)}, ComplexEventTimes_NoComplexEventTimes_177);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_177);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_178;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 50, 21)}, ComplexEventTimes_NoComplexEventTimes_178);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 29, 54)}, ComplexEventTimes_NoComplexEventTimes_178);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_178);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_179;
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 20, 8)}, ComplexEventTimes_NoComplexEventTimes_179);
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 45, 44)}, ComplexEventTimes_NoComplexEventTimes_179);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_179);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_40;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_731119678"}, EvntGrp_NoEvents_40);
      FIX::EventPx EventPx_40;
      EventPx_40.setString("3568564");
set_field(noEvents_0_1_0, EventPx_40, EvntGrp_NoEvents_40);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1360738375"}, EvntGrp_NoEvents_40);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(12, 13, 53, 9, 8, 2006)}, EvntGrp_NoEvents_40);
      set_field(noEvents_0_1_0, FIX::EventType{18}, EvntGrp_NoEvents_40);
      all_values.push_back(EvntGrp_NoEvents_40);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_41;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_1045940894"}, EvntGrp_NoEvents_41);
      FIX::EventPx EventPx_41;
      EventPx_41.setString("14753423");
set_field(noEvents_0_1_1, EventPx_41, EvntGrp_NoEvents_41);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_939582855"}, EvntGrp_NoEvents_41);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(22, 58, 58, 25, 11, 2016)}, EvntGrp_NoEvents_41);
      set_field(noEvents_0_1_1, FIX::EventType{1}, EvntGrp_NoEvents_41);
      all_values.push_back(EvntGrp_NoEvents_41);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_42;
      set_field(noEvents_0_1_2, FIX::EventDate{"LOCALMKTDATE_906609566"}, EvntGrp_NoEvents_42);
      FIX::EventPx EventPx_42;
      EventPx_42.setString("9921902");
set_field(noEvents_0_1_2, EventPx_42, EvntGrp_NoEvents_42);
      set_field(noEvents_0_1_2, FIX::EventText{"STRING_1723507100"}, EvntGrp_NoEvents_42);
      set_field(noEvents_0_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(22, 7, 12, 10, 9, 2014)}, EvntGrp_NoEvents_42);
      set_field(noEvents_0_1_2, FIX::EventType{18}, EvntGrp_NoEvents_42);
      all_values.push_back(EvntGrp_NoEvents_42);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_35;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1497175800"}, InstrumentParties_NoInstrumentParties_35);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_35);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{642932408}, InstrumentParties_NoInstrumentParties_35);
      all_values.push_back(InstrumentParties_NoInstrumentParties_35);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_974416286"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{532502299}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_35;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_60498755"}, SecAltIDGrp_NoSecurityAltID_35);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1578443193"}, SecAltIDGrp_NoSecurityAltID_35);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_35);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_36;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_439110251"}, SecAltIDGrp_NoSecurityAltID_36);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_1000081611"}, SecAltIDGrp_NoSecurityAltID_36);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_36);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_36;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_1059731350"}, SecurityXML_36);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{2051917978}, SecurityXML_36);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1374661489"}, SecurityXML_36);
    all_values.push_back(SecurityXML_36);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_4;
    set_field(noRelatedSym_0_0, FIX::DeliveryForm{2}, InstrumentExtension_4);
    FIX::PctAtRisk PctAtRisk_4;
    PctAtRisk_4.setString("90.630000");
set_field(noRelatedSym_0_0, PctAtRisk_4, InstrumentExtension_4);
    all_values.push_back(InstrumentExtension_4);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::DerivativeSecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_5;
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribType{99}, AttrbGrp_NoInstrAttrib_5);
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribValue{"STRING_1982122503"}, AttrbGrp_NoInstrAttrib_5);
      all_values.push_back(AttrbGrp_NoInstrAttrib_5);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    // SecondaryPriceLimits
    multiset<string> SecondaryPriceLimits_0;
    FIX::SecondaryHighLimitPrice SecondaryHighLimitPrice_0;
    SecondaryHighLimitPrice_0.setString("20058799");
set_field(noRelatedSym_0_0, SecondaryHighLimitPrice_0, SecondaryPriceLimits_0);
    FIX::SecondaryLowLimitPrice SecondaryLowLimitPrice_0;
    SecondaryLowLimitPrice_0.setString("13861636");
set_field(noRelatedSym_0_0, SecondaryLowLimitPrice_0, SecondaryPriceLimits_0);
    set_field(noRelatedSym_0_0, FIX::SecondaryPriceLimitType{1558145955}, SecondaryPriceLimits_0);
    FIX::SecondaryTradingReferencePrice SecondaryTradingReferencePrice_0;
    SecondaryTradingReferencePrice_0.setString("20668983");
set_field(noRelatedSym_0_0, SecondaryTradingReferencePrice_0, SecondaryPriceLimits_0);
    all_values.push_back(SecondaryPriceLimits_0);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_33;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_521932424"}, UnderlyingInstrument_33);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{463604295}, UnderlyingInstrument_33);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_1922943853"}, UnderlyingInstrument_33);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{295798398}, UnderlyingInstrument_33);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_33;
  UnderlyingAdjustedQuantity_33.setString("9012319");
set_field(msg, UnderlyingAdjustedQuantity_33, UnderlyingInstrument_33);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_33;
  UnderlyingAllocationPercent_33.setString("53.670000");
set_field(msg, UnderlyingAllocationPercent_33, UnderlyingInstrument_33);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_33;
  UnderlyingAttachmentPoint_33.setString("7.750000");
set_field(msg, UnderlyingAttachmentPoint_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_552114318"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_1859801167"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1925021524"}, UnderlyingInstrument_33);
  FIX::UnderlyingCapValue UnderlyingCapValue_33;
  UnderlyingCapValue_33.setString("11950467");
set_field(msg, UnderlyingCapValue_33, UnderlyingInstrument_33);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_33;
  UnderlyingCashAmount_33.setString("1444907");
set_field(msg, UnderlyingCashAmount_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_33);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_33;
  UnderlyingContractMultiplier_33.setString("17275490");
set_field(msg, UnderlyingContractMultiplier_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{1255742371}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_812452918"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1158508571"}, UnderlyingInstrument_33);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_33;
  UnderlyingCouponRate_33.setString("26.220000");
set_field(msg, UnderlyingCouponRate_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_1812534529"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_33);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_33;
  UnderlyingCurrentValue_33.setString("10397123");
set_field(msg, UnderlyingCurrentValue_33, UnderlyingInstrument_33);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_33;
  UnderlyingDetachmentPoint_33.setString("20.630000");
set_field(msg, UnderlyingDetachmentPoint_33, UnderlyingInstrument_33);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_33;
  UnderlyingDirtyPrice_33.setString("8195123");
set_field(msg, UnderlyingDirtyPrice_33, UnderlyingInstrument_33);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_33;
  UnderlyingEndPrice_33.setString("21389827");
set_field(msg, UnderlyingEndPrice_33, UnderlyingInstrument_33);
  FIX::UnderlyingEndValue UnderlyingEndValue_33;
  UnderlyingEndValue_33.setString("16537355");
set_field(msg, UnderlyingEndValue_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingExerciseStyle{654151223}, UnderlyingInstrument_33);
  FIX::UnderlyingFXRate UnderlyingFXRate_33;
  UnderlyingFXRate_33.setString("19973790");
set_field(msg, UnderlyingFXRate_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_33);
  FIX::UnderlyingFactor UnderlyingFactor_33;
  UnderlyingFactor_33.setString("648135");
set_field(msg, UnderlyingFactor_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingFlowScheduleType{1916793801}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_1414347982"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_528417826"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_1692254006"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_1710146380"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1429649769"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2054879373"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2136667155"}, UnderlyingInstrument_33);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_33;
  UnderlyingNotionalPercentageOutstanding_33.setString("40.870000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_33);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_33;
  UnderlyingOriginalNotionalPercentageOutstanding_33.setString("50.310000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1029327165"}, UnderlyingInstrument_33);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_33;
  UnderlyingPriceUnitOfMeasureQty_33.setString("19116876");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingProduct{518675546}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingPutOrCall{609392543}, UnderlyingInstrument_33);
  FIX::UnderlyingPx UnderlyingPx_33;
  UnderlyingPx_33.setString("10199464");
set_field(msg, UnderlyingPx_33, UnderlyingInstrument_33);
  FIX::UnderlyingQty UnderlyingQty_33;
  UnderlyingQty_33.setString("13311284");
set_field(msg, UnderlyingQty_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1767901115"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_567315375"}, UnderlyingInstrument_33);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_33;
  UnderlyingRepurchaseRate_33.setString("93.460000");
set_field(msg, UnderlyingRepurchaseRate_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{1838657389}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_19118680"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_2035891717"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_950935804"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_838631048"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_2027390835"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_457187688"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_1492782271"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_1877286267"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_1349603246"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_33);
  FIX::UnderlyingStartValue UnderlyingStartValue_33;
  UnderlyingStartValue_33.setString("16465964");
set_field(msg, UnderlyingStartValue_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_616467580"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_33);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_33;
  UnderlyingStrikePrice_33.setString("1791303");
set_field(msg, UnderlyingStrikePrice_33, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_1368179749"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_1098762503"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_168313819"}, UnderlyingInstrument_33);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_1202460188"}, UnderlyingInstrument_33);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_33;
  UnderlyingUnitOfMeasureQty_33.setString("7184757");
set_field(msg, UnderlyingUnitOfMeasureQty_33, UnderlyingInstrument_33);
  all_values.push_back(UnderlyingInstrument_33);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_71;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_84303706"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_71);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_482679778"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_71);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_71);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_67;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_693696249"}, UnderlyingStipulations_NoUnderlyingStips_67);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_1502626179"}, UnderlyingStipulations_NoUnderlyingStips_67);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_67);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_68;
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipType{"STRING_1784839214"}, UnderlyingStipulations_NoUnderlyingStips_68);
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipValue{"STRING_314113716"}, UnderlyingStipulations_NoUnderlyingStips_68);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_68);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_64;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_633534912"}, UndlyInstrumentParties_NoUndlyInstrumentParties_64);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_64);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{2089060235}, UndlyInstrumentParties_NoUndlyInstrumentParties_64);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_64);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_956223261"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{780207635}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_122);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_401850168"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{1413410949}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_123);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124;
      set_field(noUndlyInstrumentPartySubIDs_0_1_2, FIX::UnderlyingInstrumentPartySubID{"STRING_125506258"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124);
      set_field(noUndlyInstrumentPartySubIDs_0_1_2, FIX::UnderlyingInstrumentPartySubIDType{131652787}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_124);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_65;
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyID{"STRING_615530547"}, UndlyInstrumentParties_NoUndlyInstrumentParties_65);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_65);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyRole{1778249207}, UndlyInstrumentParties_NoUndlyInstrumentParties_65);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_65);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125;
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1621632041"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125);
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubIDType{822132337}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_125);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityList::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126;
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1411128439"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126);
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubIDType{842328143}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_126);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
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
