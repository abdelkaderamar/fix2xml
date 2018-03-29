#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

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
  FIX50SP2::ListCancelRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListCancelRequest_0;
  FIX::EncodedText EncodedText_41("DATA_1241372430");
  msg.set(EncodedText_41);
  ListCancelRequest_0.insert(EncodedText_41.getString());
  FIX::EncodedTextLen EncodedTextLen_41(260541834);
  msg.set(EncodedTextLen_41);
  ListCancelRequest_0.insert(EncodedTextLen_41.getString());
  FIX::ListID ListID_17("STRING_809889337");
  msg.set(ListID_17);
  ListCancelRequest_0.insert(ListID_17.getString());
  FIX::Text Text_41("STRING_1038492582");
  msg.set(Text_41);
  ListCancelRequest_0.insert(Text_41.getString());
  FIX::TradeDate TradeDate_14("LOCALMKTDATE_1269165091");
  msg.set(TradeDate_14);
  ListCancelRequest_0.insert(TradeDate_14.getString());
  FIX::TradeOriginationDate TradeOriginationDate_8("LOCALMKTDATE_1198394349");
  msg.set(TradeOriginationDate_8);
  ListCancelRequest_0.insert(TradeOriginationDate_8.getString());
  FIX::TransactTime TransactTime_20(FIX::UTCTIMESTAMP(9, 59, 53, 15, 2, 2013));
  msg.set(TransactTime_20);
  ListCancelRequest_0.insert(TransactTime_20.getString());
  all_values.push_back(ListCancelRequest_0);

  all_compo_names.insert("ListCancelRequest");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ListCancelRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_42;
    FIX::PartyID PartyID_42("STRING_1972128789");
    noPartyIDs_0_0.set(PartyID_42);
    Parties_NoPartyIDs_42.insert(PartyID_42.getString());
    FIX::PartyIDSource PartyIDSource_42('3');
    noPartyIDs_0_0.set(PartyIDSource_42);
    Parties_NoPartyIDs_42.insert(PartyIDSource_42.getString());
    FIX::PartyRole PartyRole_42(19);
    noPartyIDs_0_0.set(PartyRole_42);
    Parties_NoPartyIDs_42.insert(PartyRole_42.getString());
    all_values.push_back(Parties_NoPartyIDs_42);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ListCancelRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_91;
      FIX::PartySubID PartySubID_91("STRING_1981365258");
      noPartySubIDs_0_1_0.set(PartySubID_91);
      PtysSubGrp_NoPartySubIDs_91.insert(PartySubID_91.getString());
      FIX::PartySubIDType PartySubIDType_91(15);
      noPartySubIDs_0_1_0.set(PartySubIDType_91);
      PtysSubGrp_NoPartySubIDs_91.insert(PartySubIDType_91.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_91);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
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
