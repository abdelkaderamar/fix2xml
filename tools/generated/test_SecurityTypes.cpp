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
  FIX::EncodedText EncodedText_87("DATA_167479157");
  msg.set(EncodedText_87);
  SecurityTypes_0.insert(EncodedText_87.getString());
  FIX::EncodedTextLen EncodedTextLen_87(773496144);
  msg.set(EncodedTextLen_87);
  SecurityTypes_0.insert(EncodedTextLen_87.getString());
  FIX::LastFragment LastFragment_14(false);
  msg.set(LastFragment_14);
  SecurityTypes_0.insert(LastFragment_14.getString());
  FIX::MarketID MarketID_27("EXCHANGE_897095644");
  msg.set(MarketID_27);
  SecurityTypes_0.insert(MarketID_27.getString());
  FIX::MarketSegmentID MarketSegmentID_27("STRING_1076445610");
  msg.set(MarketSegmentID_27);
  SecurityTypes_0.insert(MarketSegmentID_27.getString());
  FIX::SecurityReqID SecurityReqID_10("STRING_38621599");
  msg.set(SecurityReqID_10);
  SecurityTypes_0.insert(SecurityReqID_10.getString());
  FIX::SecurityResponseID SecurityResponseID_6("STRING_484414746");
  msg.set(SecurityResponseID_6);
  SecurityTypes_0.insert(SecurityResponseID_6.getString());
  FIX::SecurityResponseType SecurityResponseType_2(4);
  msg.set(SecurityResponseType_2);
  SecurityTypes_0.insert(SecurityResponseType_2.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_12('2');
  msg.set(SubscriptionRequestType_12);
  SecurityTypes_0.insert(SubscriptionRequestType_12.getString());
  FIX::Text Text_87("STRING_250730826");
  msg.set(Text_87);
  SecurityTypes_0.insert(Text_87.getString());
  FIX::TotNoSecurityTypes TotNoSecurityTypes_0(790789951);
  msg.set(TotNoSecurityTypes_0);
  SecurityTypes_0.insert(TotNoSecurityTypes_0.getString());
  FIX::TradingSessionID TradingSessionID_99("STRING_3");
  msg.set(TradingSessionID_99);
  SecurityTypes_0.insert(TradingSessionID_99.getString());
  FIX::TradingSessionSubID TradingSessionSubID_99("STRING_4");
  msg.set(TradingSessionSubID_99);
  SecurityTypes_0.insert(TradingSessionSubID_99.getString());
  all_values.push_back(SecurityTypes_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_17;
  FIX::ApplID ApplID_17("STRING_374642743");
  msg.set(ApplID_17);
  ApplicationSequenceControl_17.insert(ApplID_17.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_17(1475612458);
  msg.set(ApplLastSeqNum_17);
  ApplicationSequenceControl_17.insert(ApplLastSeqNum_17.getString());
  FIX::ApplResendFlag ApplResendFlag_17(false);
  msg.set(ApplResendFlag_17);
  ApplicationSequenceControl_17.insert(ApplResendFlag_17.getString());
  FIX::ApplSeqNum ApplSeqNum_17(200590067);
  msg.set(ApplSeqNum_17);
  ApplicationSequenceControl_17.insert(ApplSeqNum_17.getString());
  all_values.push_back(ApplicationSequenceControl_17);

  // SecTypesGrp
  // Group SecTypesGrp.NoSecurityTypes
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_0;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_0;
    FIX::CFICode CFICode_81("STRING_545316761");
    noSecurityTypes_0_0.set(CFICode_81);
    SecTypesGrp_NoSecurityTypes_0.insert(CFICode_81.getString());
    FIX::Product Product_84(10);
    noSecurityTypes_0_0.set(Product_84);
    SecTypesGrp_NoSecurityTypes_0.insert(Product_84.getString());
    FIX::SecuritySubType SecuritySubType_83("STRING_1276222762");
    noSecurityTypes_0_0.set(SecuritySubType_83);
    SecTypesGrp_NoSecurityTypes_0.insert(SecuritySubType_83.getString());
    FIX::SecurityType SecurityType_84("STRING_TBILL");
    noSecurityTypes_0_0.set(SecurityType_84);
    SecTypesGrp_NoSecurityTypes_0.insert(SecurityType_84.getString());
    FIX::TransactTime TransactTime_58(FIX::UTCTIMESTAMP(5, 15, 6, 26, 72007));
    noSecurityTypes_0_0.set(TransactTime_58);
    SecTypesGrp_NoSecurityTypes_0.insert(TransactTime_58.getString());
    all_values.push_back(SecTypesGrp_NoSecurityTypes_0);

    msg.addGroup(noSecurityTypes_0_0);
  }
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_1;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_1;
    FIX::CFICode CFICode_82("STRING_811919281");
    noSecurityTypes_0_1.set(CFICode_82);
    SecTypesGrp_NoSecurityTypes_1.insert(CFICode_82.getString());
    FIX::Product Product_85(11);
    noSecurityTypes_0_1.set(Product_85);
    SecTypesGrp_NoSecurityTypes_1.insert(Product_85.getString());
    FIX::SecuritySubType SecuritySubType_84("STRING_753333390");
    noSecurityTypes_0_1.set(SecuritySubType_84);
    SecTypesGrp_NoSecurityTypes_1.insert(SecuritySubType_84.getString());
    FIX::SecurityType SecurityType_85("STRING_NONE");
    noSecurityTypes_0_1.set(SecurityType_85);
    SecTypesGrp_NoSecurityTypes_1.insert(SecurityType_85.getString());
    FIX::TransactTime TransactTime_59(FIX::UTCTIMESTAMP(10, 28, 4, 20, 22000));
    noSecurityTypes_0_1.set(TransactTime_59);
    SecTypesGrp_NoSecurityTypes_1.insert(TransactTime_59.getString());
    all_values.push_back(SecTypesGrp_NoSecurityTypes_1);

    msg.addGroup(noSecurityTypes_0_1);
  }
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_2;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_2;
    FIX::CFICode CFICode_83("STRING_238090958");
    noSecurityTypes_0_2.set(CFICode_83);
    SecTypesGrp_NoSecurityTypes_2.insert(CFICode_83.getString());
    FIX::Product Product_86(8);
    noSecurityTypes_0_2.set(Product_86);
    SecTypesGrp_NoSecurityTypes_2.insert(Product_86.getString());
    FIX::SecuritySubType SecuritySubType_85("STRING_1876461050");
    noSecurityTypes_0_2.set(SecuritySubType_85);
    SecTypesGrp_NoSecurityTypes_2.insert(SecuritySubType_85.getString());
    FIX::SecurityType SecurityType_86("STRING_XLINKD");
    noSecurityTypes_0_2.set(SecurityType_86);
    SecTypesGrp_NoSecurityTypes_2.insert(SecurityType_86.getString());
    FIX::TransactTime TransactTime_60(FIX::UTCTIMESTAMP(4, 51, 42, 10, 102006));
    noSecurityTypes_0_2.set(TransactTime_60);
    SecTypesGrp_NoSecurityTypes_2.insert(TransactTime_60.getString());
    all_values.push_back(SecTypesGrp_NoSecurityTypes_2);

    msg.addGroup(noSecurityTypes_0_2);
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
