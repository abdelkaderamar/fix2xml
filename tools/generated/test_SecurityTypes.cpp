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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityTypes msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityTypes_0;
  FIX::EncodedText EncodedText_84("DATA_743125486");
  msg.set(EncodedText_84);
  SecurityTypes_0.insert(EncodedText_84.getString());
  FIX::EncodedTextLen EncodedTextLen_84(1567916308);
  msg.set(EncodedTextLen_84);
  SecurityTypes_0.insert(EncodedTextLen_84.getString());
  FIX::LastFragment LastFragment_16(true);
  msg.set(LastFragment_16);
  SecurityTypes_0.insert(LastFragment_16.getString());
  FIX::MarketID MarketID_22("EXCHANGE_1116694216");
  msg.set(MarketID_22);
  SecurityTypes_0.insert(MarketID_22.getString());
  FIX::MarketSegmentID MarketSegmentID_22("STRING_1802926043");
  msg.set(MarketSegmentID_22);
  SecurityTypes_0.insert(MarketSegmentID_22.getString());
  FIX::SecurityReqID SecurityReqID_10("STRING_187443827");
  msg.set(SecurityReqID_10);
  SecurityTypes_0.insert(SecurityReqID_10.getString());
  FIX::SecurityResponseID SecurityResponseID_6("STRING_558329947");
  msg.set(SecurityResponseID_6);
  SecurityTypes_0.insert(SecurityResponseID_6.getString());
  FIX::SecurityResponseType SecurityResponseType_2(4);
  msg.set(SecurityResponseType_2);
  SecurityTypes_0.insert(SecurityResponseType_2.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_12('1');
  msg.set(SubscriptionRequestType_12);
  SecurityTypes_0.insert(SubscriptionRequestType_12.getString());
  FIX::Text Text_84("STRING_498662778");
  msg.set(Text_84);
  SecurityTypes_0.insert(Text_84.getString());
  FIX::TotNoSecurityTypes TotNoSecurityTypes_0(1233159626);
  msg.set(TotNoSecurityTypes_0);
  SecurityTypes_0.insert(TotNoSecurityTypes_0.getString());
  FIX::TradingSessionID TradingSessionID_89("STRING_2");
  msg.set(TradingSessionID_89);
  SecurityTypes_0.insert(TradingSessionID_89.getString());
  FIX::TradingSessionSubID TradingSessionSubID_89("STRING_3");
  msg.set(TradingSessionSubID_89);
  SecurityTypes_0.insert(TradingSessionSubID_89.getString());
  all_values.push_back(SecurityTypes_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_17;
  FIX::ApplID ApplID_17("STRING_1416691481");
  msg.set(ApplID_17);
  ApplicationSequenceControl_17.insert(ApplID_17.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_17(1902500450);
  msg.set(ApplLastSeqNum_17);
  ApplicationSequenceControl_17.insert(ApplLastSeqNum_17.getString());
  FIX::ApplResendFlag ApplResendFlag_17(true);
  msg.set(ApplResendFlag_17);
  ApplicationSequenceControl_17.insert(ApplResendFlag_17.getString());
  FIX::ApplSeqNum ApplSeqNum_17(63060959);
  msg.set(ApplSeqNum_17);
  ApplicationSequenceControl_17.insert(ApplSeqNum_17.getString());
  all_values.push_back(ApplicationSequenceControl_17);

  // SecTypesGrp
  // Group SecTypesGrp.NoSecurityTypes
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_0;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_0;
    FIX::CFICode CFICode_88("STRING_1204203948");
    noSecurityTypes_0_0.set(CFICode_88);
    SecTypesGrp_NoSecurityTypes_0.insert(CFICode_88.getString());
    FIX::Product Product_91(1);
    noSecurityTypes_0_0.set(Product_91);
    SecTypesGrp_NoSecurityTypes_0.insert(Product_91.getString());
    FIX::SecuritySubType SecuritySubType_90("STRING_1234913545");
    noSecurityTypes_0_0.set(SecuritySubType_90);
    SecTypesGrp_NoSecurityTypes_0.insert(SecuritySubType_90.getString());
    FIX::SecurityType SecurityType_91("STRING_ONITE");
    noSecurityTypes_0_0.set(SecurityType_91);
    SecTypesGrp_NoSecurityTypes_0.insert(SecurityType_91.getString());
    FIX::TransactTime TransactTime_65(FIX::UTCTIMESTAMP(8, 1, 38, 26, 4, 2014));
    noSecurityTypes_0_0.set(TransactTime_65);
    SecTypesGrp_NoSecurityTypes_0.insert(TransactTime_65.getString());
    all_values.push_back(SecTypesGrp_NoSecurityTypes_0);

    msg.addGroup(noSecurityTypes_0_0);
  }
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_1;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_1;
    FIX::CFICode CFICode_89("STRING_1661588454");
    noSecurityTypes_0_1.set(CFICode_89);
    SecTypesGrp_NoSecurityTypes_1.insert(CFICode_89.getString());
    FIX::Product Product_92(4);
    noSecurityTypes_0_1.set(Product_92);
    SecTypesGrp_NoSecurityTypes_1.insert(Product_92.getString());
    FIX::SecuritySubType SecuritySubType_91("STRING_892516464");
    noSecurityTypes_0_1.set(SecuritySubType_91);
    SecTypesGrp_NoSecurityTypes_1.insert(SecuritySubType_91.getString());
    FIX::SecurityType SecurityType_92("STRING_MATURED");
    noSecurityTypes_0_1.set(SecurityType_92);
    SecTypesGrp_NoSecurityTypes_1.insert(SecurityType_92.getString());
    FIX::TransactTime TransactTime_66(FIX::UTCTIMESTAMP(17, 30, 32, 0, 3, 2013));
    noSecurityTypes_0_1.set(TransactTime_66);
    SecTypesGrp_NoSecurityTypes_1.insert(TransactTime_66.getString());
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
