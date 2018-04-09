#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RegistrationInstructionsResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RegistrationInstructionsResponse, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::RegistrationInstructionsResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructionsResponse_0;
  set_field(msg, FIX::Account{"STRING_477794536"}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::AcctIDSource{99}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::ClOrdID{"STRING_1088696842"}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistID{"STRING_1110518431"}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistRefID{"STRING_1970392572"}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistRejReasonCode{3}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistRejReasonText{"STRING_1538950126"}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistStatus{'H'}, RegistrationInstructionsResponse_0);
  set_field(msg, FIX::RegistTransType{'0'}, RegistrationInstructionsResponse_0);
  all_values.push_back(RegistrationInstructionsResponse_0);

  all_compo_names.insert("RegistrationInstructionsResponse");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_131;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1651478612"}, Parties_NoPartyIDs_131);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_131);
    set_field(noPartyIDs_0_0, FIX::PartyRole{55}, Parties_NoPartyIDs_131);
    all_values.push_back(Parties_NoPartyIDs_131);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_259;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_908953356"}, PtysSubGrp_NoPartySubIDs_259);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_259);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_259);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_260;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_972469063"}, PtysSubGrp_NoPartySubIDs_260);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_260);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_260);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_261;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_2145409170"}, PtysSubGrp_NoPartySubIDs_261);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_261);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_261);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_132;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_922789963"}, Parties_NoPartyIDs_132);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_132);
    set_field(noPartyIDs_0_1, FIX::PartyRole{83}, Parties_NoPartyIDs_132);
    all_values.push_back(Parties_NoPartyIDs_132);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_262;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1928033106"}, PtysSubGrp_NoPartySubIDs_262);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_262);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_262);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_263;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1590858721"}, PtysSubGrp_NoPartySubIDs_263);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_263);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_263);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_264;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1147677325"}, PtysSubGrp_NoPartySubIDs_264);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_264);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_264);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_133;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_626244531"}, Parties_NoPartyIDs_133);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_133);
    set_field(noPartyIDs_0_2, FIX::PartyRole{43}, Parties_NoPartyIDs_133);
    all_values.push_back(Parties_NoPartyIDs_133);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_265;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_588506645"}, PtysSubGrp_NoPartySubIDs_265);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_265);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_265);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_266;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_1974301636"}, PtysSubGrp_NoPartySubIDs_266);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_266);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_266);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::RegistrationInstructionsResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_267;
      set_field(noPartySubIDs_2_1_2, FIX::PartySubID{"STRING_1192255036"}, PtysSubGrp_NoPartySubIDs_267);
      set_field(noPartySubIDs_2_1_2, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_267);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_267);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // header
  multiset<string> header_77;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_77);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_696250000"}, header_77);
  set_header_field(msg.getHeader(), FIX::BodyLength{196865356}, header_77);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_988386041"}, header_77);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1435967349"}, header_77);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1105818712"}, header_77);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1437150434"}, header_77);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{260952764}, header_77);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_77);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1435075956}, header_77);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_914739755"}, header_77);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1621892150"}, header_77);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_374511190"}, header_77);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(10, 8, 24, 7, 6, 2005)}, header_77);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_77);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_77);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_596778435"}, header_77);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1205307024}, header_77);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1894678982"}, header_77);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1185285081"}, header_77);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_923877698"}, header_77);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(5, 54, 1, 0, 3, 2011)}, header_77);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1992958029"}, header_77);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_2100866436"}, header_77);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_360408842"}, header_77);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1282624815"}, header_77);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{214335552}, header_77);
  all_values.push_back(header_77);
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
