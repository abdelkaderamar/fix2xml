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
  elt.add_attribute("ID", "RegistID_t_1110753912"); // 0
  RegistrationInstructions_message_t_0.insert("RegistID_t_1110753912");
  elt.add_attribute("TransTyp", "0"); // 0
  RegistrationInstructions_message_t_0.insert("0");
  elt.add_attribute("RefID", "RegistRefID_t_536555295"); // 0
  RegistrationInstructions_message_t_0.insert("RegistRefID_t_536555295");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1339430487"); // 0
  RegistrationInstructions_message_t_0.insert("ClOrdID_t_1339430487");
  elt.add_attribute("Acct", "Account_t_1867486573"); // 0
  RegistrationInstructions_message_t_0.insert("Account_t_1867486573");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  RegistrationInstructions_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "RegistAcctType_t_1138257939"); // 0
  RegistrationInstructions_message_t_0.insert("RegistAcctType_t_1138257939");
  elt.add_attribute("TaxAdvantageTyp", "26"); // 0
  RegistrationInstructions_message_t_0.insert("26");
  elt.add_attribute("OwnershipTyp", "2"); // 0
  RegistrationInstructions_message_t_0.insert("2");
  all_values.push_back(RegistrationInstructions_message_t_0);
  all_compo_names.insert("RegistrationInstructions_message_t");

  { // Hdr
    xml_element Hdr_76{"Hdr"};
    multiset<string> Hdr_76_set;
    Hdr_76.add_attribute("SeqNum", "1485440393"); // 1
    Hdr_76_set.insert("1485440393");
    Hdr_76.add_attribute("SID", "SenderCompID_t_94105543"); // 1
    Hdr_76_set.insert("SenderCompID_t_94105543");
    Hdr_76.add_attribute("TID", "TargetCompID_t_1931185223"); // 1
    Hdr_76_set.insert("TargetCompID_t_1931185223");
    Hdr_76.add_attribute("OBID", "OnBehalfOfCompID_t_957898657"); // 1
    Hdr_76_set.insert("OnBehalfOfCompID_t_957898657");
    Hdr_76.add_attribute("D2ID", "DeliverToCompID_t_641819782"); // 1
    Hdr_76_set.insert("DeliverToCompID_t_641819782");
    Hdr_76.add_attribute("SSub", "SenderSubID_t_1405570259"); // 1
    Hdr_76_set.insert("SenderSubID_t_1405570259");
    Hdr_76.add_attribute("SLoc", "SenderLocationID_t_1808858714"); // 1
    Hdr_76_set.insert("SenderLocationID_t_1808858714");
    Hdr_76.add_attribute("TSub", "TargetSubID_t_596832913"); // 1
    Hdr_76_set.insert("TargetSubID_t_596832913");
    Hdr_76.add_attribute("TLoc", "TargetLocationID_t_1648062303"); // 1
    Hdr_76_set.insert("TargetLocationID_t_1648062303");
    Hdr_76.add_attribute("OBSub", "OnBehalfOfSubID_t_1840747584"); // 1
    Hdr_76_set.insert("OnBehalfOfSubID_t_1840747584");
    Hdr_76.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1347207543"); // 1
    Hdr_76_set.insert("OnBehalfOfLocationID_t_1347207543");
    Hdr_76.add_attribute("D2Sub", "DeliverToSubID_t_1368199613"); // 1
    Hdr_76_set.insert("DeliverToSubID_t_1368199613");
    Hdr_76.add_attribute("D2Loc", "DeliverToLocationID_t_1534569800"); // 1
    Hdr_76_set.insert("DeliverToLocationID_t_1534569800");
    Hdr_76.add_attribute("PosDup", "N"); // 1
    Hdr_76_set.insert("N");
    Hdr_76.add_attribute("PosRsnd", "Y"); // 1
    Hdr_76_set.insert("Y");
    Hdr_76.add_attribute("Snt", "SendingTime_t_1228375930"); // 1
    Hdr_76_set.insert("SendingTime_t_1228375930");
    Hdr_76.add_attribute("OrigSnt", "OrigSendingTime_t_203622137"); // 1
    Hdr_76_set.insert("OrigSendingTime_t_203622137");
    Hdr_76.add_attribute("MsgEncd", "MessageEncoding_t_484920790"); // 1
    Hdr_76_set.insert("MessageEncoding_t_484920790");
    all_values.push_back(Hdr_76_set);
    all_compo_names.insert("Hdr_76_set");

    {
      xml_element Hop_76{"Hop"};
      multiset<string> Hop_76_set;
      Hop_76.add_attribute("ID", "HopCompID_t_501823740"); // 2
      Hop_76_set.insert("HopCompID_t_501823740");
      Hop_76.add_attribute("Ref", "2105239529"); // 2
      Hop_76_set.insert("2105239529");
      Hop_76.add_attribute("Snt", "HopSendingTime_t_646710312"); // 2
      Hop_76_set.insert("HopSendingTime_t_646710312");
      all_values.push_back(Hop_76_set);
      all_compo_names.insert("Hop_76_set");

      Hdr_76.add_element(Hop_76);
    }
    elt.add_element(Hdr_76);
  } // end Hdr
  { // Pty
    xml_element Pty_352{"Pty"};
    multiset<string> Pty_352_set;
    Pty_352.add_attribute("ID", "PartyID_t_1068509794"); // 1
    Pty_352_set.insert("PartyID_t_1068509794");
    Pty_352.add_attribute("Src", "B"); // 1
    Pty_352_set.insert("B");
    Pty_352.add_attribute("R", "4"); // 1
    Pty_352_set.insert("4");
    all_values.push_back(Pty_352_set);
    all_compo_names.insert("Pty_352_set");

    {
      xml_element Sub_352{"Sub"};
      multiset<string> Sub_352_set;
      Sub_352.add_attribute("ID", "PartySubID_t_260456633"); // 2
      Sub_352_set.insert("PartySubID_t_260456633");
      Sub_352.add_attribute("Typ", "28"); // 2
      Sub_352_set.insert("28");
      all_values.push_back(Sub_352_set);
      all_compo_names.insert("Sub_352_set");

      Pty_352.add_element(Sub_352);
    }
    elt.add_element(Pty_352);
  } // end Pty
  { // Pty
    xml_element Pty_353{"Pty"};
    multiset<string> Pty_353_set;
    Pty_353.add_attribute("ID", "PartyID_t_1506944681"); // 1
    Pty_353_set.insert("PartyID_t_1506944681");
    Pty_353.add_attribute("Src", "4"); // 1
    Pty_353_set.insert("4");
    Pty_353.add_attribute("R", "41"); // 1
    Pty_353_set.insert("41");
    all_values.push_back(Pty_353_set);
    all_compo_names.insert("Pty_353_set");

    {
      xml_element Sub_353{"Sub"};
      multiset<string> Sub_353_set;
      Sub_353.add_attribute("ID", "PartySubID_t_2060929541"); // 2
      Sub_353_set.insert("PartySubID_t_2060929541");
      Sub_353.add_attribute("Typ", "18"); // 2
      Sub_353_set.insert("18");
      all_values.push_back(Sub_353_set);
      all_compo_names.insert("Sub_353_set");

      Pty_353.add_element(Sub_353);
    }
    elt.add_element(Pty_353);
  } // end Pty
  { // RgDtl
    xml_element RgDtl_0{"RgDtl"};
    multiset<string> RgDtl_0_set;
    RgDtl_0.add_attribute("RejRsnTxt", "RegistDtls_t_1844631117"); // 1
    RgDtl_0_set.insert("RegistDtls_t_1844631117");
    RgDtl_0.add_attribute("Email", "RegistEmail_t_1694569975"); // 1
    RgDtl_0_set.insert("RegistEmail_t_1694569975");
    RgDtl_0.add_attribute("MailingDtls", "MailingDtls_t_1363194188"); // 1
    RgDtl_0_set.insert("MailingDtls_t_1363194188");
    RgDtl_0.add_attribute("MailingInst", "MailingInst_t_1102717728"); // 1
    RgDtl_0_set.insert("MailingInst_t_1102717728");
    RgDtl_0.add_attribute("OwnerTyp", "6"); // 1
    RgDtl_0_set.insert("6");
    RgDtl_0.add_attribute("DtOfBirth", "DateOfBirth_t_1960027102"); // 1
    RgDtl_0_set.insert("DateOfBirth_t_1960027102");
    RgDtl_0.add_attribute("InvestorCtryOfResidence", "603296384"); // 1
    RgDtl_0_set.insert("603296384");
    all_values.push_back(RgDtl_0_set);
    all_compo_names.insert("RgDtl_0_set");

    {
      xml_element Pty_354{"Pty"};
      multiset<string> Pty_354_set;
      Pty_354.add_attribute("ID", "NestedPartyID_t_1049208978"); // 2
      Pty_354_set.insert("NestedPartyID_t_1049208978");
      Pty_354.add_attribute("Src", "I"); // 2
      Pty_354_set.insert("I");
      Pty_354.add_attribute("R", "60"); // 2
      Pty_354_set.insert("60");
      all_values.push_back(Pty_354_set);
      all_compo_names.insert("Pty_354_set");

      {
        xml_element Sub_354{"Sub"};
        multiset<string> Sub_354_set;
        Sub_354.add_attribute("ID", "NestedPartySubID_t_436295130"); // 3
        Sub_354_set.insert("NestedPartySubID_t_436295130");
        Sub_354.add_attribute("Typ", "20"); // 3
        Sub_354_set.insert("20");
        all_values.push_back(Sub_354_set);
        all_compo_names.insert("Sub_354_set");

        Pty_354.add_element(Sub_354);
      }
      RgDtl_0.add_element(Pty_354);
    }
    elt.add_element(RgDtl_0);
  } // end RgDtl
  { // RgDtl
    xml_element RgDtl_1{"RgDtl"};
    multiset<string> RgDtl_1_set;
    RgDtl_1.add_attribute("RejRsnTxt", "RegistDtls_t_392500264"); // 1
    RgDtl_1_set.insert("RegistDtls_t_392500264");
    RgDtl_1.add_attribute("Email", "RegistEmail_t_1664671060"); // 1
    RgDtl_1_set.insert("RegistEmail_t_1664671060");
    RgDtl_1.add_attribute("MailingDtls", "MailingDtls_t_1428203705"); // 1
    RgDtl_1_set.insert("MailingDtls_t_1428203705");
    RgDtl_1.add_attribute("MailingInst", "MailingInst_t_877421055"); // 1
    RgDtl_1_set.insert("MailingInst_t_877421055");
    RgDtl_1.add_attribute("OwnerTyp", "13"); // 1
    RgDtl_1_set.insert("13");
    RgDtl_1.add_attribute("DtOfBirth", "DateOfBirth_t_1385959586"); // 1
    RgDtl_1_set.insert("DateOfBirth_t_1385959586");
    RgDtl_1.add_attribute("InvestorCtryOfResidence", "1524131367"); // 1
    RgDtl_1_set.insert("1524131367");
    all_values.push_back(RgDtl_1_set);
    all_compo_names.insert("RgDtl_1_set");

    {
      xml_element Pty_355{"Pty"};
      multiset<string> Pty_355_set;
      Pty_355.add_attribute("ID", "NestedPartyID_t_1338470665"); // 2
      Pty_355_set.insert("NestedPartyID_t_1338470665");
      Pty_355.add_attribute("Src", "H"); // 2
      Pty_355_set.insert("H");
      Pty_355.add_attribute("R", "69"); // 2
      Pty_355_set.insert("69");
      all_values.push_back(Pty_355_set);
      all_compo_names.insert("Pty_355_set");

      {
        xml_element Sub_355{"Sub"};
        multiset<string> Sub_355_set;
        Sub_355.add_attribute("ID", "NestedPartySubID_t_1047001824"); // 3
        Sub_355_set.insert("NestedPartySubID_t_1047001824");
        Sub_355.add_attribute("Typ", "16"); // 3
        Sub_355_set.insert("16");
        all_values.push_back(Sub_355_set);
        all_compo_names.insert("Sub_355_set");

        Pty_355.add_element(Sub_355);
      }
      RgDtl_1.add_element(Pty_355);
    }
    elt.add_element(RgDtl_1);
  } // end RgDtl
  { // RgDtlInst
    xml_element RgDtlInst_0{"RgDtlInst"};
    multiset<string> RgDtlInst_0_set;
    RgDtlInst_0.add_attribute("DistribPmtMethod", "7"); // 1
    RgDtlInst_0_set.insert("7");
    RgDtlInst_0.add_attribute("DistribPctage", "19661569.390000"); // 1
    RgDtlInst_0_set.insert("19661569.390000");
    RgDtlInst_0.add_attribute("CshDistribCurr", "EUR"); // 1
    RgDtlInst_0_set.insert("EUR");
    RgDtlInst_0.add_attribute("CshDistribAgentName", "CashDistribAgentName_t_555344609"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentName_t_555344609");
    RgDtlInst_0.add_attribute("CshDistribAgentCode", "CashDistribAgentCode_t_1229769032"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentCode_t_1229769032");
    RgDtlInst_0.add_attribute("CshDistribAgentAcctNum", "CashDistribAgentAcctNumber_t_17056220"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentAcctNumber_t_17056220");
    RgDtlInst_0.add_attribute("CshDistribPayRef", "CashDistribPayRef_t_102430937"); // 1
    RgDtlInst_0_set.insert("CashDistribPayRef_t_102430937");
    RgDtlInst_0.add_attribute("CshDistribAgentAcctName", "CashDistribAgentAcctName_t_445479573"); // 1
    RgDtlInst_0_set.insert("CashDistribAgentAcctName_t_445479573");
    all_values.push_back(RgDtlInst_0_set);
    all_compo_names.insert("RgDtlInst_0_set");

    elt.add_element(RgDtlInst_0);
  } // end RgDtlInst
  { // RgDtlInst
    xml_element RgDtlInst_1{"RgDtlInst"};
    multiset<string> RgDtlInst_1_set;
    RgDtlInst_1.add_attribute("DistribPmtMethod", "6"); // 1
    RgDtlInst_1_set.insert("6");
    RgDtlInst_1.add_attribute("DistribPctage", "14583759.780000"); // 1
    RgDtlInst_1_set.insert("14583759.780000");
    RgDtlInst_1.add_attribute("CshDistribCurr", "JPY"); // 1
    RgDtlInst_1_set.insert("JPY");
    RgDtlInst_1.add_attribute("CshDistribAgentName", "CashDistribAgentName_t_360101308"); // 1
    RgDtlInst_1_set.insert("CashDistribAgentName_t_360101308");
    RgDtlInst_1.add_attribute("CshDistribAgentCode", "CashDistribAgentCode_t_1417774024"); // 1
    RgDtlInst_1_set.insert("CashDistribAgentCode_t_1417774024");
    RgDtlInst_1.add_attribute("CshDistribAgentAcctNum", "CashDistribAgentAcctNumber_t_1547082681"); // 1
    RgDtlInst_1_set.insert("CashDistribAgentAcctNumber_t_1547082681");
    RgDtlInst_1.add_attribute("CshDistribPayRef", "CashDistribPayRef_t_796396438"); // 1
    RgDtlInst_1_set.insert("CashDistribPayRef_t_796396438");
    RgDtlInst_1.add_attribute("CshDistribAgentAcctName", "CashDistribAgentAcctName_t_494871944"); // 1
    RgDtlInst_1_set.insert("CashDistribAgentAcctName_t_494871944");
    all_values.push_back(RgDtlInst_1_set);
    all_compo_names.insert("RgDtlInst_1_set");

    elt.add_element(RgDtlInst_1);
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
