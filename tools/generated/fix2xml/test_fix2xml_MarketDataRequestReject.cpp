#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataRequestReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataRequestReject, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::MarketDataRequestReject msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequestReject_0;
  set_field(msg, FIX::EncodedText{"DATA_877704865"}, MarketDataRequestReject_0);
  set_field(msg, FIX::EncodedTextLen{1916235360}, MarketDataRequestReject_0);
  set_field(msg, FIX::MDReqID{"STRING_1606313308"}, MarketDataRequestReject_0);
  set_field(msg, FIX::MDReqRejReason{'D'}, MarketDataRequestReject_0);
  set_field(msg, FIX::Text{"STRING_729216902"}, MarketDataRequestReject_0);
  all_values.push_back(MarketDataRequestReject_0);

  all_compo_names.insert("MarketDataRequestReject");

  // MDRjctGrp
  // Group MDRjctGrp.NoAltMDSource
  {
    FIX50SP2::MarketDataRequestReject::NoAltMDSource noAltMDSource_0_0;
    // MDRjctGrp.NoAltMDSource
    multiset<string> MDRjctGrp_NoAltMDSource_0;
    set_field(noAltMDSource_0_0, FIX::AltMDSourceID{"STRING_739076571"}, MDRjctGrp_NoAltMDSource_0);
    all_values.push_back(MDRjctGrp_NoAltMDSource_0);
    all_compo_names.insert("...NoAltMDSource");

    msg.addGroup(noAltMDSource_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MarketDataRequestReject::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_61;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1533823668"}, Parties_NoPartyIDs_61);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_61);
    set_field(noPartyIDs_0_0, FIX::PartyRole{46}, Parties_NoPartyIDs_61);
    all_values.push_back(Parties_NoPartyIDs_61);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_128;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1923194990"}, PtysSubGrp_NoPartySubIDs_128);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_128);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_128);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_129;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1753801884"}, PtysSubGrp_NoPartySubIDs_129);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_129);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_129);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MarketDataRequestReject::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_62;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_903766107"}, Parties_NoPartyIDs_62);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_62);
    set_field(noPartyIDs_0_1, FIX::PartyRole{31}, Parties_NoPartyIDs_62);
    all_values.push_back(Parties_NoPartyIDs_62);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequestReject::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_130;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_343450914"}, PtysSubGrp_NoPartySubIDs_130);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_130);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_130);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // header
  multiset<string> header_41;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_41);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1094579088"}, header_41);
  set_header_field(msg.getHeader(), FIX::BodyLength{1253092317}, header_41);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_527763163"}, header_41);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_909197963"}, header_41);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_484308063"}, header_41);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1703809741"}, header_41);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{569471891}, header_41);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_41);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{434030959}, header_41);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_338223603"}, header_41);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1034835173"}, header_41);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1927583592"}, header_41);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(9, 56, 5, 21, 8, 2007)}, header_41);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_41);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_41);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1310620516"}, header_41);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1206661210}, header_41);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_218106252"}, header_41);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_66902975"}, header_41);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1591681710"}, header_41);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(23, 24, 21, 24, 6, 2016)}, header_41);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1615586092"}, header_41);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1791426028"}, header_41);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_679737013"}, header_41);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1171912185"}, header_41);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{213414271}, header_41);
  all_values.push_back(header_41);
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
