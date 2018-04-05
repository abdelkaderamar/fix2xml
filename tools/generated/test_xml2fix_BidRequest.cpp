#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  ASSERT_TRUE(converter.init());

  xml_element elt {"BidReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BidRequest_message_t_0;
  elt.add_attribute("BidID", "BidID_t_1523066613"); // 0
  BidRequest_message_t_0.insert("BidID_t_1523066613");
  elt.add_attribute("ClBidID", "ClientBidID_t_902930813"); // 0
  BidRequest_message_t_0.insert("ClientBidID_t_902930813");
  elt.add_attribute("BidReqTransTyp", "C"); // 0
  BidRequest_message_t_0.insert("C");
  elt.add_attribute("ListName", "ListName_t_676507905"); // 0
  BidRequest_message_t_0.insert("ListName_t_676507905");
  elt.add_attribute("TotNoReltdSym", "218263450"); // 0
  BidRequest_message_t_0.insert("218263450");
  elt.add_attribute("BidTyp", "3"); // 0
  BidRequest_message_t_0.insert("3");
  elt.add_attribute("NumTkts", "1449106575"); // 0
  BidRequest_message_t_0.insert("1449106575");
  elt.add_attribute("Ccy", "EUR"); // 0
  BidRequest_message_t_0.insert("EUR");
  elt.add_attribute("SideValu1", "SideValue1_t_829873348"); // 0
  BidRequest_message_t_0.insert("SideValue1_t_829873348");
  elt.add_attribute("SideValu2", "SideValue2_t_100320583"); // 0
  BidRequest_message_t_0.insert("SideValue2_t_100320583");
  elt.add_attribute("LqdtyIndTyp", "1"); // 0
  BidRequest_message_t_0.insert("1");
  elt.add_attribute("WtAvgLqdty", "6258077.360000"); // 0
  BidRequest_message_t_0.insert("6258077.360000");
  elt.add_attribute("EFP", "N"); // 0
  BidRequest_message_t_0.insert("N");
  elt.add_attribute("OutMainCntryUNdx", "OutMainCntryUIndex_t_1952854361"); // 0
  BidRequest_message_t_0.insert("OutMainCntryUIndex_t_1952854361");
  elt.add_attribute("CrssPct", "888365.670000"); // 0
  BidRequest_message_t_0.insert("888365.670000");
  elt.add_attribute("ProgRptReqs", "2"); // 0
  BidRequest_message_t_0.insert("2");
  elt.add_attribute("ProgPeriodIntvl", "342528412"); // 0
  BidRequest_message_t_0.insert("342528412");
  elt.add_attribute("IncTaxInd", "2"); // 0
  BidRequest_message_t_0.insert("2");
  elt.add_attribute("ForexReq", "N"); // 0
  BidRequest_message_t_0.insert("N");
  elt.add_attribute("NumBidders", "1173459074"); // 0
  BidRequest_message_t_0.insert("1173459074");
  elt.add_attribute("TrdDt", "TradeDate_t_440064578"); // 0
  BidRequest_message_t_0.insert("TradeDate_t_440064578");
  elt.add_attribute("BidTrdTyp", "G"); // 0
  BidRequest_message_t_0.insert("G");
  elt.add_attribute("BasisPxTyp", "B"); // 0
  BidRequest_message_t_0.insert("B");
  elt.add_attribute("StrkTm", "StrikeTime_t_1770785272"); // 0
  BidRequest_message_t_0.insert("StrikeTime_t_1770785272");
  elt.add_attribute("Txt", "Text_t_2130466538"); // 0
  BidRequest_message_t_0.insert("Text_t_2130466538");
  elt.add_attribute("EncTxtLen", "1257526708"); // 0
  BidRequest_message_t_0.insert("1257526708");
  elt.add_attribute("EncTxt", "EncodedText_t_350388757"); // 0
  BidRequest_message_t_0.insert("EncodedText_t_350388757");
  all_values.push_back(BidRequest_message_t_0);
  all_compo_names.insert("BidRequest_message_t");

  { // Hdr
    xml_element Hdr_11{"Hdr"};
    multiset<string> Hdr_11_set;
    Hdr_11.add_attribute("SeqNum", "1468608165"); // 1
    Hdr_11_set.insert("1468608165");
    Hdr_11.add_attribute("SID", "SenderCompID_t_653239585"); // 1
    Hdr_11_set.insert("SenderCompID_t_653239585");
    Hdr_11.add_attribute("TID", "TargetCompID_t_399881172"); // 1
    Hdr_11_set.insert("TargetCompID_t_399881172");
    Hdr_11.add_attribute("OBID", "OnBehalfOfCompID_t_844191131"); // 1
    Hdr_11_set.insert("OnBehalfOfCompID_t_844191131");
    Hdr_11.add_attribute("D2ID", "DeliverToCompID_t_1556170398"); // 1
    Hdr_11_set.insert("DeliverToCompID_t_1556170398");
    Hdr_11.add_attribute("SSub", "SenderSubID_t_538603598"); // 1
    Hdr_11_set.insert("SenderSubID_t_538603598");
    Hdr_11.add_attribute("SLoc", "SenderLocationID_t_1520699036"); // 1
    Hdr_11_set.insert("SenderLocationID_t_1520699036");
    Hdr_11.add_attribute("TSub", "TargetSubID_t_1774433848"); // 1
    Hdr_11_set.insert("TargetSubID_t_1774433848");
    Hdr_11.add_attribute("TLoc", "TargetLocationID_t_1545868994"); // 1
    Hdr_11_set.insert("TargetLocationID_t_1545868994");
    Hdr_11.add_attribute("OBSub", "OnBehalfOfSubID_t_822321963"); // 1
    Hdr_11_set.insert("OnBehalfOfSubID_t_822321963");
    Hdr_11.add_attribute("OBLoc", "OnBehalfOfLocationID_t_920904121"); // 1
    Hdr_11_set.insert("OnBehalfOfLocationID_t_920904121");
    Hdr_11.add_attribute("D2Sub", "DeliverToSubID_t_898437763"); // 1
    Hdr_11_set.insert("DeliverToSubID_t_898437763");
    Hdr_11.add_attribute("D2Loc", "DeliverToLocationID_t_1652195311"); // 1
    Hdr_11_set.insert("DeliverToLocationID_t_1652195311");
    Hdr_11.add_attribute("PosDup", "N"); // 1
    Hdr_11_set.insert("N");
    Hdr_11.add_attribute("PosRsnd", "Y"); // 1
    Hdr_11_set.insert("Y");
    Hdr_11.add_attribute("Snt", "SendingTime_t_130519399"); // 1
    Hdr_11_set.insert("SendingTime_t_130519399");
    Hdr_11.add_attribute("OrigSnt", "OrigSendingTime_t_403229881"); // 1
    Hdr_11_set.insert("OrigSendingTime_t_403229881");
    Hdr_11.add_attribute("MsgEncd", "MessageEncoding_t_233689577"); // 1
    Hdr_11_set.insert("MessageEncoding_t_233689577");
    all_values.push_back(Hdr_11_set);
    all_compo_names.insert("Hdr_11_set");

    {
      xml_element Hop_11{"Hop"};
      multiset<string> Hop_11_set;
      Hop_11.add_attribute("ID", "HopCompID_t_219355966"); // 2
      Hop_11_set.insert("HopCompID_t_219355966");
      Hop_11.add_attribute("Ref", "235515618"); // 2
      Hop_11_set.insert("235515618");
      Hop_11.add_attribute("Snt", "HopSendingTime_t_576217989"); // 2
      Hop_11_set.insert("HopSendingTime_t_576217989");
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
    DescReq_0.add_attribute("BidDescptr", "BidDescriptor_t_1749677063"); // 1
    DescReq_0_set.insert("BidDescriptor_t_1749677063");
    DescReq_0.add_attribute("SideValuInd", "1"); // 1
    DescReq_0_set.insert("1");
    DescReq_0.add_attribute("LqdtyValu", "LiquidityValue_t_1215870414"); // 1
    DescReq_0_set.insert("LiquidityValue_t_1215870414");
    DescReq_0.add_attribute("LqdtyNumSecurities", "1378460501"); // 1
    DescReq_0_set.insert("1378460501");
    DescReq_0.add_attribute("LqdtyPctLow", "10655678.220000"); // 1
    DescReq_0_set.insert("10655678.220000");
    DescReq_0.add_attribute("LqdtyPctHigh", "11988533.040000"); // 1
    DescReq_0_set.insert("11988533.040000");
    DescReq_0.add_attribute("EFPTrkngErr", "4885035.620000"); // 1
    DescReq_0_set.insert("4885035.620000");
    DescReq_0.add_attribute("FairValu", "FairValue_t_1415956579"); // 1
    DescReq_0_set.insert("FairValue_t_1415956579");
    DescReq_0.add_attribute("OutsideNdxPct", "5199778.210000"); // 1
    DescReq_0_set.insert("5199778.210000");
    DescReq_0.add_attribute("ValuOfFuts", "ValueOfFutures_t_1141743147"); // 1
    DescReq_0_set.insert("ValueOfFutures_t_1141743147");
    all_values.push_back(DescReq_0_set);
    all_compo_names.insert("DescReq_0_set");

    elt.add_element(DescReq_0);
  } // end DescReq
  { // DescReq
    xml_element DescReq_1{"DescReq"};
    multiset<string> DescReq_1_set;
    DescReq_1.add_attribute("BidDescptrTyp", "3"); // 1
    DescReq_1_set.insert("3");
    DescReq_1.add_attribute("BidDescptr", "BidDescriptor_t_1364168952"); // 1
    DescReq_1_set.insert("BidDescriptor_t_1364168952");
    DescReq_1.add_attribute("SideValuInd", "1"); // 1
    DescReq_1_set.insert("1");
    DescReq_1.add_attribute("LqdtyValu", "LiquidityValue_t_206957702"); // 1
    DescReq_1_set.insert("LiquidityValue_t_206957702");
    DescReq_1.add_attribute("LqdtyNumSecurities", "737384340"); // 1
    DescReq_1_set.insert("737384340");
    DescReq_1.add_attribute("LqdtyPctLow", "1773800.980000"); // 1
    DescReq_1_set.insert("1773800.980000");
    DescReq_1.add_attribute("LqdtyPctHigh", "17528266.960000"); // 1
    DescReq_1_set.insert("17528266.960000");
    DescReq_1.add_attribute("EFPTrkngErr", "15597063.030000"); // 1
    DescReq_1_set.insert("15597063.030000");
    DescReq_1.add_attribute("FairValu", "FairValue_t_1098284219"); // 1
    DescReq_1_set.insert("FairValue_t_1098284219");
    DescReq_1.add_attribute("OutsideNdxPct", "5037808.110000"); // 1
    DescReq_1_set.insert("5037808.110000");
    DescReq_1.add_attribute("ValuOfFuts", "ValueOfFutures_t_1064417966"); // 1
    DescReq_1_set.insert("ValueOfFutures_t_1064417966");
    all_values.push_back(DescReq_1_set);
    all_compo_names.insert("DescReq_1_set");

    elt.add_element(DescReq_1);
  } // end DescReq
  { // CompReq
    xml_element CompReq_0{"CompReq"};
    multiset<string> CompReq_0_set;
    CompReq_0.add_attribute("ID", "ListID_t_932099675"); // 1
    CompReq_0_set.insert("ListID_t_932099675");
    CompReq_0.add_attribute("Side", "6"); // 1
    CompReq_0_set.insert("6");
    CompReq_0.add_attribute("SesID", "2"); // 1
    CompReq_0_set.insert("2");
    CompReq_0.add_attribute("SesSub", "6"); // 1
    CompReq_0_set.insert("6");
    CompReq_0.add_attribute("NetGrossInd", "1"); // 1
    CompReq_0_set.insert("1");
    CompReq_0.add_attribute("SettlTyp", "7"); // 1
    CompReq_0_set.insert("7");
    CompReq_0.add_attribute("SettlDt", "SettlDate_t_1742007241"); // 1
    CompReq_0_set.insert("SettlDate_t_1742007241");
    CompReq_0.add_attribute("Acct", "Account_t_269011303"); // 1
    CompReq_0_set.insert("Account_t_269011303");
    CompReq_0.add_attribute("AcctIDSrc", "3"); // 1
    CompReq_0_set.insert("3");
    all_values.push_back(CompReq_0_set);
    all_compo_names.insert("CompReq_0_set");

    elt.add_element(CompReq_0);
  } // end CompReq
  { // CompReq
    xml_element CompReq_1{"CompReq"};
    multiset<string> CompReq_1_set;
    CompReq_1.add_attribute("ID", "ListID_t_1344200657"); // 1
    CompReq_1_set.insert("ListID_t_1344200657");
    CompReq_1.add_attribute("Side", "E"); // 1
    CompReq_1_set.insert("E");
    CompReq_1.add_attribute("SesID", "3"); // 1
    CompReq_1_set.insert("3");
    CompReq_1.add_attribute("SesSub", "6"); // 1
    CompReq_1_set.insert("6");
    CompReq_1.add_attribute("NetGrossInd", "2"); // 1
    CompReq_1_set.insert("2");
    CompReq_1.add_attribute("SettlTyp", "6"); // 1
    CompReq_1_set.insert("6");
    CompReq_1.add_attribute("SettlDt", "SettlDate_t_1063681072"); // 1
    CompReq_1_set.insert("SettlDate_t_1063681072");
    CompReq_1.add_attribute("Acct", "Account_t_2045318255"); // 1
    CompReq_1_set.insert("Account_t_2045318255");
    CompReq_1.add_attribute("AcctIDSrc", "3"); // 1
    CompReq_1_set.insert("3");
    all_values.push_back(CompReq_1_set);
    all_compo_names.insert("CompReq_1_set");

    elt.add_element(CompReq_1);
  } // end CompReq
  { // CompReq
    xml_element CompReq_2{"CompReq"};
    multiset<string> CompReq_2_set;
    CompReq_2.add_attribute("ID", "ListID_t_57940572"); // 1
    CompReq_2_set.insert("ListID_t_57940572");
    CompReq_2.add_attribute("Side", "8"); // 1
    CompReq_2_set.insert("8");
    CompReq_2.add_attribute("SesID", "1"); // 1
    CompReq_2_set.insert("1");
    CompReq_2.add_attribute("SesSub", "2"); // 1
    CompReq_2_set.insert("2");
    CompReq_2.add_attribute("NetGrossInd", "2"); // 1
    CompReq_2_set.insert("2");
    CompReq_2.add_attribute("SettlTyp", "1"); // 1
    CompReq_2_set.insert("1");
    CompReq_2.add_attribute("SettlDt", "SettlDate_t_785750568"); // 1
    CompReq_2_set.insert("SettlDate_t_785750568");
    CompReq_2.add_attribute("Acct", "Account_t_1525973110"); // 1
    CompReq_2_set.insert("Account_t_1525973110");
    CompReq_2.add_attribute("AcctIDSrc", "3"); // 1
    CompReq_2_set.insert("3");
    all_values.push_back(CompReq_2_set);
    all_compo_names.insert("CompReq_2_set");

    elt.add_element(CompReq_2);
  } // end CompReq
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
