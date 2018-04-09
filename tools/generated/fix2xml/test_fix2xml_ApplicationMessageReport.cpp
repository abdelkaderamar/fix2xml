#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ApplicationMessageReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ApplicationMessageReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ApplicationMessageReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageReport_0;
  set_field(msg, FIX::ApplReportID{"STRING_379207987"}, ApplicationMessageReport_0);
  set_field(msg, FIX::ApplReportType{2}, ApplicationMessageReport_0);
  set_field(msg, FIX::ApplReqID{"STRING_1113338100"}, ApplicationMessageReport_0);
  set_field(msg, FIX::EncodedText{"DATA_654517878"}, ApplicationMessageReport_0);
  set_field(msg, FIX::EncodedTextLen{1895525947}, ApplicationMessageReport_0);
  set_field(msg, FIX::Text{"STRING_1539044254"}, ApplicationMessageReport_0);
  all_values.push_back(ApplicationMessageReport_0);

  all_compo_names.insert("ApplicationMessageReport");

  // ApplIDReportGrp
  // Group ApplIDReportGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageReport::NoApplIDs noApplIDs_0_0;
    // ApplIDReportGrp.NoApplIDs
    multiset<string> ApplIDReportGrp_NoApplIDs_0;
    set_field(noApplIDs_0_0, FIX::ApplNewSeqNum{1858739523}, ApplIDReportGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplID{"STRING_434399089"}, ApplIDReportGrp_NoApplIDs_0);
    set_field(noApplIDs_0_0, FIX::RefApplLastSeqNum{1900215514}, ApplIDReportGrp_NoApplIDs_0);
    all_values.push_back(ApplIDReportGrp_NoApplIDs_0);
    all_compo_names.insert("...NoApplIDs");

    msg.addGroup(noApplIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageReport::NoApplIDs noApplIDs_0_1;
    // ApplIDReportGrp.NoApplIDs
    multiset<string> ApplIDReportGrp_NoApplIDs_1;
    set_field(noApplIDs_0_1, FIX::ApplNewSeqNum{1134059429}, ApplIDReportGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplID{"STRING_391557002"}, ApplIDReportGrp_NoApplIDs_1);
    set_field(noApplIDs_0_1, FIX::RefApplLastSeqNum{1747577706}, ApplIDReportGrp_NoApplIDs_1);
    all_values.push_back(ApplIDReportGrp_NoApplIDs_1);
    all_compo_names.insert("...NoApplIDs");

    msg.addGroup(noApplIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageReport::NoApplIDs noApplIDs_0_2;
    // ApplIDReportGrp.NoApplIDs
    multiset<string> ApplIDReportGrp_NoApplIDs_2;
    set_field(noApplIDs_0_2, FIX::ApplNewSeqNum{1836752338}, ApplIDReportGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::RefApplID{"STRING_1372185727"}, ApplIDReportGrp_NoApplIDs_2);
    set_field(noApplIDs_0_2, FIX::RefApplLastSeqNum{1830203304}, ApplIDReportGrp_NoApplIDs_2);
    all_values.push_back(ApplIDReportGrp_NoApplIDs_2);
    all_compo_names.insert("...NoApplIDs");

    msg.addGroup(noApplIDs_0_2);
  }
  // header
  multiset<string> header_7;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_0"}, header_7);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_594873502"}, header_7);
  set_header_field(msg.getHeader(), FIX::BodyLength{601948144}, header_7);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1791110262"}, header_7);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1825650107"}, header_7);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1304273225"}, header_7);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_48865181"}, header_7);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{586634317}, header_7);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_7);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1321419980}, header_7);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1976683862"}, header_7);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2059611881"}, header_7);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1430780989"}, header_7);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(3, 56, 22, 19, 7, 2009)}, header_7);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_7);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_7);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_471778996"}, header_7);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{425226382}, header_7);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_389391817"}, header_7);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1605838425"}, header_7);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_816783384"}, header_7);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(12, 24, 0, 22, 11, 2014)}, header_7);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1061997800"}, header_7);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_314525425"}, header_7);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1578426902"}, header_7);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1110862981"}, header_7);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{901159743}, header_7);
  all_values.push_back(header_7);
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
