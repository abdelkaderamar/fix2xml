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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ApplicationMessageReport msg;

  list<multiset<string>> all_values;
  multiset<string> ApplicationMessageReport_0;
  FIX::ApplReportID ApplReportID_0("STRING_1635590811");
  msg.set(ApplReportID_0);
  ApplicationMessageReport_0.insert(ApplReportID_0.getString());
  FIX::ApplReportType ApplReportType_0(2);
  msg.set(ApplReportType_0);
  ApplicationMessageReport_0.insert(ApplReportType_0.getString());
  FIX::ApplReqID ApplReqID_0("STRING_113253033");
  msg.set(ApplReqID_0);
  ApplicationMessageReport_0.insert(ApplReqID_0.getString());
  FIX::EncodedText EncodedText_6("DATA_833418496");
  msg.set(EncodedText_6);
  ApplicationMessageReport_0.insert(EncodedText_6.getString());
  FIX::EncodedTextLen EncodedTextLen_6(566524436);
  msg.set(EncodedTextLen_6);
  ApplicationMessageReport_0.insert(EncodedTextLen_6.getString());
  FIX::Text Text_6("STRING_2073246585");
  msg.set(Text_6);
  ApplicationMessageReport_0.insert(Text_6.getString());
  all_values.push_back(ApplicationMessageReport_0);

  // ApplIDReportGrp
  // Group ApplIDReportGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageReport::NoApplIDs noApplIDs_0_0;
    // ApplIDReportGrp.NoApplIDs
    multiset<string> ApplIDReportGrp_NoApplIDs_0;
    FIX::ApplNewSeqNum ApplNewSeqNum_0(1792122911);
    noApplIDs_0_0.set(ApplNewSeqNum_0);
    ApplIDReportGrp_NoApplIDs_0.insert(ApplNewSeqNum_0.getString());
    FIX::RefApplID RefApplID_0("STRING_1158274695");
    noApplIDs_0_0.set(RefApplID_0);
    ApplIDReportGrp_NoApplIDs_0.insert(RefApplID_0.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_0(926521176);
    noApplIDs_0_0.set(RefApplLastSeqNum_0);
    ApplIDReportGrp_NoApplIDs_0.insert(RefApplLastSeqNum_0.getString());
    all_values.push_back(ApplIDReportGrp_NoApplIDs_0);

    msg.addGroup(noApplIDs_0_0);
  }
  {
    FIX50SP2::ApplicationMessageReport::NoApplIDs noApplIDs_0_1;
    // ApplIDReportGrp.NoApplIDs
    multiset<string> ApplIDReportGrp_NoApplIDs_1;
    FIX::ApplNewSeqNum ApplNewSeqNum_1(802761514);
    noApplIDs_0_1.set(ApplNewSeqNum_1);
    ApplIDReportGrp_NoApplIDs_1.insert(ApplNewSeqNum_1.getString());
    FIX::RefApplID RefApplID_1("STRING_1052412196");
    noApplIDs_0_1.set(RefApplID_1);
    ApplIDReportGrp_NoApplIDs_1.insert(RefApplID_1.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_1(102686337);
    noApplIDs_0_1.set(RefApplLastSeqNum_1);
    ApplIDReportGrp_NoApplIDs_1.insert(RefApplLastSeqNum_1.getString());
    all_values.push_back(ApplIDReportGrp_NoApplIDs_1);

    msg.addGroup(noApplIDs_0_1);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
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
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
