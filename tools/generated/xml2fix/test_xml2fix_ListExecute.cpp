#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListExecute.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListExecute_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ListExct" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListExecute_message_t_0;
  elt.add_attribute("ID", "ListID_t_1856704013"); // 0
  ListExecute_message_t_0.insert("ListID_t_1856704013");
  elt.add_attribute("ClBidID", "ClientBidID_t_630426006"); // 0
  ListExecute_message_t_0.insert("ClientBidID_t_630426006");
  elt.add_attribute("BidID", "BidID_t_395112027"); // 0
  ListExecute_message_t_0.insert("BidID_t_395112027");
  elt.add_attribute("TxnTm", "TransactTime_t_1257392376"); // 0
  ListExecute_message_t_0.insert("TransactTime_t_1257392376");
  elt.add_attribute("Txt", "Text_t_1211068156"); // 0
  ListExecute_message_t_0.insert("Text_t_1211068156");
  elt.add_attribute("EncTxtLen", "959650029"); // 0
  ListExecute_message_t_0.insert("959650029");
  elt.add_attribute("EncTxt", "EncodedText_t_214335774"); // 0
  ListExecute_message_t_0.insert("EncodedText_t_214335774");
  all_values.push_back(ListExecute_message_t_0);
  all_compo_names.insert("ListExecute_message_t");

  { // Hdr
    xml_element Hdr_35{"Hdr"};
    multiset<string> Hdr_35_set;
    Hdr_35.add_attribute("SeqNum", "1142741323"); // 1
    Hdr_35_set.insert("1142741323");
    Hdr_35.add_attribute("SID", "SenderCompID_t_1841047421"); // 1
    Hdr_35_set.insert("SenderCompID_t_1841047421");
    Hdr_35.add_attribute("TID", "TargetCompID_t_1936183443"); // 1
    Hdr_35_set.insert("TargetCompID_t_1936183443");
    Hdr_35.add_attribute("OBID", "OnBehalfOfCompID_t_1334986787"); // 1
    Hdr_35_set.insert("OnBehalfOfCompID_t_1334986787");
    Hdr_35.add_attribute("D2ID", "DeliverToCompID_t_1715174255"); // 1
    Hdr_35_set.insert("DeliverToCompID_t_1715174255");
    Hdr_35.add_attribute("SSub", "SenderSubID_t_1940709255"); // 1
    Hdr_35_set.insert("SenderSubID_t_1940709255");
    Hdr_35.add_attribute("SLoc", "SenderLocationID_t_1090229479"); // 1
    Hdr_35_set.insert("SenderLocationID_t_1090229479");
    Hdr_35.add_attribute("TSub", "TargetSubID_t_205520196"); // 1
    Hdr_35_set.insert("TargetSubID_t_205520196");
    Hdr_35.add_attribute("TLoc", "TargetLocationID_t_1741665103"); // 1
    Hdr_35_set.insert("TargetLocationID_t_1741665103");
    Hdr_35.add_attribute("OBSub", "OnBehalfOfSubID_t_130417880"); // 1
    Hdr_35_set.insert("OnBehalfOfSubID_t_130417880");
    Hdr_35.add_attribute("OBLoc", "OnBehalfOfLocationID_t_340509418"); // 1
    Hdr_35_set.insert("OnBehalfOfLocationID_t_340509418");
    Hdr_35.add_attribute("D2Sub", "DeliverToSubID_t_544732002"); // 1
    Hdr_35_set.insert("DeliverToSubID_t_544732002");
    Hdr_35.add_attribute("D2Loc", "DeliverToLocationID_t_1932174081"); // 1
    Hdr_35_set.insert("DeliverToLocationID_t_1932174081");
    Hdr_35.add_attribute("PosDup", "Y"); // 1
    Hdr_35_set.insert("Y");
    Hdr_35.add_attribute("PosRsnd", "N"); // 1
    Hdr_35_set.insert("N");
    Hdr_35.add_attribute("Snt", "SendingTime_t_1423415592"); // 1
    Hdr_35_set.insert("SendingTime_t_1423415592");
    Hdr_35.add_attribute("OrigSnt", "OrigSendingTime_t_568066605"); // 1
    Hdr_35_set.insert("OrigSendingTime_t_568066605");
    Hdr_35.add_attribute("MsgEncd", "MessageEncoding_t_1785812498"); // 1
    Hdr_35_set.insert("MessageEncoding_t_1785812498");
    all_values.push_back(Hdr_35_set);
    all_compo_names.insert("Hdr_35_set");

    {
      xml_element Hop_35{"Hop"};
      multiset<string> Hop_35_set;
      Hop_35.add_attribute("ID", "HopCompID_t_861311358"); // 2
      Hop_35_set.insert("HopCompID_t_861311358");
      Hop_35.add_attribute("Ref", "1304857481"); // 2
      Hop_35_set.insert("1304857481");
      Hop_35.add_attribute("Snt", "HopSendingTime_t_1577991997"); // 2
      Hop_35_set.insert("HopSendingTime_t_1577991997");
      all_values.push_back(Hop_35_set);
      all_compo_names.insert("Hop_35_set");

      Hdr_35.add_element(Hop_35);
    }
    elt.add_element(Hdr_35);
  } // end Hdr
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
