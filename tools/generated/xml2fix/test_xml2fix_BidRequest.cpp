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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"BidReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BidRequest_message_t_0;
  elt.add_attribute("BidID", "BidID_t_364844659"); // 0
  BidRequest_message_t_0.insert("BidID_t_364844659");
  elt.add_attribute("ClBidID", "ClientBidID_t_981662381"); // 0
  BidRequest_message_t_0.insert("ClientBidID_t_981662381");
  elt.add_attribute("BidReqTransTyp", "N"); // 0
  BidRequest_message_t_0.insert("N");
  elt.add_attribute("ListName", "ListName_t_405691847"); // 0
  BidRequest_message_t_0.insert("ListName_t_405691847");
  elt.add_attribute("TotNoReltdSym", "61233176"); // 0
  BidRequest_message_t_0.insert("61233176");
  elt.add_attribute("BidTyp", "1"); // 0
  BidRequest_message_t_0.insert("1");
  elt.add_attribute("NumTkts", "490070102"); // 0
  BidRequest_message_t_0.insert("490070102");
  elt.add_attribute("Ccy", "EUR"); // 0
  BidRequest_message_t_0.insert("EUR");
  elt.add_attribute("SideValu1", "SideValue1_t_1388370917"); // 0
  BidRequest_message_t_0.insert("SideValue1_t_1388370917");
  elt.add_attribute("SideValu2", "SideValue2_t_433180728"); // 0
  BidRequest_message_t_0.insert("SideValue2_t_433180728");
  elt.add_attribute("LqdtyIndTyp", "1"); // 0
  BidRequest_message_t_0.insert("1");
  elt.add_attribute("WtAvgLqdty", "7234196.470000"); // 0
  BidRequest_message_t_0.insert("7234196.470000");
  elt.add_attribute("EFP", "Y"); // 0
  BidRequest_message_t_0.insert("Y");
  elt.add_attribute("OutMainCntryUNdx", "OutMainCntryUIndex_t_730832408"); // 0
  BidRequest_message_t_0.insert("OutMainCntryUIndex_t_730832408");
  elt.add_attribute("CrssPct", "13438821.080000"); // 0
  BidRequest_message_t_0.insert("13438821.080000");
  elt.add_attribute("ProgRptReqs", "1"); // 0
  BidRequest_message_t_0.insert("1");
  elt.add_attribute("ProgPeriodIntvl", "1821651655"); // 0
  BidRequest_message_t_0.insert("1821651655");
  elt.add_attribute("IncTaxInd", "2"); // 0
  BidRequest_message_t_0.insert("2");
  elt.add_attribute("ForexReq", "Y"); // 0
  BidRequest_message_t_0.insert("Y");
  elt.add_attribute("NumBidders", "1636591968"); // 0
  BidRequest_message_t_0.insert("1636591968");
  elt.add_attribute("TrdDt", "TradeDate_t_2056813395"); // 0
  BidRequest_message_t_0.insert("TradeDate_t_2056813395");
  elt.add_attribute("BidTrdTyp", "J"); // 0
  BidRequest_message_t_0.insert("J");
  elt.add_attribute("BasisPxTyp", "9"); // 0
  BidRequest_message_t_0.insert("9");
  elt.add_attribute("StrkTm", "StrikeTime_t_449871229"); // 0
  BidRequest_message_t_0.insert("StrikeTime_t_449871229");
  elt.add_attribute("Txt", "Text_t_645317989"); // 0
  BidRequest_message_t_0.insert("Text_t_645317989");
  elt.add_attribute("EncTxtLen", "1830504351"); // 0
  BidRequest_message_t_0.insert("1830504351");
  elt.add_attribute("EncTxt", "EncodedText_t_264813469"); // 0
  BidRequest_message_t_0.insert("EncodedText_t_264813469");
  all_values.push_back(BidRequest_message_t_0);
  all_compo_names.insert("BidRequest_message_t");

  { // Hdr
    xml_element Hdr_11{"Hdr"};
    multiset<string> Hdr_11_set;
    Hdr_11.add_attribute("SeqNum", "508670865"); // 1
    Hdr_11_set.insert("508670865");
    Hdr_11.add_attribute("SID", "SenderCompID_t_529052219"); // 1
    Hdr_11_set.insert("SenderCompID_t_529052219");
    Hdr_11.add_attribute("TID", "TargetCompID_t_2106546706"); // 1
    Hdr_11_set.insert("TargetCompID_t_2106546706");
    Hdr_11.add_attribute("OBID", "OnBehalfOfCompID_t_873515524"); // 1
    Hdr_11_set.insert("OnBehalfOfCompID_t_873515524");
    Hdr_11.add_attribute("D2ID", "DeliverToCompID_t_1510714601"); // 1
    Hdr_11_set.insert("DeliverToCompID_t_1510714601");
    Hdr_11.add_attribute("SSub", "SenderSubID_t_1292405061"); // 1
    Hdr_11_set.insert("SenderSubID_t_1292405061");
    Hdr_11.add_attribute("SLoc", "SenderLocationID_t_1279207372"); // 1
    Hdr_11_set.insert("SenderLocationID_t_1279207372");
    Hdr_11.add_attribute("TSub", "TargetSubID_t_1571947777"); // 1
    Hdr_11_set.insert("TargetSubID_t_1571947777");
    Hdr_11.add_attribute("TLoc", "TargetLocationID_t_1333187802"); // 1
    Hdr_11_set.insert("TargetLocationID_t_1333187802");
    Hdr_11.add_attribute("OBSub", "OnBehalfOfSubID_t_1769277474"); // 1
    Hdr_11_set.insert("OnBehalfOfSubID_t_1769277474");
    Hdr_11.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1559397262"); // 1
    Hdr_11_set.insert("OnBehalfOfLocationID_t_1559397262");
    Hdr_11.add_attribute("D2Sub", "DeliverToSubID_t_1602383851"); // 1
    Hdr_11_set.insert("DeliverToSubID_t_1602383851");
    Hdr_11.add_attribute("D2Loc", "DeliverToLocationID_t_1010164743"); // 1
    Hdr_11_set.insert("DeliverToLocationID_t_1010164743");
    Hdr_11.add_attribute("PosDup", "N"); // 1
    Hdr_11_set.insert("N");
    Hdr_11.add_attribute("PosRsnd", "Y"); // 1
    Hdr_11_set.insert("Y");
    Hdr_11.add_attribute("Snt", "SendingTime_t_1733584390"); // 1
    Hdr_11_set.insert("SendingTime_t_1733584390");
    Hdr_11.add_attribute("OrigSnt", "OrigSendingTime_t_914345713"); // 1
    Hdr_11_set.insert("OrigSendingTime_t_914345713");
    Hdr_11.add_attribute("MsgEncd", "MessageEncoding_t_2070908811"); // 1
    Hdr_11_set.insert("MessageEncoding_t_2070908811");
    all_values.push_back(Hdr_11_set);
    all_compo_names.insert("Hdr_11_set");

    {
      xml_element Hop_11{"Hop"};
      multiset<string> Hop_11_set;
      Hop_11.add_attribute("ID", "HopCompID_t_929982851"); // 2
      Hop_11_set.insert("HopCompID_t_929982851");
      Hop_11.add_attribute("Ref", "103361250"); // 2
      Hop_11_set.insert("103361250");
      Hop_11.add_attribute("Snt", "HopSendingTime_t_1745076818"); // 2
      Hop_11_set.insert("HopSendingTime_t_1745076818");
      all_values.push_back(Hop_11_set);
      all_compo_names.insert("Hop_11_set");

      Hdr_11.add_element(Hop_11);
    }
    elt.add_element(Hdr_11);
  } // end Hdr
  { // DescReq
    xml_element DescReq_0{"DescReq"};
    multiset<string> DescReq_0_set;
    DescReq_0.add_attribute("BidDescptrTyp", "3"); // 1
    DescReq_0_set.insert("3");
    DescReq_0.add_attribute("BidDescptr", "BidDescriptor_t_1234185138"); // 1
    DescReq_0_set.insert("BidDescriptor_t_1234185138");
    DescReq_0.add_attribute("SideValuInd", "2"); // 1
    DescReq_0_set.insert("2");
    DescReq_0.add_attribute("LqdtyValu", "LiquidityValue_t_1106823682"); // 1
    DescReq_0_set.insert("LiquidityValue_t_1106823682");
    DescReq_0.add_attribute("LqdtyNumSecurities", "1676066157"); // 1
    DescReq_0_set.insert("1676066157");
    DescReq_0.add_attribute("LqdtyPctLow", "17736735.230000"); // 1
    DescReq_0_set.insert("17736735.230000");
    DescReq_0.add_attribute("LqdtyPctHigh", "17521416.710000"); // 1
    DescReq_0_set.insert("17521416.710000");
    DescReq_0.add_attribute("EFPTrkngErr", "13590868.600000"); // 1
    DescReq_0_set.insert("13590868.600000");
    DescReq_0.add_attribute("FairValu", "FairValue_t_2038486992"); // 1
    DescReq_0_set.insert("FairValue_t_2038486992");
    DescReq_0.add_attribute("OutsideNdxPct", "1133288.890000"); // 1
    DescReq_0_set.insert("1133288.890000");
    DescReq_0.add_attribute("ValuOfFuts", "ValueOfFutures_t_1888139079"); // 1
    DescReq_0_set.insert("ValueOfFutures_t_1888139079");
    all_values.push_back(DescReq_0_set);
    all_compo_names.insert("DescReq_0_set");

    elt.add_element(DescReq_0);
  } // end DescReq
  { // DescReq
    xml_element DescReq_1{"DescReq"};
    multiset<string> DescReq_1_set;
    DescReq_1.add_attribute("BidDescptrTyp", "3"); // 1
    DescReq_1_set.insert("3");
    DescReq_1.add_attribute("BidDescptr", "BidDescriptor_t_986844413"); // 1
    DescReq_1_set.insert("BidDescriptor_t_986844413");
    DescReq_1.add_attribute("SideValuInd", "1"); // 1
    DescReq_1_set.insert("1");
    DescReq_1.add_attribute("LqdtyValu", "LiquidityValue_t_1142471463"); // 1
    DescReq_1_set.insert("LiquidityValue_t_1142471463");
    DescReq_1.add_attribute("LqdtyNumSecurities", "118568137"); // 1
    DescReq_1_set.insert("118568137");
    DescReq_1.add_attribute("LqdtyPctLow", "6758341.620000"); // 1
    DescReq_1_set.insert("6758341.620000");
    DescReq_1.add_attribute("LqdtyPctHigh", "3281756.180000"); // 1
    DescReq_1_set.insert("3281756.180000");
    DescReq_1.add_attribute("EFPTrkngErr", "18878456.110000"); // 1
    DescReq_1_set.insert("18878456.110000");
    DescReq_1.add_attribute("FairValu", "FairValue_t_87747776"); // 1
    DescReq_1_set.insert("FairValue_t_87747776");
    DescReq_1.add_attribute("OutsideNdxPct", "19305594.690000"); // 1
    DescReq_1_set.insert("19305594.690000");
    DescReq_1.add_attribute("ValuOfFuts", "ValueOfFutures_t_750526707"); // 1
    DescReq_1_set.insert("ValueOfFutures_t_750526707");
    all_values.push_back(DescReq_1_set);
    all_compo_names.insert("DescReq_1_set");

    elt.add_element(DescReq_1);
  } // end DescReq
  { // DescReq
    xml_element DescReq_2{"DescReq"};
    multiset<string> DescReq_2_set;
    DescReq_2.add_attribute("BidDescptrTyp", "1"); // 1
    DescReq_2_set.insert("1");
    DescReq_2.add_attribute("BidDescptr", "BidDescriptor_t_1123152225"); // 1
    DescReq_2_set.insert("BidDescriptor_t_1123152225");
    DescReq_2.add_attribute("SideValuInd", "2"); // 1
    DescReq_2_set.insert("2");
    DescReq_2.add_attribute("LqdtyValu", "LiquidityValue_t_847187832"); // 1
    DescReq_2_set.insert("LiquidityValue_t_847187832");
    DescReq_2.add_attribute("LqdtyNumSecurities", "1046577388"); // 1
    DescReq_2_set.insert("1046577388");
    DescReq_2.add_attribute("LqdtyPctLow", "12666103.000000"); // 1
    DescReq_2_set.insert("12666103.000000");
    DescReq_2.add_attribute("LqdtyPctHigh", "9505490.820000"); // 1
    DescReq_2_set.insert("9505490.820000");
    DescReq_2.add_attribute("EFPTrkngErr", "6441705.590000"); // 1
    DescReq_2_set.insert("6441705.590000");
    DescReq_2.add_attribute("FairValu", "FairValue_t_533599199"); // 1
    DescReq_2_set.insert("FairValue_t_533599199");
    DescReq_2.add_attribute("OutsideNdxPct", "16276006.730000"); // 1
    DescReq_2_set.insert("16276006.730000");
    DescReq_2.add_attribute("ValuOfFuts", "ValueOfFutures_t_1878355697"); // 1
    DescReq_2_set.insert("ValueOfFutures_t_1878355697");
    all_values.push_back(DescReq_2_set);
    all_compo_names.insert("DescReq_2_set");

    elt.add_element(DescReq_2);
  } // end DescReq
  { // CompReq
    xml_element CompReq_0{"CompReq"};
    multiset<string> CompReq_0_set;
    CompReq_0.add_attribute("ID", "ListID_t_586940707"); // 1
    CompReq_0_set.insert("ListID_t_586940707");
    CompReq_0.add_attribute("Side", "F"); // 1
    CompReq_0_set.insert("F");
    CompReq_0.add_attribute("SesID", "6"); // 1
    CompReq_0_set.insert("6");
    CompReq_0.add_attribute("SesSub", "3"); // 1
    CompReq_0_set.insert("3");
    CompReq_0.add_attribute("NetGrossInd", "1"); // 1
    CompReq_0_set.insert("1");
    CompReq_0.add_attribute("SettlTyp", "4"); // 1
    CompReq_0_set.insert("4");
    CompReq_0.add_attribute("SettlDt", "SettlDate_t_304927620"); // 1
    CompReq_0_set.insert("SettlDate_t_304927620");
    CompReq_0.add_attribute("Acct", "Account_t_359196850"); // 1
    CompReq_0_set.insert("Account_t_359196850");
    CompReq_0.add_attribute("AcctIDSrc", "5"); // 1
    CompReq_0_set.insert("5");
    all_values.push_back(CompReq_0_set);
    all_compo_names.insert("CompReq_0_set");

    elt.add_element(CompReq_0);
  } // end CompReq
  { // CompReq
    xml_element CompReq_1{"CompReq"};
    multiset<string> CompReq_1_set;
    CompReq_1.add_attribute("ID", "ListID_t_1291772033"); // 1
    CompReq_1_set.insert("ListID_t_1291772033");
    CompReq_1.add_attribute("Side", "3"); // 1
    CompReq_1_set.insert("3");
    CompReq_1.add_attribute("SesID", "1"); // 1
    CompReq_1_set.insert("1");
    CompReq_1.add_attribute("SesSub", "3"); // 1
    CompReq_1_set.insert("3");
    CompReq_1.add_attribute("NetGrossInd", "1"); // 1
    CompReq_1_set.insert("1");
    CompReq_1.add_attribute("SettlTyp", "8"); // 1
    CompReq_1_set.insert("8");
    CompReq_1.add_attribute("SettlDt", "SettlDate_t_1150702134"); // 1
    CompReq_1_set.insert("SettlDate_t_1150702134");
    CompReq_1.add_attribute("Acct", "Account_t_226665172"); // 1
    CompReq_1_set.insert("Account_t_226665172");
    CompReq_1.add_attribute("AcctIDSrc", "4"); // 1
    CompReq_1_set.insert("4");
    all_values.push_back(CompReq_1_set);
    all_compo_names.insert("CompReq_1_set");

    elt.add_element(CompReq_1);
  } // end CompReq
  { // CompReq
    xml_element CompReq_2{"CompReq"};
    multiset<string> CompReq_2_set;
    CompReq_2.add_attribute("ID", "ListID_t_1901228841"); // 1
    CompReq_2_set.insert("ListID_t_1901228841");
    CompReq_2.add_attribute("Side", "C"); // 1
    CompReq_2_set.insert("C");
    CompReq_2.add_attribute("SesID", "1"); // 1
    CompReq_2_set.insert("1");
    CompReq_2.add_attribute("SesSub", "5"); // 1
    CompReq_2_set.insert("5");
    CompReq_2.add_attribute("NetGrossInd", "2"); // 1
    CompReq_2_set.insert("2");
    CompReq_2.add_attribute("SettlTyp", "3"); // 1
    CompReq_2_set.insert("3");
    CompReq_2.add_attribute("SettlDt", "SettlDate_t_1356982943"); // 1
    CompReq_2_set.insert("SettlDate_t_1356982943");
    CompReq_2.add_attribute("Acct", "Account_t_1957244205"); // 1
    CompReq_2_set.insert("Account_t_1957244205");
    CompReq_2.add_attribute("AcctIDSrc", "3"); // 1
    CompReq_2_set.insert("3");
    all_values.push_back(CompReq_2_set);
    all_compo_names.insert("CompReq_2_set");

    elt.add_element(CompReq_2);
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
