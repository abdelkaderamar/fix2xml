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
  multiset<string> ApplicationMessageReport_0;
  FIX::ApplReportID ApplReportID_0("STRING_742897483");
  msg.set(ApplReportID_0);
  ApplicationMessageReport_0.insert(ApplReportID_0.getString());
  FIX::ApplReportType ApplReportType_0(0);
  msg.set(ApplReportType_0);
  ApplicationMessageReport_0.insert(ApplReportType_0.getString());
  FIX::ApplReqID ApplReqID_0("STRING_1084933910");
  msg.set(ApplReqID_0);
  ApplicationMessageReport_0.insert(ApplReqID_0.getString());
  FIX::EncodedText EncodedText_6("DATA_218309115");
  msg.set(EncodedText_6);
  ApplicationMessageReport_0.insert(EncodedText_6.getString());
  FIX::EncodedTextLen EncodedTextLen_6(1277567653);
  msg.set(EncodedTextLen_6);
  ApplicationMessageReport_0.insert(EncodedTextLen_6.getString());
  FIX::Text Text_6("STRING_2024928698");
  msg.set(Text_6);
  ApplicationMessageReport_0.insert(Text_6.getString());
  all_values.push_back(ApplicationMessageReport_0);

  // ApplIDReportGrp
  // Group ApplIDReportGrp.NoApplIDs
  {
    FIX50SP2::ApplicationMessageReport::NoApplIDs noApplIDs_0_0;
    // ApplIDReportGrp.NoApplIDs
    multiset<string> ApplIDReportGrp_NoApplIDs_0;
    FIX::ApplNewSeqNum ApplNewSeqNum_0(1894435158);
    noApplIDs_0_0.set(ApplNewSeqNum_0);
    ApplIDReportGrp_NoApplIDs_0.insert(ApplNewSeqNum_0.getString());
    FIX::RefApplID RefApplID_0("STRING_380766000");
    noApplIDs_0_0.set(RefApplID_0);
    ApplIDReportGrp_NoApplIDs_0.insert(RefApplID_0.getString());
    FIX::RefApplLastSeqNum RefApplLastSeqNum_0(1935800060);
    noApplIDs_0_0.set(RefApplLastSeqNum_0);
    ApplIDReportGrp_NoApplIDs_0.insert(RefApplLastSeqNum_0.getString());
    all_values.push_back(ApplIDReportGrp_NoApplIDs_0);

    msg.addGroup(noApplIDs_0_0);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
