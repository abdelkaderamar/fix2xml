#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/BidResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( BidResponse, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::BidResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BidResponse_0;
  set_field(msg, FIX::BidID{"STRING_1650906414"}, BidResponse_0);
  set_field(msg, FIX::ClientBidID{"STRING_1594260902"}, BidResponse_0);
  all_values.push_back(BidResponse_0);

  all_compo_names.insert("BidResponse");

  // BidCompRspGrp
  // Group BidCompRspGrp.NoBidComponents
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_0;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_0;
    set_field(noBidComponents_0_0, FIX::Country{"COUNTRY_1418908855"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::EncodedText{"DATA_1981720352"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::EncodedTextLen{1268651836}, BidCompRspGrp_NoBidComponents_0);
    FIX::FairValue FairValue_3;
    FairValue_3.setString("17955464");
set_field(noBidComponents_0_0, FairValue_3, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::ListID{"STRING_576240387"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::NetGrossInd{2}, BidCompRspGrp_NoBidComponents_0);
    FIX::Price Price_1;
    Price_1.setString("17956178");
set_field(noBidComponents_0_0, Price_1, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::PriceType{11}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::SettlDate{"LOCALMKTDATE_1318575478"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::SettlType{"STRING_6"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::Side{'E'}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::Text{"STRING_107062266"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::TradingSessionID{"STRING_5"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::TradingSessionSubID{"STRING_5"}, BidCompRspGrp_NoBidComponents_0);
    all_values.push_back(BidCompRspGrp_NoBidComponents_0);
    all_compo_names.insert("...NoBidComponents");

    // CommissionData
    multiset<string> CommissionData_5;
    set_field(noBidComponents_0_0, FIX::CommCurrency{"CAN"}, CommissionData_5);
    set_field(noBidComponents_0_0, FIX::CommType{'6'}, CommissionData_5);
    FIX::Commission Commission_5;
    Commission_5.setString("18065629");
set_field(noBidComponents_0_0, Commission_5, CommissionData_5);
    set_field(noBidComponents_0_0, FIX::FundRenewWaiv{'Y'}, CommissionData_5);
    all_values.push_back(CommissionData_5);
    all_compo_names.insert("...NoBidComponents.");

    msg.addGroup(noBidComponents_0_0);
  }
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_1;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_1;
    set_field(noBidComponents_0_1, FIX::Country{"COUNTRY_1620516680"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::EncodedText{"DATA_742965177"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::EncodedTextLen{397664649}, BidCompRspGrp_NoBidComponents_1);
    FIX::FairValue FairValue_4;
    FairValue_4.setString("3735134");
set_field(noBidComponents_0_1, FairValue_4, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::ListID{"STRING_2087856005"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::NetGrossInd{1}, BidCompRspGrp_NoBidComponents_1);
    FIX::Price Price_2;
    Price_2.setString("9888455");
set_field(noBidComponents_0_1, Price_2, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::PriceType{5}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::SettlDate{"LOCALMKTDATE_1157075760"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::SettlType{"STRING_8"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::Side{'A'}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::Text{"STRING_97532450"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::TradingSessionID{"STRING_4"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::TradingSessionSubID{"STRING_2"}, BidCompRspGrp_NoBidComponents_1);
    all_values.push_back(BidCompRspGrp_NoBidComponents_1);
    all_compo_names.insert("...NoBidComponents");

    // CommissionData
    multiset<string> CommissionData_6;
    set_field(noBidComponents_0_1, FIX::CommCurrency{"JPY"}, CommissionData_6);
    set_field(noBidComponents_0_1, FIX::CommType{'3'}, CommissionData_6);
    FIX::Commission Commission_6;
    Commission_6.setString("449019");
set_field(noBidComponents_0_1, Commission_6, CommissionData_6);
    set_field(noBidComponents_0_1, FIX::FundRenewWaiv{'Y'}, CommissionData_6);
    all_values.push_back(CommissionData_6);
    all_compo_names.insert("...NoBidComponents.");

    msg.addGroup(noBidComponents_0_1);
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
