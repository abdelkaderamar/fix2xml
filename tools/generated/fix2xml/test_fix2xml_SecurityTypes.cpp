#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SecurityTypes msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityTypes_0;
  set_field(msg, FIX::EncodedText{"DATA_184661382"}, SecurityTypes_0);
  set_field(msg, FIX::EncodedTextLen{1194078061}, SecurityTypes_0);
  set_field(msg, FIX::LastFragment{false}, SecurityTypes_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1595233701"}, SecurityTypes_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_578413951"}, SecurityTypes_0);
  set_field(msg, FIX::SecurityReqID{"STRING_754568190"}, SecurityTypes_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_937309696"}, SecurityTypes_0);
  set_field(msg, FIX::SecurityResponseType{4}, SecurityTypes_0);
  set_field(msg, FIX::SubscriptionRequestType{'2'}, SecurityTypes_0);
  set_field(msg, FIX::Text{"STRING_1385829787"}, SecurityTypes_0);
  set_field(msg, FIX::TotNoSecurityTypes{1811638461}, SecurityTypes_0);
  set_field(msg, FIX::TradingSessionID{"STRING_1"}, SecurityTypes_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_4"}, SecurityTypes_0);
  all_values.push_back(SecurityTypes_0);

  all_compo_names.insert("SecurityTypes");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_17;
  set_field(msg, FIX::ApplID{"STRING_1549432079"}, ApplicationSequenceControl_17);
  set_field(msg, FIX::ApplLastSeqNum{22836492}, ApplicationSequenceControl_17);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_17);
  set_field(msg, FIX::ApplSeqNum{119605666}, ApplicationSequenceControl_17);
  all_values.push_back(ApplicationSequenceControl_17);
  all_compo_names.insert(".");

  // SecTypesGrp
  // Group SecTypesGrp.NoSecurityTypes
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_0;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_0;
    set_field(noSecurityTypes_0_0, FIX::CFICode{"STRING_1745252055"}, SecTypesGrp_NoSecurityTypes_0);
    set_field(noSecurityTypes_0_0, FIX::Product{6}, SecTypesGrp_NoSecurityTypes_0);
    set_field(noSecurityTypes_0_0, FIX::SecuritySubType{"STRING_208965292"}, SecTypesGrp_NoSecurityTypes_0);
    set_field(noSecurityTypes_0_0, FIX::SecurityType{"STRING_FAC"}, SecTypesGrp_NoSecurityTypes_0);
    set_field(noSecurityTypes_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(17, 36, 5, 25, 3, 2007)}, SecTypesGrp_NoSecurityTypes_0);
    all_values.push_back(SecTypesGrp_NoSecurityTypes_0);
    all_compo_names.insert("...NoSecurityTypes");

    msg.addGroup(noSecurityTypes_0_0);
  }
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_1;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_1;
    set_field(noSecurityTypes_0_1, FIX::CFICode{"STRING_1219904412"}, SecTypesGrp_NoSecurityTypes_1);
    set_field(noSecurityTypes_0_1, FIX::Product{5}, SecTypesGrp_NoSecurityTypes_1);
    set_field(noSecurityTypes_0_1, FIX::SecuritySubType{"STRING_12685139"}, SecTypesGrp_NoSecurityTypes_1);
    set_field(noSecurityTypes_0_1, FIX::SecurityType{"STRING_STN"}, SecTypesGrp_NoSecurityTypes_1);
    set_field(noSecurityTypes_0_1, FIX::TransactTime{FIX::UTCTIMESTAMP(8, 36, 30, 16, 9, 2016)}, SecTypesGrp_NoSecurityTypes_1);
    all_values.push_back(SecTypesGrp_NoSecurityTypes_1);
    all_compo_names.insert("...NoSecurityTypes");

    msg.addGroup(noSecurityTypes_0_1);
  }
  {
    FIX50SP2::SecurityTypes::NoSecurityTypes noSecurityTypes_0_2;
    // SecTypesGrp.NoSecurityTypes
    multiset<string> SecTypesGrp_NoSecurityTypes_2;
    set_field(noSecurityTypes_0_2, FIX::CFICode{"STRING_1783574675"}, SecTypesGrp_NoSecurityTypes_2);
    set_field(noSecurityTypes_0_2, FIX::Product{11}, SecTypesGrp_NoSecurityTypes_2);
    set_field(noSecurityTypes_0_2, FIX::SecuritySubType{"STRING_1118176504"}, SecTypesGrp_NoSecurityTypes_2);
    set_field(noSecurityTypes_0_2, FIX::SecurityType{"STRING_FOR"}, SecTypesGrp_NoSecurityTypes_2);
    set_field(noSecurityTypes_0_2, FIX::TransactTime{FIX::UTCTIMESTAMP(4, 14, 30, 15, 6, 2004)}, SecTypesGrp_NoSecurityTypes_2);
    all_values.push_back(SecTypesGrp_NoSecurityTypes_2);
    all_compo_names.insert("...NoSecurityTypes");

    msg.addGroup(noSecurityTypes_0_2);
  }
  // header
  multiset<string> header_89;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_3"}, header_89);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_314083093"}, header_89);
  set_header_field(msg.getHeader(), FIX::BodyLength{1821324345}, header_89);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1182152776"}, header_89);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_285943661"}, header_89);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_375270702"}, header_89);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1591604838"}, header_89);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{272945603}, header_89);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_89);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{664025602}, header_89);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1898304966"}, header_89);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_215979598"}, header_89);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_930524427"}, header_89);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(6, 4, 21, 27, 1, 2013)}, header_89);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_89);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_89);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_446032827"}, header_89);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{574649930}, header_89);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_790578837"}, header_89);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1587045823"}, header_89);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_900753244"}, header_89);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(3, 25, 41, 18, 3, 2006)}, header_89);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1762025627"}, header_89);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1424651719"}, header_89);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_378503761"}, header_89);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1206146817"}, header_89);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1697597323}, header_89);
  all_values.push_back(header_89);
  all_compo_names.insert(".header");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";
  cout << "////////////////////////////////////////////" << endl;
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
