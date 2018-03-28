#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityTypes.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityTypes, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityTypes msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityTypes_0;
  FIX::EncodedText EncodedText_94("DATA_328403606");
  msg.set(EncodedText_94);
  SecurityTypes_0.insert(EncodedText_94.getString());
  FIX::EncodedTextLen EncodedTextLen_94(1007765722);
  msg.set(EncodedTextLen_94);
  SecurityTypes_0.insert(EncodedTextLen_94.getString());
  FIX::LastFragment LastFragment_15(false);
  msg.set(LastFragment_15);
  SecurityTypes_0.insert(LastFragment_15.getString());
  FIX::MarketID MarketID_23("EXCHANGE_733259496");
  msg.set(MarketID_23);
  SecurityTypes_0.insert(MarketID_23.getString());
  FIX::MarketSegmentID MarketSegmentID_23("STRING_1618088067");
  msg.set(MarketSegmentID_23);
  SecurityTypes_0.insert(MarketSegmentID_23.getString());
  FIX::SecurityReqID SecurityReqID_10("STRING_600184084");
  msg.set(SecurityReqID_10);
  SecurityTypes_0.insert(SecurityReqID_10.getString());
  FIX::SecurityResponseID SecurityResponseID_6("STRING_1255740684");
  msg.set(SecurityResponseID_6);
  SecurityTypes_0.insert(SecurityResponseID_6.getString());
  FIX::SecurityResponseType SecurityResponseType_2(6);
  msg.set(SecurityResponseType_2);
  SecurityTypes_0.insert(SecurityResponseType_2.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_12('1');
  msg.set(SubscriptionRequestType_12);
  SecurityTypes_0.insert(SubscriptionRequestType_12.getString());
  FIX::Text Text_94("STRING_395202988");
  msg.set(Text_94);
  SecurityTypes_0.insert(Text_94.getString());
  FIX::TotNoSecurityTypes TotNoSecurityTypes_0(1710441240);
  msg.set(TotNoSecurityTypes_0);
  SecurityTypes_0.insert(TotNoSecurityTypes_0.getString());
  FIX::TradingSessionID TradingSessionID_91("STRING_6");
  msg.set(TradingSessionID_91);
  SecurityTypes_0.insert(TradingSessionID_91.getString());
  FIX::TradingSessionSubID TradingSessionSubID_91("STRING_7");
  msg.set(TradingSessionSubID_91);
  SecurityTypes_0.insert(TradingSessionSubID_91.getString());
  all_values.push_back(SecurityTypes_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_17;
  FIX::ApplID ApplID_17("STRING_75951737");
  msg.set(ApplID_17);
  ApplicationSequenceControl_17.insert(ApplID_17.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_17(228157918);
  msg.set(ApplLastSeqNum_17);
  ApplicationSequenceControl_17.insert(ApplLastSeqNum_17.getString());
  FIX::ApplResendFlag ApplResendFlag_17(false);
  msg.set(ApplResendFlag_17);
  ApplicationSequenceControl_17.insert(ApplResendFlag_17.getString());
  FIX::ApplSeqNum ApplSeqNum_17(399067158);
  msg.set(ApplSeqNum_17);
  ApplicationSequenceControl_17.insert(ApplSeqNum_17.getString());
  all_values.push_back(ApplicationSequenceControl_17);

  // SecTypesGrp
  // Group SecTypesGrp.NoSecurityTypes
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_0;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_0;
    FIX::CFICode CFICode_81("STRING_918143210");
    noSecurityTypes_0_0.set(CFICode_81);
    SecTypesGrp_NoSecurityTypes_0.insert(CFICode_81.getString());
    FIX::Product Product_84(12);
    noSecurityTypes_0_0.set(Product_84);
    SecTypesGrp_NoSecurityTypes_0.insert(Product_84.getString());
    FIX::SecuritySubType SecuritySubType_83("STRING_440203408");
    noSecurityTypes_0_0.set(SecuritySubType_83);
    SecTypesGrp_NoSecurityTypes_0.insert(SecuritySubType_83.getString());
    FIX::SecurityType SecurityType_84("STRING_TBOND");
    noSecurityTypes_0_0.set(SecurityType_84);
    SecTypesGrp_NoSecurityTypes_0.insert(SecurityType_84.getString());
    FIX::TransactTime TransactTime_60(FIX::UTCTIMESTAMP(22, 29, 22, 13, 6, 2003));
    noSecurityTypes_0_0.set(TransactTime_60);
    SecTypesGrp_NoSecurityTypes_0.insert(TransactTime_60.getString());
    all_values.push_back(SecTypesGrp_NoSecurityTypes_0);

    msg.addGroup(noSecurityTypes_0_0);
  }
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_1;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_1;
    FIX::CFICode CFICode_82("STRING_1253938679");
    noSecurityTypes_0_1.set(CFICode_82);
    SecTypesGrp_NoSecurityTypes_1.insert(CFICode_82.getString());
    FIX::Product Product_85(13);
    noSecurityTypes_0_1.set(Product_85);
    SecTypesGrp_NoSecurityTypes_1.insert(Product_85.getString());
    FIX::SecuritySubType SecuritySubType_84("STRING_428511923");
    noSecurityTypes_0_1.set(SecuritySubType_84);
    SecTypesGrp_NoSecurityTypes_1.insert(SecuritySubType_84.getString());
    FIX::SecurityType SecurityType_85("STRING_RETIRED");
    noSecurityTypes_0_1.set(SecurityType_85);
    SecTypesGrp_NoSecurityTypes_1.insert(SecurityType_85.getString());
    FIX::TransactTime TransactTime_61(FIX::UTCTIMESTAMP(11, 40, 35, 11, 2, 2010));
    noSecurityTypes_0_1.set(TransactTime_61);
    SecTypesGrp_NoSecurityTypes_1.insert(TransactTime_61.getString());
    all_values.push_back(SecTypesGrp_NoSecurityTypes_1);

    msg.addGroup(noSecurityTypes_0_1);
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
