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
  elt.add_attribute("SettlInstReqID", "SettlInstReqID_t_1460776032"); // 0
  SettlementInstructionRequest_message_t_0.insert("SettlInstReqID_t_1460776032");
  elt.add_attribute("TxnTm", "TransactTime_t_359708948"); // 0
  SettlementInstructionRequest_message_t_0.insert("TransactTime_t_359708948");
  elt.add_attribute("Acct", "AllocAccount_t_664829728"); // 0
  SettlementInstructionRequest_message_t_0.insert("AllocAccount_t_664829728");
  elt.add_attribute("ActIDSrc", "1"); // 0
  SettlementInstructionRequest_message_t_0.insert("1");
  elt.add_attribute("Side", "A"); // 0
  SettlementInstructionRequest_message_t_0.insert("A");
  elt.add_attribute("Prod", "6"); // 0
  SettlementInstructionRequest_message_t_0.insert("6");
  elt.add_attribute("SecTyp", "COFP"); // 0
  SettlementInstructionRequest_message_t_0.insert("COFP");
  elt.add_attribute("CFI", "CFICode_t_2068754814"); // 0
  SettlementInstructionRequest_message_t_0.insert("CFICode_t_2068754814");
  elt.add_attribute("SettlCcy", "CAN"); // 0
  SettlementInstructionRequest_message_t_0.insert("CAN");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_735496033"); // 0
  SettlementInstructionRequest_message_t_0.insert("EffectiveTime_t_735496033");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1002391288"); // 0
  SettlementInstructionRequest_message_t_0.insert("ExpireTime_t_1002391288");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_1152604920"); // 0
  SettlementInstructionRequest_message_t_0.insert("LastUpdateTime_t_1152604920");
  elt.add_attribute("StandInstDbTyp", "3"); // 0
  SettlementInstructionRequest_message_t_0.insert("3");
  elt.add_attribute("StandInstDbName", "StandInstDbName_t_505670712"); // 0
  SettlementInstructionRequest_message_t_0.insert("StandInstDbName_t_505670712");
  elt.add_attribute("StandInstDbID", "StandInstDbID_t_1664690852"); // 0
  SettlementInstructionRequest_message_t_0.insert("StandInstDbID_t_1664690852");
  all_values.push_back(SettlementInstructionRequest_message_t_0);
  all_compo_names.insert("SettlementInstructionRequest_message_t");

  { // Hdr
    xml_element Hdr_90{"Hdr"};
    multiset<string> Hdr_90_set;
    Hdr_90.add_attribute("SeqNum", "274143195"); // 1
    Hdr_90_set.insert("274143195");
    Hdr_90.add_attribute("SID", "SenderCompID_t_1575531509"); // 1
    Hdr_90_set.insert("SenderCompID_t_1575531509");
    Hdr_90.add_attribute("TID", "TargetCompID_t_762255349"); // 1
    Hdr_90_set.insert("TargetCompID_t_762255349");
    Hdr_90.add_attribute("OBID", "OnBehalfOfCompID_t_185417027"); // 1
    Hdr_90_set.insert("OnBehalfOfCompID_t_185417027");
    Hdr_90.add_attribute("D2ID", "DeliverToCompID_t_1201923122"); // 1
    Hdr_90_set.insert("DeliverToCompID_t_1201923122");
    Hdr_90.add_attribute("SSub", "SenderSubID_t_2037431277"); // 1
    Hdr_90_set.insert("SenderSubID_t_2037431277");
    Hdr_90.add_attribute("SLoc", "SenderLocationID_t_182867019"); // 1
    Hdr_90_set.insert("SenderLocationID_t_182867019");
    Hdr_90.add_attribute("TSub", "TargetSubID_t_744927705"); // 1
    Hdr_90_set.insert("TargetSubID_t_744927705");
    Hdr_90.add_attribute("TLoc", "TargetLocationID_t_1232324234"); // 1
    Hdr_90_set.insert("TargetLocationID_t_1232324234");
    Hdr_90.add_attribute("OBSub", "OnBehalfOfSubID_t_799479987"); // 1
    Hdr_90_set.insert("OnBehalfOfSubID_t_799479987");
    Hdr_90.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1720315264"); // 1
    Hdr_90_set.insert("OnBehalfOfLocationID_t_1720315264");
    Hdr_90.add_attribute("D2Sub", "DeliverToSubID_t_787948059"); // 1
    Hdr_90_set.insert("DeliverToSubID_t_787948059");
    Hdr_90.add_attribute("D2Loc", "DeliverToLocationID_t_26218070"); // 1
    Hdr_90_set.insert("DeliverToLocationID_t_26218070");
    Hdr_90.add_attribute("PosDup", "Y"); // 1
    Hdr_90_set.insert("Y");
    Hdr_90.add_attribute("PosRsnd", "Y"); // 1
    Hdr_90_set.insert("Y");
    Hdr_90.add_attribute("Snt", "SendingTime_t_1486994102"); // 1
    Hdr_90_set.insert("SendingTime_t_1486994102");
    Hdr_90.add_attribute("OrigSnt", "OrigSendingTime_t_2064250089"); // 1
    Hdr_90_set.insert("OrigSendingTime_t_2064250089");
    Hdr_90.add_attribute("MsgEncd", "MessageEncoding_t_172576010"); // 1
    Hdr_90_set.insert("MessageEncoding_t_172576010");
    all_values.push_back(Hdr_90_set);
    all_compo_names.insert("Hdr_90_set");

    {
      xml_element Hop_90{"Hop"};
      multiset<string> Hop_90_set;
      Hop_90.add_attribute("ID", "HopCompID_t_355829046"); // 2
      Hop_90_set.insert("HopCompID_t_355829046");
      Hop_90.add_attribute("Ref", "1808809058"); // 2
      Hop_90_set.insert("1808809058");
      Hop_90.add_attribute("Snt", "HopSendingTime_t_2135522732"); // 2
      Hop_90_set.insert("HopSendingTime_t_2135522732");
      all_values.push_back(Hop_90_set);
      all_compo_names.insert("Hop_90_set");

      Hdr_90.add_element(Hop_90);
    }
    elt.add_element(Hdr_90);
  } // end Hdr
  { // Pty
    xml_element Pty_423{"Pty"};
    multiset<string> Pty_423_set;
    Pty_423.add_attribute("ID", "PartyID_t_1730080224"); // 1
    Pty_423_set.insert("PartyID_t_1730080224");
    Pty_423.add_attribute("Src", "D"); // 1
    Pty_423_set.insert("D");
    Pty_423.add_attribute("R", "13"); // 1
    Pty_423_set.insert("13");
    all_values.push_back(Pty_423_set);
    all_compo_names.insert("Pty_423_set");

    {
      xml_element Sub_423{"Sub"};
      multiset<string> Sub_423_set;
      Sub_423.add_attribute("ID", "PartySubID_t_318092610"); // 2
      Sub_423_set.insert("PartySubID_t_318092610");
      Sub_423.add_attribute("Typ", "33"); // 2
      Sub_423_set.insert("33");
      all_values.push_back(Sub_423_set);
      all_compo_names.insert("Sub_423_set");

      Pty_423.add_element(Sub_423);
    }
    elt.add_element(Pty_423);
  } // end Pty
  { // Pty
    xml_element Pty_424{"Pty"};
    multiset<string> Pty_424_set;
    Pty_424.add_attribute("ID", "PartyID_t_351519224"); // 1
    Pty_424_set.insert("PartyID_t_351519224");
    Pty_424.add_attribute("Src", "F"); // 1
    Pty_424_set.insert("F");
    Pty_424.add_attribute("R", "11"); // 1
    Pty_424_set.insert("11");
    all_values.push_back(Pty_424_set);
    all_compo_names.insert("Pty_424_set");

    {
      xml_element Sub_424{"Sub"};
      multiset<string> Sub_424_set;
      Sub_424.add_attribute("ID", "PartySubID_t_2016210076"); // 2
      Sub_424_set.insert("PartySubID_t_2016210076");
      Sub_424.add_attribute("Typ", "25"); // 2
      Sub_424_set.insert("25");
      all_values.push_back(Sub_424_set);
      all_compo_names.insert("Sub_424_set");

      Pty_424.add_element(Sub_424);
    }
    elt.add_element(Pty_424);
  } // end Pty
  { // Pty
    xml_element Pty_425{"Pty"};
    multiset<string> Pty_425_set;
    Pty_425.add_attribute("ID", "PartyID_t_882613871"); // 1
    Pty_425_set.insert("PartyID_t_882613871");
    Pty_425.add_attribute("Src", "4"); // 1
    Pty_425_set.insert("4");
    Pty_425.add_attribute("R", "64"); // 1
    Pty_425_set.insert("64");
    all_values.push_back(Pty_425_set);
    all_compo_names.insert("Pty_425_set");

    {
      xml_element Sub_425{"Sub"};
      multiset<string> Sub_425_set;
      Sub_425.add_attribute("ID", "PartySubID_t_2084536994"); // 2
      Sub_425_set.insert("PartySubID_t_2084536994");
      Sub_425.add_attribute("Typ", "3"); // 2
      Sub_425_set.insert("3");
      all_values.push_back(Sub_425_set);
      all_compo_names.insert("Sub_425_set");

      Pty_425.add_element(Sub_425);
    }
    elt.add_element(Pty_425);
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
