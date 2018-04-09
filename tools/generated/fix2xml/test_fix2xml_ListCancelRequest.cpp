#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListCancelRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ListCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListCancelRequest_0;
  set_field(msg, FIX::EncodedText{"DATA_419791652"}, ListCancelRequest_0);
  set_field(msg, FIX::EncodedTextLen{1218948959}, ListCancelRequest_0);
  set_field(msg, FIX::ListID{"STRING_1844760329"}, ListCancelRequest_0);
  set_field(msg, FIX::Text{"STRING_473000757"}, ListCancelRequest_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_297470776"}, ListCancelRequest_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_644066726"}, ListCancelRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(5, 15, 41, 1, 5, 2008)}, ListCancelRequest_0);
  all_values.push_back(ListCancelRequest_0);

  all_compo_names.insert("ListCancelRequest");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ListCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_52;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1047958037"}, Parties_NoPartyIDs_52);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_52);
    set_field(noPartyIDs_0_0, FIX::PartyRole{30}, Parties_NoPartyIDs_52);
    all_values.push_back(Parties_NoPartyIDs_52);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_114;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_928686660"}, PtysSubGrp_NoPartySubIDs_114);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_114);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_114);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // header
  multiset<string> header_34;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_6"}, header_34);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1273691895"}, header_34);
  set_header_field(msg.getHeader(), FIX::BodyLength{670243591}, header_34);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1214931188"}, header_34);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_48735859"}, header_34);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_589099960"}, header_34);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1864355395"}, header_34);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1490077691}, header_34);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_34);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{847188855}, header_34);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_916447258"}, header_34);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1036765386"}, header_34);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_2066137814"}, header_34);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(15, 23, 45, 20, 5, 2016)}, header_34);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_34);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_34);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_457787028"}, header_34);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{686056610}, header_34);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_979094475"}, header_34);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1505745065"}, header_34);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_920972900"}, header_34);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(0, 20, 58, 5, 4, 2005)}, header_34);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1011693737"}, header_34);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1024603667"}, header_34);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1392626049"}, header_34);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_728565485"}, header_34);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{367197710}, header_34);
  all_values.push_back(header_34);
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
