#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NetworkCounterpartySystemStatusResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NetworkCounterpartySystemStatusResponse, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::NetworkCounterpartySystemStatusResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NetworkCounterpartySystemStatusResponse_0;
  set_field(msg, FIX::LastNetworkResponseID{"STRING_780425236"}, NetworkCounterpartySystemStatusResponse_0);
  set_field(msg, FIX::NetworkRequestID{"STRING_1443076932"}, NetworkCounterpartySystemStatusResponse_0);
  set_field(msg, FIX::NetworkResponseID{"STRING_1250246960"}, NetworkCounterpartySystemStatusResponse_0);
  set_field(msg, FIX::NetworkStatusResponseType{1}, NetworkCounterpartySystemStatusResponse_0);
  all_values.push_back(NetworkCounterpartySystemStatusResponse_0);

  all_compo_names.insert("NetworkCounterpartySystemStatusResponse");

  // CompIDStatGrp
  // Group CompIDStatGrp.NoCompIDs
  {
    FIX50SP2::NetworkCounterpartySystemStatusResponse::NoCompIDs noCompIDs_0_0;
    // CompIDStatGrp.NoCompIDs
    multiset<string> CompIDStatGrp_NoCompIDs_0;
    set_field(noCompIDs_0_0, FIX::DeskID{"STRING_1149101292"}, CompIDStatGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::LocationID{"STRING_801691096"}, CompIDStatGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::RefCompID{"STRING_797641710"}, CompIDStatGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::RefSubID{"STRING_448385981"}, CompIDStatGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::StatusText{"STRING_1134955195"}, CompIDStatGrp_NoCompIDs_0);
    set_field(noCompIDs_0_0, FIX::StatusValue{3}, CompIDStatGrp_NoCompIDs_0);
    all_values.push_back(CompIDStatGrp_NoCompIDs_0);
    all_compo_names.insert("...NoCompIDs");

    msg.addGroup(noCompIDs_0_0);
  }
  // header
  multiset<string> header_50;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_50);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_560900961"}, header_50);
  set_header_field(msg.getHeader(), FIX::BodyLength{1160756265}, header_50);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_362051855"}, header_50);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_95085374"}, header_50);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_234708774"}, header_50);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1712237377"}, header_50);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{674355847}, header_50);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_50);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{2097331993}, header_50);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1774321549"}, header_50);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_424971080"}, header_50);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_178098620"}, header_50);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(21, 0, 36, 0, 11, 2013)}, header_50);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_50);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_50);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_630599150"}, header_50);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{240381541}, header_50);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1305974166"}, header_50);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1779700442"}, header_50);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1042072637"}, header_50);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(0, 4, 46, 23, 3, 2008)}, header_50);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_992350162"}, header_50);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_685530520"}, header_50);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1578379946"}, header_50);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_557103891"}, header_50);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1359886367}, header_50);
  all_values.push_back(header_50);
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
