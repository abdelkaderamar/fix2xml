#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/BidResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( BidResponse_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"BidRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BidResponse_message_t_0;
  elt.add_attribute("BidID", "BidID_t_1890582142"); // 0
  BidResponse_message_t_0.insert("BidID_t_1890582142");
  elt.add_attribute("ClBidID", "ClientBidID_t_1437361230"); // 0
  BidResponse_message_t_0.insert("ClientBidID_t_1437361230");
  all_values.push_back(BidResponse_message_t_0);
  all_compo_names.insert("BidResponse_message_t");

  { // Hdr
    xml_element Hdr_12{"Hdr"};
    multiset<string> Hdr_12_set;
    Hdr_12.add_attribute("SeqNum", "728188943"); // 1
    Hdr_12_set.insert("728188943");
    Hdr_12.add_attribute("SID", "SenderCompID_t_1600499987"); // 1
    Hdr_12_set.insert("SenderCompID_t_1600499987");
    Hdr_12.add_attribute("TID", "TargetCompID_t_2024301938"); // 1
    Hdr_12_set.insert("TargetCompID_t_2024301938");
    Hdr_12.add_attribute("OBID", "OnBehalfOfCompID_t_2135127150"); // 1
    Hdr_12_set.insert("OnBehalfOfCompID_t_2135127150");
    Hdr_12.add_attribute("D2ID", "DeliverToCompID_t_936607706"); // 1
    Hdr_12_set.insert("DeliverToCompID_t_936607706");
    Hdr_12.add_attribute("SSub", "SenderSubID_t_68417021"); // 1
    Hdr_12_set.insert("SenderSubID_t_68417021");
    Hdr_12.add_attribute("SLoc", "SenderLocationID_t_606184920"); // 1
    Hdr_12_set.insert("SenderLocationID_t_606184920");
    Hdr_12.add_attribute("TSub", "TargetSubID_t_163718770"); // 1
    Hdr_12_set.insert("TargetSubID_t_163718770");
    Hdr_12.add_attribute("TLoc", "TargetLocationID_t_373344641"); // 1
    Hdr_12_set.insert("TargetLocationID_t_373344641");
    Hdr_12.add_attribute("OBSub", "OnBehalfOfSubID_t_965381770"); // 1
    Hdr_12_set.insert("OnBehalfOfSubID_t_965381770");
    Hdr_12.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1388379885"); // 1
    Hdr_12_set.insert("OnBehalfOfLocationID_t_1388379885");
    Hdr_12.add_attribute("D2Sub", "DeliverToSubID_t_1665116674"); // 1
    Hdr_12_set.insert("DeliverToSubID_t_1665116674");
    Hdr_12.add_attribute("D2Loc", "DeliverToLocationID_t_428465005"); // 1
    Hdr_12_set.insert("DeliverToLocationID_t_428465005");
    Hdr_12.add_attribute("PosDup", "Y"); // 1
    Hdr_12_set.insert("Y");
    Hdr_12.add_attribute("PosRsnd", "Y"); // 1
    Hdr_12_set.insert("Y");
    Hdr_12.add_attribute("Snt", "SendingTime_t_567382401"); // 1
    Hdr_12_set.insert("SendingTime_t_567382401");
    Hdr_12.add_attribute("OrigSnt", "OrigSendingTime_t_8369715"); // 1
    Hdr_12_set.insert("OrigSendingTime_t_8369715");
    Hdr_12.add_attribute("MsgEncd", "MessageEncoding_t_2078675332"); // 1
    Hdr_12_set.insert("MessageEncoding_t_2078675332");
    all_values.push_back(Hdr_12_set);
    all_compo_names.insert("Hdr_12_set");

    {
      xml_element Hop_12{"Hop"};
      multiset<string> Hop_12_set;
      Hop_12.add_attribute("ID", "HopCompID_t_794047574"); // 2
      Hop_12_set.insert("HopCompID_t_794047574");
      Hop_12.add_attribute("Ref", "339270084"); // 2
      Hop_12_set.insert("339270084");
      Hop_12.add_attribute("Snt", "HopSendingTime_t_1832420525"); // 2
      Hop_12_set.insert("HopSendingTime_t_1832420525");
      all_values.push_back(Hop_12_set);
      all_compo_names.insert("Hop_12_set");

      Hdr_12.add_element(Hop_12);
    }
    elt.add_element(Hdr_12);
  } // end Hdr
  { // CompRsp
    xml_element CompRsp_0{"CompRsp"};
    multiset<string> CompRsp_0_set;
    CompRsp_0.add_attribute("ID", "ListID_t_1793322679"); // 1
    CompRsp_0_set.insert("ListID_t_1793322679");
    CompRsp_0.add_attribute("Ctry", "1922793168"); // 1
    CompRsp_0_set.insert("1922793168");
    CompRsp_0.add_attribute("Side", "5"); // 1
    CompRsp_0_set.insert("5");
    CompRsp_0.add_attribute("Px", "21464690.140000"); // 1
    CompRsp_0_set.insert("21464690.140000");
    CompRsp_0.add_attribute("PxTyp", "18"); // 1
    CompRsp_0_set.insert("18");
    CompRsp_0.add_attribute("FairValu", "FairValue_t_1770010545"); // 1
    CompRsp_0_set.insert("FairValue_t_1770010545");
    CompRsp_0.add_attribute("NetGrossInd", "1"); // 1
    CompRsp_0_set.insert("1");
    CompRsp_0.add_attribute("SettlTyp", "6"); // 1
    CompRsp_0_set.insert("6");
    CompRsp_0.add_attribute("SettlDt", "SettlDate_t_1059888127"); // 1
    CompRsp_0_set.insert("SettlDate_t_1059888127");
    CompRsp_0.add_attribute("SesID", "4"); // 1
    CompRsp_0_set.insert("4");
    CompRsp_0.add_attribute("SesSub", "2"); // 1
    CompRsp_0_set.insert("2");
    CompRsp_0.add_attribute("Txt", "Text_t_936706417"); // 1
    CompRsp_0_set.insert("Text_t_936706417");
    CompRsp_0.add_attribute("EncTxtLen", "1712134705"); // 1
    CompRsp_0_set.insert("1712134705");
    CompRsp_0.add_attribute("EncTxt", "EncodedText_t_1265015004"); // 1
    CompRsp_0_set.insert("EncodedText_t_1265015004");
    all_values.push_back(CompRsp_0_set);
    all_compo_names.insert("CompRsp_0_set");

    {
      xml_element Comm_8{"Comm"};
      multiset<string> Comm_8_set;
      Comm_8.add_attribute("Comm", "Commission_t_1005123438"); // 2
      Comm_8_set.insert("Commission_t_1005123438");
      Comm_8.add_attribute("CommTyp", "1"); // 2
      Comm_8_set.insert("1");
      Comm_8.add_attribute("Ccy", "CAN"); // 2
      Comm_8_set.insert("CAN");
      Comm_8.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_8_set.insert("N");
      all_values.push_back(Comm_8_set);
      all_compo_names.insert("Comm_8_set");

      CompRsp_0.add_element(Comm_8);
    }
    elt.add_element(CompRsp_0);
  } // end CompRsp
  { // CompRsp
    xml_element CompRsp_1{"CompRsp"};
    multiset<string> CompRsp_1_set;
    CompRsp_1.add_attribute("ID", "ListID_t_669630011"); // 1
    CompRsp_1_set.insert("ListID_t_669630011");
    CompRsp_1.add_attribute("Ctry", "896101106"); // 1
    CompRsp_1_set.insert("896101106");
    CompRsp_1.add_attribute("Side", "2"); // 1
    CompRsp_1_set.insert("2");
    CompRsp_1.add_attribute("Px", "1301751.780000"); // 1
    CompRsp_1_set.insert("1301751.780000");
    CompRsp_1.add_attribute("PxTyp", "4"); // 1
    CompRsp_1_set.insert("4");
    CompRsp_1.add_attribute("FairValu", "FairValue_t_2132065155"); // 1
    CompRsp_1_set.insert("FairValue_t_2132065155");
    CompRsp_1.add_attribute("NetGrossInd", "2"); // 1
    CompRsp_1_set.insert("2");
    CompRsp_1.add_attribute("SettlTyp", "7"); // 1
    CompRsp_1_set.insert("7");
    CompRsp_1.add_attribute("SettlDt", "SettlDate_t_778629081"); // 1
    CompRsp_1_set.insert("SettlDate_t_778629081");
    CompRsp_1.add_attribute("SesID", "5"); // 1
    CompRsp_1_set.insert("5");
    CompRsp_1.add_attribute("SesSub", "4"); // 1
    CompRsp_1_set.insert("4");
    CompRsp_1.add_attribute("Txt", "Text_t_1732183946"); // 1
    CompRsp_1_set.insert("Text_t_1732183946");
    CompRsp_1.add_attribute("EncTxtLen", "123654009"); // 1
    CompRsp_1_set.insert("123654009");
    CompRsp_1.add_attribute("EncTxt", "EncodedText_t_1215512385"); // 1
    CompRsp_1_set.insert("EncodedText_t_1215512385");
    all_values.push_back(CompRsp_1_set);
    all_compo_names.insert("CompRsp_1_set");

    {
      xml_element Comm_9{"Comm"};
      multiset<string> Comm_9_set;
      Comm_9.add_attribute("Comm", "Commission_t_1544950286"); // 2
      Comm_9_set.insert("Commission_t_1544950286");
      Comm_9.add_attribute("CommTyp", "6"); // 2
      Comm_9_set.insert("6");
      Comm_9.add_attribute("Ccy", "CHF"); // 2
      Comm_9_set.insert("CHF");
      Comm_9.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_9_set.insert("Y");
      all_values.push_back(Comm_9_set);
      all_compo_names.insert("Comm_9_set");

      CompRsp_1.add_element(Comm_9);
    }
    elt.add_element(CompRsp_1);
  } // end CompRsp
  { // CompRsp
    xml_element CompRsp_2{"CompRsp"};
    multiset<string> CompRsp_2_set;
    CompRsp_2.add_attribute("ID", "ListID_t_1075712160"); // 1
    CompRsp_2_set.insert("ListID_t_1075712160");
    CompRsp_2.add_attribute("Ctry", "79881662"); // 1
    CompRsp_2_set.insert("79881662");
    CompRsp_2.add_attribute("Side", "7"); // 1
    CompRsp_2_set.insert("7");
    CompRsp_2.add_attribute("Px", "14041194.570000"); // 1
    CompRsp_2_set.insert("14041194.570000");
    CompRsp_2.add_attribute("PxTyp", "9"); // 1
    CompRsp_2_set.insert("9");
    CompRsp_2.add_attribute("FairValu", "FairValue_t_260600248"); // 1
    CompRsp_2_set.insert("FairValue_t_260600248");
    CompRsp_2.add_attribute("NetGrossInd", "2"); // 1
    CompRsp_2_set.insert("2");
    CompRsp_2.add_attribute("SettlTyp", "C"); // 1
    CompRsp_2_set.insert("C");
    CompRsp_2.add_attribute("SettlDt", "SettlDate_t_431436226"); // 1
    CompRsp_2_set.insert("SettlDate_t_431436226");
    CompRsp_2.add_attribute("SesID", "1"); // 1
    CompRsp_2_set.insert("1");
    CompRsp_2.add_attribute("SesSub", "3"); // 1
    CompRsp_2_set.insert("3");
    CompRsp_2.add_attribute("Txt", "Text_t_1567653974"); // 1
    CompRsp_2_set.insert("Text_t_1567653974");
    CompRsp_2.add_attribute("EncTxtLen", "472530951"); // 1
    CompRsp_2_set.insert("472530951");
    CompRsp_2.add_attribute("EncTxt", "EncodedText_t_1313408"); // 1
    CompRsp_2_set.insert("EncodedText_t_1313408");
    all_values.push_back(CompRsp_2_set);
    all_compo_names.insert("CompRsp_2_set");

    {
      xml_element Comm_10{"Comm"};
      multiset<string> Comm_10_set;
      Comm_10.add_attribute("Comm", "Commission_t_984853080"); // 2
      Comm_10_set.insert("Commission_t_984853080");
      Comm_10.add_attribute("CommTyp", "5"); // 2
      Comm_10_set.insert("5");
      Comm_10.add_attribute("Ccy", "EUR"); // 2
      Comm_10_set.insert("EUR");
      Comm_10.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_10_set.insert("Y");
      all_values.push_back(Comm_10_set);
      all_compo_names.insert("Comm_10_set");

      CompRsp_2.add_element(Comm_10);
    }
    elt.add_element(CompRsp_2);
  } // end CompRsp
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
