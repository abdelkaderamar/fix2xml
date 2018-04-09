#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/BidRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( BidRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"BidReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BidRequest_message_t_0;
  elt.add_attribute("BidID", "BidID_t_1487937847"); // 0
  BidRequest_message_t_0.insert("BidID_t_1487937847");
  elt.add_attribute("ClBidID", "ClientBidID_t_2125920521"); // 0
  BidRequest_message_t_0.insert("ClientBidID_t_2125920521");
  elt.add_attribute("BidReqTransTyp", "N"); // 0
  BidRequest_message_t_0.insert("N");
  elt.add_attribute("ListName", "ListName_t_523124235"); // 0
  BidRequest_message_t_0.insert("ListName_t_523124235");
  elt.add_attribute("TotNoReltdSym", "1946303219"); // 0
  BidRequest_message_t_0.insert("1946303219");
  elt.add_attribute("BidTyp", "1"); // 0
  BidRequest_message_t_0.insert("1");
  elt.add_attribute("NumTkts", "1681627214"); // 0
  BidRequest_message_t_0.insert("1681627214");
  elt.add_attribute("Ccy", "GBP"); // 0
  BidRequest_message_t_0.insert("GBP");
  elt.add_attribute("SideValu1", "SideValue1_t_664082556"); // 0
  BidRequest_message_t_0.insert("SideValue1_t_664082556");
  elt.add_attribute("SideValu2", "SideValue2_t_409509066"); // 0
  BidRequest_message_t_0.insert("SideValue2_t_409509066");
  elt.add_attribute("LqdtyIndTyp", "2"); // 0
  BidRequest_message_t_0.insert("2");
  elt.add_attribute("WtAvgLqdty", "19590029.300000"); // 0
  BidRequest_message_t_0.insert("19590029.300000");
  elt.add_attribute("EFP", "N"); // 0
  BidRequest_message_t_0.insert("N");
  elt.add_attribute("OutMainCntryUNdx", "OutMainCntryUIndex_t_133310054"); // 0
  BidRequest_message_t_0.insert("OutMainCntryUIndex_t_133310054");
  elt.add_attribute("CrssPct", "17589391.030000"); // 0
  BidRequest_message_t_0.insert("17589391.030000");
  elt.add_attribute("ProgRptReqs", "1"); // 0
  BidRequest_message_t_0.insert("1");
  elt.add_attribute("ProgPeriodIntvl", "1981898397"); // 0
  BidRequest_message_t_0.insert("1981898397");
  elt.add_attribute("IncTaxInd", "1"); // 0
  BidRequest_message_t_0.insert("1");
  elt.add_attribute("ForexReq", "Y"); // 0
  BidRequest_message_t_0.insert("Y");
  elt.add_attribute("NumBidders", "1496615874"); // 0
  BidRequest_message_t_0.insert("1496615874");
  elt.add_attribute("TrdDt", "TradeDate_t_1013126537"); // 0
  BidRequest_message_t_0.insert("TradeDate_t_1013126537");
  elt.add_attribute("BidTrdTyp", "R"); // 0
  BidRequest_message_t_0.insert("R");
  elt.add_attribute("BasisPxTyp", "4"); // 0
  BidRequest_message_t_0.insert("4");
  elt.add_attribute("StrkTm", "StrikeTime_t_18388892"); // 0
  BidRequest_message_t_0.insert("StrikeTime_t_18388892");
  elt.add_attribute("Txt", "Text_t_1090588029"); // 0
  BidRequest_message_t_0.insert("Text_t_1090588029");
  elt.add_attribute("EncTxtLen", "2062167121"); // 0
  BidRequest_message_t_0.insert("2062167121");
  elt.add_attribute("EncTxt", "EncodedText_t_1722619846"); // 0
  BidRequest_message_t_0.insert("EncodedText_t_1722619846");
  all_values.push_back(BidRequest_message_t_0);
  all_compo_names.insert("BidRequest_message_t");

  { // Hdr
    xml_element Hdr_11{"Hdr"};
    multiset<string> Hdr_11_set;
    Hdr_11.add_attribute("SeqNum", "383933666"); // 1
    Hdr_11_set.insert("383933666");
    Hdr_11.add_attribute("SID", "SenderCompID_t_1246785619"); // 1
    Hdr_11_set.insert("SenderCompID_t_1246785619");
    Hdr_11.add_attribute("TID", "TargetCompID_t_728881675"); // 1
    Hdr_11_set.insert("TargetCompID_t_728881675");
    Hdr_11.add_attribute("OBID", "OnBehalfOfCompID_t_1871871514"); // 1
    Hdr_11_set.insert("OnBehalfOfCompID_t_1871871514");
    Hdr_11.add_attribute("D2ID", "DeliverToCompID_t_1225222493"); // 1
    Hdr_11_set.insert("DeliverToCompID_t_1225222493");
    Hdr_11.add_attribute("SSub", "SenderSubID_t_49734503"); // 1
    Hdr_11_set.insert("SenderSubID_t_49734503");
    Hdr_11.add_attribute("SLoc", "SenderLocationID_t_247512101"); // 1
    Hdr_11_set.insert("SenderLocationID_t_247512101");
    Hdr_11.add_attribute("TSub", "TargetSubID_t_1024042064"); // 1
    Hdr_11_set.insert("TargetSubID_t_1024042064");
    Hdr_11.add_attribute("TLoc", "TargetLocationID_t_136189580"); // 1
    Hdr_11_set.insert("TargetLocationID_t_136189580");
    Hdr_11.add_attribute("OBSub", "OnBehalfOfSubID_t_1929139315"); // 1
    Hdr_11_set.insert("OnBehalfOfSubID_t_1929139315");
    Hdr_11.add_attribute("OBLoc", "OnBehalfOfLocationID_t_377353632"); // 1
    Hdr_11_set.insert("OnBehalfOfLocationID_t_377353632");
    Hdr_11.add_attribute("D2Sub", "DeliverToSubID_t_149012578"); // 1
    Hdr_11_set.insert("DeliverToSubID_t_149012578");
    Hdr_11.add_attribute("D2Loc", "DeliverToLocationID_t_445738224"); // 1
    Hdr_11_set.insert("DeliverToLocationID_t_445738224");
    Hdr_11.add_attribute("PosDup", "N"); // 1
    Hdr_11_set.insert("N");
    Hdr_11.add_attribute("PosRsnd", "Y"); // 1
    Hdr_11_set.insert("Y");
    Hdr_11.add_attribute("Snt", "SendingTime_t_257257506"); // 1
    Hdr_11_set.insert("SendingTime_t_257257506");
    Hdr_11.add_attribute("OrigSnt", "OrigSendingTime_t_1705328463"); // 1
    Hdr_11_set.insert("OrigSendingTime_t_1705328463");
    Hdr_11.add_attribute("MsgEncd", "MessageEncoding_t_511560418"); // 1
    Hdr_11_set.insert("MessageEncoding_t_511560418");
    all_values.push_back(Hdr_11_set);
    all_compo_names.insert("Hdr_11_set");

    {
      xml_element Hop_11{"Hop"};
      multiset<string> Hop_11_set;
      Hop_11.add_attribute("ID", "HopCompID_t_2016196609"); // 2
      Hop_11_set.insert("HopCompID_t_2016196609");
      Hop_11.add_attribute("Ref", "1664402077"); // 2
      Hop_11_set.insert("1664402077");
      Hop_11.add_attribute("Snt", "HopSendingTime_t_345975167"); // 2
      Hop_11_set.insert("HopSendingTime_t_345975167");
      all_values.push_back(Hop_11_set);
      all_compo_names.insert("Hop_11_set");

      Hdr_11.add_element(Hop_11);
    }
    elt.add_element(Hdr_11);
  } // end Hdr
  { // DescReq
    xml_element DescReq_0{"DescReq"};
    multiset<string> DescReq_0_set;
    DescReq_0.add_attribute("BidDescptrTyp", "2"); // 1
    DescReq_0_set.insert("2");
    DescReq_0.add_attribute("BidDescptr", "BidDescriptor_t_1842591041"); // 1
    DescReq_0_set.insert("BidDescriptor_t_1842591041");
    DescReq_0.add_attribute("SideValuInd", "2"); // 1
    DescReq_0_set.insert("2");
    DescReq_0.add_attribute("LqdtyValu", "LiquidityValue_t_1502935221"); // 1
    DescReq_0_set.insert("LiquidityValue_t_1502935221");
    DescReq_0.add_attribute("LqdtyNumSecurities", "168960580"); // 1
    DescReq_0_set.insert("168960580");
    DescReq_0.add_attribute("LqdtyPctLow", "7479304.130000"); // 1
    DescReq_0_set.insert("7479304.130000");
    DescReq_0.add_attribute("LqdtyPctHigh", "4460396.030000"); // 1
    DescReq_0_set.insert("4460396.030000");
    DescReq_0.add_attribute("EFPTrkngErr", "836440.540000"); // 1
    DescReq_0_set.insert("836440.540000");
    DescReq_0.add_attribute("FairValu", "FairValue_t_323066611"); // 1
    DescReq_0_set.insert("FairValue_t_323066611");
    DescReq_0.add_attribute("OutsideNdxPct", "8299732.690000"); // 1
    DescReq_0_set.insert("8299732.690000");
    DescReq_0.add_attribute("ValuOfFuts", "ValueOfFutures_t_1330429673"); // 1
    DescReq_0_set.insert("ValueOfFutures_t_1330429673");
    all_values.push_back(DescReq_0_set);
    all_compo_names.insert("DescReq_0_set");

    elt.add_element(DescReq_0);
  } // end DescReq
  { // DescReq
    xml_element DescReq_1{"DescReq"};
    multiset<string> DescReq_1_set;
    DescReq_1.add_attribute("BidDescptrTyp", "1"); // 1
    DescReq_1_set.insert("1");
    DescReq_1.add_attribute("BidDescptr", "BidDescriptor_t_554361135"); // 1
    DescReq_1_set.insert("BidDescriptor_t_554361135");
    DescReq_1.add_attribute("SideValuInd", "1"); // 1
    DescReq_1_set.insert("1");
    DescReq_1.add_attribute("LqdtyValu", "LiquidityValue_t_1101682790"); // 1
    DescReq_1_set.insert("LiquidityValue_t_1101682790");
    DescReq_1.add_attribute("LqdtyNumSecurities", "801873237"); // 1
    DescReq_1_set.insert("801873237");
    DescReq_1.add_attribute("LqdtyPctLow", "14322105.820000"); // 1
    DescReq_1_set.insert("14322105.820000");
    DescReq_1.add_attribute("LqdtyPctHigh", "12378723.700000"); // 1
    DescReq_1_set.insert("12378723.700000");
    DescReq_1.add_attribute("EFPTrkngErr", "5835289.040000"); // 1
    DescReq_1_set.insert("5835289.040000");
    DescReq_1.add_attribute("FairValu", "FairValue_t_1809564215"); // 1
    DescReq_1_set.insert("FairValue_t_1809564215");
    DescReq_1.add_attribute("OutsideNdxPct", "13868849.490000"); // 1
    DescReq_1_set.insert("13868849.490000");
    DescReq_1.add_attribute("ValuOfFuts", "ValueOfFutures_t_1029267128"); // 1
    DescReq_1_set.insert("ValueOfFutures_t_1029267128");
    all_values.push_back(DescReq_1_set);
    all_compo_names.insert("DescReq_1_set");

    elt.add_element(DescReq_1);
  } // end DescReq
  { // DescReq
    xml_element DescReq_2{"DescReq"};
    multiset<string> DescReq_2_set;
    DescReq_2.add_attribute("BidDescptrTyp", "1"); // 1
    DescReq_2_set.insert("1");
    DescReq_2.add_attribute("BidDescptr", "BidDescriptor_t_1765135312"); // 1
    DescReq_2_set.insert("BidDescriptor_t_1765135312");
    DescReq_2.add_attribute("SideValuInd", "2"); // 1
    DescReq_2_set.insert("2");
    DescReq_2.add_attribute("LqdtyValu", "LiquidityValue_t_6788080"); // 1
    DescReq_2_set.insert("LiquidityValue_t_6788080");
    DescReq_2.add_attribute("LqdtyNumSecurities", "129212082"); // 1
    DescReq_2_set.insert("129212082");
    DescReq_2.add_attribute("LqdtyPctLow", "11552375.960000"); // 1
    DescReq_2_set.insert("11552375.960000");
    DescReq_2.add_attribute("LqdtyPctHigh", "16711901.580000"); // 1
    DescReq_2_set.insert("16711901.580000");
    DescReq_2.add_attribute("EFPTrkngErr", "4751872.490000"); // 1
    DescReq_2_set.insert("4751872.490000");
    DescReq_2.add_attribute("FairValu", "FairValue_t_871652580"); // 1
    DescReq_2_set.insert("FairValue_t_871652580");
    DescReq_2.add_attribute("OutsideNdxPct", "6083894.360000"); // 1
    DescReq_2_set.insert("6083894.360000");
    DescReq_2.add_attribute("ValuOfFuts", "ValueOfFutures_t_170294642"); // 1
    DescReq_2_set.insert("ValueOfFutures_t_170294642");
    all_values.push_back(DescReq_2_set);
    all_compo_names.insert("DescReq_2_set");

    elt.add_element(DescReq_2);
  } // end DescReq
  { // CompReq
    xml_element CompReq_0{"CompReq"};
    multiset<string> CompReq_0_set;
    CompReq_0.add_attribute("ID", "ListID_t_2111324658"); // 1
    CompReq_0_set.insert("ListID_t_2111324658");
    CompReq_0.add_attribute("Side", "8"); // 1
    CompReq_0_set.insert("8");
    CompReq_0.add_attribute("SesID", "1"); // 1
    CompReq_0_set.insert("1");
    CompReq_0.add_attribute("SesSub", "3"); // 1
    CompReq_0_set.insert("3");
    CompReq_0.add_attribute("NetGrossInd", "2"); // 1
    CompReq_0_set.insert("2");
    CompReq_0.add_attribute("SettlTyp", "1"); // 1
    CompReq_0_set.insert("1");
    CompReq_0.add_attribute("SettlDt", "SettlDate_t_1239853882"); // 1
    CompReq_0_set.insert("SettlDate_t_1239853882");
    CompReq_0.add_attribute("Acct", "Account_t_1753328950"); // 1
    CompReq_0_set.insert("Account_t_1753328950");
    CompReq_0.add_attribute("AcctIDSrc", "5"); // 1
    CompReq_0_set.insert("5");
    all_values.push_back(CompReq_0_set);
    all_compo_names.insert("CompReq_0_set");

    elt.add_element(CompReq_0);
  } // end CompReq
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
