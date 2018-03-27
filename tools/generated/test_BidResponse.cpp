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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::BidResponse msg;

  list<multiset<string>> all_values;
  multiset<string> BidResponse_0;
  FIX::BidID BidID_1("STRING_1095003107");
  msg.set(BidID_1);
  BidResponse_0.insert(BidID_1.getString());
  FIX::ClientBidID ClientBidID_1("STRING_1906940537");
  msg.set(ClientBidID_1);
  BidResponse_0.insert(ClientBidID_1.getString());
  all_values.push_back(BidResponse_0);

  // BidCompRspGrp
  // Group BidCompRspGrp.NoBidComponents
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_0;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_0;
    FIX::Country Country_0("COUNTRY_1238086937");
    noBidComponents_0_0.set(Country_0);
    BidCompRspGrp_NoBidComponents_0.insert(Country_0.getString());
    FIX::EncodedText EncodedText_11("DATA_1345347304");
    noBidComponents_0_0.set(EncodedText_11);
    BidCompRspGrp_NoBidComponents_0.insert(EncodedText_11.getString());
    FIX::EncodedTextLen EncodedTextLen_11(1397336818);
    noBidComponents_0_0.set(EncodedTextLen_11);
    BidCompRspGrp_NoBidComponents_0.insert(EncodedTextLen_11.getString());
    FIX::FairValue FairValue_2;
    FairValue_2.setString("2024188");
    noBidComponents_0_0.set(FairValue_2);
    BidCompRspGrp_NoBidComponents_0.insert(FairValue_2.getString());
    FIX::ListID ListID_7("STRING_7031032");
    noBidComponents_0_0.set(ListID_7);
    BidCompRspGrp_NoBidComponents_0.insert(ListID_7.getString());
    FIX::NetGrossInd NetGrossInd_2(1);
    noBidComponents_0_0.set(NetGrossInd_2);
    BidCompRspGrp_NoBidComponents_0.insert(NetGrossInd_2.getString());
    FIX::Price Price_1;
    Price_1.setString("20824319");
    noBidComponents_0_0.set(Price_1);
    BidCompRspGrp_NoBidComponents_0.insert(Price_1.getString());
    FIX::PriceType PriceType_3(6);
    noBidComponents_0_0.set(PriceType_3);
    BidCompRspGrp_NoBidComponents_0.insert(PriceType_3.getString());
    FIX::SettlDate SettlDate_5("LOCALMKTDATE_1245832299");
    noBidComponents_0_0.set(SettlDate_5);
    BidCompRspGrp_NoBidComponents_0.insert(SettlDate_5.getString());
    FIX::SettlType SettlType_5("STRING_B");
    noBidComponents_0_0.set(SettlType_5);
    BidCompRspGrp_NoBidComponents_0.insert(SettlType_5.getString());
    FIX::Side Side_5('C');
    noBidComponents_0_0.set(Side_5);
    BidCompRspGrp_NoBidComponents_0.insert(Side_5.getString());
    FIX::Text Text_11("STRING_47724501");
    noBidComponents_0_0.set(Text_11);
    BidCompRspGrp_NoBidComponents_0.insert(Text_11.getString());
    FIX::TradingSessionID TradingSessionID_6("STRING_5");
    noBidComponents_0_0.set(TradingSessionID_6);
    BidCompRspGrp_NoBidComponents_0.insert(TradingSessionID_6.getString());
    FIX::TradingSessionSubID TradingSessionSubID_6("STRING_4");
    noBidComponents_0_0.set(TradingSessionSubID_6);
    BidCompRspGrp_NoBidComponents_0.insert(TradingSessionSubID_6.getString());
    all_values.push_back(BidCompRspGrp_NoBidComponents_0);

    // CommissionData
    multiset<string> CommissionData_5;
    FIX::CommCurrency CommCurrency_5("JPY");
    noBidComponents_0_0.set(CommCurrency_5);
    CommissionData_5.insert(CommCurrency_5.getString());
    FIX::CommType CommType_5('1');
    noBidComponents_0_0.set(CommType_5);
    CommissionData_5.insert(CommType_5.getString());
    FIX::Commission Commission_5;
    Commission_5.setString("16999575");
    noBidComponents_0_0.set(Commission_5);
    CommissionData_5.insert(Commission_5.getString());
    FIX::FundRenewWaiv FundRenewWaiv_5('N');
    noBidComponents_0_0.set(FundRenewWaiv_5);
    CommissionData_5.insert(FundRenewWaiv_5.getString());
    all_values.push_back(CommissionData_5);

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
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
