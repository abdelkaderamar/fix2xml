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
  FIX::BidID BidID_1("STRING_1921524949");
  msg.set(BidID_1);
  BidResponse_0.insert(BidID_1.getString());
  FIX::ClientBidID ClientBidID_1("STRING_1228814552");
  msg.set(ClientBidID_1);
  BidResponse_0.insert(ClientBidID_1.getString());
  all_values.push_back(BidResponse_0);

  // BidCompRspGrp
  // Group BidCompRspGrp.NoBidComponents
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_0;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_0;
    FIX::Country Country_0("COUNTRY_417886088");
    noBidComponents_0_0.set(Country_0);
    BidCompRspGrp_NoBidComponents_0.insert(Country_0.getString());
    FIX::EncodedText EncodedText_11("DATA_594049001");
    noBidComponents_0_0.set(EncodedText_11);
    BidCompRspGrp_NoBidComponents_0.insert(EncodedText_11.getString());
    FIX::EncodedTextLen EncodedTextLen_11(2038383223);
    noBidComponents_0_0.set(EncodedTextLen_11);
    BidCompRspGrp_NoBidComponents_0.insert(EncodedTextLen_11.getString());
    FIX::FairValue FairValue_3;
    FairValue_3.setString("17698529");
    noBidComponents_0_0.set(FairValue_3);
    BidCompRspGrp_NoBidComponents_0.insert(FairValue_3.getString());
    FIX::ListID ListID_9("STRING_723435925");
    noBidComponents_0_0.set(ListID_9);
    BidCompRspGrp_NoBidComponents_0.insert(ListID_9.getString());
    FIX::NetGrossInd NetGrossInd_3(1);
    noBidComponents_0_0.set(NetGrossInd_3);
    BidCompRspGrp_NoBidComponents_0.insert(NetGrossInd_3.getString());
    FIX::Price Price_1;
    Price_1.setString("21413096");
    noBidComponents_0_0.set(Price_1);
    BidCompRspGrp_NoBidComponents_0.insert(Price_1.getString());
    FIX::PriceType PriceType_3(16);
    noBidComponents_0_0.set(PriceType_3);
    BidCompRspGrp_NoBidComponents_0.insert(PriceType_3.getString());
    FIX::SettlDate SettlDate_6("LOCALMKTDATE_77305920");
    noBidComponents_0_0.set(SettlDate_6);
    BidCompRspGrp_NoBidComponents_0.insert(SettlDate_6.getString());
    FIX::SettlType SettlType_6("STRING_2");
    noBidComponents_0_0.set(SettlType_6);
    BidCompRspGrp_NoBidComponents_0.insert(SettlType_6.getString());
    FIX::Side Side_6('6');
    noBidComponents_0_0.set(Side_6);
    BidCompRspGrp_NoBidComponents_0.insert(Side_6.getString());
    FIX::Text Text_11("STRING_1212322383");
    noBidComponents_0_0.set(Text_11);
    BidCompRspGrp_NoBidComponents_0.insert(Text_11.getString());
    FIX::TradingSessionID TradingSessionID_7("STRING_4");
    noBidComponents_0_0.set(TradingSessionID_7);
    BidCompRspGrp_NoBidComponents_0.insert(TradingSessionID_7.getString());
    FIX::TradingSessionSubID TradingSessionSubID_7("STRING_3");
    noBidComponents_0_0.set(TradingSessionSubID_7);
    BidCompRspGrp_NoBidComponents_0.insert(TradingSessionSubID_7.getString());
    all_values.push_back(BidCompRspGrp_NoBidComponents_0);

    // CommissionData
    multiset<string> CommissionData_5;
    FIX::CommCurrency CommCurrency_5("USD");
    noBidComponents_0_0.set(CommCurrency_5);
    CommissionData_5.insert(CommCurrency_5.getString());
    FIX::CommType CommType_5('1');
    noBidComponents_0_0.set(CommType_5);
    CommissionData_5.insert(CommType_5.getString());
    FIX::Commission Commission_5;
    Commission_5.setString("99565");
    noBidComponents_0_0.set(Commission_5);
    CommissionData_5.insert(Commission_5.getString());
    FIX::FundRenewWaiv FundRenewWaiv_5('Y');
    noBidComponents_0_0.set(FundRenewWaiv_5);
    CommissionData_5.insert(FundRenewWaiv_5.getString());
    all_values.push_back(CommissionData_5);

    msg.addGroup(noBidComponents_0_0);
  }
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_1;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_1;
    FIX::Country Country_1("COUNTRY_219949998");
    noBidComponents_0_1.set(Country_1);
    BidCompRspGrp_NoBidComponents_1.insert(Country_1.getString());
    FIX::EncodedText EncodedText_12("DATA_264014009");
    noBidComponents_0_1.set(EncodedText_12);
    BidCompRspGrp_NoBidComponents_1.insert(EncodedText_12.getString());
    FIX::EncodedTextLen EncodedTextLen_12(1128123817);
    noBidComponents_0_1.set(EncodedTextLen_12);
    BidCompRspGrp_NoBidComponents_1.insert(EncodedTextLen_12.getString());
    FIX::FairValue FairValue_4;
    FairValue_4.setString("13906359");
    noBidComponents_0_1.set(FairValue_4);
    BidCompRspGrp_NoBidComponents_1.insert(FairValue_4.getString());
    FIX::ListID ListID_10("STRING_2050438366");
    noBidComponents_0_1.set(ListID_10);
    BidCompRspGrp_NoBidComponents_1.insert(ListID_10.getString());
    FIX::NetGrossInd NetGrossInd_4(1);
    noBidComponents_0_1.set(NetGrossInd_4);
    BidCompRspGrp_NoBidComponents_1.insert(NetGrossInd_4.getString());
    FIX::Price Price_2;
    Price_2.setString("4599372");
    noBidComponents_0_1.set(Price_2);
    BidCompRspGrp_NoBidComponents_1.insert(Price_2.getString());
    FIX::PriceType PriceType_4(7);
    noBidComponents_0_1.set(PriceType_4);
    BidCompRspGrp_NoBidComponents_1.insert(PriceType_4.getString());
    FIX::SettlDate SettlDate_7("LOCALMKTDATE_1150707473");
    noBidComponents_0_1.set(SettlDate_7);
    BidCompRspGrp_NoBidComponents_1.insert(SettlDate_7.getString());
    FIX::SettlType SettlType_7("STRING_6");
    noBidComponents_0_1.set(SettlType_7);
    BidCompRspGrp_NoBidComponents_1.insert(SettlType_7.getString());
    FIX::Side Side_7('7');
    noBidComponents_0_1.set(Side_7);
    BidCompRspGrp_NoBidComponents_1.insert(Side_7.getString());
    FIX::Text Text_12("STRING_528699134");
    noBidComponents_0_1.set(Text_12);
    BidCompRspGrp_NoBidComponents_1.insert(Text_12.getString());
    FIX::TradingSessionID TradingSessionID_8("STRING_3");
    noBidComponents_0_1.set(TradingSessionID_8);
    BidCompRspGrp_NoBidComponents_1.insert(TradingSessionID_8.getString());
    FIX::TradingSessionSubID TradingSessionSubID_8("STRING_3");
    noBidComponents_0_1.set(TradingSessionSubID_8);
    BidCompRspGrp_NoBidComponents_1.insert(TradingSessionSubID_8.getString());
    all_values.push_back(BidCompRspGrp_NoBidComponents_1);

    // CommissionData
    multiset<string> CommissionData_6;
    FIX::CommCurrency CommCurrency_6("CHF");
    noBidComponents_0_1.set(CommCurrency_6);
    CommissionData_6.insert(CommCurrency_6.getString());
    FIX::CommType CommType_6('1');
    noBidComponents_0_1.set(CommType_6);
    CommissionData_6.insert(CommType_6.getString());
    FIX::Commission Commission_6;
    Commission_6.setString("6996405");
    noBidComponents_0_1.set(Commission_6);
    CommissionData_6.insert(Commission_6.getString());
    FIX::FundRenewWaiv FundRenewWaiv_6('N');
    noBidComponents_0_1.set(FundRenewWaiv_6);
    CommissionData_6.insert(FundRenewWaiv_6.getString());
    all_values.push_back(CommissionData_6);

    msg.addGroup(noBidComponents_0_1);
  }
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_2;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_2;
    FIX::Country Country_2("COUNTRY_1708563259");
    noBidComponents_0_2.set(Country_2);
    BidCompRspGrp_NoBidComponents_2.insert(Country_2.getString());
    FIX::EncodedText EncodedText_13("DATA_776946422");
    noBidComponents_0_2.set(EncodedText_13);
    BidCompRspGrp_NoBidComponents_2.insert(EncodedText_13.getString());
    FIX::EncodedTextLen EncodedTextLen_13(1555217654);
    noBidComponents_0_2.set(EncodedTextLen_13);
    BidCompRspGrp_NoBidComponents_2.insert(EncodedTextLen_13.getString());
    FIX::FairValue FairValue_5;
    FairValue_5.setString("16814976");
    noBidComponents_0_2.set(FairValue_5);
    BidCompRspGrp_NoBidComponents_2.insert(FairValue_5.getString());
    FIX::ListID ListID_11("STRING_1989268805");
    noBidComponents_0_2.set(ListID_11);
    BidCompRspGrp_NoBidComponents_2.insert(ListID_11.getString());
    FIX::NetGrossInd NetGrossInd_5(1);
    noBidComponents_0_2.set(NetGrossInd_5);
    BidCompRspGrp_NoBidComponents_2.insert(NetGrossInd_5.getString());
    FIX::Price Price_3;
    Price_3.setString("18946222");
    noBidComponents_0_2.set(Price_3);
    BidCompRspGrp_NoBidComponents_2.insert(Price_3.getString());
    FIX::PriceType PriceType_5(7);
    noBidComponents_0_2.set(PriceType_5);
    BidCompRspGrp_NoBidComponents_2.insert(PriceType_5.getString());
    FIX::SettlDate SettlDate_8("LOCALMKTDATE_1725582066");
    noBidComponents_0_2.set(SettlDate_8);
    BidCompRspGrp_NoBidComponents_2.insert(SettlDate_8.getString());
    FIX::SettlType SettlType_8("STRING_B");
    noBidComponents_0_2.set(SettlType_8);
    BidCompRspGrp_NoBidComponents_2.insert(SettlType_8.getString());
    FIX::Side Side_8('A');
    noBidComponents_0_2.set(Side_8);
    BidCompRspGrp_NoBidComponents_2.insert(Side_8.getString());
    FIX::Text Text_13("STRING_1378665417");
    noBidComponents_0_2.set(Text_13);
    BidCompRspGrp_NoBidComponents_2.insert(Text_13.getString());
    FIX::TradingSessionID TradingSessionID_9("STRING_5");
    noBidComponents_0_2.set(TradingSessionID_9);
    BidCompRspGrp_NoBidComponents_2.insert(TradingSessionID_9.getString());
    FIX::TradingSessionSubID TradingSessionSubID_9("STRING_1");
    noBidComponents_0_2.set(TradingSessionSubID_9);
    BidCompRspGrp_NoBidComponents_2.insert(TradingSessionSubID_9.getString());
    all_values.push_back(BidCompRspGrp_NoBidComponents_2);

    // CommissionData
    multiset<string> CommissionData_7;
    FIX::CommCurrency CommCurrency_7("CAN");
    noBidComponents_0_2.set(CommCurrency_7);
    CommissionData_7.insert(CommCurrency_7.getString());
    FIX::CommType CommType_7('4');
    noBidComponents_0_2.set(CommType_7);
    CommissionData_7.insert(CommType_7.getString());
    FIX::Commission Commission_7;
    Commission_7.setString("20928362");
    noBidComponents_0_2.set(Commission_7);
    CommissionData_7.insert(Commission_7.getString());
    FIX::FundRenewWaiv FundRenewWaiv_7('N');
    noBidComponents_0_2.set(FundRenewWaiv_7);
    CommissionData_7.insert(FundRenewWaiv_7.getString());
    all_values.push_back(CommissionData_7);

    msg.addGroup(noBidComponents_0_2);
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
