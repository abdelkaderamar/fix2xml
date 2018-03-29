#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

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
  FIX50SP2::ApplicationMessageReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageReport_0;
  FIX::ApplReportID ApplReportID_0("STRING_1803878799");
  msg.set(ApplReportID_0);
  ApplicationMessageReport_0.insert(ApplReportID_0.getString());
  FIX::ApplReportType ApplReportType_0(2);
  msg.set(ApplReportType_0);
  ApplicationMessageReport_0.insert(ApplReportType_0.getString());
  FIX::ApplReqID ApplReqID_0("STRING_2021823470");
  msg.set(ApplReqID_0);
  ApplicationMessageReport_0.insert(ApplReqID_0.getString());
  FIX::EncodedText EncodedText_6("DATA_1381785756");
  msg.set(EncodedText_6);
  ApplicationMessageReport_0.insert(EncodedText_6.getString());
  FIX::EncodedTextLen EncodedTextLen_6(1284678145);
  msg.set(EncodedTextLen_6);
  ApplicationMessageReport_0.insert(EncodedTextLen_6.getString());
  FIX::Text Text_6("STRING_1930273378");
  msg.set(Text_6);
  ApplicationMessageReport_0.insert(Text_6.getString());
  all_values.push_back(ApplicationMessageReport_0);

  all_compo_names.insert("ApplicationMessageReport");

  // ApplIDReportGrp
  // Group ApplIDReportGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageReport::NoApplIDs noApplIDs_0_0;
    // ApplIDReportGrp.NoApplIDs
    multiset<string> ApplIDReportGrp_NoApplIDs_0;
    FIX::ApplNewSeqNum ApplNewSeqNum_0(45448670);
    noApplIDs_0_0.set(ApplNewSeqNum_0);
    ApplIDReportGrp_NoApplIDs_0.insert(ApplNewSeqNum_0.getString());
    FIX::RefApplID RefApplID_0("STRING_2069615007");
    noApplIDs_0_0.set(RefApplID_0);
    ApplIDReportGrp_NoApplIDs_0.insert(RefApplID_0.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_0(1060246142);
    noApplIDs_0_0.set(RefApplLastSeqNum_0);
    ApplIDReportGrp_NoApplIDs_0.insert(RefApplLastSeqNum_0.getString());
    all_values.push_back(ApplIDReportGrp_NoApplIDs_0);
    all_compo_names.insert("ApplIDReportGrp.NoApplIDs");

    msg.addGroup(noApplIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageReport::NoApplIDs noApplIDs_0_1;
    // ApplIDReportGrp.NoApplIDs
    multiset<string> ApplIDReportGrp_NoApplIDs_1;
    FIX::ApplNewSeqNum ApplNewSeqNum_1(1825308900);
    noApplIDs_0_1.set(ApplNewSeqNum_1);
    ApplIDReportGrp_NoApplIDs_1.insert(ApplNewSeqNum_1.getString());
    FIX::RefApplID RefApplID_1("STRING_154600991");
    noApplIDs_0_1.set(RefApplID_1);
    ApplIDReportGrp_NoApplIDs_1.insert(RefApplID_1.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_1(1430113775);
    noApplIDs_0_1.set(RefApplLastSeqNum_1);
    ApplIDReportGrp_NoApplIDs_1.insert(RefApplLastSeqNum_1.getString());
    all_values.push_back(ApplIDReportGrp_NoApplIDs_1);
    all_compo_names.insert("ApplIDReportGrp.NoApplIDs");

    msg.addGroup(noApplIDs_0_1);
  }
  {
    FIX50SP2::ApplicationMessageReport::NoApplIDs noApplIDs_0_2;
    // ApplIDReportGrp.NoApplIDs
    multiset<string> ApplIDReportGrp_NoApplIDs_2;
    FIX::ApplNewSeqNum ApplNewSeqNum_2(493362288);
    noApplIDs_0_2.set(ApplNewSeqNum_2);
    ApplIDReportGrp_NoApplIDs_2.insert(ApplNewSeqNum_2.getString());
    FIX::RefApplID RefApplID_2("STRING_275791875");
    noApplIDs_0_2.set(RefApplID_2);
    ApplIDReportGrp_NoApplIDs_2.insert(RefApplID_2.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_2(1865321971);
    noApplIDs_0_2.set(RefApplLastSeqNum_2);
    ApplIDReportGrp_NoApplIDs_2.insert(RefApplLastSeqNum_2.getString());
    all_values.push_back(ApplIDReportGrp_NoApplIDs_2);
    all_compo_names.insert("ApplIDReportGrp.NoApplIDs");

    msg.addGroup(noApplIDs_0_2);
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
