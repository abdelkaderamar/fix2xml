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
  multiset<string> all_compo_names;
  multiset<string> SecurityTypes_0;
  FIX::EncodedText EncodedText_92("DATA_594826027");
  msg.set(EncodedText_92);
  SecurityTypes_0.insert(EncodedText_92.getString());
  FIX::EncodedTextLen EncodedTextLen_92(590033567);
  msg.set(EncodedTextLen_92);
  SecurityTypes_0.insert(EncodedTextLen_92.getString());
  FIX::LastFragment LastFragment_16(false);
  msg.set(LastFragment_16);
  SecurityTypes_0.insert(LastFragment_16.getString());
  FIX::MarketID MarketID_26("EXCHANGE_732413887");
  msg.set(MarketID_26);
  SecurityTypes_0.insert(MarketID_26.getString());
  FIX::MarketSegmentID MarketSegmentID_26("STRING_174562758");
  msg.set(MarketSegmentID_26);
  SecurityTypes_0.insert(MarketSegmentID_26.getString());
  FIX::SecurityReqID SecurityReqID_10("STRING_1079987293");
  msg.set(SecurityReqID_10);
  SecurityTypes_0.insert(SecurityReqID_10.getString());
  FIX::SecurityResponseID SecurityResponseID_6("STRING_1980347732");
  msg.set(SecurityResponseID_6);
  SecurityTypes_0.insert(SecurityResponseID_6.getString());
  FIX::SecurityResponseType SecurityResponseType_2(5);
  msg.set(SecurityResponseType_2);
  SecurityTypes_0.insert(SecurityResponseType_2.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_12('0');
  msg.set(SubscriptionRequestType_12);
  SecurityTypes_0.insert(SubscriptionRequestType_12.getString());
  FIX::Text Text_92("STRING_561769642");
  msg.set(Text_92);
  SecurityTypes_0.insert(Text_92.getString());
  FIX::TotNoSecurityTypes TotNoSecurityTypes_0(2085049002);
  msg.set(TotNoSecurityTypes_0);
  SecurityTypes_0.insert(TotNoSecurityTypes_0.getString());
  FIX::TradingSessionID TradingSessionID_116("STRING_4");
  msg.set(TradingSessionID_116);
  SecurityTypes_0.insert(TradingSessionID_116.getString());
  FIX::TradingSessionSubID TradingSessionSubID_116("STRING_7");
  msg.set(TradingSessionSubID_116);
  SecurityTypes_0.insert(TradingSessionSubID_116.getString());
  all_values.push_back(SecurityTypes_0);

  all_compo_names.insert("SecurityTypes");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_17;
  FIX::ApplID ApplID_17("STRING_489267298");
  msg.set(ApplID_17);
  ApplicationSequenceControl_17.insert(ApplID_17.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_17(406944918);
  msg.set(ApplLastSeqNum_17);
  ApplicationSequenceControl_17.insert(ApplLastSeqNum_17.getString());
  FIX::ApplResendFlag ApplResendFlag_17(false);
  msg.set(ApplResendFlag_17);
  ApplicationSequenceControl_17.insert(ApplResendFlag_17.getString());
  FIX::ApplSeqNum ApplSeqNum_17(1576737482);
  msg.set(ApplSeqNum_17);
  ApplicationSequenceControl_17.insert(ApplSeqNum_17.getString());
  all_values.push_back(ApplicationSequenceControl_17);
  all_compo_names.insert("ApplicationSequenceControl");

  // SecTypesGrp
  // Group SecTypesGrp.NoSecurityTypes
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_0;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_0;
    FIX::CFICode CFICode_90("STRING_297758056");
    noSecurityTypes_0_0.set(CFICode_90);
    SecTypesGrp_NoSecurityTypes_0.insert(CFICode_90.getString());
    FIX::Product Product_93(6);
    noSecurityTypes_0_0.set(Product_93);
    SecTypesGrp_NoSecurityTypes_0.insert(Product_93.getString());
    FIX::SecuritySubType SecuritySubType_92("STRING_1559631262");
    noSecurityTypes_0_0.set(SecuritySubType_92);
    SecTypesGrp_NoSecurityTypes_0.insert(SecuritySubType_92.getString());
    FIX::SecurityType SecurityType_93("STRING_BRADY");
    noSecurityTypes_0_0.set(SecurityType_93);
    SecTypesGrp_NoSecurityTypes_0.insert(SecurityType_93.getString());
    FIX::TransactTime TransactTime_68(FIX::UTCTIMESTAMP(7, 25, 7, 13, 11, 2001));
    noSecurityTypes_0_0.set(TransactTime_68);
    SecTypesGrp_NoSecurityTypes_0.insert(TransactTime_68.getString());
    all_values.push_back(SecTypesGrp_NoSecurityTypes_0);
    all_compo_names.insert("SecTypesGrp.NoSecurityTypes");

    msg.addGroup(noSecurityTypes_0_0);
  }
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_1;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_1;
    FIX::CFICode CFICode_91("STRING_313846575");
    noSecurityTypes_0_1.set(CFICode_91);
    SecTypesGrp_NoSecurityTypes_1.insert(CFICode_91.getString());
    FIX::Product Product_94(5);
    noSecurityTypes_0_1.set(Product_94);
    SecTypesGrp_NoSecurityTypes_1.insert(Product_94.getString());
    FIX::SecuritySubType SecuritySubType_93("STRING_517812738");
    noSecurityTypes_0_1.set(SecuritySubType_93);
    SecTypesGrp_NoSecurityTypes_1.insert(SecuritySubType_93.getString());
    FIX::SecurityType SecurityType_94("STRING_OOC");
    noSecurityTypes_0_1.set(SecurityType_94);
    SecTypesGrp_NoSecurityTypes_1.insert(SecurityType_94.getString());
    FIX::TransactTime TransactTime_69(FIX::UTCTIMESTAMP(1, 20, 31, 2, 1, 2017));
    noSecurityTypes_0_1.set(TransactTime_69);
    SecTypesGrp_NoSecurityTypes_1.insert(TransactTime_69.getString());
    all_values.push_back(SecTypesGrp_NoSecurityTypes_1);
    all_compo_names.insert("SecTypesGrp.NoSecurityTypes");

    msg.addGroup(noSecurityTypes_0_1);
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
