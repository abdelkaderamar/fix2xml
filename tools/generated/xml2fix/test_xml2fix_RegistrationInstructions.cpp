#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RegistrationInstructions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RegistrationInstructions_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"RgstInstrctns" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructions_message_t_0;
  elt.add_attribute("ID", "RegistID_t_439661997"); // 0
  RegistrationInstructions_message_t_0.insert("RegistID_t_439661997");
  elt.add_attribute("TransTyp", "2"); // 0
  RegistrationInstructions_message_t_0.insert("2");
  elt.add_attribute("RefID", "RegistRefID_t_1220974259"); // 0
  RegistrationInstructions_message_t_0.insert("RegistRefID_t_1220974259");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1906991146"); // 0
  RegistrationInstructions_message_t_0.insert("ClOrdID_t_1906991146");
  elt.add_attribute("Acct", "Account_t_1038375911"); // 0
  RegistrationInstructions_message_t_0.insert("Account_t_1038375911");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  RegistrationInstructions_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "RegistAcctType_t_1385891343"); // 0
  RegistrationInstructions_message_t_0.insert("RegistAcctType_t_1385891343");
  elt.add_attribute("TaxAdvantageTyp", "9"); // 0
  RegistrationInstructions_message_t_0.insert("9");
  elt.add_attribute("OwnershipTyp", "2"); // 0
  RegistrationInstructions_message_t_0.insert("2");
  all_values.push_back(RegistrationInstructions_message_t_0);
  all_compo_names.insert("RegistrationInstructions_message_t");

  { // Hdr
    xml_element Hdr_76{"Hdr"};
    multiset<string> Hdr_76_set;
    Hdr_76.add_attribute("SeqNum", "27483104"); // 1
    Hdr_76_set.insert("27483104");
    Hdr_76.add_attribute("SID", "SenderCompID_t_795445423"); // 1
    Hdr_76_set.insert("SenderCompID_t_795445423");
    Hdr_76.add_attribute("TID", "TargetCompID_t_1286036305"); // 1
    Hdr_76_set.insert("TargetCompID_t_1286036305");
    Hdr_76.add_attribute("OBID", "OnBehalfOfCompID_t_651709829"); // 1
    Hdr_76_set.insert("OnBehalfOfCompID_t_651709829");
    Hdr_76.add_attribute("D2ID", "DeliverToCompID_t_1349602966"); // 1
    Hdr_76_set.insert("DeliverToCompID_t_1349602966");
    Hdr_76.add_attribute("SSub", "SenderSubID_t_1569714851"); // 1
    Hdr_76_set.insert("SenderSubID_t_1569714851");
    Hdr_76.add_attribute("SLoc", "SenderLocationID_t_380765630"); // 1
    Hdr_76_set.insert("SenderLocationID_t_380765630");
    Hdr_76.add_attribute("TSub", "TargetSubID_t_1947743891"); // 1
    Hdr_76_set.insert("TargetSubID_t_1947743891");
    Hdr_76.add_attribute("TLoc", "TargetLocationID_t_1216906563"); // 1
    Hdr_76_set.insert("TargetLocationID_t_1216906563");
    Hdr_76.add_attribute("OBSub", "OnBehalfOfSubID_t_363857119"); // 1
    Hdr_76_set.insert("OnBehalfOfSubID_t_363857119");
    Hdr_76.add_attribute("OBLoc", "OnBehalfOfLocationID_t_909433067"); // 1
    Hdr_76_set.insert("OnBehalfOfLocationID_t_909433067");
    Hdr_76.add_attribute("D2Sub", "DeliverToSubID_t_1960049540"); // 1
    Hdr_76_set.insert("DeliverToSubID_t_1960049540");
    Hdr_76.add_attribute("D2Loc", "DeliverToLocationID_t_1592594023"); // 1
    Hdr_76_set.insert("DeliverToLocationID_t_1592594023");
    Hdr_76.add_attribute("PosDup", "N"); // 1
    Hdr_76_set.insert("N");
    Hdr_76.add_attribute("PosRsnd", "Y"); // 1
    Hdr_76_set.insert("Y");
    Hdr_76.add_attribute("Snt", "SendingTime_t_1884486186"); // 1
    Hdr_76_set.insert("SendingTime_t_1884486186");
    Hdr_76.add_attribute("OrigSnt", "OrigSendingTime_t_299056661"); // 1
    Hdr_76_set.insert("OrigSendingTime_t_299056661");
    Hdr_76.add_attribute("MsgEncd", "MessageEncoding_t_43089396"); // 1
    Hdr_76_set.insert("MessageEncoding_t_43089396");
    all_values.push_back(Hdr_76_set);
    all_compo_names.insert("Hdr_76_set");

    {
      xml_element Hop_76{"Hop"};
      multiset<string> Hop_76_set;
      Hop_76.add_attribute("ID", "HopCompID_t_1640002995"); // 2
      Hop_76_set.insert("HopCompID_t_1640002995");
      Hop_76.add_attribute("Ref", "63571256"); // 2
      Hop_76_set.insert("63571256");
      Hop_76.add_attribute("Snt", "HopSendingTime_t_1282931032"); // 2
      Hop_76_set.insert("HopSendingTime_t_1282931032");
      all_values.push_back(Hop_76_set);
      all_compo_names.insert("Hop_76_set");

      Hdr_76.add_element(Hop_76);
    }
    elt.add_element(Hdr_76);
  } // end Hdr
  { // Pty
    xml_element Pty_381{"Pty"};
    multiset<string> Pty_381_set;
    Pty_381.add_attribute("ID", "PartyID_t_503233254"); // 1
    Pty_381_set.insert("PartyID_t_503233254");
    Pty_381.add_attribute("Src", "B"); // 1
    Pty_381_set.insert("B");
    Pty_381.add_attribute("R", "63"); // 1
    Pty_381_set.insert("63");
    all_values.push_back(Pty_381_set);
    all_compo_names.insert("Pty_381_set");

    {
      xml_element Sub_381{"Sub"};
      multiset<string> Sub_381_set;
      Sub_381.add_attribute("ID", "PartySubID_t_262740752"); // 2
      Sub_381_set.insert("PartySubID_t_262740752");
      Sub_381.add_attribute("Typ", "10"); // 2
      Sub_381_set.insert("10");
      all_values.push_back(Sub_381_set);
      all_compo_names.insert("Sub_381_set");

      Pty_381.add_element(Sub_381);
    }
    elt.add_element(Pty_381);
  } // end Pty
  { // Pty
    xml_element Pty_382{"Pty"};
    multiset<string> Pty_382_set;
    Pty_382.add_attribute("ID", "PartyID_t_1533457215"); // 1
    Pty_382_set.insert("PartyID_t_1533457215");
    Pty_382.add_attribute("Src", "I"); // 1
    Pty_382_set.insert("I");
    Pty_382.add_attribute("R", "41"); // 1
    Pty_382_set.insert("41");
    all_values.push_back(Pty_382_set);
    all_compo_names.insert("Pty_382_set");

    {
      xml_element Sub_382{"Sub"};
      multiset<string> Sub_382_set;
      Sub_382.add_attribute("ID", "PartySubID_t_874342945"); // 2
      Sub_382_set.insert("PartySubID_t_874342945");
      Sub_382.add_attribute("Typ", "7"); // 2
      Sub_382_set.insert("7");
      all_values.push_back(Sub_382_set);
      all_compo_names.insert("Sub_382_set");

      Pty_382.add_element(Sub_382);
    }
    elt.add_element(Pty_382);
  } // end Pty
  { // RgDtl
    xml_element RgDtl_0{"RgDtl"};
    multiset<string> RgDtl_0_set;
    RgDtl_0.add_attribute("RejRsnTxt", "RegistDtls_t_12895602"); // 1
    RgDtl_0_set.insert("RegistDtls_t_12895602");
    RgDtl_0.add_attribute("Email", "RegistEmail_t_180341381"); // 1
    RgDtl_0_set.insert("RegistEmail_t_180341381");
    RgDtl_0.add_attribute("MailingDtls", "MailingDtls_t_1180388016"); // 1
    RgDtl_0_set.insert("MailingDtls_t_1180388016");
    RgDtl_0.add_attribute("MailingInst", "MailingInst_t_1582610453"); // 1
    RgDtl_0_set.insert("MailingInst_t_1582610453");
    RgDtl_0.add_attribute("OwnerTyp", "7"); // 1
    RgDtl_0_set.insert("7");
    RgDtl_0.add_attribute("DtOfBirth", "DateOfBirth_t_980648259"); // 1
    RgDtl_0_set.insert("DateOfBirth_t_980648259");
    RgDtl_0.add_attribute("InvestorCtryOfResidence", "652033368"); // 1
    RgDtl_0_set.insert("652033368");
    all_values.push_back(RgDtl_0_set);
    all_compo_names.insert("RgDtl_0_set");

    {
      xml_element Pty_383{"Pty"};
      multiset<string> Pty_383_set;
      Pty_383.add_attribute("ID", "NestedPartyID_t_924964130"); // 2
      Pty_383_set.insert("NestedPartyID_t_924964130");
      Pty_383.add_attribute("Src", "4"); // 2
      Pty_383_set.insert("4");
      Pty_383.add_attribute("R", "52"); // 2
      Pty_383_set.insert("52");
      all_values.push_back(Pty_383_set);
      all_compo_names.insert("Pty_383_set");

      {
        xml_element Sub_383{"Sub"};
        multiset<string> Sub_383_set;
        Sub_383.add_attribute("ID", "NestedPartySubID_t_370074506"); // 3
        Sub_383_set.insert("NestedPartySubID_t_370074506");
        Sub_383.add_attribute("Typ", "30"); // 3
        Sub_383_set.insert("30");
        all_values.push_back(Sub_383_set);
        all_compo_names.insert("Sub_383_set");

        Pty_383.add_element(Sub_383);
      }
      RgDtl_0.add_element(Pty_383);
    }
    elt.add_element(RgDtl_0);
  } // end RgDtl
  { // RgDtlInst
    xml_element RgDtlInst_0{"RgDtlInst"};
    multiset<string> RgDtlInst_0_set;
    RgDtlInst_0.add_attribute("DistribPmtMethod", "1"); // 1
    RgDtlInst_0_set.insert("1");
    RgDtlInst_0.add_attribute("DistribPctage", "887574.560000"); // 1
    RgDtlInst_0_set.insert("887574.560000");
    RgDtlInst_0.add_attribute("CshDistribCurr", "CHF"); // 1
    RgDtlInst_0_set.insert("CHF");
    RgDtlInst_0.add_attribute("CshDistribAgentName", "CashDistribAgentName_t_152328713"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentName_t_152328713");
    RgDtlInst_0.add_attribute("CshDistribAgentCode", "CashDistribAgentCode_t_1922442292"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentCode_t_1922442292");
    RgDtlInst_0.add_attribute("CshDistribAgentAcctNum", "CashDistribAgentAcctNumber_t_716141141"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentAcctNumber_t_716141141");
    RgDtlInst_0.add_attribute("CshDistribPayRef", "CashDistribPayRef_t_655561967"); // 1
    RgDtlInst_0_set.insert("CashDistribPayRef_t_655561967");
    RgDtlInst_0.add_attribute("CshDistribAgentAcctName", "CashDistribAgentAcctName_t_1556443098"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentAcctName_t_1556443098");
    all_values.push_back(RgDtlInst_0_set);
    all_compo_names.insert("RgDtlInst_0_set");

    elt.add_element(RgDtlInst_0);
  } // end RgDtlInst
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
  msg_to_list(fix_msg, quickfix_dico, fix_s, fix_ls);
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
