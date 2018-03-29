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
  multiset<string> all_compo_names;
  multiset<string> BidResponse_0;
  FIX::BidID BidID_1("STRING_1322648025");
  msg.set(BidID_1);
  BidResponse_0.insert(BidID_1.getString());
  FIX::ClientBidID ClientBidID_1("STRING_108916424");
  msg.set(ClientBidID_1);
  BidResponse_0.insert(ClientBidID_1.getString());
  all_values.push_back(BidResponse_0);

  all_compo_names.insert("BidResponse");

  // BidCompRspGrp
  // Group BidCompRspGrp.NoBidComponents
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_0;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_0;
    FIX::Country Country_0("COUNTRY_353128835");
    noBidComponents_0_0.set(Country_0);
    BidCompRspGrp_NoBidComponents_0.insert(Country_0.getString());
    FIX::EncodedText EncodedText_11("DATA_340504993");
    noBidComponents_0_0.set(EncodedText_11);
    BidCompRspGrp_NoBidComponents_0.insert(EncodedText_11.getString());
    FIX::EncodedTextLen EncodedTextLen_11(1854453874);
    noBidComponents_0_0.set(EncodedTextLen_11);
    BidCompRspGrp_NoBidComponents_0.insert(EncodedTextLen_11.getString());
    FIX::FairValue FairValue_1;
    FairValue_1.setString("13916050");
    noBidComponents_0_0.set(FairValue_1);
    BidCompRspGrp_NoBidComponents_0.insert(FairValue_1.getString());
    FIX::ListID ListID_9("STRING_1898506690");
    noBidComponents_0_0.set(ListID_9);
    BidCompRspGrp_NoBidComponents_0.insert(ListID_9.getString());
    FIX::NetGrossInd NetGrossInd_3(2);
    noBidComponents_0_0.set(NetGrossInd_3);
    BidCompRspGrp_NoBidComponents_0.insert(NetGrossInd_3.getString());
    FIX::Price Price_1;
    Price_1.setString("20536806");
    noBidComponents_0_0.set(Price_1);
    BidCompRspGrp_NoBidComponents_0.insert(Price_1.getString());
    FIX::PriceType PriceType_3(4);
    noBidComponents_0_0.set(PriceType_3);
    BidCompRspGrp_NoBidComponents_0.insert(PriceType_3.getString());
    FIX::SettlDate SettlDate_6("LOCALMKTDATE_394520431");
    noBidComponents_0_0.set(SettlDate_6);
    BidCompRspGrp_NoBidComponents_0.insert(SettlDate_6.getString());
    FIX::SettlType SettlType_6("STRING_4");
    noBidComponents_0_0.set(SettlType_6);
    BidCompRspGrp_NoBidComponents_0.insert(SettlType_6.getString());
    FIX::Side Side_6('7');
    noBidComponents_0_0.set(Side_6);
    BidCompRspGrp_NoBidComponents_0.insert(Side_6.getString());
    FIX::Text Text_11("STRING_775594610");
    noBidComponents_0_0.set(Text_11);
    BidCompRspGrp_NoBidComponents_0.insert(Text_11.getString());
    FIX::TradingSessionID TradingSessionID_7("STRING_6");
    noBidComponents_0_0.set(TradingSessionID_7);
    BidCompRspGrp_NoBidComponents_0.insert(TradingSessionID_7.getString());
    FIX::TradingSessionSubID TradingSessionSubID_7("STRING_6");
    noBidComponents_0_0.set(TradingSessionSubID_7);
    BidCompRspGrp_NoBidComponents_0.insert(TradingSessionSubID_7.getString());
    all_values.push_back(BidCompRspGrp_NoBidComponents_0);
    all_compo_names.insert("BidCompRspGrp.NoBidComponents");

    // CommissionData
    multiset<string> CommissionData_4;
    FIX::CommCurrency CommCurrency_4("EUR");
    noBidComponents_0_0.set(CommCurrency_4);
    CommissionData_4.insert(CommCurrency_4.getString());
    FIX::CommType CommType_4('4');
    noBidComponents_0_0.set(CommType_4);
    CommissionData_4.insert(CommType_4.getString());
    FIX::Commission Commission_4;
    Commission_4.setString("18059343");
    noBidComponents_0_0.set(Commission_4);
    CommissionData_4.insert(Commission_4.getString());
    FIX::FundRenewWaiv FundRenewWaiv_4('Y');
    noBidComponents_0_0.set(FundRenewWaiv_4);
    CommissionData_4.insert(FundRenewWaiv_4.getString());
    all_values.push_back(CommissionData_4);
    all_compo_names.insert("CommissionData");

    msg.addGroup(noBidComponents_0_0);
  }
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_1;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_1;
    FIX::Country Country_1("COUNTRY_545555800");
    noBidComponents_0_1.set(Country_1);
    BidCompRspGrp_NoBidComponents_1.insert(Country_1.getString());
    FIX::EncodedText EncodedText_12("DATA_834800291");
    noBidComponents_0_1.set(EncodedText_12);
    BidCompRspGrp_NoBidComponents_1.insert(EncodedText_12.getString());
    FIX::EncodedTextLen EncodedTextLen_12(1563917715);
    noBidComponents_0_1.set(EncodedTextLen_12);
    BidCompRspGrp_NoBidComponents_1.insert(EncodedTextLen_12.getString());
    FIX::FairValue FairValue_2;
    FairValue_2.setString("9458997");
    noBidComponents_0_1.set(FairValue_2);
    BidCompRspGrp_NoBidComponents_1.insert(FairValue_2.getString());
    FIX::ListID ListID_10("STRING_195348501");
    noBidComponents_0_1.set(ListID_10);
    BidCompRspGrp_NoBidComponents_1.insert(ListID_10.getString());
    FIX::NetGrossInd NetGrossInd_4(2);
    noBidComponents_0_1.set(NetGrossInd_4);
    BidCompRspGrp_NoBidComponents_1.insert(NetGrossInd_4.getString());
    FIX::Price Price_2;
    Price_2.setString("2048574");
    noBidComponents_0_1.set(Price_2);
    BidCompRspGrp_NoBidComponents_1.insert(Price_2.getString());
    FIX::PriceType PriceType_4(6);
    noBidComponents_0_1.set(PriceType_4);
    BidCompRspGrp_NoBidComponents_1.insert(PriceType_4.getString());
    FIX::SettlDate SettlDate_7("LOCALMKTDATE_747470715");
    noBidComponents_0_1.set(SettlDate_7);
    BidCompRspGrp_NoBidComponents_1.insert(SettlDate_7.getString());
    FIX::SettlType SettlType_7("STRING_7");
    noBidComponents_0_1.set(SettlType_7);
    BidCompRspGrp_NoBidComponents_1.insert(SettlType_7.getString());
    FIX::Side Side_7('A');
    noBidComponents_0_1.set(Side_7);
    BidCompRspGrp_NoBidComponents_1.insert(Side_7.getString());
    FIX::Text Text_12("STRING_1584234015");
    noBidComponents_0_1.set(Text_12);
    BidCompRspGrp_NoBidComponents_1.insert(Text_12.getString());
    FIX::TradingSessionID TradingSessionID_8("STRING_1");
    noBidComponents_0_1.set(TradingSessionID_8);
    BidCompRspGrp_NoBidComponents_1.insert(TradingSessionID_8.getString());
    FIX::TradingSessionSubID TradingSessionSubID_8("STRING_5");
    noBidComponents_0_1.set(TradingSessionSubID_8);
    BidCompRspGrp_NoBidComponents_1.insert(TradingSessionSubID_8.getString());
    all_values.push_back(BidCompRspGrp_NoBidComponents_1);
    all_compo_names.insert("BidCompRspGrp.NoBidComponents");

    // CommissionData
    multiset<string> CommissionData_5;
    FIX::CommCurrency CommCurrency_5("CAN");
    noBidComponents_0_1.set(CommCurrency_5);
    CommissionData_5.insert(CommCurrency_5.getString());
    FIX::CommType CommType_5('5');
    noBidComponents_0_1.set(CommType_5);
    CommissionData_5.insert(CommType_5.getString());
    FIX::Commission Commission_5;
    Commission_5.setString("3457420");
    noBidComponents_0_1.set(Commission_5);
    CommissionData_5.insert(Commission_5.getString());
    FIX::FundRenewWaiv FundRenewWaiv_5('Y');
    noBidComponents_0_1.set(FundRenewWaiv_5);
    CommissionData_5.insert(FundRenewWaiv_5.getString());
    all_values.push_back(CommissionData_5);
    all_compo_names.insert("CommissionData");

    msg.addGroup(noBidComponents_0_1);
  }
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_2;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_2;
    FIX::Country Country_2("COUNTRY_1871769560");
    noBidComponents_0_2.set(Country_2);
    BidCompRspGrp_NoBidComponents_2.insert(Country_2.getString());
    FIX::EncodedText EncodedText_13("DATA_740262454");
    noBidComponents_0_2.set(EncodedText_13);
    BidCompRspGrp_NoBidComponents_2.insert(EncodedText_13.getString());
    FIX::EncodedTextLen EncodedTextLen_13(1622155091);
    noBidComponents_0_2.set(EncodedTextLen_13);
    BidCompRspGrp_NoBidComponents_2.insert(EncodedTextLen_13.getString());
    FIX::FairValue FairValue_3;
    FairValue_3.setString("5271101");
    noBidComponents_0_2.set(FairValue_3);
    BidCompRspGrp_NoBidComponents_2.insert(FairValue_3.getString());
    FIX::ListID ListID_11("STRING_1515857065");
    noBidComponents_0_2.set(ListID_11);
    BidCompRspGrp_NoBidComponents_2.insert(ListID_11.getString());
    FIX::NetGrossInd NetGrossInd_5(2);
    noBidComponents_0_2.set(NetGrossInd_5);
    BidCompRspGrp_NoBidComponents_2.insert(NetGrossInd_5.getString());
    FIX::Price Price_3;
    Price_3.setString("10180911");
    noBidComponents_0_2.set(Price_3);
    BidCompRspGrp_NoBidComponents_2.insert(Price_3.getString());
    FIX::PriceType PriceType_5(3);
    noBidComponents_0_2.set(PriceType_5);
    BidCompRspGrp_NoBidComponents_2.insert(PriceType_5.getString());
    FIX::SettlDate SettlDate_8("LOCALMKTDATE_2094086290");
    noBidComponents_0_2.set(SettlDate_8);
    BidCompRspGrp_NoBidComponents_2.insert(SettlDate_8.getString());
    FIX::SettlType SettlType_8("STRING_5");
    noBidComponents_0_2.set(SettlType_8);
    BidCompRspGrp_NoBidComponents_2.insert(SettlType_8.getString());
    FIX::Side Side_8('C');
    noBidComponents_0_2.set(Side_8);
    BidCompRspGrp_NoBidComponents_2.insert(Side_8.getString());
    FIX::Text Text_13("STRING_195819595");
    noBidComponents_0_2.set(Text_13);
    BidCompRspGrp_NoBidComponents_2.insert(Text_13.getString());
    FIX::TradingSessionID TradingSessionID_9("STRING_2");
    noBidComponents_0_2.set(TradingSessionID_9);
    BidCompRspGrp_NoBidComponents_2.insert(TradingSessionID_9.getString());
    FIX::TradingSessionSubID TradingSessionSubID_9("STRING_4");
    noBidComponents_0_2.set(TradingSessionSubID_9);
    BidCompRspGrp_NoBidComponents_2.insert(TradingSessionSubID_9.getString());
    all_values.push_back(BidCompRspGrp_NoBidComponents_2);
    all_compo_names.insert("BidCompRspGrp.NoBidComponents");

    // CommissionData
    multiset<string> CommissionData_6;
    FIX::CommCurrency CommCurrency_6("CAN");
    noBidComponents_0_2.set(CommCurrency_6);
    CommissionData_6.insert(CommCurrency_6.getString());
    FIX::CommType CommType_6('4');
    noBidComponents_0_2.set(CommType_6);
    CommissionData_6.insert(CommType_6.getString());
    FIX::Commission Commission_6;
    Commission_6.setString("746595");
    noBidComponents_0_2.set(Commission_6);
    CommissionData_6.insert(Commission_6.getString());
    FIX::FundRenewWaiv FundRenewWaiv_6('Y');
    noBidComponents_0_2.set(FundRenewWaiv_6);
    CommissionData_6.insert(FundRenewWaiv_6.getString());
    all_values.push_back(CommissionData_6);
    all_compo_names.insert("CommissionData");

    msg.addGroup(noBidComponents_0_2);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl; 
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
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
