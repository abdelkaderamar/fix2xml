#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityTypes.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityTypes, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityTypes msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityTypes_0;
  set_field(msg, FIX::EncodedText{"DATA_611227815"}, SecurityTypes_0);
  set_field(msg, FIX::EncodedTextLen{1486955948}, SecurityTypes_0);
  set_field(msg, FIX::LastFragment{false}, SecurityTypes_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_338545703"}, SecurityTypes_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_568595467"}, SecurityTypes_0);
  set_field(msg, FIX::SecurityReqID{"STRING_2006369328"}, SecurityTypes_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_779405425"}, SecurityTypes_0);
  set_field(msg, FIX::SecurityResponseType{6}, SecurityTypes_0);
  set_field(msg, FIX::SubscriptionRequestType{'1'}, SecurityTypes_0);
  set_field(msg, FIX::Text{"STRING_781534333"}, SecurityTypes_0);
  set_field(msg, FIX::TotNoSecurityTypes{211095829}, SecurityTypes_0);
  set_field(msg, FIX::TradingSessionID{"STRING_4"}, SecurityTypes_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_4"}, SecurityTypes_0);
  all_values.push_back(SecurityTypes_0);

  all_compo_names.insert("SecurityTypes");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_17;
  set_field(msg, FIX::ApplID{"STRING_1622208912"}, ApplicationSequenceControl_17);
  set_field(msg, FIX::ApplLastSeqNum{1279370550}, ApplicationSequenceControl_17);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_17);
  set_field(msg, FIX::ApplSeqNum{1724686755}, ApplicationSequenceControl_17);
  all_values.push_back(ApplicationSequenceControl_17);
  all_compo_names.insert(".");

  // SecTypesGrp
  // Group SecTypesGrp.NoSecurityTypes
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_0;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_0;
    set_field(noSecurityTypes_0_0, FIX::CFICode{"STRING_709123267"}, SecTypesGrp_NoSecurityTypes_0);
    set_field(noSecurityTypes_0_0, FIX::Product{9}, SecTypesGrp_NoSecurityTypes_0);
    set_field(noSecurityTypes_0_0, FIX::SecuritySubType{"STRING_890734149"}, SecTypesGrp_NoSecurityTypes_0);
    set_field(noSecurityTypes_0_0, FIX::SecurityType{"STRING_MF"}, SecTypesGrp_NoSecurityTypes_0);
    set_field(noSecurityTypes_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(6, 51, 2, 11, 2, 2010)}, SecTypesGrp_NoSecurityTypes_0);
    all_values.push_back(SecTypesGrp_NoSecurityTypes_0);
    all_compo_names.insert("...NoSecurityTypes");

    msg.addGroup(noSecurityTypes_0_0);
  }
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_1;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_1;
    set_field(noSecurityTypes_0_1, FIX::CFICode{"STRING_387018454"}, SecTypesGrp_NoSecurityTypes_1);
    set_field(noSecurityTypes_0_1, FIX::Product{11}, SecTypesGrp_NoSecurityTypes_1);
    set_field(noSecurityTypes_0_1, FIX::SecuritySubType{"STRING_961998865"}, SecTypesGrp_NoSecurityTypes_1);
    set_field(noSecurityTypes_0_1, FIX::SecurityType{"STRING_UST"}, SecTypesGrp_NoSecurityTypes_1);
    set_field(noSecurityTypes_0_1, FIX::TransactTime{FIX::UTCTIMESTAMP(0, 42, 41, 9, 6, 2003)}, SecTypesGrp_NoSecurityTypes_1);
    all_values.push_back(SecTypesGrp_NoSecurityTypes_1);
    all_compo_names.insert("...NoSecurityTypes");

    msg.addGroup(noSecurityTypes_0_1);
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
