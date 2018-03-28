#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

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
  multiset<string> BidResponse_0;
  FIX::BidID BidID_1("STRING_1925051735");
  msg.set(BidID_1);
  BidResponse_0.insert(BidID_1.getString());
  FIX::ClientBidID ClientBidID_1("STRING_552512950");
  msg.set(ClientBidID_1);
  BidResponse_0.insert(ClientBidID_1.getString());
  all_values.push_back(BidResponse_0);

  // BidCompRspGrp
  // Group BidCompRspGrp.NoBidComponents
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_0;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_0;
    FIX::Country Country_0("COUNTRY_499418485");
    noBidComponents_0_0.set(Country_0);
    BidCompRspGrp_NoBidComponents_0.insert(Country_0.getString());
    FIX::EncodedText EncodedText_11("DATA_1698854219");
    noBidComponents_0_0.set(EncodedText_11);
    BidCompRspGrp_NoBidComponents_0.insert(EncodedText_11.getString());
    FIX::EncodedTextLen EncodedTextLen_11(1105565839);
    noBidComponents_0_0.set(EncodedTextLen_11);
    BidCompRspGrp_NoBidComponents_0.insert(EncodedTextLen_11.getString());
    FIX::FairValue FairValue_3;
    FairValue_3.setString("15017353");
    noBidComponents_0_0.set(FairValue_3);
    BidCompRspGrp_NoBidComponents_0.insert(FairValue_3.getString());
    FIX::ListID ListID_8("STRING_555136705");
    noBidComponents_0_0.set(ListID_8);
    BidCompRspGrp_NoBidComponents_0.insert(ListID_8.getString());
    FIX::NetGrossInd NetGrossInd_1(1);
    noBidComponents_0_0.set(NetGrossInd_1);
    BidCompRspGrp_NoBidComponents_0.insert(NetGrossInd_1.getString());
    FIX::Price Price_1;
    Price_1.setString("11834441");
    noBidComponents_0_0.set(Price_1);
    BidCompRspGrp_NoBidComponents_0.insert(Price_1.getString());
    FIX::PriceType PriceType_3(7);
    noBidComponents_0_0.set(PriceType_3);
    BidCompRspGrp_NoBidComponents_0.insert(PriceType_3.getString());
    FIX::SettlDate SettlDate_4("LOCALMKTDATE_121730263");
    noBidComponents_0_0.set(SettlDate_4);
    BidCompRspGrp_NoBidComponents_0.insert(SettlDate_4.getString());
    FIX::SettlType SettlType_4("STRING_4");
    noBidComponents_0_0.set(SettlType_4);
    BidCompRspGrp_NoBidComponents_0.insert(SettlType_4.getString());
    FIX::Side Side_4('6');
    noBidComponents_0_0.set(Side_4);
    BidCompRspGrp_NoBidComponents_0.insert(Side_4.getString());
    FIX::Text Text_11("STRING_920753992");
    noBidComponents_0_0.set(Text_11);
    BidCompRspGrp_NoBidComponents_0.insert(Text_11.getString());
    FIX::TradingSessionID TradingSessionID_5("STRING_3");
    noBidComponents_0_0.set(TradingSessionID_5);
    BidCompRspGrp_NoBidComponents_0.insert(TradingSessionID_5.getString());
    FIX::TradingSessionSubID TradingSessionSubID_5("STRING_7");
    noBidComponents_0_0.set(TradingSessionSubID_5);
    BidCompRspGrp_NoBidComponents_0.insert(TradingSessionSubID_5.getString());
    all_values.push_back(BidCompRspGrp_NoBidComponents_0);

    // CommissionData
    multiset<string> CommissionData_6;
    FIX::CommCurrency CommCurrency_6("CHF");
    noBidComponents_0_0.set(CommCurrency_6);
    CommissionData_6.insert(CommCurrency_6.getString());
    FIX::CommType CommType_6('6');
    noBidComponents_0_0.set(CommType_6);
    CommissionData_6.insert(CommType_6.getString());
    FIX::Commission Commission_6;
    Commission_6.setString("14347242");
    noBidComponents_0_0.set(Commission_6);
    CommissionData_6.insert(Commission_6.getString());
    FIX::FundRenewWaiv FundRenewWaiv_6('N');
    noBidComponents_0_0.set(FundRenewWaiv_6);
    CommissionData_6.insert(FundRenewWaiv_6.getString());
    all_values.push_back(CommissionData_6);

    msg.addGroup(noBidComponents_0_0);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
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
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
