#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementInstructionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementInstructionRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SettlementInstructionRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructionRequest_0;
  set_field(msg, FIX::AllocAccount{"STRING_581798220"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::AllocAcctIDSource{1870172419}, SettlementInstructionRequest_0);
  set_field(msg, FIX::CFICode{"STRING_1448418641"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(14, 32, 9, 22, 6, 2000)}, SettlementInstructionRequest_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(16, 55, 23, 15, 10, 2006)}, SettlementInstructionRequest_0);
  set_field(msg, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(1, 31, 25, 22, 1, 2002)}, SettlementInstructionRequest_0);
  set_field(msg, FIX::Product{5}, SettlementInstructionRequest_0);
  set_field(msg, FIX::SecurityType{"STRING_RAN"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::SettlCurrency{"GBP"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::SettlInstReqID{"STRING_1059069212"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::Side{'D'}, SettlementInstructionRequest_0);
  set_field(msg, FIX::StandInstDbID{"STRING_377137291"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::StandInstDbName{"STRING_1640867432"}, SettlementInstructionRequest_0);
  set_field(msg, FIX::StandInstDbType{3}, SettlementInstructionRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(11, 21, 45, 1, 1, 2000)}, SettlementInstructionRequest_0);
  all_values.push_back(SettlementInstructionRequest_0);

  all_compo_names.insert("SettlementInstructionRequest");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::SettlementInstructionRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_138;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_112144430"}, Parties_NoPartyIDs_138);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_138);
    set_field(noPartyIDs_0_0, FIX::PartyRole{17}, Parties_NoPartyIDs_138);
    all_values.push_back(Parties_NoPartyIDs_138);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_274;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_144969741"}, PtysSubGrp_NoPartySubIDs_274);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_274);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_274);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_275;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_2022431426"}, PtysSubGrp_NoPartySubIDs_275);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_275);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_275);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SettlementInstructionRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_276;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1992084942"}, PtysSubGrp_NoPartySubIDs_276);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_276);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_276);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // header
  multiset<string> header_90;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_5"}, header_90);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_255748781"}, header_90);
  set_header_field(msg.getHeader(), FIX::BodyLength{900220202}, header_90);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1413356341"}, header_90);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1805604326"}, header_90);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1580785653"}, header_90);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1805687376"}, header_90);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{485144294}, header_90);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_90);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1256681580}, header_90);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_862281586"}, header_90);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2133238650"}, header_90);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_430364555"}, header_90);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(21, 48, 28, 22, 1, 2010)}, header_90);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_90);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_90);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_817470216"}, header_90);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1780803168}, header_90);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_75724773"}, header_90);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_962439957"}, header_90);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_2038881942"}, header_90);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(12, 16, 41, 25, 10, 2014)}, header_90);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1301531014"}, header_90);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1797352695"}, header_90);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_507082569"}, header_90);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_959734742"}, header_90);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{135013342}, header_90);
  all_values.push_back(header_90);
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
