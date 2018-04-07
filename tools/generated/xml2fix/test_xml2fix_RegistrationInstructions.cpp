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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"RgstInstrctns" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RegistrationInstructions_message_t_0;
  elt.add_attribute("ID", "RegistID_t_16621252"); // 0
  RegistrationInstructions_message_t_0.insert("RegistID_t_16621252");
  elt.add_attribute("TransTyp", "1"); // 0
  RegistrationInstructions_message_t_0.insert("1");
  elt.add_attribute("RefID", "RegistRefID_t_2079293159"); // 0
  RegistrationInstructions_message_t_0.insert("RegistRefID_t_2079293159");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1921844888"); // 0
  RegistrationInstructions_message_t_0.insert("ClOrdID_t_1921844888");
  elt.add_attribute("Acct", "Account_t_691064654"); // 0
  RegistrationInstructions_message_t_0.insert("Account_t_691064654");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  RegistrationInstructions_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "RegistAcctType_t_1641216921"); // 0
  RegistrationInstructions_message_t_0.insert("RegistAcctType_t_1641216921");
  elt.add_attribute("TaxAdvantageTyp", "0"); // 0
  RegistrationInstructions_message_t_0.insert("0");
  elt.add_attribute("OwnershipTyp", "T"); // 0
  RegistrationInstructions_message_t_0.insert("T");
  all_values.push_back(RegistrationInstructions_message_t_0);
  all_compo_names.insert("RegistrationInstructions_message_t");

  { // Hdr
    xml_element Hdr_76{"Hdr"};
    multiset<string> Hdr_76_set;
    Hdr_76.add_attribute("SeqNum", "391785202"); // 1
    Hdr_76_set.insert("391785202");
    Hdr_76.add_attribute("SID", "SenderCompID_t_880544973"); // 1
    Hdr_76_set.insert("SenderCompID_t_880544973");
    Hdr_76.add_attribute("TID", "TargetCompID_t_1352404269"); // 1
    Hdr_76_set.insert("TargetCompID_t_1352404269");
    Hdr_76.add_attribute("OBID", "OnBehalfOfCompID_t_99444753"); // 1
    Hdr_76_set.insert("OnBehalfOfCompID_t_99444753");
    Hdr_76.add_attribute("D2ID", "DeliverToCompID_t_134965018"); // 1
    Hdr_76_set.insert("DeliverToCompID_t_134965018");
    Hdr_76.add_attribute("SSub", "SenderSubID_t_115223712"); // 1
    Hdr_76_set.insert("SenderSubID_t_115223712");
    Hdr_76.add_attribute("SLoc", "SenderLocationID_t_60343593"); // 1
    Hdr_76_set.insert("SenderLocationID_t_60343593");
    Hdr_76.add_attribute("TSub", "TargetSubID_t_2069743644"); // 1
    Hdr_76_set.insert("TargetSubID_t_2069743644");
    Hdr_76.add_attribute("TLoc", "TargetLocationID_t_1199496824"); // 1
    Hdr_76_set.insert("TargetLocationID_t_1199496824");
    Hdr_76.add_attribute("OBSub", "OnBehalfOfSubID_t_486290862"); // 1
    Hdr_76_set.insert("OnBehalfOfSubID_t_486290862");
    Hdr_76.add_attribute("OBLoc", "OnBehalfOfLocationID_t_834493492"); // 1
    Hdr_76_set.insert("OnBehalfOfLocationID_t_834493492");
    Hdr_76.add_attribute("D2Sub", "DeliverToSubID_t_1400044341"); // 1
    Hdr_76_set.insert("DeliverToSubID_t_1400044341");
    Hdr_76.add_attribute("D2Loc", "DeliverToLocationID_t_1390565793"); // 1
    Hdr_76_set.insert("DeliverToLocationID_t_1390565793");
    Hdr_76.add_attribute("PosDup", "Y"); // 1
    Hdr_76_set.insert("Y");
    Hdr_76.add_attribute("PosRsnd", "Y"); // 1
    Hdr_76_set.insert("Y");
    Hdr_76.add_attribute("Snt", "SendingTime_t_1541955598"); // 1
    Hdr_76_set.insert("SendingTime_t_1541955598");
    Hdr_76.add_attribute("OrigSnt", "OrigSendingTime_t_39310316"); // 1
    Hdr_76_set.insert("OrigSendingTime_t_39310316");
    Hdr_76.add_attribute("MsgEncd", "MessageEncoding_t_1538034288"); // 1
    Hdr_76_set.insert("MessageEncoding_t_1538034288");
    all_values.push_back(Hdr_76_set);
    all_compo_names.insert("Hdr_76_set");

    {
      xml_element Hop_76{"Hop"};
      multiset<string> Hop_76_set;
      Hop_76.add_attribute("ID", "HopCompID_t_1359956463"); // 2
      Hop_76_set.insert("HopCompID_t_1359956463");
      Hop_76.add_attribute("Ref", "1823930796"); // 2
      Hop_76_set.insert("1823930796");
      Hop_76.add_attribute("Snt", "HopSendingTime_t_91956081"); // 2
      Hop_76_set.insert("HopSendingTime_t_91956081");
      all_values.push_back(Hop_76_set);
      all_compo_names.insert("Hop_76_set");

      Hdr_76.add_element(Hop_76);
    }
    elt.add_element(Hdr_76);
  } // end Hdr
  { // Pty
    xml_element Pty_383{"Pty"};
    multiset<string> Pty_383_set;
    Pty_383.add_attribute("ID", "PartyID_t_1840552048"); // 1
    Pty_383_set.insert("PartyID_t_1840552048");
    Pty_383.add_attribute("Src", "5"); // 1
    Pty_383_set.insert("5");
    Pty_383.add_attribute("R", "7"); // 1
    Pty_383_set.insert("7");
    all_values.push_back(Pty_383_set);
    all_compo_names.insert("Pty_383_set");

    {
      xml_element Sub_383{"Sub"};
      multiset<string> Sub_383_set;
      Sub_383.add_attribute("ID", "PartySubID_t_1614913288"); // 2
      Sub_383_set.insert("PartySubID_t_1614913288");
      Sub_383.add_attribute("Typ", "24"); // 2
      Sub_383_set.insert("24");
      all_values.push_back(Sub_383_set);
      all_compo_names.insert("Sub_383_set");

      Pty_383.add_element(Sub_383);
    }
    elt.add_element(Pty_383);
  } // end Pty
  { // Pty
    xml_element Pty_384{"Pty"};
    multiset<string> Pty_384_set;
    Pty_384.add_attribute("ID", "PartyID_t_149998714"); // 1
    Pty_384_set.insert("PartyID_t_149998714");
    Pty_384.add_attribute("Src", "D"); // 1
    Pty_384_set.insert("D");
    Pty_384.add_attribute("R", "83"); // 1
    Pty_384_set.insert("83");
    all_values.push_back(Pty_384_set);
    all_compo_names.insert("Pty_384_set");

    {
      xml_element Sub_384{"Sub"};
      multiset<string> Sub_384_set;
      Sub_384.add_attribute("ID", "PartySubID_t_31081573"); // 2
      Sub_384_set.insert("PartySubID_t_31081573");
      Sub_384.add_attribute("Typ", "16"); // 2
      Sub_384_set.insert("16");
      all_values.push_back(Sub_384_set);
      all_compo_names.insert("Sub_384_set");

      Pty_384.add_element(Sub_384);
    }
    elt.add_element(Pty_384);
  } // end Pty
  { // RgDtl
    xml_element RgDtl_0{"RgDtl"};
    multiset<string> RgDtl_0_set;
    RgDtl_0.add_attribute("RejRsnTxt", "RegistDtls_t_1383485842"); // 1
    RgDtl_0_set.insert("RegistDtls_t_1383485842");
    RgDtl_0.add_attribute("Email", "RegistEmail_t_1599876518"); // 1
    RgDtl_0_set.insert("RegistEmail_t_1599876518");
    RgDtl_0.add_attribute("MailingDtls", "MailingDtls_t_1929013096"); // 1
    RgDtl_0_set.insert("MailingDtls_t_1929013096");
    RgDtl_0.add_attribute("MailingInst", "MailingInst_t_1498709554"); // 1
    RgDtl_0_set.insert("MailingInst_t_1498709554");
    RgDtl_0.add_attribute("OwnerTyp", "13"); // 1
    RgDtl_0_set.insert("13");
    RgDtl_0.add_attribute("DtOfBirth", "DateOfBirth_t_1851273092"); // 1
    RgDtl_0_set.insert("DateOfBirth_t_1851273092");
    RgDtl_0.add_attribute("InvestorCtryOfResidence", "550722730"); // 1
    RgDtl_0_set.insert("550722730");
    all_values.push_back(RgDtl_0_set);
    all_compo_names.insert("RgDtl_0_set");

    {
      xml_element Pty_385{"Pty"};
      multiset<string> Pty_385_set;
      Pty_385.add_attribute("ID", "NestedPartyID_t_2146510973"); // 2
      Pty_385_set.insert("NestedPartyID_t_2146510973");
      Pty_385.add_attribute("Src", "B"); // 2
      Pty_385_set.insert("B");
      Pty_385.add_attribute("R", "47"); // 2
      Pty_385_set.insert("47");
      all_values.push_back(Pty_385_set);
      all_compo_names.insert("Pty_385_set");

      {
        xml_element Sub_385{"Sub"};
        multiset<string> Sub_385_set;
        Sub_385.add_attribute("ID", "NestedPartySubID_t_1389593118"); // 3
        Sub_385_set.insert("NestedPartySubID_t_1389593118");
        Sub_385.add_attribute("Typ", "28"); // 3
        Sub_385_set.insert("28");
        all_values.push_back(Sub_385_set);
        all_compo_names.insert("Sub_385_set");

        Pty_385.add_element(Sub_385);
      }
      RgDtl_0.add_element(Pty_385);
    }
    elt.add_element(RgDtl_0);
  } // end RgDtl
  { // RgDtlInst
    xml_element RgDtlInst_0{"RgDtlInst"};
    multiset<string> RgDtlInst_0_set;
    RgDtlInst_0.add_attribute("DistribPmtMethod", "7"); // 1
    RgDtlInst_0_set.insert("7");
    RgDtlInst_0.add_attribute("DistribPctage", "11181534.710000"); // 1
    RgDtlInst_0_set.insert("11181534.710000");
    RgDtlInst_0.add_attribute("CshDistribCurr", "USD"); // 1
    RgDtlInst_0_set.insert("USD");
    RgDtlInst_0.add_attribute("CshDistribAgentName", "CashDistribAgentName_t_794600620"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentName_t_794600620");
    RgDtlInst_0.add_attribute("CshDistribAgentCode", "CashDistribAgentCode_t_1098964043"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentCode_t_1098964043");
    RgDtlInst_0.add_attribute("CshDistribAgentAcctNum", "CashDistribAgentAcctNumber_t_978400775"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentAcctNumber_t_978400775");
    RgDtlInst_0.add_attribute("CshDistribPayRef", "CashDistribPayRef_t_487669020"); // 1
    RgDtlInst_0_set.insert("CashDistribPayRef_t_487669020");
    RgDtlInst_0.add_attribute("CshDistribAgentAcctName", "CashDistribAgentAcctName_t_549166267"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentAcctName_t_549166267");
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
