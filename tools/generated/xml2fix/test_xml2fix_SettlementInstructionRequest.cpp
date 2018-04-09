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

TEST ( SettlementInstructionRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SettlInstrctnReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructionRequest_message_t_0;
  elt.add_attribute("SettlInstReqID", "SettlInstReqID_t_1336805343"); // 0
  SettlementInstructionRequest_message_t_0.insert("SettlInstReqID_t_1336805343");
  elt.add_attribute("TxnTm", "TransactTime_t_2126754883"); // 0
  SettlementInstructionRequest_message_t_0.insert("TransactTime_t_2126754883");
  elt.add_attribute("Acct", "AllocAccount_t_1898370372"); // 0
  SettlementInstructionRequest_message_t_0.insert("AllocAccount_t_1898370372");
  elt.add_attribute("ActIDSrc", "3"); // 0
  SettlementInstructionRequest_message_t_0.insert("3");
  elt.add_attribute("Side", "7"); // 0
  SettlementInstructionRequest_message_t_0.insert("7");
  elt.add_attribute("Prod", "9"); // 0
  SettlementInstructionRequest_message_t_0.insert("9");
  elt.add_attribute("SecTyp", "SWING"); // 0
  SettlementInstructionRequest_message_t_0.insert("SWING");
  elt.add_attribute("CFI", "CFICode_t_191974749"); // 0
  SettlementInstructionRequest_message_t_0.insert("CFICode_t_191974749");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  SettlementInstructionRequest_message_t_0.insert("CHF");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1623864239"); // 0
  SettlementInstructionRequest_message_t_0.insert("EffectiveTime_t_1623864239");
  elt.add_attribute("ExpireTm", "ExpireTime_t_479008876"); // 0
  SettlementInstructionRequest_message_t_0.insert("ExpireTime_t_479008876");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_629334621"); // 0
  SettlementInstructionRequest_message_t_0.insert("LastUpdateTime_t_629334621");
  elt.add_attribute("StandInstDbTyp", "1"); // 0
  SettlementInstructionRequest_message_t_0.insert("1");
  elt.add_attribute("StandInstDbName", "StandInstDbName_t_932861076"); // 0
  SettlementInstructionRequest_message_t_0.insert("StandInstDbName_t_932861076");
  elt.add_attribute("StandInstDbID", "StandInstDbID_t_1988021376"); // 0
  SettlementInstructionRequest_message_t_0.insert("StandInstDbID_t_1988021376");
  all_values.push_back(SettlementInstructionRequest_message_t_0);
  all_compo_names.insert("SettlementInstructionRequest_message_t");

  { // Hdr
    xml_element Hdr_90{"Hdr"};
    multiset<string> Hdr_90_set;
    Hdr_90.add_attribute("SeqNum", "1855011835"); // 1
    Hdr_90_set.insert("1855011835");
    Hdr_90.add_attribute("SID", "SenderCompID_t_1944551208"); // 1
    Hdr_90_set.insert("SenderCompID_t_1944551208");
    Hdr_90.add_attribute("TID", "TargetCompID_t_1543685116"); // 1
    Hdr_90_set.insert("TargetCompID_t_1543685116");
    Hdr_90.add_attribute("OBID", "OnBehalfOfCompID_t_154622736"); // 1
    Hdr_90_set.insert("OnBehalfOfCompID_t_154622736");
    Hdr_90.add_attribute("D2ID", "DeliverToCompID_t_12946161"); // 1
    Hdr_90_set.insert("DeliverToCompID_t_12946161");
    Hdr_90.add_attribute("SSub", "SenderSubID_t_1118130331"); // 1
    Hdr_90_set.insert("SenderSubID_t_1118130331");
    Hdr_90.add_attribute("SLoc", "SenderLocationID_t_516146583"); // 1
    Hdr_90_set.insert("SenderLocationID_t_516146583");
    Hdr_90.add_attribute("TSub", "TargetSubID_t_1536441195"); // 1
    Hdr_90_set.insert("TargetSubID_t_1536441195");
    Hdr_90.add_attribute("TLoc", "TargetLocationID_t_488228587"); // 1
    Hdr_90_set.insert("TargetLocationID_t_488228587");
    Hdr_90.add_attribute("OBSub", "OnBehalfOfSubID_t_627781119"); // 1
    Hdr_90_set.insert("OnBehalfOfSubID_t_627781119");
    Hdr_90.add_attribute("OBLoc", "OnBehalfOfLocationID_t_601061904"); // 1
    Hdr_90_set.insert("OnBehalfOfLocationID_t_601061904");
    Hdr_90.add_attribute("D2Sub", "DeliverToSubID_t_975910193"); // 1
    Hdr_90_set.insert("DeliverToSubID_t_975910193");
    Hdr_90.add_attribute("D2Loc", "DeliverToLocationID_t_2124256698"); // 1
    Hdr_90_set.insert("DeliverToLocationID_t_2124256698");
    Hdr_90.add_attribute("PosDup", "Y"); // 1
    Hdr_90_set.insert("Y");
    Hdr_90.add_attribute("PosRsnd", "N"); // 1
    Hdr_90_set.insert("N");
    Hdr_90.add_attribute("Snt", "SendingTime_t_1313578393"); // 1
    Hdr_90_set.insert("SendingTime_t_1313578393");
    Hdr_90.add_attribute("OrigSnt", "OrigSendingTime_t_311131516"); // 1
    Hdr_90_set.insert("OrigSendingTime_t_311131516");
    Hdr_90.add_attribute("MsgEncd", "MessageEncoding_t_1591590731"); // 1
    Hdr_90_set.insert("MessageEncoding_t_1591590731");
    all_values.push_back(Hdr_90_set);
    all_compo_names.insert("Hdr_90_set");

    {
      xml_element Hop_90{"Hop"};
      multiset<string> Hop_90_set;
      Hop_90.add_attribute("ID", "HopCompID_t_186940951"); // 2
      Hop_90_set.insert("HopCompID_t_186940951");
      Hop_90.add_attribute("Ref", "787444435"); // 2
      Hop_90_set.insert("787444435");
      Hop_90.add_attribute("Snt", "HopSendingTime_t_1921843276"); // 2
      Hop_90_set.insert("HopSendingTime_t_1921843276");
      all_values.push_back(Hop_90_set);
      all_compo_names.insert("Hop_90_set");

      Hdr_90.add_element(Hop_90);
    }
    elt.add_element(Hdr_90);
  } // end Hdr
  { // Pty
    xml_element Pty_393{"Pty"};
    multiset<string> Pty_393_set;
    Pty_393.add_attribute("ID", "PartyID_t_979419184"); // 1
    Pty_393_set.insert("PartyID_t_979419184");
    Pty_393.add_attribute("Src", "7"); // 1
    Pty_393_set.insert("7");
    Pty_393.add_attribute("R", "62"); // 1
    Pty_393_set.insert("62");
    all_values.push_back(Pty_393_set);
    all_compo_names.insert("Pty_393_set");

    {
      xml_element Sub_393{"Sub"};
      multiset<string> Sub_393_set;
      Sub_393.add_attribute("ID", "PartySubID_t_455799776"); // 2
      Sub_393_set.insert("PartySubID_t_455799776");
      Sub_393.add_attribute("Typ", "16"); // 2
      Sub_393_set.insert("16");
      all_values.push_back(Sub_393_set);
      all_compo_names.insert("Sub_393_set");

      Pty_393.add_element(Sub_393);
    }
    elt.add_element(Pty_393);
  } // end Pty
  { // Pty
    xml_element Pty_394{"Pty"};
    multiset<string> Pty_394_set;
    Pty_394.add_attribute("ID", "PartyID_t_337204981"); // 1
    Pty_394_set.insert("PartyID_t_337204981");
    Pty_394.add_attribute("Src", "1"); // 1
    Pty_394_set.insert("1");
    Pty_394.add_attribute("R", "41"); // 1
    Pty_394_set.insert("41");
    all_values.push_back(Pty_394_set);
    all_compo_names.insert("Pty_394_set");

    {
      xml_element Sub_394{"Sub"};
      multiset<string> Sub_394_set;
      Sub_394.add_attribute("ID", "PartySubID_t_177742709"); // 2
      Sub_394_set.insert("PartySubID_t_177742709");
      Sub_394.add_attribute("Typ", "20"); // 2
      Sub_394_set.insert("20");
      all_values.push_back(Sub_394_set);
      all_compo_names.insert("Sub_394_set");

      Pty_394.add_element(Sub_394);
    }
    elt.add_element(Pty_394);
  } // end Pty
  { // Pty
    xml_element Pty_395{"Pty"};
    multiset<string> Pty_395_set;
    Pty_395.add_attribute("ID", "PartyID_t_376920942"); // 1
    Pty_395_set.insert("PartyID_t_376920942");
    Pty_395.add_attribute("Src", "4"); // 1
    Pty_395_set.insert("4");
    Pty_395.add_attribute("R", "15"); // 1
    Pty_395_set.insert("15");
    all_values.push_back(Pty_395_set);
    all_compo_names.insert("Pty_395_set");

    {
      xml_element Sub_395{"Sub"};
      multiset<string> Sub_395_set;
      Sub_395.add_attribute("ID", "PartySubID_t_389867104"); // 2
      Sub_395_set.insert("PartySubID_t_389867104");
      Sub_395.add_attribute("Typ", "27"); // 2
      Sub_395_set.insert("27");
      all_values.push_back(Sub_395_set);
      all_compo_names.insert("Sub_395_set");

      Pty_395.add_element(Sub_395);
    }
    elt.add_element(Pty_395);
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
