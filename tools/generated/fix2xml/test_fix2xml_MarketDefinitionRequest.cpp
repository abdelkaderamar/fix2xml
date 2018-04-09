#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDefinitionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinitionRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::MarketDefinitionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinitionRequest_0;
  set_field(msg, FIX::MarketID{"EXCHANGE_1634986390"}, MarketDefinitionRequest_0);
  set_field(msg, FIX::MarketReqID{"STRING_1828014359"}, MarketDefinitionRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_866518836"}, MarketDefinitionRequest_0);
  set_field(msg, FIX::ParentMktSegmID{"STRING_1636991459"}, MarketDefinitionRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'2'}, MarketDefinitionRequest_0);
  all_values.push_back(MarketDefinitionRequest_0);

  all_compo_names.insert("MarketDefinitionRequest");

  // header
  multiset<string> header_44;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_44);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1408724875"}, header_44);
  set_header_field(msg.getHeader(), FIX::BodyLength{281177700}, header_44);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1595069801"}, header_44);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_479344197"}, header_44);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_904039341"}, header_44);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_529652836"}, header_44);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1225723778}, header_44);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_44);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{2101884312}, header_44);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1830660780"}, header_44);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2087524570"}, header_44);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1192101203"}, header_44);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(19, 4, 35, 16, 6, 2002)}, header_44);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_44);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_44);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_79742684"}, header_44);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1376172897}, header_44);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_765105921"}, header_44);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_703347269"}, header_44);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_863675640"}, header_44);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(17, 51, 0, 24, 11, 2010)}, header_44);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1569757025"}, header_44);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_93768876"}, header_44);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1179442933"}, header_44);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_2099409862"}, header_44);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1319492654}, header_44);
  all_values.push_back(header_44);
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
