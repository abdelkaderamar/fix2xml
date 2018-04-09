#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ApplicationMessageRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ApplicationMessageRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ApplMsgReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ApplicationMessageRequest_message_t_0;
  elt.add_attribute("ApplReqID", "ApplReqID_t_1905111925"); // 0
  ApplicationMessageRequest_message_t_0.insert("ApplReqID_t_1905111925");
  elt.add_attribute("ApplReqTyp", "4"); // 0
  ApplicationMessageRequest_message_t_0.insert("4");
  elt.add_attribute("Txt", "Text_t_1625903378"); // 0
  ApplicationMessageRequest_message_t_0.insert("Text_t_1625903378");
  elt.add_attribute("EncTxtLen", "1645453237"); // 0
  ApplicationMessageRequest_message_t_0.insert("1645453237");
  elt.add_attribute("EncTxt", "EncodedText_t_1389553090"); // 0
  ApplicationMessageRequest_message_t_0.insert("EncodedText_t_1389553090");
  all_values.push_back(ApplicationMessageRequest_message_t_0);
  all_compo_names.insert("ApplicationMessageRequest_message_t");

  { // Hdr
    xml_element Hdr_8{"Hdr"};
    multiset<string> Hdr_8_set;
    Hdr_8.add_attribute("SeqNum", "151839156"); // 1
    Hdr_8_set.insert("151839156");
    Hdr_8.add_attribute("SID", "SenderCompID_t_1676225726"); // 1
    Hdr_8_set.insert("SenderCompID_t_1676225726");
    Hdr_8.add_attribute("TID", "TargetCompID_t_1165348973"); // 1
    Hdr_8_set.insert("TargetCompID_t_1165348973");
    Hdr_8.add_attribute("OBID", "OnBehalfOfCompID_t_289808103"); // 1
    Hdr_8_set.insert("OnBehalfOfCompID_t_289808103");
    Hdr_8.add_attribute("D2ID", "DeliverToCompID_t_188875415"); // 1
    Hdr_8_set.insert("DeliverToCompID_t_188875415");
    Hdr_8.add_attribute("SSub", "SenderSubID_t_875123330"); // 1
    Hdr_8_set.insert("SenderSubID_t_875123330");
    Hdr_8.add_attribute("SLoc", "SenderLocationID_t_56899827"); // 1
    Hdr_8_set.insert("SenderLocationID_t_56899827");
    Hdr_8.add_attribute("TSub", "TargetSubID_t_1997242542"); // 1
    Hdr_8_set.insert("TargetSubID_t_1997242542");
    Hdr_8.add_attribute("TLoc", "TargetLocationID_t_1045071138"); // 1
    Hdr_8_set.insert("TargetLocationID_t_1045071138");
    Hdr_8.add_attribute("OBSub", "OnBehalfOfSubID_t_13712519"); // 1
    Hdr_8_set.insert("OnBehalfOfSubID_t_13712519");
    Hdr_8.add_attribute("OBLoc", "OnBehalfOfLocationID_t_670942735"); // 1
    Hdr_8_set.insert("OnBehalfOfLocationID_t_670942735");
    Hdr_8.add_attribute("D2Sub", "DeliverToSubID_t_453154438"); // 1
    Hdr_8_set.insert("DeliverToSubID_t_453154438");
    Hdr_8.add_attribute("D2Loc", "DeliverToLocationID_t_1396999662"); // 1
    Hdr_8_set.insert("DeliverToLocationID_t_1396999662");
    Hdr_8.add_attribute("PosDup", "N"); // 1
    Hdr_8_set.insert("N");
    Hdr_8.add_attribute("PosRsnd", "N"); // 1
    Hdr_8_set.insert("N");
    Hdr_8.add_attribute("Snt", "SendingTime_t_612997417"); // 1
    Hdr_8_set.insert("SendingTime_t_612997417");
    Hdr_8.add_attribute("OrigSnt", "OrigSendingTime_t_156514234"); // 1
    Hdr_8_set.insert("OrigSendingTime_t_156514234");
    Hdr_8.add_attribute("MsgEncd", "MessageEncoding_t_1468480442"); // 1
    Hdr_8_set.insert("MessageEncoding_t_1468480442");
    all_values.push_back(Hdr_8_set);
    all_compo_names.insert("Hdr_8_set");

    {
      xml_element Hop_8{"Hop"};
      multiset<string> Hop_8_set;
      Hop_8.add_attribute("ID", "HopCompID_t_2130447664"); // 2
      Hop_8_set.insert("HopCompID_t_2130447664");
      Hop_8.add_attribute("Ref", "239917526"); // 2
      Hop_8_set.insert("239917526");
      Hop_8.add_attribute("Snt", "HopSendingTime_t_1303622154"); // 2
      Hop_8_set.insert("HopSendingTime_t_1303622154");
      all_values.push_back(Hop_8_set);
      all_compo_names.insert("Hop_8_set");

      Hdr_8.add_element(Hop_8);
    }
    elt.add_element(Hdr_8);
  } // end Hdr
  { // ApplIDReqGrp
    xml_element ApplIDReqGrp_0{"ApplIDReqGrp"};
    multiset<string> ApplIDReqGrp_0_set;
    ApplIDReqGrp_0.add_attribute("RefApplID", "RefApplID_t_2101936165"); // 1
    ApplIDReqGrp_0_set.insert("RefApplID_t_2101936165");
    ApplIDReqGrp_0.add_attribute("RefID", "RefApplReqID_t_663681324"); // 1
    ApplIDReqGrp_0_set.insert("RefApplReqID_t_663681324");
    ApplIDReqGrp_0.add_attribute("ApplBegSeqNum", "497915090"); // 1
    ApplIDReqGrp_0_set.insert("497915090");
    ApplIDReqGrp_0.add_attribute("ApplEndSeq", "1780748970"); // 1
    ApplIDReqGrp_0_set.insert("1780748970");
    all_values.push_back(ApplIDReqGrp_0_set);
    all_compo_names.insert("ApplIDReqGrp_0_set");

    {
      xml_element Pty_39{"Pty"};
      multiset<string> Pty_39_set;
      Pty_39.add_attribute("ID", "NestedPartyID_t_421309601"); // 2
      Pty_39_set.insert("NestedPartyID_t_421309601");
      Pty_39.add_attribute("Src", "9"); // 2
      Pty_39_set.insert("9");
      Pty_39.add_attribute("R", "52"); // 2
      Pty_39_set.insert("52");
      all_values.push_back(Pty_39_set);
      all_compo_names.insert("Pty_39_set");

      {
        xml_element Sub_39{"Sub"};
        multiset<string> Sub_39_set;
        Sub_39.add_attribute("ID", "NestedPartySubID_t_2066762838"); // 3
        Sub_39_set.insert("NestedPartySubID_t_2066762838");
        Sub_39.add_attribute("Typ", "18"); // 3
        Sub_39_set.insert("18");
        all_values.push_back(Sub_39_set);
        all_compo_names.insert("Sub_39_set");

        Pty_39.add_element(Sub_39);
      }
      ApplIDReqGrp_0.add_element(Pty_39);
    }
    elt.add_element(ApplIDReqGrp_0);
  } // end ApplIDReqGrp
  { // ApplIDReqGrp
    xml_element ApplIDReqGrp_1{"ApplIDReqGrp"};
    multiset<string> ApplIDReqGrp_1_set;
    ApplIDReqGrp_1.add_attribute("RefApplID", "RefApplID_t_1411007857"); // 1
    ApplIDReqGrp_1_set.insert("RefApplID_t_1411007857");
    ApplIDReqGrp_1.add_attribute("RefID", "RefApplReqID_t_1595504917"); // 1
    ApplIDReqGrp_1_set.insert("RefApplReqID_t_1595504917");
    ApplIDReqGrp_1.add_attribute("ApplBegSeqNum", "944987487"); // 1
    ApplIDReqGrp_1_set.insert("944987487");
    ApplIDReqGrp_1.add_attribute("ApplEndSeq", "1700815960"); // 1
    ApplIDReqGrp_1_set.insert("1700815960");
    all_values.push_back(ApplIDReqGrp_1_set);
    all_compo_names.insert("ApplIDReqGrp_1_set");

    {
      xml_element Pty_40{"Pty"};
      multiset<string> Pty_40_set;
      Pty_40.add_attribute("ID", "NestedPartyID_t_1784380332"); // 2
      Pty_40_set.insert("NestedPartyID_t_1784380332");
      Pty_40.add_attribute("Src", "C"); // 2
      Pty_40_set.insert("C");
      Pty_40.add_attribute("R", "81"); // 2
      Pty_40_set.insert("81");
      all_values.push_back(Pty_40_set);
      all_compo_names.insert("Pty_40_set");

      {
        xml_element Sub_40{"Sub"};
        multiset<string> Sub_40_set;
        Sub_40.add_attribute("ID", "NestedPartySubID_t_1634139226"); // 3
        Sub_40_set.insert("NestedPartySubID_t_1634139226");
        Sub_40.add_attribute("Typ", "26"); // 3
        Sub_40_set.insert("26");
        all_values.push_back(Sub_40_set);
        all_compo_names.insert("Sub_40_set");

        Pty_40.add_element(Sub_40);
      }
      ApplIDReqGrp_1.add_element(Pty_40);
    }
    elt.add_element(ApplIDReqGrp_1);
  } // end ApplIDReqGrp
  { // ApplIDReqGrp
    xml_element ApplIDReqGrp_2{"ApplIDReqGrp"};
    multiset<string> ApplIDReqGrp_2_set;
    ApplIDReqGrp_2.add_attribute("RefApplID", "RefApplID_t_1771428306"); // 1
    ApplIDReqGrp_2_set.insert("RefApplID_t_1771428306");
    ApplIDReqGrp_2.add_attribute("RefID", "RefApplReqID_t_157598313"); // 1
    ApplIDReqGrp_2_set.insert("RefApplReqID_t_157598313");
    ApplIDReqGrp_2.add_attribute("ApplBegSeqNum", "1170852746"); // 1
    ApplIDReqGrp_2_set.insert("1170852746");
    ApplIDReqGrp_2.add_attribute("ApplEndSeq", "1020944321"); // 1
    ApplIDReqGrp_2_set.insert("1020944321");
    all_values.push_back(ApplIDReqGrp_2_set);
    all_compo_names.insert("ApplIDReqGrp_2_set");

    {
      xml_element Pty_41{"Pty"};
      multiset<string> Pty_41_set;
      Pty_41.add_attribute("ID", "NestedPartyID_t_10312298"); // 2
      Pty_41_set.insert("NestedPartyID_t_10312298");
      Pty_41.add_attribute("Src", "F"); // 2
      Pty_41_set.insert("F");
      Pty_41.add_attribute("R", "38"); // 2
      Pty_41_set.insert("38");
      all_values.push_back(Pty_41_set);
      all_compo_names.insert("Pty_41_set");

      {
        xml_element Sub_41{"Sub"};
        multiset<string> Sub_41_set;
        Sub_41.add_attribute("ID", "NestedPartySubID_t_166826532"); // 3
        Sub_41_set.insert("NestedPartySubID_t_166826532");
        Sub_41.add_attribute("Typ", "4"); // 3
        Sub_41_set.insert("4");
        all_values.push_back(Sub_41_set);
        all_compo_names.insert("Sub_41_set");

        Pty_41.add_element(Sub_41);
      }
      ApplIDReqGrp_2.add_element(Pty_41);
    }
    elt.add_element(ApplIDReqGrp_2);
  } // end ApplIDReqGrp
  { // Pty
    xml_element Pty_42{"Pty"};
    multiset<string> Pty_42_set;
    Pty_42.add_attribute("ID", "PartyID_t_406744058"); // 1
    Pty_42_set.insert("PartyID_t_406744058");
    Pty_42.add_attribute("Src", "A"); // 1
    Pty_42_set.insert("A");
    Pty_42.add_attribute("R", "76"); // 1
    Pty_42_set.insert("76");
    all_values.push_back(Pty_42_set);
    all_compo_names.insert("Pty_42_set");

    {
      xml_element Sub_42{"Sub"};
      multiset<string> Sub_42_set;
      Sub_42.add_attribute("ID", "PartySubID_t_361196576"); // 2
      Sub_42_set.insert("PartySubID_t_361196576");
      Sub_42.add_attribute("Typ", "23"); // 2
      Sub_42_set.insert("23");
      all_values.push_back(Sub_42_set);
      all_compo_names.insert("Sub_42_set");

      Pty_42.add_element(Sub_42);
    }
    elt.add_element(Pty_42);
  } // end Pty
  { // Pty
    xml_element Pty_43{"Pty"};
    multiset<string> Pty_43_set;
    Pty_43.add_attribute("ID", "PartyID_t_682918444"); // 1
    Pty_43_set.insert("PartyID_t_682918444");
    Pty_43.add_attribute("Src", "F"); // 1
    Pty_43_set.insert("F");
    Pty_43.add_attribute("R", "70"); // 1
    Pty_43_set.insert("70");
    all_values.push_back(Pty_43_set);
    all_compo_names.insert("Pty_43_set");

    {
      xml_element Sub_43{"Sub"};
      multiset<string> Sub_43_set;
      Sub_43.add_attribute("ID", "PartySubID_t_1220487516"); // 2
      Sub_43_set.insert("PartySubID_t_1220487516");
      Sub_43.add_attribute("Typ", "10"); // 2
      Sub_43_set.insert("10");
      all_values.push_back(Sub_43_set);
      all_compo_names.insert("Sub_43_set");

      Pty_43.add_element(Sub_43);
    }
    elt.add_element(Pty_43);
  } // end Pty
  { // Pty
    xml_element Pty_44{"Pty"};
    multiset<string> Pty_44_set;
    Pty_44.add_attribute("ID", "PartyID_t_1893179803"); // 1
    Pty_44_set.insert("PartyID_t_1893179803");
    Pty_44.add_attribute("Src", "5"); // 1
    Pty_44_set.insert("5");
    Pty_44.add_attribute("R", "74"); // 1
    Pty_44_set.insert("74");
    all_values.push_back(Pty_44_set);
    all_compo_names.insert("Pty_44_set");

    {
      xml_element Sub_44{"Sub"};
      multiset<string> Sub_44_set;
      Sub_44.add_attribute("ID", "PartySubID_t_1341201072"); // 2
      Sub_44_set.insert("PartySubID_t_1341201072");
      Sub_44.add_attribute("Typ", "30"); // 2
      Sub_44_set.insert("30");
      all_values.push_back(Sub_44_set);
      all_compo_names.insert("Sub_44_set");

      Pty_44.add_element(Sub_44);
    }
    elt.add_element(Pty_44);
  } // end Pty
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  FIX::Message fix_msg;
  ASSERT_TRUE(converter.fixml2fix(elt, fix_msg));

  cout << endl << "////////////////////////////////////////////" << endl;
  cout << fix_msg.toXML() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  cout << endl << "////////////////////////////////////////////" << endl;
  multiset<string> fix_s;
  list<multiset<string>> fix_ls;
  to_list(fix_msg, quickfix_dico, fix_s, fix_ls);
  fix_ls.push_back(fix_s);

  BOOST_LOG_TRIVIAL(debug) << "All FIX components (" << fix_ls.size() << ")";
  for (const auto &l : fix_ls) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }

  cout << endl << "////////////////////////////////////////////" << endl;
  multiset<string> xml_s;
  list<multiset<string>> xml_ls;
  elt_to_list(elt, fixml_dict, xml_s, xml_ls);
  xml_ls.push_back(xml_s);
  BOOST_LOG_TRIVIAL(debug) << "All XML components (" << xml_ls.size() << ")";
  for (const auto &l : xml_ls) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }

  for (const auto &fix_l : fix_ls) {
    bool found = false;
    for (const auto &xml_l : xml_ls) {
      if (includes(xml_l.begin(), xml_l.end(), fix_l.begin(), fix_l.end())) {
        found = true;
        break;
      } // end if includes
    }   // end for all_values
    EXPECT_TRUE(found);
    if (!found) {
      BOOST_LOG_TRIVIAL(debug)
        << "[TO CHECK] This FIX component was not found in XML message";
      cout << "	 ---> [";
      copy(fix_l.begin(), fix_l.end(), ostream_iterator<string>(cout, " "));
      cout << "]" << endl << endl;
    } // end if ! found
  }   // end for elt_lists
}
