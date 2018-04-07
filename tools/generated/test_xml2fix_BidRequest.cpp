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
  elt.add_attribute("BidID", "BidID_t_935229425"); // 0
  BidRequest_message_t_0.insert("BidID_t_935229425");
  elt.add_attribute("ClBidID", "ClientBidID_t_328403246"); // 0
  BidRequest_message_t_0.insert("ClientBidID_t_328403246");
  elt.add_attribute("BidReqTransTyp", "N"); // 0
  BidRequest_message_t_0.insert("N");
  elt.add_attribute("ListName", "ListName_t_265307348"); // 0
  BidRequest_message_t_0.insert("ListName_t_265307348");
  elt.add_attribute("TotNoReltdSym", "86290893"); // 0
  BidRequest_message_t_0.insert("86290893");
  elt.add_attribute("BidTyp", "3"); // 0
  BidRequest_message_t_0.insert("3");
  elt.add_attribute("NumTkts", "826619658"); // 0
  BidRequest_message_t_0.insert("826619658");
  elt.add_attribute("Ccy", "JPY"); // 0
  BidRequest_message_t_0.insert("JPY");
  elt.add_attribute("SideValu1", "SideValue1_t_1304069331"); // 0
  BidRequest_message_t_0.insert("SideValue1_t_1304069331");
  elt.add_attribute("SideValu2", "SideValue2_t_582065040"); // 0
  BidRequest_message_t_0.insert("SideValue2_t_582065040");
  elt.add_attribute("LqdtyIndTyp", "2"); // 0
  BidRequest_message_t_0.insert("2");
  elt.add_attribute("WtAvgLqdty", "11768767.930000"); // 0
  BidRequest_message_t_0.insert("11768767.930000");
  elt.add_attribute("EFP", "N"); // 0
  BidRequest_message_t_0.insert("N");
  elt.add_attribute("OutMainCntryUNdx", "OutMainCntryUIndex_t_42194648"); // 0
  BidRequest_message_t_0.insert("OutMainCntryUIndex_t_42194648");
  elt.add_attribute("CrssPct", "11603270.410000"); // 0
  BidRequest_message_t_0.insert("11603270.410000");
  elt.add_attribute("ProgRptReqs", "1"); // 0
  BidRequest_message_t_0.insert("1");
  elt.add_attribute("ProgPeriodIntvl", "991250378"); // 0
  BidRequest_message_t_0.insert("991250378");
  elt.add_attribute("IncTaxInd", "2"); // 0
  BidRequest_message_t_0.insert("2");
  elt.add_attribute("ForexReq", "N"); // 0
  BidRequest_message_t_0.insert("N");
  elt.add_attribute("NumBidders", "1699157294"); // 0
  BidRequest_message_t_0.insert("1699157294");
  elt.add_attribute("TrdDt", "TradeDate_t_1501227522"); // 0
  BidRequest_message_t_0.insert("TradeDate_t_1501227522");
  elt.add_attribute("BidTrdTyp", "J"); // 0
  BidRequest_message_t_0.insert("J");
  elt.add_attribute("BasisPxTyp", "9"); // 0
  BidRequest_message_t_0.insert("9");
  elt.add_attribute("StrkTm", "StrikeTime_t_1232709366"); // 0
  BidRequest_message_t_0.insert("StrikeTime_t_1232709366");
  elt.add_attribute("Txt", "Text_t_827815826"); // 0
  BidRequest_message_t_0.insert("Text_t_827815826");
  elt.add_attribute("EncTxtLen", "499956919"); // 0
  BidRequest_message_t_0.insert("499956919");
  elt.add_attribute("EncTxt", "EncodedText_t_1088053855"); // 0
  BidRequest_message_t_0.insert("EncodedText_t_1088053855");
  all_values.push_back(BidRequest_message_t_0);
  all_compo_names.insert("BidRequest_message_t");

  { // Hdr
    xml_element Hdr_11{"Hdr"};
    multiset<string> Hdr_11_set;
    Hdr_11.add_attribute("SeqNum", "2017896000"); // 1
    Hdr_11_set.insert("2017896000");
    Hdr_11.add_attribute("SID", "SenderCompID_t_1844691278"); // 1
    Hdr_11_set.insert("SenderCompID_t_1844691278");
    Hdr_11.add_attribute("TID", "TargetCompID_t_1042385234"); // 1
    Hdr_11_set.insert("TargetCompID_t_1042385234");
    Hdr_11.add_attribute("OBID", "OnBehalfOfCompID_t_805641778"); // 1
    Hdr_11_set.insert("OnBehalfOfCompID_t_805641778");
    Hdr_11.add_attribute("D2ID", "DeliverToCompID_t_25610877"); // 1
    Hdr_11_set.insert("DeliverToCompID_t_25610877");
    Hdr_11.add_attribute("SSub", "SenderSubID_t_207374262"); // 1
    Hdr_11_set.insert("SenderSubID_t_207374262");
    Hdr_11.add_attribute("SLoc", "SenderLocationID_t_1070949126"); // 1
    Hdr_11_set.insert("SenderLocationID_t_1070949126");
    Hdr_11.add_attribute("TSub", "TargetSubID_t_111901770"); // 1
    Hdr_11_set.insert("TargetSubID_t_111901770");
    Hdr_11.add_attribute("TLoc", "TargetLocationID_t_75359295"); // 1
    Hdr_11_set.insert("TargetLocationID_t_75359295");
    Hdr_11.add_attribute("OBSub", "OnBehalfOfSubID_t_1897568784"); // 1
    Hdr_11_set.insert("OnBehalfOfSubID_t_1897568784");
    Hdr_11.add_attribute("OBLoc", "OnBehalfOfLocationID_t_57115391"); // 1
    Hdr_11_set.insert("OnBehalfOfLocationID_t_57115391");
    Hdr_11.add_attribute("D2Sub", "DeliverToSubID_t_282329827"); // 1
    Hdr_11_set.insert("DeliverToSubID_t_282329827");
    Hdr_11.add_attribute("D2Loc", "DeliverToLocationID_t_1054154467"); // 1
    Hdr_11_set.insert("DeliverToLocationID_t_1054154467");
    Hdr_11.add_attribute("PosDup", "Y"); // 1
    Hdr_11_set.insert("Y");
    Hdr_11.add_attribute("PosRsnd", "Y"); // 1
    Hdr_11_set.insert("Y");
    Hdr_11.add_attribute("Snt", "SendingTime_t_83547613"); // 1
    Hdr_11_set.insert("SendingTime_t_83547613");
    Hdr_11.add_attribute("OrigSnt", "OrigSendingTime_t_2070647216"); // 1
    Hdr_11_set.insert("OrigSendingTime_t_2070647216");
    Hdr_11.add_attribute("MsgEncd", "MessageEncoding_t_2091737065"); // 1
    Hdr_11_set.insert("MessageEncoding_t_2091737065");
    all_values.push_back(Hdr_11_set);
    all_compo_names.insert("Hdr_11_set");

    {
      xml_element Hop_11{"Hop"};
      multiset<string> Hop_11_set;
      Hop_11.add_attribute("ID", "HopCompID_t_1243874654"); // 2
      Hop_11_set.insert("HopCompID_t_1243874654");
      Hop_11.add_attribute("Ref", "1324145310"); // 2
      Hop_11_set.insert("1324145310");
      Hop_11.add_attribute("Snt", "HopSendingTime_t_935503795"); // 2
      Hop_11_set.insert("HopSendingTime_t_935503795");
      all_values.push_back(Hop_11_set);
      all_compo_names.insert("Hop_11_set");

      Hdr_11.add_element(Hop_11);
    }
    elt.add_element(Hdr_11);
  } // end Hdr
  { // DescReq
    xml_element DescReq_0{"DescReq"};
    multiset<string> DescReq_0_set;
    DescReq_0.add_attribute("BidDescptrTyp", "1"); // 1
    DescReq_0_set.insert("1");
    DescReq_0.add_attribute("BidDescptr", "BidDescriptor_t_487177441"); // 1
    DescReq_0_set.insert("BidDescriptor_t_487177441");
    DescReq_0.add_attribute("SideValuInd", "1"); // 1
    DescReq_0_set.insert("1");
    DescReq_0.add_attribute("LqdtyValu", "LiquidityValue_t_1324851950"); // 1
    DescReq_0_set.insert("LiquidityValue_t_1324851950");
    DescReq_0.add_attribute("LqdtyNumSecurities", "653189892"); // 1
    DescReq_0_set.insert("653189892");
    DescReq_0.add_attribute("LqdtyPctLow", "82475.920000"); // 1
    DescReq_0_set.insert("82475.920000");
    DescReq_0.add_attribute("LqdtyPctHigh", "51841.280000"); // 1
    DescReq_0_set.insert("51841.280000");
    DescReq_0.add_attribute("EFPTrkngErr", "11531468.110000"); // 1
    DescReq_0_set.insert("11531468.110000");
    DescReq_0.add_attribute("FairValu", "FairValue_t_1096301447"); // 1
    DescReq_0_set.insert("FairValue_t_1096301447");
    DescReq_0.add_attribute("OutsideNdxPct", "20230801.290000"); // 1
    DescReq_0_set.insert("20230801.290000");
    DescReq_0.add_attribute("ValuOfFuts", "ValueOfFutures_t_850354441"); // 1
    DescReq_0_set.insert("ValueOfFutures_t_850354441");
    all_values.push_back(DescReq_0_set);
    all_compo_names.insert("DescReq_0_set");

    elt.add_element(DescReq_0);
  } // end DescReq
  { // DescReq
    xml_element DescReq_1{"DescReq"};
    multiset<string> DescReq_1_set;
    DescReq_1.add_attribute("BidDescptrTyp", "3"); // 1
    DescReq_1_set.insert("3");
    DescReq_1.add_attribute("BidDescptr", "BidDescriptor_t_681238259"); // 1
    DescReq_1_set.insert("BidDescriptor_t_681238259");
    DescReq_1.add_attribute("SideValuInd", "1"); // 1
    DescReq_1_set.insert("1");
    DescReq_1.add_attribute("LqdtyValu", "LiquidityValue_t_198577296"); // 1
    DescReq_1_set.insert("LiquidityValue_t_198577296");
    DescReq_1.add_attribute("LqdtyNumSecurities", "1752187385"); // 1
    DescReq_1_set.insert("1752187385");
    DescReq_1.add_attribute("LqdtyPctLow", "9878670.890000"); // 1
    DescReq_1_set.insert("9878670.890000");
    DescReq_1.add_attribute("LqdtyPctHigh", "2739365.910000"); // 1
    DescReq_1_set.insert("2739365.910000");
    DescReq_1.add_attribute("EFPTrkngErr", "15022725.210000"); // 1
    DescReq_1_set.insert("15022725.210000");
    DescReq_1.add_attribute("FairValu", "FairValue_t_1044982480"); // 1
    DescReq_1_set.insert("FairValue_t_1044982480");
    DescReq_1.add_attribute("OutsideNdxPct", "5562664.180000"); // 1
    DescReq_1_set.insert("5562664.180000");
    DescReq_1.add_attribute("ValuOfFuts", "ValueOfFutures_t_408943341"); // 1
    DescReq_1_set.insert("ValueOfFutures_t_408943341");
    all_values.push_back(DescReq_1_set);
    all_compo_names.insert("DescReq_1_set");

    elt.add_element(DescReq_1);
  } // end DescReq
  { // DescReq
    xml_element DescReq_2{"DescReq"};
    multiset<string> DescReq_2_set;
    DescReq_2.add_attribute("BidDescptrTyp", "1"); // 1
    DescReq_2_set.insert("1");
    DescReq_2.add_attribute("BidDescptr", "BidDescriptor_t_458325187"); // 1
    DescReq_2_set.insert("BidDescriptor_t_458325187");
    DescReq_2.add_attribute("SideValuInd", "1"); // 1
    DescReq_2_set.insert("1");
    DescReq_2.add_attribute("LqdtyValu", "LiquidityValue_t_1607326479"); // 1
    DescReq_2_set.insert("LiquidityValue_t_1607326479");
    DescReq_2.add_attribute("LqdtyNumSecurities", "402578604"); // 1
    DescReq_2_set.insert("402578604");
    DescReq_2.add_attribute("LqdtyPctLow", "17363656.080000"); // 1
    DescReq_2_set.insert("17363656.080000");
    DescReq_2.add_attribute("LqdtyPctHigh", "7839881.410000"); // 1
    DescReq_2_set.insert("7839881.410000");
    DescReq_2.add_attribute("EFPTrkngErr", "13380823.990000"); // 1
    DescReq_2_set.insert("13380823.990000");
    DescReq_2.add_attribute("FairValu", "FairValue_t_1158159960"); // 1
    DescReq_2_set.insert("FairValue_t_1158159960");
    DescReq_2.add_attribute("OutsideNdxPct", "5463304.740000"); // 1
    DescReq_2_set.insert("5463304.740000");
    DescReq_2.add_attribute("ValuOfFuts", "ValueOfFutures_t_1825259840"); // 1
    DescReq_2_set.insert("ValueOfFutures_t_1825259840");
    all_values.push_back(DescReq_2_set);
    all_compo_names.insert("DescReq_2_set");

    elt.add_element(DescReq_2);
  } // end DescReq
  { // CompReq
    xml_element CompReq_0{"CompReq"};
    multiset<string> CompReq_0_set;
    CompReq_0.add_attribute("ID", "ListID_t_1871182424"); // 1
    CompReq_0_set.insert("ListID_t_1871182424");
    CompReq_0.add_attribute("Side", "5"); // 1
    CompReq_0_set.insert("5");
    CompReq_0.add_attribute("SesID", "6"); // 1
    CompReq_0_set.insert("6");
    CompReq_0.add_attribute("SesSub", "6"); // 1
    CompReq_0_set.insert("6");
    CompReq_0.add_attribute("NetGrossInd", "2"); // 1
    CompReq_0_set.insert("2");
    CompReq_0.add_attribute("SettlTyp", "3"); // 1
    CompReq_0_set.insert("3");
    CompReq_0.add_attribute("SettlDt", "SettlDate_t_1751963034"); // 1
    CompReq_0_set.insert("SettlDate_t_1751963034");
    CompReq_0.add_attribute("Acct", "Account_t_186983689"); // 1
    CompReq_0_set.insert("Account_t_186983689");
    CompReq_0.add_attribute("AcctIDSrc", "4"); // 1
    CompReq_0_set.insert("4");
    all_values.push_back(CompReq_0_set);
    all_compo_names.insert("CompReq_0_set");

    elt.add_element(CompReq_0);
  } // end CompReq
  { // CompReq
    xml_element CompReq_1{"CompReq"};
    multiset<string> CompReq_1_set;
    CompReq_1.add_attribute("ID", "ListID_t_285717645"); // 1
    CompReq_1_set.insert("ListID_t_285717645");
    CompReq_1.add_attribute("Side", "G"); // 1
    CompReq_1_set.insert("G");
    CompReq_1.add_attribute("SesID", "4"); // 1
    CompReq_1_set.insert("4");
    CompReq_1.add_attribute("SesSub", "1"); // 1
    CompReq_1_set.insert("1");
    CompReq_1.add_attribute("NetGrossInd", "1"); // 1
    CompReq_1_set.insert("1");
    CompReq_1.add_attribute("SettlTyp", "0"); // 1
    CompReq_1_set.insert("0");
    CompReq_1.add_attribute("SettlDt", "SettlDate_t_1392693903"); // 1
    CompReq_1_set.insert("SettlDate_t_1392693903");
    CompReq_1.add_attribute("Acct", "Account_t_948314928"); // 1
    CompReq_1_set.insert("Account_t_948314928");
    CompReq_1.add_attribute("AcctIDSrc", "5"); // 1
    CompReq_1_set.insert("5");
    all_values.push_back(CompReq_1_set);
    all_compo_names.insert("CompReq_1_set");

    elt.add_element(CompReq_1);
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
