#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NetworkCounterpartySystemStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NetworkCounterpartySystemStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::NetworkCounterpartySystemStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NetworkCounterpartySystemStatusRequest_0;
  set_field(msg, FIX::NetworkRequestID{"STRING_1240165314"}, NetworkCounterpartySystemStatusRequest_0);
  set_field(msg, FIX::NetworkRequestType{1}, NetworkCounterpartySystemStatusRequest_0);
  all_values.push_back(NetworkCounterpartySystemStatusRequest_0);

  all_compo_names.insert("NetworkCounterpartySystemStatusRequest");

  // CompIDReqGrp
  // Group CompIDReqGrp.NoCompIDs
  {
    FIX50SP2::NetworkCounterpartySystemStatusRequest::NoCompIDs noCompIDs_0_0;
    // CompIDReqGrp.NoCompIDs
    multiset<string> CompIDReqGrp_NoCompIDs_0;
    set_field(noCompIDs_0_0, FIX::DeskID{"STRING_108238646"}, CompIDReqGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::LocationID{"STRING_287462569"}, CompIDReqGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::RefCompID{"STRING_1537829198"}, CompIDReqGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::RefSubID{"STRING_1045086060"}, CompIDReqGrp_NoCompIDs_0);
    all_values.push_back(CompIDReqGrp_NoCompIDs_0);
    all_compo_names.insert("...NoCompIDs");

    msg.addGroup(noCompIDs_0_0);
  }
  {
    FIX50SP2::NetworkCounterpartySystemStatusRequest::NoCompIDs noCompIDs_0_1;
    // CompIDReqGrp.NoCompIDs
    multiset<string> CompIDReqGrp_NoCompIDs_1;
    set_field(noCompIDs_0_1, FIX::DeskID{"STRING_131512149"}, CompIDReqGrp_NoCompIDs_1);
    set_field(noCompIDs_0_1, FIX::LocationID{"STRING_1182392742"}, CompIDReqGrp_NoCompIDs_1);
    set_field(noCompIDs_0_1, FIX::RefCompID{"STRING_520695229"}, CompIDReqGrp_NoCompIDs_1);
    set_field(noCompIDs_0_1, FIX::RefSubID{"STRING_1779332988"}, CompIDReqGrp_NoCompIDs_1);
    all_values.push_back(CompIDReqGrp_NoCompIDs_1);
    all_compo_names.insert("...NoCompIDs");

    msg.addGroup(noCompIDs_0_1);
  }
  // header
  multiset<string> header_49;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_6"}, header_49);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_439716698"}, header_49);
  set_header_field(msg.getHeader(), FIX::BodyLength{474409086}, header_49);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1927853493"}, header_49);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_314844562"}, header_49);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1864752406"}, header_49);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_366421410"}, header_49);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{947228906}, header_49);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_49);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1068035401}, header_49);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_595974739"}, header_49);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2061328708"}, header_49);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_5543679"}, header_49);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(15, 47, 37, 7, 8, 2006)}, header_49);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_49);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_49);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1959839971"}, header_49);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1681668060}, header_49);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1221436157"}, header_49);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1350185522"}, header_49);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_579270473"}, header_49);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(0, 42, 7, 14, 9, 2013)}, header_49);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_8620120"}, header_49);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1854526963"}, header_49);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1176475491"}, header_49);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_375041530"}, header_49);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{654272221}, header_49);
  all_values.push_back(header_49);
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
