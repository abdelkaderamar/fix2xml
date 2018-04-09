#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementInstructions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementInstructions, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SettlementInstructions msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementInstructions_0;
  set_field(msg, FIX::ClOrdID{"STRING_999453787"}, SettlementInstructions_0);
  set_field(msg, FIX::EncodedText{"DATA_68932674"}, SettlementInstructions_0);
  set_field(msg, FIX::EncodedTextLen{997294928}, SettlementInstructions_0);
  set_field(msg, FIX::SettlInstMode{'5'}, SettlementInstructions_0);
  set_field(msg, FIX::SettlInstMsgID{"STRING_499297229"}, SettlementInstructions_0);
  set_field(msg, FIX::SettlInstReqID{"STRING_1537648799"}, SettlementInstructions_0);
  set_field(msg, FIX::SettlInstReqRejCode{2}, SettlementInstructions_0);
  set_field(msg, FIX::Text{"STRING_756557958"}, SettlementInstructions_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(13, 54, 17, 21, 10, 2003)}, SettlementInstructions_0);
  all_values.push_back(SettlementInstructions_0);

  all_compo_names.insert("SettlementInstructions");

  // SettlInstGrp
  // Group SettlInstGrp.NoSettlInst
  {
    FIX50SP2::SettlementInstructions::NoSettlInst noSettlInst_0_0;
    // SettlInstGrp.NoSettlInst
    multiset<string> SettlInstGrp_NoSettlInst_0;
    set_field(noSettlInst_0_0, FIX::CFICode{"STRING_1675074474"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::CardExpDate{"LOCALMKTDATE_1041583062"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::CardHolderName{"STRING_2037607699"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::CardIssNum{"STRING_1625747026"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::CardNumber{"STRING_294190450"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::CardStartDate{"LOCALMKTDATE_1773607288"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::EffectiveTime{FIX::UTCTIMESTAMP(20, 17, 3, 18, 2, 2001)}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(23, 12, 7, 27, 6, 2001)}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(11, 55, 5, 12, 6, 2014)}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::PaymentDate{"LOCALMKTDATE_706826349"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::PaymentMethod{11}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::PaymentRef{"STRING_1162051019"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::PaymentRemitterID{"STRING_705552107"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::Product{11}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::SecurityType{"STRING_STRUCT"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::SettlCurrency{"CHF"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::SettlInstID{"STRING_350340883"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::SettlInstRefID{"STRING_221799798"}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::SettlInstTransType{'T'}, SettlInstGrp_NoSettlInst_0);
    set_field(noSettlInst_0_0, FIX::Side{'8'}, SettlInstGrp_NoSettlInst_0);
    all_values.push_back(SettlInstGrp_NoSettlInst_0);
    all_compo_names.insert("...NoSettlInst");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_139;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1577965010"}, Parties_NoPartyIDs_139);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_139);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{18}, Parties_NoPartyIDs_139);
      all_values.push_back(Parties_NoPartyIDs_139);
      all_compo_names.insert("...NoSettlInst...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_277;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_165265731"}, PtysSubGrp_NoPartySubIDs_277);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_277);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_277);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_278;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_747825247"}, PtysSubGrp_NoPartySubIDs_278);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_278);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_278);
        all_compo_names.insert("...NoSettlInst...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noSettlInst_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // SettlInstructionsData
    multiset<string> SettlInstructionsData_12;
    set_field(noSettlInst_0_0, FIX::SettlDeliveryType{3}, SettlInstructionsData_12);
    set_field(noSettlInst_0_0, FIX::StandInstDbID{"STRING_1817691048"}, SettlInstructionsData_12);
    set_field(noSettlInst_0_0, FIX::StandInstDbName{"STRING_1394722775"}, SettlInstructionsData_12);
    set_field(noSettlInst_0_0, FIX::StandInstDbType{2}, SettlInstructionsData_12);
    all_values.push_back(SettlInstructionsData_12);
    all_compo_names.insert("...NoSettlInst.");

    // DlvyInstGrp
    // Group DlvyInstGrp.NoDlvyInst
    {
      FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst noDlvyInst_0_1_0;
      // DlvyInstGrp.NoDlvyInst
      multiset<string> DlvyInstGrp_NoDlvyInst_19;
      set_field(noDlvyInst_0_1_0, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_19);
      set_field(noDlvyInst_0_1_0, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_19);
      all_values.push_back(DlvyInstGrp_NoDlvyInst_19);
      all_compo_names.insert("...NoSettlInst....NoDlvyInst");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_34;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_1463507284"}, SettlParties_NoSettlPartyIDs_34);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_34);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{902961410}, SettlParties_NoSettlPartyIDs_34);
        all_values.push_back(SettlParties_NoSettlPartyIDs_34);
        all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_68;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_619141379"}, SettlPtysSubGrp_NoSettlPartySubIDs_68);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{1608513517}, SettlPtysSubGrp_NoSettlPartySubIDs_68);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_68);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_69;
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubID{"STRING_1085496340"}, SettlPtysSubGrp_NoSettlPartySubIDs_69);
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubIDType{675291812}, SettlPtysSubGrp_NoSettlPartySubIDs_69);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_69);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_70;
          set_field(noSettlPartySubIDs_0_0_0_3_2, FIX::SettlPartySubID{"STRING_56706027"}, SettlPtysSubGrp_NoSettlPartySubIDs_70);
          set_field(noSettlPartySubIDs_0_0_0_3_2, FIX::SettlPartySubIDType{138549660}, SettlPtysSubGrp_NoSettlPartySubIDs_70);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_70);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_35;
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyID{"STRING_1025632695"}, SettlParties_NoSettlPartyIDs_35);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_35);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyRole{990910367}, SettlParties_NoSettlPartyIDs_35);
        all_values.push_back(SettlParties_NoSettlPartyIDs_35);
        all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_71;
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubID{"STRING_118177634"}, SettlPtysSubGrp_NoSettlPartySubIDs_71);
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubIDType{421391729}, SettlPtysSubGrp_NoSettlPartySubIDs_71);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_71);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::SettlementInstructions::NoSettlInst::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_72;
          set_field(noSettlPartySubIDs_0_0_1_3_1, FIX::SettlPartySubID{"STRING_1427457201"}, SettlPtysSubGrp_NoSettlPartySubIDs_72);
          set_field(noSettlPartySubIDs_0_0_1_3_1, FIX::SettlPartySubIDType{1373074147}, SettlPtysSubGrp_NoSettlPartySubIDs_72);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_72);
          all_compo_names.insert("...NoSettlInst....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        noDlvyInst_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noSettlInst_0_0.addGroup(noDlvyInst_0_1_0);
    }
    msg.addGroup(noSettlInst_0_0);
  }
  // header
  multiset<string> header_91;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_5"}, header_91);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1592722932"}, header_91);
  set_header_field(msg.getHeader(), FIX::BodyLength{2030725059}, header_91);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1832385212"}, header_91);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_2123068570"}, header_91);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_940941650"}, header_91);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1502592613"}, header_91);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1370307698}, header_91);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_91);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1357307561}, header_91);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_90998272"}, header_91);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_163038813"}, header_91);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1553442621"}, header_91);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(5, 3, 47, 24, 5, 2004)}, header_91);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_91);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_91);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_2141774308"}, header_91);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1940195059}, header_91);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_105162106"}, header_91);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_985201027"}, header_91);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1351050114"}, header_91);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(12, 7, 7, 13, 12, 2002)}, header_91);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_28570638"}, header_91);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_51847874"}, header_91);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_273113300"}, header_91);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1531163251"}, header_91);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1422155572}, header_91);
  all_values.push_back(header_91);
  all_compo_names.insert(".header");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";
  cout << "////////////////////////////////////////////" << endl;
  cout << msg.toXML() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    BOOST_LOG_TRIVIAL(debug) << "XML Elements are:";
    cout << "	[";
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

    BOOST_LOG_TRIVIAL(debug) << "FIX Components are:"; 
    cout << "	[";
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

  }
  BOOST_LOG_TRIVIAL(debug) << "All FIX components";
  for (const auto& l : all_values) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }
  BOOST_LOG_TRIVIAL(debug) << "All XML components";
  for (const auto& l : elt_lists) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;

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
      BOOST_LOG_TRIVIAL(debug) << "[TO CHECK] This XML component was not found in FIX message";
      cout << "	 ---> [";
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << "]" << endl << endl;
    } // end if ! found
  } // end for elt_lists
}
