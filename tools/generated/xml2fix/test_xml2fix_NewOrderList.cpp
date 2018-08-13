#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderList_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NewOrdList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderList_message_t_0;
  elt.add_attribute("ID", "ListID_t_310869724"); // 0
  NewOrderList_message_t_0.insert("ListID_t_310869724");
  elt.add_attribute("BidID", "BidID_t_41737637"); // 0
  NewOrderList_message_t_0.insert("BidID_t_41737637");
  elt.add_attribute("ClBidID", "ClientBidID_t_361424579"); // 0
  NewOrderList_message_t_0.insert("ClientBidID_t_361424579");
  elt.add_attribute("ProgRptReqs", "2"); // 0
  NewOrderList_message_t_0.insert("2");
  elt.add_attribute("BidTyp", "1"); // 0
  NewOrderList_message_t_0.insert("1");
  elt.add_attribute("ProgPeriodIntvl", "378994591"); // 0
  NewOrderList_message_t_0.insert("378994591");
  elt.add_attribute("CxllationRights", "Y"); // 0
  NewOrderList_message_t_0.insert("Y");
  elt.add_attribute("MnyLaunderingStat", "3"); // 0
  NewOrderList_message_t_0.insert("3");
  elt.add_attribute("RegistID", "RegistID_t_1165879863"); // 0
  NewOrderList_message_t_0.insert("RegistID_t_1165879863");
  elt.add_attribute("ListExecInstTyp", "5"); // 0
  NewOrderList_message_t_0.insert("5");
  elt.add_attribute("ListExecInst", "ListExecInst_t_1933547925"); // 0
  NewOrderList_message_t_0.insert("ListExecInst_t_1933547925");
  elt.add_attribute("ContingencyType", "3"); // 0
  NewOrderList_message_t_0.insert("3");
  elt.add_attribute("EncListExecInstLen", "1234327152"); // 0
  NewOrderList_message_t_0.insert("1234327152");
  elt.add_attribute("EncListExecInst", "EncodedListExecInst_t_999073936"); // 0
  NewOrderList_message_t_0.insert("EncodedListExecInst_t_999073936");
  elt.add_attribute("AOSPct", "17581919.960000"); // 0
  NewOrderList_message_t_0.insert("17581919.960000");
  elt.add_attribute("AOSValu", "AllowableOneSidednessValue_t_843463135"); // 0
  NewOrderList_message_t_0.insert("AllowableOneSidednessValue_t_843463135");
  elt.add_attribute("AOSCurr", "USD"); // 0
  NewOrderList_message_t_0.insert("USD");
  elt.add_attribute("TotNoOrds", "1161411549"); // 0
  NewOrderList_message_t_0.insert("1161411549");
  elt.add_attribute("LastFragment", "Y"); // 0
  NewOrderList_message_t_0.insert("Y");
  all_values.push_back(NewOrderList_message_t_0);
  all_compo_names.insert("NewOrderList_message_t");

  { // Hdr
    xml_element Hdr_52{"Hdr"};
    multiset<string> Hdr_52_set;
    Hdr_52.add_attribute("SeqNum", "656461830"); // 1
    Hdr_52_set.insert("656461830");
    Hdr_52.add_attribute("SID", "SenderCompID_t_245181691"); // 1
    Hdr_52_set.insert("SenderCompID_t_245181691");
    Hdr_52.add_attribute("TID", "TargetCompID_t_1457695407"); // 1
    Hdr_52_set.insert("TargetCompID_t_1457695407");
    Hdr_52.add_attribute("OBID", "OnBehalfOfCompID_t_956734637"); // 1
    Hdr_52_set.insert("OnBehalfOfCompID_t_956734637");
    Hdr_52.add_attribute("D2ID", "DeliverToCompID_t_325217375"); // 1
    Hdr_52_set.insert("DeliverToCompID_t_325217375");
    Hdr_52.add_attribute("SSub", "SenderSubID_t_1064712199"); // 1
    Hdr_52_set.insert("SenderSubID_t_1064712199");
    Hdr_52.add_attribute("SLoc", "SenderLocationID_t_121173595"); // 1
    Hdr_52_set.insert("SenderLocationID_t_121173595");
    Hdr_52.add_attribute("TSub", "TargetSubID_t_1204155738"); // 1
    Hdr_52_set.insert("TargetSubID_t_1204155738");
    Hdr_52.add_attribute("TLoc", "TargetLocationID_t_2030471618"); // 1
    Hdr_52_set.insert("TargetLocationID_t_2030471618");
    Hdr_52.add_attribute("OBSub", "OnBehalfOfSubID_t_1886843403"); // 1
    Hdr_52_set.insert("OnBehalfOfSubID_t_1886843403");
    Hdr_52.add_attribute("OBLoc", "OnBehalfOfLocationID_t_481604137"); // 1
    Hdr_52_set.insert("OnBehalfOfLocationID_t_481604137");
    Hdr_52.add_attribute("D2Sub", "DeliverToSubID_t_193857694"); // 1
    Hdr_52_set.insert("DeliverToSubID_t_193857694");
    Hdr_52.add_attribute("D2Loc", "DeliverToLocationID_t_1928581040"); // 1
    Hdr_52_set.insert("DeliverToLocationID_t_1928581040");
    Hdr_52.add_attribute("PosDup", "N"); // 1
    Hdr_52_set.insert("N");
    Hdr_52.add_attribute("PosRsnd", "Y"); // 1
    Hdr_52_set.insert("Y");
    Hdr_52.add_attribute("Snt", "SendingTime_t_1770841993"); // 1
    Hdr_52_set.insert("SendingTime_t_1770841993");
    Hdr_52.add_attribute("OrigSnt", "OrigSendingTime_t_1222023307"); // 1
    Hdr_52_set.insert("OrigSendingTime_t_1222023307");
    Hdr_52.add_attribute("MsgEncd", "MessageEncoding_t_194105730"); // 1
    Hdr_52_set.insert("MessageEncoding_t_194105730");
    all_values.push_back(Hdr_52_set);
    all_compo_names.insert("Hdr_52_set");

    {
      xml_element Hop_52{"Hop"};
      multiset<string> Hop_52_set;
      Hop_52.add_attribute("ID", "HopCompID_t_1333491097"); // 2
      Hop_52_set.insert("HopCompID_t_1333491097");
      Hop_52.add_attribute("Ref", "240419523"); // 2
      Hop_52_set.insert("240419523");
      Hop_52.add_attribute("Snt", "HopSendingTime_t_643303605"); // 2
      Hop_52_set.insert("HopSendingTime_t_643303605");
      all_values.push_back(Hop_52_set);
      all_compo_names.insert("Hop_52_set");

      Hdr_52.add_element(Hop_52);
    }
    elt.add_element(Hdr_52);
  } // end Hdr
  { // Pty
    xml_element Pty_221{"Pty"};
    multiset<string> Pty_221_set;
    Pty_221.add_attribute("ID", "RootPartyID_t_339719433"); // 1
    Pty_221_set.insert("RootPartyID_t_339719433");
    Pty_221.add_attribute("Src", "G"); // 1
    Pty_221_set.insert("G");
    Pty_221.add_attribute("R", "46"); // 1
    Pty_221_set.insert("46");
    all_values.push_back(Pty_221_set);
    all_compo_names.insert("Pty_221_set");

    {
      xml_element Sub_221{"Sub"};
      multiset<string> Sub_221_set;
      Sub_221.add_attribute("ID", "RootPartySubID_t_2097911429"); // 2
      Sub_221_set.insert("RootPartySubID_t_2097911429");
      Sub_221.add_attribute("Typ", "5"); // 2
      Sub_221_set.insert("5");
      all_values.push_back(Sub_221_set);
      all_compo_names.insert("Sub_221_set");

      Pty_221.add_element(Sub_221);
    }
    elt.add_element(Pty_221);
  } // end Pty
  { // Pty
    xml_element Pty_222{"Pty"};
    multiset<string> Pty_222_set;
    Pty_222.add_attribute("ID", "RootPartyID_t_69282773"); // 1
    Pty_222_set.insert("RootPartyID_t_69282773");
    Pty_222.add_attribute("Src", "4"); // 1
    Pty_222_set.insert("4");
    Pty_222.add_attribute("R", "38"); // 1
    Pty_222_set.insert("38");
    all_values.push_back(Pty_222_set);
    all_compo_names.insert("Pty_222_set");

    {
      xml_element Sub_222{"Sub"};
      multiset<string> Sub_222_set;
      Sub_222.add_attribute("ID", "RootPartySubID_t_800441954"); // 2
      Sub_222_set.insert("RootPartySubID_t_800441954");
      Sub_222.add_attribute("Typ", "21"); // 2
      Sub_222_set.insert("21");
      all_values.push_back(Sub_222_set);
      all_compo_names.insert("Sub_222_set");

      Pty_222.add_element(Sub_222);
    }
    elt.add_element(Pty_222);
  } // end Pty
  { // Pty
    xml_element Pty_223{"Pty"};
    multiset<string> Pty_223_set;
    Pty_223.add_attribute("ID", "RootPartyID_t_1980203485"); // 1
    Pty_223_set.insert("RootPartyID_t_1980203485");
    Pty_223.add_attribute("Src", "B"); // 1
    Pty_223_set.insert("B");
    Pty_223.add_attribute("R", "58"); // 1
    Pty_223_set.insert("58");
    all_values.push_back(Pty_223_set);
    all_compo_names.insert("Pty_223_set");

    {
      xml_element Sub_223{"Sub"};
      multiset<string> Sub_223_set;
      Sub_223.add_attribute("ID", "RootPartySubID_t_157937213"); // 2
      Sub_223_set.insert("RootPartySubID_t_157937213");
      Sub_223.add_attribute("Typ", "30"); // 2
      Sub_223_set.insert("30");
      all_values.push_back(Sub_223_set);
      all_compo_names.insert("Sub_223_set");

      Pty_223.add_element(Sub_223);
    }
    elt.add_element(Pty_223);
  } // end Pty
  { // Ord
    xml_element Ord_1{"Ord"};
    multiset<string> Ord_1_set;
    Ord_1.add_attribute("ClOrdID", "ClOrdID_t_1362092951"); // 1
    Ord_1_set.insert("ClOrdID_t_1362092951");
    Ord_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1058353883"); // 1
    Ord_1_set.insert("SecondaryClOrdID_t_1058353883");
    Ord_1.add_attribute("SeqNo", "905443341"); // 1
    Ord_1_set.insert("905443341");
    Ord_1.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1843697088"); // 1
    Ord_1_set.insert("ClOrdLinkID_t_1843697088");
    Ord_1.add_attribute("SettlInstMode", "3"); // 1
    Ord_1_set.insert("3");
    Ord_1.add_attribute("OrignDt", "TradeOriginationDate_t_686540733"); // 1
    Ord_1_set.insert("TradeOriginationDate_t_686540733");
    Ord_1.add_attribute("TrdDt", "TradeDate_t_539242156"); // 1
    Ord_1_set.insert("TradeDate_t_539242156");
    Ord_1.add_attribute("Acct", "Account_t_27829501"); // 1
    Ord_1_set.insert("Account_t_27829501");
    Ord_1.add_attribute("AcctIDSrc", "3"); // 1
    Ord_1_set.insert("3");
    Ord_1.add_attribute("AcctTyp", "8"); // 1
    Ord_1_set.insert("8");
    Ord_1.add_attribute("DayBkngInst", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("BkngUnit", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("AllocID", "AllocID_t_2001684986"); // 1
    Ord_1_set.insert("AllocID_t_2001684986");
    Ord_1.add_attribute("PreallocMeth", "0"); // 1
    Ord_1_set.insert("0");
    Ord_1.add_attribute("SettlTyp", "C"); // 1
    Ord_1_set.insert("C");
    Ord_1.add_attribute("SettlDt", "SettlDate_t_193920771"); // 1
    Ord_1_set.insert("SettlDate_t_193920771");
    Ord_1.add_attribute("CshMgn", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("ClrFeeInd", "9"); // 1
    Ord_1_set.insert("9");
    Ord_1.add_attribute("HandlInst", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("ExecInst", "t"); // 1
    Ord_1_set.insert("t");
    Ord_1.add_attribute("MinQty", "6558903.380000"); // 1
    Ord_1_set.insert("6558903.380000");
    Ord_1.add_attribute("MtchInc", "17235457.240000"); // 1
    Ord_1_set.insert("17235457.240000");
    Ord_1.add_attribute("MxPxLvls", "756534337"); // 1
    Ord_1_set.insert("756534337");
    Ord_1.add_attribute("MaxFloor", "14563322.930000"); // 1
    Ord_1_set.insert("14563322.930000");
    Ord_1.add_attribute("ExDest", "ExDestination_t_1811721077"); // 1
    Ord_1_set.insert("ExDestination_t_1811721077");
    Ord_1.add_attribute("ExDestIDSrc", "G"); // 1
    Ord_1_set.insert("G");
    Ord_1.add_attribute("ProcCode", "6"); // 1
    Ord_1_set.insert("6");
    Ord_1.add_attribute("PrevClsPx", "7091474.200000"); // 1
    Ord_1_set.insert("7091474.200000");
    Ord_1.add_attribute("Side", "C"); // 1
    Ord_1_set.insert("C");
    Ord_1.add_attribute("SideValuInd", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("LocReqd", "N"); // 1
    Ord_1_set.insert("N");
    Ord_1.add_attribute("TxnTm", "TransactTime_t_2109284338"); // 1
    Ord_1_set.insert("TransactTime_t_2109284338");
    Ord_1.add_attribute("QtyTyp", "2"); // 1
    Ord_1_set.insert("2");
    Ord_1.add_attribute("OrdTyp", "K"); // 1
    Ord_1_set.insert("K");
    Ord_1.add_attribute("PxTyp", "11"); // 1
    Ord_1_set.insert("11");
    Ord_1.add_attribute("Px", "7579500.840000"); // 1
    Ord_1_set.insert("7579500.840000");
    Ord_1.add_attribute("PxPrtScp", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("StopPx", "1972562.860000"); // 1
    Ord_1_set.insert("1972562.860000");
    Ord_1.add_attribute("Ccy", "EUR"); // 1
    Ord_1_set.insert("EUR");
    Ord_1.add_attribute("ComplianceID", "ComplianceID_t_1958521750"); // 1
    Ord_1_set.insert("ComplianceID_t_1958521750");
    Ord_1.add_attribute("SolFlag", "Y"); // 1
    Ord_1_set.insert("Y");
    Ord_1.add_attribute("IOIID", "IOIID_t_1125537039"); // 1
    Ord_1_set.insert("IOIID_t_1125537039");
    Ord_1.add_attribute("QID", "QuoteID_t_1812723088"); // 1
    Ord_1_set.insert("QuoteID_t_1812723088");
    Ord_1.add_attribute("RefOrdID", "RefOrderID_t_1872953653"); // 1
    Ord_1_set.insert("RefOrderID_t_1872953653");
    Ord_1.add_attribute("RefOrdIDSrc", "2"); // 1
    Ord_1_set.insert("2");
    Ord_1.add_attribute("TmInForce", "0"); // 1
    Ord_1_set.insert("0");
    Ord_1.add_attribute("EfctvTm", "EffectiveTime_t_320855951"); // 1
    Ord_1_set.insert("EffectiveTime_t_320855951");
    Ord_1.add_attribute("ExpireDt", "ExpireDate_t_180122859"); // 1
    Ord_1_set.insert("ExpireDate_t_180122859");
    Ord_1.add_attribute("ExpireTm", "ExpireTime_t_3508764"); // 1
    Ord_1_set.insert("ExpireTime_t_3508764");
    Ord_1.add_attribute("GTBkngInst", "2"); // 1
    Ord_1_set.insert("2");
    Ord_1.add_attribute("Cpcty", "A"); // 1
    Ord_1_set.insert("A");
    Ord_1.add_attribute("Rstctions", "E"); // 1
    Ord_1_set.insert("E");
    Ord_1.add_attribute("PrTrdAnon", "false"); // 1
    Ord_1_set.insert("false");
    Ord_1.add_attribute("CustCpcty", "4"); // 1
    Ord_1_set.insert("4");
    Ord_1.add_attribute("ForexReq", "N"); // 1
    Ord_1_set.insert("N");
    Ord_1.add_attribute("SettlCcy", "USD"); // 1
    Ord_1_set.insert("USD");
    Ord_1.add_attribute("BkngTyp", "0"); // 1
    Ord_1_set.insert("0");
    Ord_1.add_attribute("Txt", "Text_t_1435348393"); // 1
    Ord_1_set.insert("Text_t_1435348393");
    Ord_1.add_attribute("EncTxtLen", "159232474"); // 1
    Ord_1_set.insert("159232474");
    Ord_1.add_attribute("EncTxt", "EncodedText_t_1828186697"); // 1
    Ord_1_set.insert("EncodedText_t_1828186697");
    Ord_1.add_attribute("SettlDt2", "SettlDate2_t_1397149084"); // 1
    Ord_1_set.insert("SettlDate2_t_1397149084");
    Ord_1.add_attribute("Qty2", "18124546.290000"); // 1
    Ord_1_set.insert("18124546.290000");
    Ord_1.add_attribute("Px2", "3138937.480000"); // 1
    Ord_1_set.insert("3138937.480000");
    Ord_1.add_attribute("PosEfct", "N"); // 1
    Ord_1_set.insert("N");
    Ord_1.add_attribute("Covered", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("MaxShow", "16336251.810000"); // 1
    Ord_1_set.insert("16336251.810000");
    Ord_1.add_attribute("TgtStrategy", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1208700651"); // 1
    Ord_1_set.insert("TargetStrategyParameters_t_1208700651");
    Ord_1.add_attribute("ParticipationRt", "11157720.450000"); // 1
    Ord_1_set.insert("11157720.450000");
    Ord_1.add_attribute("Designation", "Designation_t_1063457603"); // 1
    Ord_1_set.insert("Designation_t_1063457603");
    all_values.push_back(Ord_1_set);
    all_compo_names.insert("Ord_1_set");

    {
      xml_element Pty_224{"Pty"};
      multiset<string> Pty_224_set;
      Pty_224.add_attribute("ID", "PartyID_t_68931820"); // 2
      Pty_224_set.insert("PartyID_t_68931820");
      Pty_224.add_attribute("Src", "5"); // 2
      Pty_224_set.insert("5");
      Pty_224.add_attribute("R", "69"); // 2
      Pty_224_set.insert("69");
      all_values.push_back(Pty_224_set);
      all_compo_names.insert("Pty_224_set");

      {
        xml_element Sub_224{"Sub"};
        multiset<string> Sub_224_set;
        Sub_224.add_attribute("ID", "PartySubID_t_1941885473"); // 3
        Sub_224_set.insert("PartySubID_t_1941885473");
        Sub_224.add_attribute("Typ", "8"); // 3
        Sub_224_set.insert("8");
        all_values.push_back(Sub_224_set);
        all_compo_names.insert("Sub_224_set");

        Pty_224.add_element(Sub_224);
      }
      Ord_1.add_element(Pty_224);
    }
    {
      xml_element PreAll_6{"PreAll"};
      multiset<string> PreAll_6_set;
      PreAll_6.add_attribute("Acct", "AllocAccount_t_587857255"); // 2
      PreAll_6_set.insert("AllocAccount_t_587857255");
      PreAll_6.add_attribute("ActIDSrc", "4"); // 2
      PreAll_6_set.insert("4");
      PreAll_6.add_attribute("AllocSettlCcy", "GBP"); // 2
      PreAll_6_set.insert("GBP");
      PreAll_6.add_attribute("IndAllocID", "IndividualAllocID_t_1605109919"); // 2
      PreAll_6_set.insert("IndividualAllocID_t_1605109919");
      PreAll_6.add_attribute("Qty", "7034767.880000"); // 2
      PreAll_6_set.insert("7034767.880000");
      all_values.push_back(PreAll_6_set);
      all_compo_names.insert("PreAll_6_set");

      {
        xml_element Pty_225{"Pty"};
        multiset<string> Pty_225_set;
        Pty_225.add_attribute("ID", "NestedPartyID_t_170936860"); // 3
        Pty_225_set.insert("NestedPartyID_t_170936860");
        Pty_225.add_attribute("Src", "2"); // 3
        Pty_225_set.insert("2");
        Pty_225.add_attribute("R", "8"); // 3
        Pty_225_set.insert("8");
        all_values.push_back(Pty_225_set);
        all_compo_names.insert("Pty_225_set");

        {
          xml_element Sub_225{"Sub"};
          multiset<string> Sub_225_set;
          Sub_225.add_attribute("ID", "NestedPartySubID_t_1562228778"); // 4
          Sub_225_set.insert("NestedPartySubID_t_1562228778");
          Sub_225.add_attribute("Typ", "3"); // 4
          Sub_225_set.insert("3");
          all_values.push_back(Sub_225_set);
          all_compo_names.insert("Sub_225_set");

          Pty_225.add_element(Sub_225);
        }
        PreAll_6.add_element(Pty_225);
      }
      Ord_1.add_element(PreAll_6);
    }
    {
      xml_element DsplyInstr_4{"DsplyInstr"};
      multiset<string> DsplyInstr_4_set;
      DsplyInstr_4.add_attribute("DisplayQty", "4127028.330000"); // 2
      DsplyInstr_4_set.insert("4127028.330000");
      DsplyInstr_4.add_attribute("SecDspQty", "15151844.690000"); // 2
      DsplyInstr_4_set.insert("15151844.690000");
      DsplyInstr_4.add_attribute("DspWhn", "1"); // 2
      DsplyInstr_4_set.insert("1");
      DsplyInstr_4.add_attribute("DspMthd", "4"); // 2
      DsplyInstr_4_set.insert("4");
      DsplyInstr_4.add_attribute("DsplLwQty", "11958875.180000"); // 2
      DsplyInstr_4_set.insert("11958875.180000");
      DsplyInstr_4.add_attribute("DisplayHighQty", "9296999.380000"); // 2
      DsplyInstr_4_set.insert("9296999.380000");
      DsplyInstr_4.add_attribute("DspMinIncr", "2369062.880000"); // 2
      DsplyInstr_4_set.insert("2369062.880000");
      DsplyInstr_4.add_attribute("RfrshQty", "15097812.660000"); // 2
      DsplyInstr_4_set.insert("15097812.660000");
      all_values.push_back(DsplyInstr_4_set);
      all_compo_names.insert("DsplyInstr_4_set");

      Ord_1.add_element(DsplyInstr_4);
    }
    {
      xml_element TrdSes_8{"TrdSes"};
      multiset<string> TrdSes_8_set;
      TrdSes_8.add_attribute("SesID", "4"); // 2
      TrdSes_8_set.insert("4");
      TrdSes_8.add_attribute("SesSub", "4"); // 2
      TrdSes_8_set.insert("4");
      all_values.push_back(TrdSes_8_set);
      all_compo_names.insert("TrdSes_8_set");

      Ord_1.add_element(TrdSes_8);
    }
    {
      xml_element Instrmt_41{"Instrmt"};
      multiset<string> Instrmt_41_set;
      Instrmt_41.add_attribute("Sym", "Symbol_t_995922800"); // 2
      Instrmt_41_set.insert("Symbol_t_995922800");
      Instrmt_41.add_attribute("Sfx", "CD"); // 2
      Instrmt_41_set.insert("CD");
      Instrmt_41.add_attribute("ID", "SecurityID_t_1868528004"); // 2
      Instrmt_41_set.insert("SecurityID_t_1868528004");
      Instrmt_41.add_attribute("Src", "8"); // 2
      Instrmt_41_set.insert("8");
      Instrmt_41.add_attribute("Prod", "9"); // 2
      Instrmt_41_set.insert("9");
      Instrmt_41.add_attribute("ProdCmplx", "ProductComplex_t_1937459824"); // 2
      Instrmt_41_set.insert("ProductComplex_t_1937459824");
      Instrmt_41.add_attribute("SecGrp", "SecurityGroup_t_58036633"); // 2
      Instrmt_41_set.insert("SecurityGroup_t_58036633");
      Instrmt_41.add_attribute("CFI", "CFICode_t_734470004"); // 2
      Instrmt_41_set.insert("CFICode_t_734470004");
      Instrmt_41.add_attribute("SecTyp", "TBOND"); // 2
      Instrmt_41_set.insert("TBOND");
      Instrmt_41.add_attribute("SubTyp", "SecuritySubType_t_1892861012"); // 2
      Instrmt_41_set.insert("SecuritySubType_t_1892861012");
      Instrmt_41.add_attribute("MMY", "1322327260"); // 2
      Instrmt_41_set.insert("1322327260");
      Instrmt_41.add_attribute("MatDt", "MaturityDate_t_1847119427"); // 2
      Instrmt_41_set.insert("MaturityDate_t_1847119427");
      Instrmt_41.add_attribute("MatTm", "1760324602"); // 2
      Instrmt_41_set.insert("1760324602");
      Instrmt_41.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1913693280"); // 2
      Instrmt_41_set.insert("SettleOnOpenFlag_t_1913693280");
      Instrmt_41.add_attribute("AsgnMeth", "1304745698"); // 2
      Instrmt_41_set.insert("1304745698");
      Instrmt_41.add_attribute("Status", "1"); // 2
      Instrmt_41_set.insert("1");
      Instrmt_41.add_attribute("CpnPmt", "CouponPaymentDate_t_2084630140"); // 2
      Instrmt_41_set.insert("CouponPaymentDate_t_2084630140");
      Instrmt_41.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_41_set.insert("MR");
      Instrmt_41.add_attribute("Snrty", "SD"); // 2
      Instrmt_41_set.insert("SD");
      Instrmt_41.add_attribute("NotlPctOut", "14993752.710000"); // 2
      Instrmt_41_set.insert("14993752.710000");
      Instrmt_41.add_attribute("OrigNotlPctOut", "11059609.100000"); // 2
      Instrmt_41_set.insert("11059609.100000");
      Instrmt_41.add_attribute("AttchPnt", "15773592.060000"); // 2
      Instrmt_41_set.insert("15773592.060000");
      Instrmt_41.add_attribute("DetchPnt", "8670760.920000"); // 2
      Instrmt_41_set.insert("8670760.920000");
      Instrmt_41.add_attribute("Issued", "IssueDate_t_638511765"); // 2
      Instrmt_41_set.insert("IssueDate_t_638511765");
      Instrmt_41.add_attribute("RepoCollSecTyp", "1810865"); // 2
      Instrmt_41_set.insert("1810865");
      Instrmt_41.add_attribute("RepoTrm", "2062963610"); // 2
      Instrmt_41_set.insert("2062963610");
      Instrmt_41.add_attribute("RepoRt", "15682117.030000"); // 2
      Instrmt_41_set.insert("15682117.030000");
      Instrmt_41.add_attribute("Fctr", "2387171.530000"); // 2
      Instrmt_41_set.insert("2387171.530000");
      Instrmt_41.add_attribute("CrdRtg", "CreditRating_t_1425261228"); // 2
      Instrmt_41_set.insert("CreditRating_t_1425261228");
      Instrmt_41.add_attribute("Rgstry", "InstrRegistry_t_1405591208"); // 2
      Instrmt_41_set.insert("InstrRegistry_t_1405591208");
      Instrmt_41.add_attribute("IssuCtry", "898544506"); // 2
      Instrmt_41_set.insert("898544506");
      Instrmt_41.add_attribute("StPrv", "StateOrProvinceOfIssue_t_273700380"); // 2
      Instrmt_41_set.insert("StateOrProvinceOfIssue_t_273700380");
      Instrmt_41.add_attribute("Lcl", "LocaleOfIssue_t_347906566"); // 2
      Instrmt_41_set.insert("LocaleOfIssue_t_347906566");
      Instrmt_41.add_attribute("Redeem", "RedemptionDate_t_619588863"); // 2
      Instrmt_41_set.insert("RedemptionDate_t_619588863");
      Instrmt_41.add_attribute("StrkPx", "2379115.770000"); // 2
      Instrmt_41_set.insert("2379115.770000");
      Instrmt_41.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_41_set.insert("CAN");
      Instrmt_41.add_attribute("StrkMult", "2959482.110000"); // 2
      Instrmt_41_set.insert("2959482.110000");
      Instrmt_41.add_attribute("StrkValu", "10881495.320000"); // 2
      Instrmt_41_set.insert("10881495.320000");
      Instrmt_41.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_41_set.insert("2");
      Instrmt_41.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_41_set.insert("1");
      Instrmt_41.add_attribute("StrkPxBndryPrcsn", "2629931.440000"); // 2
      Instrmt_41_set.insert("2629931.440000");
      Instrmt_41.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_41_set.insert("1");
      Instrmt_41.add_attribute("OptAt", "1801650177"); // 2
      Instrmt_41_set.insert("1801650177");
      Instrmt_41.add_attribute("Mult", "292027.760000"); // 2
      Instrmt_41_set.insert("292027.760000");
      Instrmt_41.add_attribute("MultTyp", "2"); // 2
      Instrmt_41_set.insert("2");
      Instrmt_41.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_41_set.insert("4");
      Instrmt_41.add_attribute("MinPxIncr", "21138329.160000"); // 2
      Instrmt_41_set.insert("21138329.160000");
      Instrmt_41.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1859599320"); // 2
      Instrmt_41_set.insert("MinPriceIncrementAmount_t_1859599320");
      Instrmt_41.add_attribute("UOM", "MMBtu"); // 2
      Instrmt_41_set.insert("MMBtu");
      Instrmt_41.add_attribute("UOMQty", "14657245.390000"); // 2
      Instrmt_41_set.insert("14657245.390000");
      Instrmt_41.add_attribute("PxUOM", "Alw"); // 2
      Instrmt_41_set.insert("Alw");
      Instrmt_41.add_attribute("PxUOMQty", "5650162.020000"); // 2
      Instrmt_41_set.insert("5650162.020000");
      Instrmt_41.add_attribute("SettlMeth", "P"); // 2
      Instrmt_41_set.insert("P");
      Instrmt_41.add_attribute("ExerStyle", "1"); // 2
      Instrmt_41_set.insert("1");
      Instrmt_41.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_41_set.insert("3");
      Instrmt_41.add_attribute("OptPayAmt", "OptPayoutAmount_t_100796945"); // 2
      Instrmt_41_set.insert("OptPayoutAmount_t_100796945");
      Instrmt_41.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_41_set.insert("PCTPAR");
      Instrmt_41.add_attribute("ValMeth", "EQTY"); // 2
      Instrmt_41_set.insert("EQTY");
      Instrmt_41.add_attribute("ListMeth", "0"); // 2
      Instrmt_41_set.insert("0");
      Instrmt_41.add_attribute("CapPx", "1354239.640000"); // 2
      Instrmt_41_set.insert("1354239.640000");
      Instrmt_41.add_attribute("FlrPx", "17040887.260000"); // 2
      Instrmt_41_set.insert("17040887.260000");
      Instrmt_41.add_attribute("PutCall", "0"); // 2
      Instrmt_41_set.insert("0");
      Instrmt_41.add_attribute("FlexInd", "true"); // 2
      Instrmt_41_set.insert("true");
      Instrmt_41.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_41_set.insert("false");
      Instrmt_41.add_attribute("TmUnit", "Min"); // 2
      Instrmt_41_set.insert("Min");
      Instrmt_41.add_attribute("CpnRt", "8370100.580000"); // 2
      Instrmt_41_set.insert("8370100.580000");
      Instrmt_41.add_attribute("Exch", "SecurityExchange_t_585758981"); // 2
      Instrmt_41_set.insert("SecurityExchange_t_585758981");
      Instrmt_41.add_attribute("PosLmt", "186134695"); // 2
      Instrmt_41_set.insert("186134695");
      Instrmt_41.add_attribute("NTPosLmt", "1925159590"); // 2
      Instrmt_41_set.insert("1925159590");
      Instrmt_41.add_attribute("Issr", "Issuer_t_579702022"); // 2
      Instrmt_41_set.insert("Issuer_t_579702022");
      Instrmt_41.add_attribute("EncIssrLen", "227460270"); // 2
      Instrmt_41_set.insert("227460270");
      Instrmt_41.add_attribute("EncIssr", "EncodedIssuer_t_40669086"); // 2
      Instrmt_41_set.insert("EncodedIssuer_t_40669086");
      Instrmt_41.add_attribute("Desc", "SecurityDesc_t_273280843"); // 2
      Instrmt_41_set.insert("SecurityDesc_t_273280843");
      Instrmt_41.add_attribute("EncSecDescLen", "2029110447"); // 2
      Instrmt_41_set.insert("2029110447");
      Instrmt_41.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_69871862"); // 2
      Instrmt_41_set.insert("EncodedSecurityDesc_t_69871862");
      Instrmt_41.add_attribute("Pool", "Pool_t_1271605362"); // 2
      Instrmt_41_set.insert("Pool_t_1271605362");
      Instrmt_41.add_attribute("CSetMo", "1999594718"); // 2
      Instrmt_41_set.insert("1999594718");
      Instrmt_41.add_attribute("CPPgm", "1"); // 2
      Instrmt_41_set.insert("1");
      Instrmt_41.add_attribute("CPRegT", "CPRegType_t_983721034"); // 2
      Instrmt_41_set.insert("CPRegType_t_983721034");
      Instrmt_41.add_attribute("Dated", "DatedDate_t_987251714"); // 2
      Instrmt_41_set.insert("DatedDate_t_987251714");
      Instrmt_41.add_attribute("IntAcrl", "InterestAccrualDate_t_1501945670"); // 2
      Instrmt_41_set.insert("InterestAccrualDate_t_1501945670");
      all_values.push_back(Instrmt_41_set);
      all_compo_names.insert("Instrmt_41_set");

      {
        xml_element AID_44{"AID"};
        multiset<string> AID_44_set;
        AID_44.add_attribute("AltID", "SecurityAltID_t_1801797617"); // 3
        AID_44_set.insert("SecurityAltID_t_1801797617");
        AID_44.add_attribute("AltIDSrc", "D"); // 3
        AID_44_set.insert("D");
        all_values.push_back(AID_44_set);
        all_compo_names.insert("AID_44_set");

        Instrmt_41.add_element(AID_44);
      }
      {
        xml_element SecXML_44{"SecXML"};
        multiset<string> SecXML_44_set;
        SecXML_44.add_attribute("Schema", "SecurityXMLSchema_t_1687262653"); // 3
        SecXML_44_set.insert("SecurityXMLSchema_t_1687262653");
        all_values.push_back(SecXML_44_set);
        all_compo_names.insert("SecXML_44_set");

        Instrmt_41.add_element(SecXML_44);
      }
      {
        xml_element Evnt_44{"Evnt"};
        multiset<string> Evnt_44_set;
        Evnt_44.add_attribute("EventTyp", "17"); // 3
        Evnt_44_set.insert("17");
        Evnt_44.add_attribute("Dt", "EventDate_t_2119094983"); // 3
        Evnt_44_set.insert("EventDate_t_2119094983");
        Evnt_44.add_attribute("Tm", "EventTime_t_1788059599"); // 3
        Evnt_44_set.insert("EventTime_t_1788059599");
        Evnt_44.add_attribute("Px", "19882187.210000"); // 3
        Evnt_44_set.insert("19882187.210000");
        Evnt_44.add_attribute("Txt", "EventText_t_777155555"); // 3
        Evnt_44_set.insert("EventText_t_777155555");
        all_values.push_back(Evnt_44_set);
        all_compo_names.insert("Evnt_44_set");

        Instrmt_41.add_element(Evnt_44);
      }
      {
        xml_element Pty_226{"Pty"};
        multiset<string> Pty_226_set;
        Pty_226.add_attribute("ID", "InstrumentPartyID_t_1166634125"); // 3
        Pty_226_set.insert("InstrumentPartyID_t_1166634125");
        Pty_226.add_attribute("Src", "4"); // 3
        Pty_226_set.insert("4");
        Pty_226.add_attribute("R", "75"); // 3
        Pty_226_set.insert("75");
        all_values.push_back(Pty_226_set);
        all_compo_names.insert("Pty_226_set");

        {
          xml_element Sub_226{"Sub"};
          multiset<string> Sub_226_set;
          Sub_226.add_attribute("ID", "InstrumentPartySubID_t_818909031"); // 4
          Sub_226_set.insert("InstrumentPartySubID_t_818909031");
          Sub_226.add_attribute("Typ", "18"); // 4
          Sub_226_set.insert("18");
          all_values.push_back(Sub_226_set);
          all_compo_names.insert("Sub_226_set");

          Pty_226.add_element(Sub_226);
        }
        Instrmt_41.add_element(Pty_226);
      }
      {
        xml_element CmplxEvnt_41{"CmplxEvnt"};
        multiset<string> CmplxEvnt_41_set;
        CmplxEvnt_41.add_attribute("Typ", "5"); // 3
        CmplxEvnt_41_set.insert("5");
        CmplxEvnt_41.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_709095515"); // 3
        CmplxEvnt_41_set.insert("ComplexOptPayoutAmount_t_709095515");
        CmplxEvnt_41.add_attribute("Px", "12964996.250000"); // 3
        CmplxEvnt_41_set.insert("12964996.250000");
        CmplxEvnt_41.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_41_set.insert("2");
        CmplxEvnt_41.add_attribute("PxBndryPrcsn", "8952302.100000"); // 3
        CmplxEvnt_41_set.insert("8952302.100000");
        CmplxEvnt_41.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_41_set.insert("2");
        CmplxEvnt_41.add_attribute("Cond", "1"); // 3
        CmplxEvnt_41_set.insert("1");
        all_values.push_back(CmplxEvnt_41_set);
        all_compo_names.insert("CmplxEvnt_41_set");

        {
          xml_element EvntDts_41{"EvntDts"};
          multiset<string> EvntDts_41_set;
          EvntDts_41.add_attribute("StartDt", "ComplexEventStartDate_t_1122690480"); // 4
          EvntDts_41_set.insert("ComplexEventStartDate_t_1122690480");
          EvntDts_41.add_attribute("EndDt", "ComplexEventEndDate_t_1114844653"); // 4
          EvntDts_41_set.insert("ComplexEventEndDate_t_1114844653");
          all_values.push_back(EvntDts_41_set);
          all_compo_names.insert("EvntDts_41_set");

          {
            xml_element EvntTms_41{"EvntTms"};
            multiset<string> EvntTms_41_set;
            EvntTms_41.add_attribute("StartTm", "1948696421"); // 5
            EvntTms_41_set.insert("1948696421");
            EvntTms_41.add_attribute("EndTm", "1004317279"); // 5
            EvntTms_41_set.insert("1004317279");
            all_values.push_back(EvntTms_41_set);
            all_compo_names.insert("EvntTms_41_set");

            EvntDts_41.add_element(EvntTms_41);
          }
          CmplxEvnt_41.add_element(EvntDts_41);
        }
        Instrmt_41.add_element(CmplxEvnt_41);
      }
      Ord_1.add_element(Instrmt_41);
    }
    {
      xml_element Undly_56{"Undly"};
      multiset<string> Undly_56_set;
      Undly_56.add_attribute("Sym", "UnderlyingSymbol_t_1184716515"); // 2
      Undly_56_set.insert("UnderlyingSymbol_t_1184716515");
      Undly_56.add_attribute("Sfx", "WI"); // 2
      Undly_56_set.insert("WI");
      Undly_56.add_attribute("ID", "UnderlyingSecurityID_t_856428349"); // 2
      Undly_56_set.insert("UnderlyingSecurityID_t_856428349");
      Undly_56.add_attribute("Src", "H"); // 2
      Undly_56_set.insert("H");
      Undly_56.add_attribute("Prod", "7"); // 2
      Undly_56_set.insert("7");
      Undly_56.add_attribute("CFI", "UnderlyingCFICode_t_1843680063"); // 2
      Undly_56_set.insert("UnderlyingCFICode_t_1843680063");
      Undly_56.add_attribute("SecTyp", "MPP"); // 2
      Undly_56_set.insert("MPP");
      Undly_56.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1710853139"); // 2
      Undly_56_set.insert("UnderlyingSecuritySubType_t_1710853139");
      Undly_56.add_attribute("MMY", "1248464331"); // 2
      Undly_56_set.insert("1248464331");
      Undly_56.add_attribute("Mat", "UnderlyingMaturityDate_t_115178673"); // 2
      Undly_56_set.insert("UnderlyingMaturityDate_t_115178673");
      Undly_56.add_attribute("MatTm", "674271809"); // 2
      Undly_56_set.insert("674271809");
      Undly_56.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1220075666"); // 2
      Undly_56_set.insert("UnderlyingCouponPaymentDate_t_1220075666");
      Undly_56.add_attribute("RestrctTyp", "FR"); // 2
      Undly_56_set.insert("FR");
      Undly_56.add_attribute("Snrty", "SB"); // 2
      Undly_56_set.insert("SB");
      Undly_56.add_attribute("NotlPctOut", "19972312.210000"); // 2
      Undly_56_set.insert("19972312.210000");
      Undly_56.add_attribute("OrigNotlPctOut", "9223887.490000"); // 2
      Undly_56_set.insert("9223887.490000");
      Undly_56.add_attribute("AttchPnt", "4911659.190000"); // 2
      Undly_56_set.insert("4911659.190000");
      Undly_56.add_attribute("DetchPnt", "1835082.070000"); // 2
      Undly_56_set.insert("1835082.070000");
      Undly_56.add_attribute("Issued", "UnderlyingIssueDate_t_1741297781"); // 2
      Undly_56_set.insert("UnderlyingIssueDate_t_1741297781");
      Undly_56.add_attribute("RepoCollSecTyp", "950655486"); // 2
      Undly_56_set.insert("950655486");
      Undly_56.add_attribute("RepoTrm", "693462782"); // 2
      Undly_56_set.insert("693462782");
      Undly_56.add_attribute("RepoRt", "3029096.480000"); // 2
      Undly_56_set.insert("3029096.480000");
      Undly_56.add_attribute("Fctr", "996714.640000"); // 2
      Undly_56_set.insert("996714.640000");
      Undly_56.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1789176338"); // 2
      Undly_56_set.insert("UnderlyingCreditRating_t_1789176338");
      Undly_56.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1198139859"); // 2
      Undly_56_set.insert("UnderlyingInstrRegistry_t_1198139859");
      Undly_56.add_attribute("Ctry", "1173847031"); // 2
      Undly_56_set.insert("1173847031");
      Undly_56.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1317108268"); // 2
      Undly_56_set.insert("UnderlyingStateOrProvinceOfIssue_t_1317108268");
      Undly_56.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_173346691"); // 2
      Undly_56_set.insert("UnderlyingLocaleOfIssue_t_173346691");
      Undly_56.add_attribute("Redeem", "UnderlyingRedemptionDate_t_141208037"); // 2
      Undly_56_set.insert("UnderlyingRedemptionDate_t_141208037");
      Undly_56.add_attribute("StrkPx", "11183210.420000"); // 2
      Undly_56_set.insert("11183210.420000");
      Undly_56.add_attribute("StrkCcy", "GBP"); // 2
      Undly_56_set.insert("GBP");
      Undly_56.add_attribute("OptA", "43655529"); // 2
      Undly_56_set.insert("43655529");
      Undly_56.add_attribute("Mult", "20340923.200000"); // 2
      Undly_56_set.insert("20340923.200000");
      Undly_56.add_attribute("MultTyp", "1"); // 2
      Undly_56_set.insert("1");
      Undly_56.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_56_set.insert("4");
      Undly_56.add_attribute("UOM", "lbs"); // 2
      Undly_56_set.insert("lbs");
      Undly_56.add_attribute("UOMQty", "9747782.180000"); // 2
      Undly_56_set.insert("9747782.180000");
      Undly_56.add_attribute("PxUOM", "Gal"); // 2
      Undly_56_set.insert("Gal");
      Undly_56.add_attribute("PxUOMQty", "8312694.190000"); // 2
      Undly_56_set.insert("8312694.190000");
      Undly_56.add_attribute("TmUnit", "D"); // 2
      Undly_56_set.insert("D");
      Undly_56.add_attribute("ExerStyle", "0"); // 2
      Undly_56_set.insert("0");
      Undly_56.add_attribute("CpnRt", "20513450.860000"); // 2
      Undly_56_set.insert("20513450.860000");
      Undly_56.add_attribute("Exch", "UnderlyingSecurityExchange_t_845711516"); // 2
      Undly_56_set.insert("UnderlyingSecurityExchange_t_845711516");
      Undly_56.add_attribute("Issr", "UnderlyingIssuer_t_705359234"); // 2
      Undly_56_set.insert("UnderlyingIssuer_t_705359234");
      Undly_56.add_attribute("EncUndIssrLen", "1901092659"); // 2
      Undly_56_set.insert("1901092659");
      Undly_56.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1768100266"); // 2
      Undly_56_set.insert("EncodedUnderlyingIssuer_t_1768100266");
      Undly_56.add_attribute("Desc", "UnderlyingSecurityDesc_t_1196525153"); // 2
      Undly_56_set.insert("UnderlyingSecurityDesc_t_1196525153");
      Undly_56.add_attribute("EncUndSecDescLen", "2084600866"); // 2
      Undly_56_set.insert("2084600866");
      Undly_56.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1361914399"); // 2
      Undly_56_set.insert("EncodedUnderlyingSecurityDesc_t_1361914399");
      Undly_56.add_attribute("CPPgm", "UnderlyingCPProgram_t_2147180639"); // 2
      Undly_56_set.insert("UnderlyingCPProgram_t_2147180639");
      Undly_56.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_630580000"); // 2
      Undly_56_set.insert("UnderlyingCPRegType_t_630580000");
      Undly_56.add_attribute("AllocPct", "16648240.470000"); // 2
      Undly_56_set.insert("16648240.470000");
      Undly_56.add_attribute("Ccy", "JPY"); // 2
      Undly_56_set.insert("JPY");
      Undly_56.add_attribute("Qty", "7154802.580000"); // 2
      Undly_56_set.insert("7154802.580000");
      Undly_56.add_attribute("SettlTyp", "4"); // 2
      Undly_56_set.insert("4");
      Undly_56.add_attribute("CashAmt", "UnderlyingCashAmount_t_1589380959"); // 2
      Undly_56_set.insert("UnderlyingCashAmount_t_1589380959");
      Undly_56.add_attribute("CashTyp", "FIXED"); // 2
      Undly_56_set.insert("FIXED");
      Undly_56.add_attribute("Px", "14144235.240000"); // 2
      Undly_56_set.insert("14144235.240000");
      Undly_56.add_attribute("DirtPx", "5602183.530000"); // 2
      Undly_56_set.insert("5602183.530000");
      Undly_56.add_attribute("EndPx", "20664909.210000"); // 2
      Undly_56_set.insert("20664909.210000");
      Undly_56.add_attribute("StartVal", "UnderlyingStartValue_t_592864428"); // 2
      Undly_56_set.insert("UnderlyingStartValue_t_592864428");
      Undly_56.add_attribute("CurVal", "UnderlyingCurrentValue_t_603873882"); // 2
      Undly_56_set.insert("UnderlyingCurrentValue_t_603873882");
      Undly_56.add_attribute("EndVal", "UnderlyingEndValue_t_1953099593"); // 2
      Undly_56_set.insert("UnderlyingEndValue_t_1953099593");
      Undly_56.add_attribute("AdjQty", "9922429.790000"); // 2
      Undly_56_set.insert("9922429.790000");
      Undly_56.add_attribute("FxRate", "5565849.340000"); // 2
      Undly_56_set.insert("5565849.340000");
      Undly_56.add_attribute("FxRateCalc", "D"); // 2
      Undly_56_set.insert("D");
      Undly_56.add_attribute("CapValu", "UnderlyingCapValue_t_1967021197"); // 2
      Undly_56_set.insert("UnderlyingCapValue_t_1967021197");
      Undly_56.add_attribute("SetMeth", "UnderlyingSettlMethod_t_72665477"); // 2
      Undly_56_set.insert("UnderlyingSettlMethod_t_72665477");
      Undly_56.add_attribute("PutCall", "219690453"); // 2
      Undly_56_set.insert("219690453");
      all_values.push_back(Undly_56_set);
      all_compo_names.insert("Undly_56_set");

      {
        xml_element UndAID_56{"UndAID"};
        multiset<string> UndAID_56_set;
        UndAID_56.add_attribute("AltID", "UnderlyingSecurityAltID_t_909494441"); // 3
        UndAID_56_set.insert("UnderlyingSecurityAltID_t_909494441");
        UndAID_56.add_attribute("AltIDSrc", "L"); // 3
        UndAID_56_set.insert("L");
        all_values.push_back(UndAID_56_set);
        all_compo_names.insert("UndAID_56_set");

        Undly_56.add_element(UndAID_56);
      }
      {
        xml_element Stip_87{"Stip"};
        multiset<string> Stip_87_set;
        Stip_87.add_attribute("Typ", "SUBSLEFT"); // 3
        Stip_87_set.insert("SUBSLEFT");
        Stip_87.add_attribute("Val", "UnderlyingStipValue_t_1755205958"); // 3
        Stip_87_set.insert("UnderlyingStipValue_t_1755205958");
        all_values.push_back(Stip_87_set);
        all_compo_names.insert("Stip_87_set");

        Undly_56.add_element(Stip_87);
      }
      {
        xml_element Pty_227{"Pty"};
        multiset<string> Pty_227_set;
        Pty_227.add_attribute("ID", "UnderlyingInstrumentPartyID_t_968377063"); // 3
        Pty_227_set.insert("UnderlyingInstrumentPartyID_t_968377063");
        Pty_227.add_attribute("Src", "F"); // 3
        Pty_227_set.insert("F");
        Pty_227.add_attribute("R", "25"); // 3
        Pty_227_set.insert("25");
        all_values.push_back(Pty_227_set);
        all_compo_names.insert("Pty_227_set");

        {
          xml_element Sub_227{"Sub"};
          multiset<string> Sub_227_set;
          Sub_227.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_17418568"); // 4
          Sub_227_set.insert("UnderlyingInstrumentPartySubID_t_17418568");
          Sub_227.add_attribute("Typ", "2"); // 4
          Sub_227_set.insert("2");
          all_values.push_back(Sub_227_set);
          all_compo_names.insert("Sub_227_set");

          Pty_227.add_element(Sub_227);
        }
        Undly_56.add_element(Pty_227);
      }
      Ord_1.add_element(Undly_56);
    }
    {
      xml_element Stip_88{"Stip"};
      multiset<string> Stip_88_set;
      Stip_88.add_attribute("Typ", "SECTYPE"); // 2
      Stip_88_set.insert("SECTYPE");
      Stip_88.add_attribute("Val", "StipulationValue_t_17115559"); // 2
      Stip_88_set.insert("StipulationValue_t_17115559");
      all_values.push_back(Stip_88_set);
      all_compo_names.insert("Stip_88_set");

      Ord_1.add_element(Stip_88);
    }
    {
      xml_element OrdQty_11{"OrdQty"};
      multiset<string> OrdQty_11_set;
      OrdQty_11.add_attribute("Qty", "4448581.210000"); // 2
      OrdQty_11_set.insert("4448581.210000");
      OrdQty_11.add_attribute("Cash", "1075937.260000"); // 2
      OrdQty_11_set.insert("1075937.260000");
      OrdQty_11.add_attribute("Pct", "1164840.150000"); // 2
      OrdQty_11_set.insert("1164840.150000");
      OrdQty_11.add_attribute("RndDir", "0"); // 2
      OrdQty_11_set.insert("0");
      OrdQty_11.add_attribute("RndMod", "8230739.850000"); // 2
      OrdQty_11_set.insert("8230739.850000");
      all_values.push_back(OrdQty_11_set);
      all_compo_names.insert("OrdQty_11_set");

      Ord_1.add_element(OrdQty_11);
    }
    {
      xml_element TrgrInstr_4{"TrgrInstr"};
      multiset<string> TrgrInstr_4_set;
      TrgrInstr_4.add_attribute("TrgrTyp", "3"); // 2
      TrgrInstr_4_set.insert("3");
      TrgrInstr_4.add_attribute("TrgrActn", "2"); // 2
      TrgrInstr_4_set.insert("2");
      TrgrInstr_4.add_attribute("TrgrPx", "17119009.350000"); // 2
      TrgrInstr_4_set.insert("17119009.350000");
      TrgrInstr_4.add_attribute("TrgrSym", "TriggerSymbol_t_656639378"); // 2
      TrgrInstr_4_set.insert("TriggerSymbol_t_656639378");
      TrgrInstr_4.add_attribute("TrgrSecID", "TriggerSecurityID_t_719246476"); // 2
      TrgrInstr_4_set.insert("TriggerSecurityID_t_719246476");
      TrgrInstr_4.add_attribute("TrgrSecIDSrc", "7"); // 2
      TrgrInstr_4_set.insert("7");
      TrgrInstr_4.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_1249503806"); // 2
      TrgrInstr_4_set.insert("TriggerSecurityDesc_t_1249503806");
      TrgrInstr_4.add_attribute("TrgrPxTyp", "5"); // 2
      TrgrInstr_4_set.insert("5");
      TrgrInstr_4.add_attribute("TrgrPxTypScp", "1"); // 2
      TrgrInstr_4_set.insert("1");
      TrgrInstr_4.add_attribute("TrgrPxDir", "D"); // 2
      TrgrInstr_4_set.insert("D");
      TrgrInstr_4.add_attribute("TrgrNewPx", "18797052.920000"); // 2
      TrgrInstr_4_set.insert("18797052.920000");
      TrgrInstr_4.add_attribute("TrgrOrdTyp", "2"); // 2
      TrgrInstr_4_set.insert("2");
      TrgrInstr_4.add_attribute("TrgrNewQty", "20612843.350000"); // 2
      TrgrInstr_4_set.insert("20612843.350000");
      TrgrInstr_4.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1952370769"); // 2
      TrgrInstr_4_set.insert("TriggerTradingSessionID_t_1952370769");
      TrgrInstr_4.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_1044635640"); // 2
      TrgrInstr_4_set.insert("TriggerTradingSessionSubID_t_1044635640");
      all_values.push_back(TrgrInstr_4_set);
      all_compo_names.insert("TrgrInstr_4_set");

      Ord_1.add_element(TrgrInstr_4);
    }
    {
      xml_element SprdBnchmkCurve_18{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_18_set;
      SprdBnchmkCurve_18.add_attribute("Spread", "8232951.280000"); // 2
      SprdBnchmkCurve_18_set.insert("8232951.280000");
      SprdBnchmkCurve_18.add_attribute("Ccy", "CAN"); // 2
      SprdBnchmkCurve_18_set.insert("CAN");
      SprdBnchmkCurve_18.add_attribute("Name", "SWAP"); // 2
      SprdBnchmkCurve_18_set.insert("SWAP");
      SprdBnchmkCurve_18.add_attribute("Point", "BenchmarkCurvePoint_t_1036282013"); // 2
      SprdBnchmkCurve_18_set.insert("BenchmarkCurvePoint_t_1036282013");
      SprdBnchmkCurve_18.add_attribute("Px", "10453484.330000"); // 2
      SprdBnchmkCurve_18_set.insert("10453484.330000");
      SprdBnchmkCurve_18.add_attribute("PxTyp", "16"); // 2
      SprdBnchmkCurve_18_set.insert("16");
      SprdBnchmkCurve_18.add_attribute("SecID", "BenchmarkSecurityID_t_1053700581"); // 2
      SprdBnchmkCurve_18_set.insert("BenchmarkSecurityID_t_1053700581");
      SprdBnchmkCurve_18.add_attribute("SecIDSrc", "7"); // 2
      SprdBnchmkCurve_18_set.insert("7");
      all_values.push_back(SprdBnchmkCurve_18_set);
      all_compo_names.insert("SprdBnchmkCurve_18_set");

      Ord_1.add_element(SprdBnchmkCurve_18);
    }
    {
      xml_element Yield_13{"Yield"};
      multiset<string> Yield_13_set;
      Yield_13.add_attribute("Typ", "MARK"); // 2
      Yield_13_set.insert("MARK");
      Yield_13.add_attribute("Yld", "10708161.410000"); // 2
      Yield_13_set.insert("10708161.410000");
      Yield_13.add_attribute("CalcDt", "YieldCalcDate_t_1304484676"); // 2
      Yield_13_set.insert("YieldCalcDate_t_1304484676");
      Yield_13.add_attribute("RedDt", "YieldRedemptionDate_t_357203420"); // 2
      Yield_13_set.insert("YieldRedemptionDate_t_357203420");
      Yield_13.add_attribute("RedPx", "11873001.560000"); // 2
      Yield_13_set.insert("11873001.560000");
      Yield_13.add_attribute("RedPxTyp", "9"); // 2
      Yield_13_set.insert("9");
      all_values.push_back(Yield_13_set);
      all_compo_names.insert("Yield_13_set");

      Ord_1.add_element(Yield_13);
    }
    {
      xml_element Comm_17{"Comm"};
      multiset<string> Comm_17_set;
      Comm_17.add_attribute("Comm", "Commission_t_1180277405"); // 2
      Comm_17_set.insert("Commission_t_1180277405");
      Comm_17.add_attribute("CommTyp", "5"); // 2
      Comm_17_set.insert("5");
      Comm_17.add_attribute("Ccy", "USD"); // 2
      Comm_17_set.insert("USD");
      Comm_17.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_17_set.insert("N");
      all_values.push_back(Comm_17_set);
      all_compo_names.insert("Comm_17_set");

      Ord_1.add_element(Comm_17);
    }
    {
      xml_element PegInstr_4{"PegInstr"};
      multiset<string> PegInstr_4_set;
      PegInstr_4.add_attribute("OfstVal", "7524064.390000"); // 2
      PegInstr_4_set.insert("7524064.390000");
      PegInstr_4.add_attribute("PegPxTyp", "5"); // 2
      PegInstr_4_set.insert("5");
      PegInstr_4.add_attribute("MoveTyp", "0"); // 2
      PegInstr_4_set.insert("0");
      PegInstr_4.add_attribute("OfstTyp", "1"); // 2
      PegInstr_4_set.insert("1");
      PegInstr_4.add_attribute("LmtTyp", "0"); // 2
      PegInstr_4_set.insert("0");
      PegInstr_4.add_attribute("RndDir", "1"); // 2
      PegInstr_4_set.insert("1");
      PegInstr_4.add_attribute("Scope", "3"); // 2
      PegInstr_4_set.insert("3");
      PegInstr_4.add_attribute("PegSecurityIDSource", "H"); // 2
      PegInstr_4_set.insert("H");
      PegInstr_4.add_attribute("PegSecID", "PegSecurityID_t_196239371"); // 2
      PegInstr_4_set.insert("PegSecurityID_t_196239371");
      PegInstr_4.add_attribute("PgSymbl", "PegSymbol_t_1612635563"); // 2
      PegInstr_4_set.insert("PegSymbol_t_1612635563");
      PegInstr_4.add_attribute("PegSecDesc", "PegSecurityDesc_t_1386740584"); // 2
      PegInstr_4_set.insert("PegSecurityDesc_t_1386740584");
      all_values.push_back(PegInstr_4_set);
      all_compo_names.insert("PegInstr_4_set");

      Ord_1.add_element(PegInstr_4);
    }
    {
      xml_element DiscInstr_4{"DiscInstr"};
      multiset<string> DiscInstr_4_set;
      DiscInstr_4.add_attribute("DsctnInst", "3"); // 2
      DiscInstr_4_set.insert("3");
      DiscInstr_4.add_attribute("OfstValu", "16805405.140000"); // 2
      DiscInstr_4_set.insert("16805405.140000");
      DiscInstr_4.add_attribute("MoveTyp", "1"); // 2
      DiscInstr_4_set.insert("1");
      DiscInstr_4.add_attribute("OfstTyp", "2"); // 2
      DiscInstr_4_set.insert("2");
      DiscInstr_4.add_attribute("LimitTyp", "1"); // 2
      DiscInstr_4_set.insert("1");
      DiscInstr_4.add_attribute("RndDir", "2"); // 2
      DiscInstr_4_set.insert("2");
      DiscInstr_4.add_attribute("Scope", "1"); // 2
      DiscInstr_4_set.insert("1");
      all_values.push_back(DiscInstr_4_set);
      all_compo_names.insert("DiscInstr_4_set");

      Ord_1.add_element(DiscInstr_4);
    }
    {
      xml_element StrtPrmGrp_9{"StrtPrmGrp"};
      multiset<string> StrtPrmGrp_9_set;
      StrtPrmGrp_9.add_attribute("StrtPrmNme", "StrategyParameterName_t_1623039461"); // 2
      StrtPrmGrp_9_set.insert("StrategyParameterName_t_1623039461");
      StrtPrmGrp_9.add_attribute("StrtPrmTyp", "19"); // 2
      StrtPrmGrp_9_set.insert("19");
      StrtPrmGrp_9.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1359517998"); // 2
      StrtPrmGrp_9_set.insert("StrategyParameterValue_t_1359517998");
      all_values.push_back(StrtPrmGrp_9_set);
      all_compo_names.insert("StrtPrmGrp_9_set");

      Ord_1.add_element(StrtPrmGrp_9);
    }
    elt.add_element(Ord_1);
  } // end Ord
  { // Ord
    xml_element Ord_2{"Ord"};
    multiset<string> Ord_2_set;
    Ord_2.add_attribute("ClOrdID", "ClOrdID_t_546371954"); // 1
    Ord_2_set.insert("ClOrdID_t_546371954");
    Ord_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1469420483"); // 1
    Ord_2_set.insert("SecondaryClOrdID_t_1469420483");
    Ord_2.add_attribute("SeqNo", "1716721418"); // 1
    Ord_2_set.insert("1716721418");
    Ord_2.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1733672110"); // 1
    Ord_2_set.insert("ClOrdLinkID_t_1733672110");
    Ord_2.add_attribute("SettlInstMode", "1"); // 1
    Ord_2_set.insert("1");
    Ord_2.add_attribute("OrignDt", "TradeOriginationDate_t_749515175"); // 1
    Ord_2_set.insert("TradeOriginationDate_t_749515175");
    Ord_2.add_attribute("TrdDt", "TradeDate_t_15704472"); // 1
    Ord_2_set.insert("TradeDate_t_15704472");
    Ord_2.add_attribute("Acct", "Account_t_1376712286"); // 1
    Ord_2_set.insert("Account_t_1376712286");
    Ord_2.add_attribute("AcctIDSrc", "99"); // 1
    Ord_2_set.insert("99");
    Ord_2.add_attribute("AcctTyp", "4"); // 1
    Ord_2_set.insert("4");
    Ord_2.add_attribute("DayBkngInst", "2"); // 1
    Ord_2_set.insert("2");
    Ord_2.add_attribute("BkngUnit", "1"); // 1
    Ord_2_set.insert("1");
    Ord_2.add_attribute("AllocID", "AllocID_t_1290035406"); // 1
    Ord_2_set.insert("AllocID_t_1290035406");
    Ord_2.add_attribute("PreallocMeth", "1"); // 1
    Ord_2_set.insert("1");
    Ord_2.add_attribute("SettlTyp", "8"); // 1
    Ord_2_set.insert("8");
    Ord_2.add_attribute("SettlDt", "SettlDate_t_1572474090"); // 1
    Ord_2_set.insert("SettlDate_t_1572474090");
    Ord_2.add_attribute("CshMgn", "2"); // 1
    Ord_2_set.insert("2");
    Ord_2.add_attribute("ClrFeeInd", "4"); // 1
    Ord_2_set.insert("4");
    Ord_2.add_attribute("HandlInst", "3"); // 1
    Ord_2_set.insert("3");
    Ord_2.add_attribute("ExecInst", "f"); // 1
    Ord_2_set.insert("f");
    Ord_2.add_attribute("MinQty", "8208507.570000"); // 1
    Ord_2_set.insert("8208507.570000");
    Ord_2.add_attribute("MtchInc", "6407643.130000"); // 1
    Ord_2_set.insert("6407643.130000");
    Ord_2.add_attribute("MxPxLvls", "715635450"); // 1
    Ord_2_set.insert("715635450");
    Ord_2.add_attribute("MaxFloor", "12282952.250000"); // 1
    Ord_2_set.insert("12282952.250000");
    Ord_2.add_attribute("ExDest", "ExDestination_t_2091316251"); // 1
    Ord_2_set.insert("ExDestination_t_2091316251");
    Ord_2.add_attribute("ExDestIDSrc", "B"); // 1
    Ord_2_set.insert("B");
    Ord_2.add_attribute("ProcCode", "1"); // 1
    Ord_2_set.insert("1");
    Ord_2.add_attribute("PrevClsPx", "10537409.070000"); // 1
    Ord_2_set.insert("10537409.070000");
    Ord_2.add_attribute("Side", "G"); // 1
    Ord_2_set.insert("G");
    Ord_2.add_attribute("SideValuInd", "2"); // 1
    Ord_2_set.insert("2");
    Ord_2.add_attribute("LocReqd", "Y"); // 1
    Ord_2_set.insert("Y");
    Ord_2.add_attribute("TxnTm", "TransactTime_t_1306902097"); // 1
    Ord_2_set.insert("TransactTime_t_1306902097");
    Ord_2.add_attribute("QtyTyp", "0"); // 1
    Ord_2_set.insert("0");
    Ord_2.add_attribute("OrdTyp", "4"); // 1
    Ord_2_set.insert("4");
    Ord_2.add_attribute("PxTyp", "2"); // 1
    Ord_2_set.insert("2");
    Ord_2.add_attribute("Px", "13640294.440000"); // 1
    Ord_2_set.insert("13640294.440000");
    Ord_2.add_attribute("PxPrtScp", "2"); // 1
    Ord_2_set.insert("2");
    Ord_2.add_attribute("StopPx", "9087950.310000"); // 1
    Ord_2_set.insert("9087950.310000");
    Ord_2.add_attribute("Ccy", "CAN"); // 1
    Ord_2_set.insert("CAN");
    Ord_2.add_attribute("ComplianceID", "ComplianceID_t_2010654891"); // 1
    Ord_2_set.insert("ComplianceID_t_2010654891");
    Ord_2.add_attribute("SolFlag", "N"); // 1
    Ord_2_set.insert("N");
    Ord_2.add_attribute("IOIID", "IOIID_t_1653583540"); // 1
    Ord_2_set.insert("IOIID_t_1653583540");
    Ord_2.add_attribute("QID", "QuoteID_t_1153206649"); // 1
    Ord_2_set.insert("QuoteID_t_1153206649");
    Ord_2.add_attribute("RefOrdID", "RefOrderID_t_484571387"); // 1
    Ord_2_set.insert("RefOrderID_t_484571387");
    Ord_2.add_attribute("RefOrdIDSrc", "4"); // 1
    Ord_2_set.insert("4");
    Ord_2.add_attribute("TmInForce", "2"); // 1
    Ord_2_set.insert("2");
    Ord_2.add_attribute("EfctvTm", "EffectiveTime_t_54514408"); // 1
    Ord_2_set.insert("EffectiveTime_t_54514408");
    Ord_2.add_attribute("ExpireDt", "ExpireDate_t_179698942"); // 1
    Ord_2_set.insert("ExpireDate_t_179698942");
    Ord_2.add_attribute("ExpireTm", "ExpireTime_t_199426905"); // 1
    Ord_2_set.insert("ExpireTime_t_199426905");
    Ord_2.add_attribute("GTBkngInst", "0"); // 1
    Ord_2_set.insert("0");
    Ord_2.add_attribute("Cpcty", "G"); // 1
    Ord_2_set.insert("G");
    Ord_2.add_attribute("Rstctions", "E"); // 1
    Ord_2_set.insert("E");
    Ord_2.add_attribute("PrTrdAnon", "false"); // 1
    Ord_2_set.insert("false");
    Ord_2.add_attribute("CustCpcty", "1"); // 1
    Ord_2_set.insert("1");
    Ord_2.add_attribute("ForexReq", "Y"); // 1
    Ord_2_set.insert("Y");
    Ord_2.add_attribute("SettlCcy", "GBP"); // 1
    Ord_2_set.insert("GBP");
    Ord_2.add_attribute("BkngTyp", "0"); // 1
    Ord_2_set.insert("0");
    Ord_2.add_attribute("Txt", "Text_t_1850749268"); // 1
    Ord_2_set.insert("Text_t_1850749268");
    Ord_2.add_attribute("EncTxtLen", "1313506040"); // 1
    Ord_2_set.insert("1313506040");
    Ord_2.add_attribute("EncTxt", "EncodedText_t_2103539986"); // 1
    Ord_2_set.insert("EncodedText_t_2103539986");
    Ord_2.add_attribute("SettlDt2", "SettlDate2_t_1010167717"); // 1
    Ord_2_set.insert("SettlDate2_t_1010167717");
    Ord_2.add_attribute("Qty2", "13339831.610000"); // 1
    Ord_2_set.insert("13339831.610000");
    Ord_2.add_attribute("Px2", "19385530.140000"); // 1
    Ord_2_set.insert("19385530.140000");
    Ord_2.add_attribute("PosEfct", "N"); // 1
    Ord_2_set.insert("N");
    Ord_2.add_attribute("Covered", "1"); // 1
    Ord_2_set.insert("1");
    Ord_2.add_attribute("MaxShow", "3755975.680000"); // 1
    Ord_2_set.insert("3755975.680000");
    Ord_2.add_attribute("TgtStrategy", "3"); // 1
    Ord_2_set.insert("3");
    Ord_2.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1143787040"); // 1
    Ord_2_set.insert("TargetStrategyParameters_t_1143787040");
    Ord_2.add_attribute("ParticipationRt", "3068519.900000"); // 1
    Ord_2_set.insert("3068519.900000");
    Ord_2.add_attribute("Designation", "Designation_t_527740902"); // 1
    Ord_2_set.insert("Designation_t_527740902");
    all_values.push_back(Ord_2_set);
    all_compo_names.insert("Ord_2_set");

    {
      xml_element Pty_228{"Pty"};
      multiset<string> Pty_228_set;
      Pty_228.add_attribute("ID", "PartyID_t_1718680201"); // 2
      Pty_228_set.insert("PartyID_t_1718680201");
      Pty_228.add_attribute("Src", "1"); // 2
      Pty_228_set.insert("1");
      Pty_228.add_attribute("R", "5"); // 2
      Pty_228_set.insert("5");
      all_values.push_back(Pty_228_set);
      all_compo_names.insert("Pty_228_set");

      {
        xml_element Sub_228{"Sub"};
        multiset<string> Sub_228_set;
        Sub_228.add_attribute("ID", "PartySubID_t_55767940"); // 3
        Sub_228_set.insert("PartySubID_t_55767940");
        Sub_228.add_attribute("Typ", "18"); // 3
        Sub_228_set.insert("18");
        all_values.push_back(Sub_228_set);
        all_compo_names.insert("Sub_228_set");

        Pty_228.add_element(Sub_228);
      }
      Ord_2.add_element(Pty_228);
    }
    {
      xml_element PreAll_7{"PreAll"};
      multiset<string> PreAll_7_set;
      PreAll_7.add_attribute("Acct", "AllocAccount_t_111660996"); // 2
      PreAll_7_set.insert("AllocAccount_t_111660996");
      PreAll_7.add_attribute("ActIDSrc", "4"); // 2
      PreAll_7_set.insert("4");
      PreAll_7.add_attribute("AllocSettlCcy", "CHF"); // 2
      PreAll_7_set.insert("CHF");
      PreAll_7.add_attribute("IndAllocID", "IndividualAllocID_t_1347375342"); // 2
      PreAll_7_set.insert("IndividualAllocID_t_1347375342");
      PreAll_7.add_attribute("Qty", "17387892.930000"); // 2
      PreAll_7_set.insert("17387892.930000");
      all_values.push_back(PreAll_7_set);
      all_compo_names.insert("PreAll_7_set");

      {
        xml_element Pty_229{"Pty"};
        multiset<string> Pty_229_set;
        Pty_229.add_attribute("ID", "NestedPartyID_t_1151279120"); // 3
        Pty_229_set.insert("NestedPartyID_t_1151279120");
        Pty_229.add_attribute("Src", "2"); // 3
        Pty_229_set.insert("2");
        Pty_229.add_attribute("R", "21"); // 3
        Pty_229_set.insert("21");
        all_values.push_back(Pty_229_set);
        all_compo_names.insert("Pty_229_set");

        {
          xml_element Sub_229{"Sub"};
          multiset<string> Sub_229_set;
          Sub_229.add_attribute("ID", "NestedPartySubID_t_1935302941"); // 4
          Sub_229_set.insert("NestedPartySubID_t_1935302941");
          Sub_229.add_attribute("Typ", "12"); // 4
          Sub_229_set.insert("12");
          all_values.push_back(Sub_229_set);
          all_compo_names.insert("Sub_229_set");

          Pty_229.add_element(Sub_229);
        }
        PreAll_7.add_element(Pty_229);
      }
      Ord_2.add_element(PreAll_7);
    }
    {
      xml_element DsplyInstr_5{"DsplyInstr"};
      multiset<string> DsplyInstr_5_set;
      DsplyInstr_5.add_attribute("DisplayQty", "2876326.760000"); // 2
      DsplyInstr_5_set.insert("2876326.760000");
      DsplyInstr_5.add_attribute("SecDspQty", "16255840.220000"); // 2
      DsplyInstr_5_set.insert("16255840.220000");
      DsplyInstr_5.add_attribute("DspWhn", "2"); // 2
      DsplyInstr_5_set.insert("2");
      DsplyInstr_5.add_attribute("DspMthd", "1"); // 2
      DsplyInstr_5_set.insert("1");
      DsplyInstr_5.add_attribute("DsplLwQty", "15816403.610000"); // 2
      DsplyInstr_5_set.insert("15816403.610000");
      DsplyInstr_5.add_attribute("DisplayHighQty", "8087889.530000"); // 2
      DsplyInstr_5_set.insert("8087889.530000");
      DsplyInstr_5.add_attribute("DspMinIncr", "7876382.290000"); // 2
      DsplyInstr_5_set.insert("7876382.290000");
      DsplyInstr_5.add_attribute("RfrshQty", "13727097.270000"); // 2
      DsplyInstr_5_set.insert("13727097.270000");
      all_values.push_back(DsplyInstr_5_set);
      all_compo_names.insert("DsplyInstr_5_set");

      Ord_2.add_element(DsplyInstr_5);
    }
    {
      xml_element TrdSes_9{"TrdSes"};
      multiset<string> TrdSes_9_set;
      TrdSes_9.add_attribute("SesID", "2"); // 2
      TrdSes_9_set.insert("2");
      TrdSes_9.add_attribute("SesSub", "7"); // 2
      TrdSes_9_set.insert("7");
      all_values.push_back(TrdSes_9_set);
      all_compo_names.insert("TrdSes_9_set");

      Ord_2.add_element(TrdSes_9);
    }
    {
      xml_element Instrmt_42{"Instrmt"};
      multiset<string> Instrmt_42_set;
      Instrmt_42.add_attribute("Sym", "Symbol_t_1748307295"); // 2
      Instrmt_42_set.insert("Symbol_t_1748307295");
      Instrmt_42.add_attribute("Sfx", "WI"); // 2
      Instrmt_42_set.insert("WI");
      Instrmt_42.add_attribute("ID", "SecurityID_t_334470579"); // 2
      Instrmt_42_set.insert("SecurityID_t_334470579");
      Instrmt_42.add_attribute("Src", "4"); // 2
      Instrmt_42_set.insert("4");
      Instrmt_42.add_attribute("Prod", "8"); // 2
      Instrmt_42_set.insert("8");
      Instrmt_42.add_attribute("ProdCmplx", "ProductComplex_t_2053150780"); // 2
      Instrmt_42_set.insert("ProductComplex_t_2053150780");
      Instrmt_42.add_attribute("SecGrp", "SecurityGroup_t_1868111168"); // 2
      Instrmt_42_set.insert("SecurityGroup_t_1868111168");
      Instrmt_42.add_attribute("CFI", "CFICode_t_1290338047"); // 2
      Instrmt_42_set.insert("CFICode_t_1290338047");
      Instrmt_42.add_attribute("SecTyp", "SECPLEDGE"); // 2
      Instrmt_42_set.insert("SECPLEDGE");
      Instrmt_42.add_attribute("SubTyp", "SecuritySubType_t_279168171"); // 2
      Instrmt_42_set.insert("SecuritySubType_t_279168171");
      Instrmt_42.add_attribute("MMY", "1401999043"); // 2
      Instrmt_42_set.insert("1401999043");
      Instrmt_42.add_attribute("MatDt", "MaturityDate_t_71717421"); // 2
      Instrmt_42_set.insert("MaturityDate_t_71717421");
      Instrmt_42.add_attribute("MatTm", "1017407765"); // 2
      Instrmt_42_set.insert("1017407765");
      Instrmt_42.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1713086945"); // 2
      Instrmt_42_set.insert("SettleOnOpenFlag_t_1713086945");
      Instrmt_42.add_attribute("AsgnMeth", "1419092763"); // 2
      Instrmt_42_set.insert("1419092763");
      Instrmt_42.add_attribute("Status", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("CpnPmt", "CouponPaymentDate_t_716882417"); // 2
      Instrmt_42_set.insert("CouponPaymentDate_t_716882417");
      Instrmt_42.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_42_set.insert("MR");
      Instrmt_42.add_attribute("Snrty", "SB"); // 2
      Instrmt_42_set.insert("SB");
      Instrmt_42.add_attribute("NotlPctOut", "5047017.100000"); // 2
      Instrmt_42_set.insert("5047017.100000");
      Instrmt_42.add_attribute("OrigNotlPctOut", "5195848.680000"); // 2
      Instrmt_42_set.insert("5195848.680000");
      Instrmt_42.add_attribute("AttchPnt", "5690130.070000"); // 2
      Instrmt_42_set.insert("5690130.070000");
      Instrmt_42.add_attribute("DetchPnt", "21302857.330000"); // 2
      Instrmt_42_set.insert("21302857.330000");
      Instrmt_42.add_attribute("Issued", "IssueDate_t_318206103"); // 2
      Instrmt_42_set.insert("IssueDate_t_318206103");
      Instrmt_42.add_attribute("RepoCollSecTyp", "22668075"); // 2
      Instrmt_42_set.insert("22668075");
      Instrmt_42.add_attribute("RepoTrm", "1564442446"); // 2
      Instrmt_42_set.insert("1564442446");
      Instrmt_42.add_attribute("RepoRt", "11269950.560000"); // 2
      Instrmt_42_set.insert("11269950.560000");
      Instrmt_42.add_attribute("Fctr", "8103063.040000"); // 2
      Instrmt_42_set.insert("8103063.040000");
      Instrmt_42.add_attribute("CrdRtg", "CreditRating_t_789668525"); // 2
      Instrmt_42_set.insert("CreditRating_t_789668525");
      Instrmt_42.add_attribute("Rgstry", "InstrRegistry_t_1691558638"); // 2
      Instrmt_42_set.insert("InstrRegistry_t_1691558638");
      Instrmt_42.add_attribute("IssuCtry", "989843"); // 2
      Instrmt_42_set.insert("989843");
      Instrmt_42.add_attribute("StPrv", "StateOrProvinceOfIssue_t_390492172"); // 2
      Instrmt_42_set.insert("StateOrProvinceOfIssue_t_390492172");
      Instrmt_42.add_attribute("Lcl", "LocaleOfIssue_t_773208231"); // 2
      Instrmt_42_set.insert("LocaleOfIssue_t_773208231");
      Instrmt_42.add_attribute("Redeem", "RedemptionDate_t_335460422"); // 2
      Instrmt_42_set.insert("RedemptionDate_t_335460422");
      Instrmt_42.add_attribute("StrkPx", "2981678.100000"); // 2
      Instrmt_42_set.insert("2981678.100000");
      Instrmt_42.add_attribute("StrkCcy", "JPY"); // 2
      Instrmt_42_set.insert("JPY");
      Instrmt_42.add_attribute("StrkMult", "187953.300000"); // 2
      Instrmt_42_set.insert("187953.300000");
      Instrmt_42.add_attribute("StrkValu", "16729367.740000"); // 2
      Instrmt_42_set.insert("16729367.740000");
      Instrmt_42.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_42_set.insert("3");
      Instrmt_42.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_42_set.insert("2");
      Instrmt_42.add_attribute("StrkPxBndryPrcsn", "9274521.690000"); // 2
      Instrmt_42_set.insert("9274521.690000");
      Instrmt_42.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("OptAt", "1315371266"); // 2
      Instrmt_42_set.insert("1315371266");
      Instrmt_42.add_attribute("Mult", "4930554.660000"); // 2
      Instrmt_42_set.insert("4930554.660000");
      Instrmt_42.add_attribute("MultTyp", "2"); // 2
      Instrmt_42_set.insert("2");
      Instrmt_42.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("MinPxIncr", "12099378.830000"); // 2
      Instrmt_42_set.insert("12099378.830000");
      Instrmt_42.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2117602064"); // 2
      Instrmt_42_set.insert("MinPriceIncrementAmount_t_2117602064");
      Instrmt_42.add_attribute("UOM", "oz_tr"); // 2
      Instrmt_42_set.insert("oz_tr");
      Instrmt_42.add_attribute("UOMQty", "17146395.940000"); // 2
      Instrmt_42_set.insert("17146395.940000");
      Instrmt_42.add_attribute("PxUOM", "tn"); // 2
      Instrmt_42_set.insert("tn");
      Instrmt_42.add_attribute("PxUOMQty", "6269943.670000"); // 2
      Instrmt_42_set.insert("6269943.670000");
      Instrmt_42.add_attribute("SettlMeth", "P"); // 2
      Instrmt_42_set.insert("P");
      Instrmt_42.add_attribute("ExerStyle", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_42_set.insert("3");
      Instrmt_42.add_attribute("OptPayAmt", "OptPayoutAmount_t_1114400477"); // 2
      Instrmt_42_set.insert("OptPayoutAmount_t_1114400477");
      Instrmt_42.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_42_set.insert("STD");
      Instrmt_42.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_42_set.insert("FUTDA");
      Instrmt_42.add_attribute("ListMeth", "0"); // 2
      Instrmt_42_set.insert("0");
      Instrmt_42.add_attribute("CapPx", "14789794.340000"); // 2
      Instrmt_42_set.insert("14789794.340000");
      Instrmt_42.add_attribute("FlrPx", "14609585.900000"); // 2
      Instrmt_42_set.insert("14609585.900000");
      Instrmt_42.add_attribute("PutCall", "0"); // 2
      Instrmt_42_set.insert("0");
      Instrmt_42.add_attribute("FlexInd", "false"); // 2
      Instrmt_42_set.insert("false");
      Instrmt_42.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_42_set.insert("true");
      Instrmt_42.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_42_set.insert("Wk");
      Instrmt_42.add_attribute("CpnRt", "4873027.440000"); // 2
      Instrmt_42_set.insert("4873027.440000");
      Instrmt_42.add_attribute("Exch", "SecurityExchange_t_2037546566"); // 2
      Instrmt_42_set.insert("SecurityExchange_t_2037546566");
      Instrmt_42.add_attribute("PosLmt", "464040666"); // 2
      Instrmt_42_set.insert("464040666");
      Instrmt_42.add_attribute("NTPosLmt", "12755870"); // 2
      Instrmt_42_set.insert("12755870");
      Instrmt_42.add_attribute("Issr", "Issuer_t_92625545"); // 2
      Instrmt_42_set.insert("Issuer_t_92625545");
      Instrmt_42.add_attribute("EncIssrLen", "762004168"); // 2
      Instrmt_42_set.insert("762004168");
      Instrmt_42.add_attribute("EncIssr", "EncodedIssuer_t_940208039"); // 2
      Instrmt_42_set.insert("EncodedIssuer_t_940208039");
      Instrmt_42.add_attribute("Desc", "SecurityDesc_t_366905593"); // 2
      Instrmt_42_set.insert("SecurityDesc_t_366905593");
      Instrmt_42.add_attribute("EncSecDescLen", "2077375434"); // 2
      Instrmt_42_set.insert("2077375434");
      Instrmt_42.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1433263506"); // 2
      Instrmt_42_set.insert("EncodedSecurityDesc_t_1433263506");
      Instrmt_42.add_attribute("Pool", "Pool_t_2060278404"); // 2
      Instrmt_42_set.insert("Pool_t_2060278404");
      Instrmt_42.add_attribute("CSetMo", "1853976463"); // 2
      Instrmt_42_set.insert("1853976463");
      Instrmt_42.add_attribute("CPPgm", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("CPRegT", "CPRegType_t_2030396821"); // 2
      Instrmt_42_set.insert("CPRegType_t_2030396821");
      Instrmt_42.add_attribute("Dated", "DatedDate_t_1911957823"); // 2
      Instrmt_42_set.insert("DatedDate_t_1911957823");
      Instrmt_42.add_attribute("IntAcrl", "InterestAccrualDate_t_62873687"); // 2
      Instrmt_42_set.insert("InterestAccrualDate_t_62873687");
      all_values.push_back(Instrmt_42_set);
      all_compo_names.insert("Instrmt_42_set");

      {
        xml_element AID_45{"AID"};
        multiset<string> AID_45_set;
        AID_45.add_attribute("AltID", "SecurityAltID_t_372616457"); // 3
        AID_45_set.insert("SecurityAltID_t_372616457");
        AID_45.add_attribute("AltIDSrc", "F"); // 3
        AID_45_set.insert("F");
        all_values.push_back(AID_45_set);
        all_compo_names.insert("AID_45_set");

        Instrmt_42.add_element(AID_45);
      }
      {
        xml_element SecXML_45{"SecXML"};
        multiset<string> SecXML_45_set;
        SecXML_45.add_attribute("Schema", "SecurityXMLSchema_t_1760315366"); // 3
        SecXML_45_set.insert("SecurityXMLSchema_t_1760315366");
        all_values.push_back(SecXML_45_set);
        all_compo_names.insert("SecXML_45_set");

        Instrmt_42.add_element(SecXML_45);
      }
      {
        xml_element Evnt_45{"Evnt"};
        multiset<string> Evnt_45_set;
        Evnt_45.add_attribute("EventTyp", "5"); // 3
        Evnt_45_set.insert("5");
        Evnt_45.add_attribute("Dt", "EventDate_t_1041130985"); // 3
        Evnt_45_set.insert("EventDate_t_1041130985");
        Evnt_45.add_attribute("Tm", "EventTime_t_727232195"); // 3
        Evnt_45_set.insert("EventTime_t_727232195");
        Evnt_45.add_attribute("Px", "9679466.420000"); // 3
        Evnt_45_set.insert("9679466.420000");
        Evnt_45.add_attribute("Txt", "EventText_t_353616085"); // 3
        Evnt_45_set.insert("EventText_t_353616085");
        all_values.push_back(Evnt_45_set);
        all_compo_names.insert("Evnt_45_set");

        Instrmt_42.add_element(Evnt_45);
      }
      {
        xml_element Pty_230{"Pty"};
        multiset<string> Pty_230_set;
        Pty_230.add_attribute("ID", "InstrumentPartyID_t_483817549"); // 3
        Pty_230_set.insert("InstrumentPartyID_t_483817549");
        Pty_230.add_attribute("Src", "9"); // 3
        Pty_230_set.insert("9");
        Pty_230.add_attribute("R", "42"); // 3
        Pty_230_set.insert("42");
        all_values.push_back(Pty_230_set);
        all_compo_names.insert("Pty_230_set");

        {
          xml_element Sub_230{"Sub"};
          multiset<string> Sub_230_set;
          Sub_230.add_attribute("ID", "InstrumentPartySubID_t_630895076"); // 4
          Sub_230_set.insert("InstrumentPartySubID_t_630895076");
          Sub_230.add_attribute("Typ", "1"); // 4
          Sub_230_set.insert("1");
          all_values.push_back(Sub_230_set);
          all_compo_names.insert("Sub_230_set");

          Pty_230.add_element(Sub_230);
        }
        Instrmt_42.add_element(Pty_230);
      }
      {
        xml_element CmplxEvnt_42{"CmplxEvnt"};
        multiset<string> CmplxEvnt_42_set;
        CmplxEvnt_42.add_attribute("Typ", "7"); // 3
        CmplxEvnt_42_set.insert("7");
        CmplxEvnt_42.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1076140412"); // 3
        CmplxEvnt_42_set.insert("ComplexOptPayoutAmount_t_1076140412");
        CmplxEvnt_42.add_attribute("Px", "8914491.900000"); // 3
        CmplxEvnt_42_set.insert("8914491.900000");
        CmplxEvnt_42.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_42_set.insert("4");
        CmplxEvnt_42.add_attribute("PxBndryPrcsn", "15401810.790000"); // 3
        CmplxEvnt_42_set.insert("15401810.790000");
        CmplxEvnt_42.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_42_set.insert("3");
        CmplxEvnt_42.add_attribute("Cond", "2"); // 3
        CmplxEvnt_42_set.insert("2");
        all_values.push_back(CmplxEvnt_42_set);
        all_compo_names.insert("CmplxEvnt_42_set");

        {
          xml_element EvntDts_42{"EvntDts"};
          multiset<string> EvntDts_42_set;
          EvntDts_42.add_attribute("StartDt", "ComplexEventStartDate_t_154701599"); // 4
          EvntDts_42_set.insert("ComplexEventStartDate_t_154701599");
          EvntDts_42.add_attribute("EndDt", "ComplexEventEndDate_t_1844413099"); // 4
          EvntDts_42_set.insert("ComplexEventEndDate_t_1844413099");
          all_values.push_back(EvntDts_42_set);
          all_compo_names.insert("EvntDts_42_set");

          {
            xml_element EvntTms_42{"EvntTms"};
            multiset<string> EvntTms_42_set;
            EvntTms_42.add_attribute("StartTm", "1813104096"); // 5
            EvntTms_42_set.insert("1813104096");
            EvntTms_42.add_attribute("EndTm", "84593385"); // 5
            EvntTms_42_set.insert("84593385");
            all_values.push_back(EvntTms_42_set);
            all_compo_names.insert("EvntTms_42_set");

            EvntDts_42.add_element(EvntTms_42);
          }
          CmplxEvnt_42.add_element(EvntDts_42);
        }
        Instrmt_42.add_element(CmplxEvnt_42);
      }
      Ord_2.add_element(Instrmt_42);
    }
    {
      xml_element Undly_57{"Undly"};
      multiset<string> Undly_57_set;
      Undly_57.add_attribute("Sym", "UnderlyingSymbol_t_1130192957"); // 2
      Undly_57_set.insert("UnderlyingSymbol_t_1130192957");
      Undly_57.add_attribute("Sfx", "WI"); // 2
      Undly_57_set.insert("WI");
      Undly_57.add_attribute("ID", "UnderlyingSecurityID_t_1938569848"); // 2
      Undly_57_set.insert("UnderlyingSecurityID_t_1938569848");
      Undly_57.add_attribute("Src", "I"); // 2
      Undly_57_set.insert("I");
      Undly_57.add_attribute("Prod", "12"); // 2
      Undly_57_set.insert("12");
      Undly_57.add_attribute("CFI", "UnderlyingCFICode_t_1703044023"); // 2
      Undly_57_set.insert("UnderlyingCFICode_t_1703044023");
      Undly_57.add_attribute("SecTyp", "CD"); // 2
      Undly_57_set.insert("CD");
      Undly_57.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1981428483"); // 2
      Undly_57_set.insert("UnderlyingSecuritySubType_t_1981428483");
      Undly_57.add_attribute("MMY", "2094512566"); // 2
      Undly_57_set.insert("2094512566");
      Undly_57.add_attribute("Mat", "UnderlyingMaturityDate_t_1301616105"); // 2
      Undly_57_set.insert("UnderlyingMaturityDate_t_1301616105");
      Undly_57.add_attribute("MatTm", "1014470681"); // 2
      Undly_57_set.insert("1014470681");
      Undly_57.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_988159903"); // 2
      Undly_57_set.insert("UnderlyingCouponPaymentDate_t_988159903");
      Undly_57.add_attribute("RestrctTyp", "FR"); // 2
      Undly_57_set.insert("FR");
      Undly_57.add_attribute("Snrty", "SR"); // 2
      Undly_57_set.insert("SR");
      Undly_57.add_attribute("NotlPctOut", "13417759.880000"); // 2
      Undly_57_set.insert("13417759.880000");
      Undly_57.add_attribute("OrigNotlPctOut", "3651822.020000"); // 2
      Undly_57_set.insert("3651822.020000");
      Undly_57.add_attribute("AttchPnt", "1343761.030000"); // 2
      Undly_57_set.insert("1343761.030000");
      Undly_57.add_attribute("DetchPnt", "10088670.160000"); // 2
      Undly_57_set.insert("10088670.160000");
      Undly_57.add_attribute("Issued", "UnderlyingIssueDate_t_996077278"); // 2
      Undly_57_set.insert("UnderlyingIssueDate_t_996077278");
      Undly_57.add_attribute("RepoCollSecTyp", "538522549"); // 2
      Undly_57_set.insert("538522549");
      Undly_57.add_attribute("RepoTrm", "324893408"); // 2
      Undly_57_set.insert("324893408");
      Undly_57.add_attribute("RepoRt", "20722176.900000"); // 2
      Undly_57_set.insert("20722176.900000");
      Undly_57.add_attribute("Fctr", "14299717.390000"); // 2
      Undly_57_set.insert("14299717.390000");
      Undly_57.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1678466366"); // 2
      Undly_57_set.insert("UnderlyingCreditRating_t_1678466366");
      Undly_57.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1464915121"); // 2
      Undly_57_set.insert("UnderlyingInstrRegistry_t_1464915121");
      Undly_57.add_attribute("Ctry", "186693151"); // 2
      Undly_57_set.insert("186693151");
      Undly_57.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_977181222"); // 2
      Undly_57_set.insert("UnderlyingStateOrProvinceOfIssue_t_977181222");
      Undly_57.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1619616720"); // 2
      Undly_57_set.insert("UnderlyingLocaleOfIssue_t_1619616720");
      Undly_57.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2031106251"); // 2
      Undly_57_set.insert("UnderlyingRedemptionDate_t_2031106251");
      Undly_57.add_attribute("StrkPx", "6428016.700000"); // 2
      Undly_57_set.insert("6428016.700000");
      Undly_57.add_attribute("StrkCcy", "USD"); // 2
      Undly_57_set.insert("USD");
      Undly_57.add_attribute("OptA", "221216875"); // 2
      Undly_57_set.insert("221216875");
      Undly_57.add_attribute("Mult", "14952963.060000"); // 2
      Undly_57_set.insert("14952963.060000");
      Undly_57.add_attribute("MultTyp", "1"); // 2
      Undly_57_set.insert("1");
      Undly_57.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_57_set.insert("1");
      Undly_57.add_attribute("UOM", "tn"); // 2
      Undly_57_set.insert("tn");
      Undly_57.add_attribute("UOMQty", "335433.500000"); // 2
      Undly_57_set.insert("335433.500000");
      Undly_57.add_attribute("PxUOM", "Bcf"); // 2
      Undly_57_set.insert("Bcf");
      Undly_57.add_attribute("PxUOMQty", "9978856.000000"); // 2
      Undly_57_set.insert("9978856.000000");
      Undly_57.add_attribute("TmUnit", "S"); // 2
      Undly_57_set.insert("S");
      Undly_57.add_attribute("ExerStyle", "1"); // 2
      Undly_57_set.insert("1");
      Undly_57.add_attribute("CpnRt", "19860455.030000"); // 2
      Undly_57_set.insert("19860455.030000");
      Undly_57.add_attribute("Exch", "UnderlyingSecurityExchange_t_1216524107"); // 2
      Undly_57_set.insert("UnderlyingSecurityExchange_t_1216524107");
      Undly_57.add_attribute("Issr", "UnderlyingIssuer_t_365894445"); // 2
      Undly_57_set.insert("UnderlyingIssuer_t_365894445");
      Undly_57.add_attribute("EncUndIssrLen", "1180337844"); // 2
      Undly_57_set.insert("1180337844");
      Undly_57.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1581706309"); // 2
      Undly_57_set.insert("EncodedUnderlyingIssuer_t_1581706309");
      Undly_57.add_attribute("Desc", "UnderlyingSecurityDesc_t_500270548"); // 2
      Undly_57_set.insert("UnderlyingSecurityDesc_t_500270548");
      Undly_57.add_attribute("EncUndSecDescLen", "41721212"); // 2
      Undly_57_set.insert("41721212");
      Undly_57.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_430299939"); // 2
      Undly_57_set.insert("EncodedUnderlyingSecurityDesc_t_430299939");
      Undly_57.add_attribute("CPPgm", "UnderlyingCPProgram_t_1038793098"); // 2
      Undly_57_set.insert("UnderlyingCPProgram_t_1038793098");
      Undly_57.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_366614620"); // 2
      Undly_57_set.insert("UnderlyingCPRegType_t_366614620");
      Undly_57.add_attribute("AllocPct", "3550339.820000"); // 2
      Undly_57_set.insert("3550339.820000");
      Undly_57.add_attribute("Ccy", "USD"); // 2
      Undly_57_set.insert("USD");
      Undly_57.add_attribute("Qty", "18199491.030000"); // 2
      Undly_57_set.insert("18199491.030000");
      Undly_57.add_attribute("SettlTyp", "4"); // 2
      Undly_57_set.insert("4");
      Undly_57.add_attribute("CashAmt", "UnderlyingCashAmount_t_874778560"); // 2
      Undly_57_set.insert("UnderlyingCashAmount_t_874778560");
      Undly_57.add_attribute("CashTyp", "FIXED"); // 2
      Undly_57_set.insert("FIXED");
      Undly_57.add_attribute("Px", "3915969.440000"); // 2
      Undly_57_set.insert("3915969.440000");
      Undly_57.add_attribute("DirtPx", "15175802.310000"); // 2
      Undly_57_set.insert("15175802.310000");
      Undly_57.add_attribute("EndPx", "8488086.340000"); // 2
      Undly_57_set.insert("8488086.340000");
      Undly_57.add_attribute("StartVal", "UnderlyingStartValue_t_1405412504"); // 2
      Undly_57_set.insert("UnderlyingStartValue_t_1405412504");
      Undly_57.add_attribute("CurVal", "UnderlyingCurrentValue_t_1738797106"); // 2
      Undly_57_set.insert("UnderlyingCurrentValue_t_1738797106");
      Undly_57.add_attribute("EndVal", "UnderlyingEndValue_t_196621292"); // 2
      Undly_57_set.insert("UnderlyingEndValue_t_196621292");
      Undly_57.add_attribute("AdjQty", "18976551.160000"); // 2
      Undly_57_set.insert("18976551.160000");
      Undly_57.add_attribute("FxRate", "14213423.600000"); // 2
      Undly_57_set.insert("14213423.600000");
      Undly_57.add_attribute("FxRateCalc", "M"); // 2
      Undly_57_set.insert("M");
      Undly_57.add_attribute("CapValu", "UnderlyingCapValue_t_1931198466"); // 2
      Undly_57_set.insert("UnderlyingCapValue_t_1931198466");
      Undly_57.add_attribute("SetMeth", "UnderlyingSettlMethod_t_937832449"); // 2
      Undly_57_set.insert("UnderlyingSettlMethod_t_937832449");
      Undly_57.add_attribute("PutCall", "97879926"); // 2
      Undly_57_set.insert("97879926");
      all_values.push_back(Undly_57_set);
      all_compo_names.insert("Undly_57_set");

      {
        xml_element UndAID_57{"UndAID"};
        multiset<string> UndAID_57_set;
        UndAID_57.add_attribute("AltID", "UnderlyingSecurityAltID_t_1118874273"); // 3
        UndAID_57_set.insert("UnderlyingSecurityAltID_t_1118874273");
        UndAID_57.add_attribute("AltIDSrc", "4"); // 3
        UndAID_57_set.insert("4");
        all_values.push_back(UndAID_57_set);
        all_compo_names.insert("UndAID_57_set");

        Undly_57.add_element(UndAID_57);
      }
      {
        xml_element Stip_89{"Stip"};
        multiset<string> Stip_89_set;
        Stip_89.add_attribute("Typ", "INTERNALPX"); // 3
        Stip_89_set.insert("INTERNALPX");
        Stip_89.add_attribute("Val", "UnderlyingStipValue_t_187914732"); // 3
        Stip_89_set.insert("UnderlyingStipValue_t_187914732");
        all_values.push_back(Stip_89_set);
        all_compo_names.insert("Stip_89_set");

        Undly_57.add_element(Stip_89);
      }
      {
        xml_element Pty_231{"Pty"};
        multiset<string> Pty_231_set;
        Pty_231.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1834687664"); // 3
        Pty_231_set.insert("UnderlyingInstrumentPartyID_t_1834687664");
        Pty_231.add_attribute("Src", "B"); // 3
        Pty_231_set.insert("B");
        Pty_231.add_attribute("R", "22"); // 3
        Pty_231_set.insert("22");
        all_values.push_back(Pty_231_set);
        all_compo_names.insert("Pty_231_set");

        {
          xml_element Sub_231{"Sub"};
          multiset<string> Sub_231_set;
          Sub_231.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_187474564"); // 4
          Sub_231_set.insert("UnderlyingInstrumentPartySubID_t_187474564");
          Sub_231.add_attribute("Typ", "1"); // 4
          Sub_231_set.insert("1");
          all_values.push_back(Sub_231_set);
          all_compo_names.insert("Sub_231_set");

          Pty_231.add_element(Sub_231);
        }
        Undly_57.add_element(Pty_231);
      }
      Ord_2.add_element(Undly_57);
    }
    {
      xml_element Stip_90{"Stip"};
      multiset<string> Stip_90_set;
      Stip_90.add_attribute("Typ", "TRDVAR"); // 2
      Stip_90_set.insert("TRDVAR");
      Stip_90.add_attribute("Val", "StipulationValue_t_1226267662"); // 2
      Stip_90_set.insert("StipulationValue_t_1226267662");
      all_values.push_back(Stip_90_set);
      all_compo_names.insert("Stip_90_set");

      Ord_2.add_element(Stip_90);
    }
    {
      xml_element OrdQty_12{"OrdQty"};
      multiset<string> OrdQty_12_set;
      OrdQty_12.add_attribute("Qty", "15251154.580000"); // 2
      OrdQty_12_set.insert("15251154.580000");
      OrdQty_12.add_attribute("Cash", "4074713.150000"); // 2
      OrdQty_12_set.insert("4074713.150000");
      OrdQty_12.add_attribute("Pct", "15475488.520000"); // 2
      OrdQty_12_set.insert("15475488.520000");
      OrdQty_12.add_attribute("RndDir", "2"); // 2
      OrdQty_12_set.insert("2");
      OrdQty_12.add_attribute("RndMod", "799367.710000"); // 2
      OrdQty_12_set.insert("799367.710000");
      all_values.push_back(OrdQty_12_set);
      all_compo_names.insert("OrdQty_12_set");

      Ord_2.add_element(OrdQty_12);
    }
    {
      xml_element TrgrInstr_5{"TrgrInstr"};
      multiset<string> TrgrInstr_5_set;
      TrgrInstr_5.add_attribute("TrgrTyp", "2"); // 2
      TrgrInstr_5_set.insert("2");
      TrgrInstr_5.add_attribute("TrgrActn", "3"); // 2
      TrgrInstr_5_set.insert("3");
      TrgrInstr_5.add_attribute("TrgrPx", "13720189.470000"); // 2
      TrgrInstr_5_set.insert("13720189.470000");
      TrgrInstr_5.add_attribute("TrgrSym", "TriggerSymbol_t_299636489"); // 2
      TrgrInstr_5_set.insert("TriggerSymbol_t_299636489");
      TrgrInstr_5.add_attribute("TrgrSecID", "TriggerSecurityID_t_1667587940"); // 2
      TrgrInstr_5_set.insert("TriggerSecurityID_t_1667587940");
      TrgrInstr_5.add_attribute("TrgrSecIDSrc", "4"); // 2
      TrgrInstr_5_set.insert("4");
      TrgrInstr_5.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_1705048993"); // 2
      TrgrInstr_5_set.insert("TriggerSecurityDesc_t_1705048993");
      TrgrInstr_5.add_attribute("TrgrPxTyp", "5"); // 2
      TrgrInstr_5_set.insert("5");
      TrgrInstr_5.add_attribute("TrgrPxTypScp", "1"); // 2
      TrgrInstr_5_set.insert("1");
      TrgrInstr_5.add_attribute("TrgrPxDir", "D"); // 2
      TrgrInstr_5_set.insert("D");
      TrgrInstr_5.add_attribute("TrgrNewPx", "5327601.100000"); // 2
      TrgrInstr_5_set.insert("5327601.100000");
      TrgrInstr_5.add_attribute("TrgrOrdTyp", "1"); // 2
      TrgrInstr_5_set.insert("1");
      TrgrInstr_5.add_attribute("TrgrNewQty", "12389352.790000"); // 2
      TrgrInstr_5_set.insert("12389352.790000");
      TrgrInstr_5.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1470592559"); // 2
      TrgrInstr_5_set.insert("TriggerTradingSessionID_t_1470592559");
      TrgrInstr_5.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_1615323126"); // 2
      TrgrInstr_5_set.insert("TriggerTradingSessionSubID_t_1615323126");
      all_values.push_back(TrgrInstr_5_set);
      all_compo_names.insert("TrgrInstr_5_set");

      Ord_2.add_element(TrgrInstr_5);
    }
    {
      xml_element SprdBnchmkCurve_19{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_19_set;
      SprdBnchmkCurve_19.add_attribute("Spread", "2103259.040000"); // 2
      SprdBnchmkCurve_19_set.insert("2103259.040000");
      SprdBnchmkCurve_19.add_attribute("Ccy", "JPY"); // 2
      SprdBnchmkCurve_19_set.insert("JPY");
      SprdBnchmkCurve_19.add_attribute("Name", "SONIA"); // 2
      SprdBnchmkCurve_19_set.insert("SONIA");
      SprdBnchmkCurve_19.add_attribute("Point", "BenchmarkCurvePoint_t_479106146"); // 2
      SprdBnchmkCurve_19_set.insert("BenchmarkCurvePoint_t_479106146");
      SprdBnchmkCurve_19.add_attribute("Px", "5210608.860000"); // 2
      SprdBnchmkCurve_19_set.insert("5210608.860000");
      SprdBnchmkCurve_19.add_attribute("PxTyp", "17"); // 2
      SprdBnchmkCurve_19_set.insert("17");
      SprdBnchmkCurve_19.add_attribute("SecID", "BenchmarkSecurityID_t_666580711"); // 2
      SprdBnchmkCurve_19_set.insert("BenchmarkSecurityID_t_666580711");
      SprdBnchmkCurve_19.add_attribute("SecIDSrc", "H"); // 2
      SprdBnchmkCurve_19_set.insert("H");
      all_values.push_back(SprdBnchmkCurve_19_set);
      all_compo_names.insert("SprdBnchmkCurve_19_set");

      Ord_2.add_element(SprdBnchmkCurve_19);
    }
    {
      xml_element Yield_14{"Yield"};
      multiset<string> Yield_14_set;
      Yield_14.add_attribute("Typ", "INFLATION"); // 2
      Yield_14_set.insert("INFLATION");
      Yield_14.add_attribute("Yld", "18928483.730000"); // 2
      Yield_14_set.insert("18928483.730000");
      Yield_14.add_attribute("CalcDt", "YieldCalcDate_t_1057193534"); // 2
      Yield_14_set.insert("YieldCalcDate_t_1057193534");
      Yield_14.add_attribute("RedDt", "YieldRedemptionDate_t_480286680"); // 2
      Yield_14_set.insert("YieldRedemptionDate_t_480286680");
      Yield_14.add_attribute("RedPx", "12929135.770000"); // 2
      Yield_14_set.insert("12929135.770000");
      Yield_14.add_attribute("RedPxTyp", "17"); // 2
      Yield_14_set.insert("17");
      all_values.push_back(Yield_14_set);
      all_compo_names.insert("Yield_14_set");

      Ord_2.add_element(Yield_14);
    }
    {
      xml_element Comm_18{"Comm"};
      multiset<string> Comm_18_set;
      Comm_18.add_attribute("Comm", "Commission_t_560223451"); // 2
      Comm_18_set.insert("Commission_t_560223451");
      Comm_18.add_attribute("CommTyp", "5"); // 2
      Comm_18_set.insert("5");
      Comm_18.add_attribute("Ccy", "JPY"); // 2
      Comm_18_set.insert("JPY");
      Comm_18.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_18_set.insert("Y");
      all_values.push_back(Comm_18_set);
      all_compo_names.insert("Comm_18_set");

      Ord_2.add_element(Comm_18);
    }
    {
      xml_element PegInstr_5{"PegInstr"};
      multiset<string> PegInstr_5_set;
      PegInstr_5.add_attribute("OfstVal", "25346.840000"); // 2
      PegInstr_5_set.insert("25346.840000");
      PegInstr_5.add_attribute("PegPxTyp", "4"); // 2
      PegInstr_5_set.insert("4");
      PegInstr_5.add_attribute("MoveTyp", "1"); // 2
      PegInstr_5_set.insert("1");
      PegInstr_5.add_attribute("OfstTyp", "2"); // 2
      PegInstr_5_set.insert("2");
      PegInstr_5.add_attribute("LmtTyp", "2"); // 2
      PegInstr_5_set.insert("2");
      PegInstr_5.add_attribute("RndDir", "1"); // 2
      PegInstr_5_set.insert("1");
      PegInstr_5.add_attribute("Scope", "2"); // 2
      PegInstr_5_set.insert("2");
      PegInstr_5.add_attribute("PegSecurityIDSource", "B"); // 2
      PegInstr_5_set.insert("B");
      PegInstr_5.add_attribute("PegSecID", "PegSecurityID_t_1604827050"); // 2
      PegInstr_5_set.insert("PegSecurityID_t_1604827050");
      PegInstr_5.add_attribute("PgSymbl", "PegSymbol_t_1117305104"); // 2
      PegInstr_5_set.insert("PegSymbol_t_1117305104");
      PegInstr_5.add_attribute("PegSecDesc", "PegSecurityDesc_t_1113350587"); // 2
      PegInstr_5_set.insert("PegSecurityDesc_t_1113350587");
      all_values.push_back(PegInstr_5_set);
      all_compo_names.insert("PegInstr_5_set");

      Ord_2.add_element(PegInstr_5);
    }
    {
      xml_element DiscInstr_5{"DiscInstr"};
      multiset<string> DiscInstr_5_set;
      DiscInstr_5.add_attribute("DsctnInst", "2"); // 2
      DiscInstr_5_set.insert("2");
      DiscInstr_5.add_attribute("OfstValu", "19092072.350000"); // 2
      DiscInstr_5_set.insert("19092072.350000");
      DiscInstr_5.add_attribute("MoveTyp", "1"); // 2
      DiscInstr_5_set.insert("1");
      DiscInstr_5.add_attribute("OfstTyp", "3"); // 2
      DiscInstr_5_set.insert("3");
      DiscInstr_5.add_attribute("LimitTyp", "2"); // 2
      DiscInstr_5_set.insert("2");
      DiscInstr_5.add_attribute("RndDir", "1"); // 2
      DiscInstr_5_set.insert("1");
      DiscInstr_5.add_attribute("Scope", "3"); // 2
      DiscInstr_5_set.insert("3");
      all_values.push_back(DiscInstr_5_set);
      all_compo_names.insert("DiscInstr_5_set");

      Ord_2.add_element(DiscInstr_5);
    }
    {
      xml_element StrtPrmGrp_10{"StrtPrmGrp"};
      multiset<string> StrtPrmGrp_10_set;
      StrtPrmGrp_10.add_attribute("StrtPrmNme", "StrategyParameterName_t_907410444"); // 2
      StrtPrmGrp_10_set.insert("StrategyParameterName_t_907410444");
      StrtPrmGrp_10.add_attribute("StrtPrmTyp", "3"); // 2
      StrtPrmGrp_10_set.insert("3");
      StrtPrmGrp_10.add_attribute("StrtPrmVal", "StrategyParameterValue_t_159103339"); // 2
      StrtPrmGrp_10_set.insert("StrategyParameterValue_t_159103339");
      all_values.push_back(StrtPrmGrp_10_set);
      all_compo_names.insert("StrtPrmGrp_10_set");

      Ord_2.add_element(StrtPrmGrp_10);
    }
    elt.add_element(Ord_2);
  } // end Ord
  { // Ord
    xml_element Ord_3{"Ord"};
    multiset<string> Ord_3_set;
    Ord_3.add_attribute("ClOrdID", "ClOrdID_t_652775170"); // 1
    Ord_3_set.insert("ClOrdID_t_652775170");
    Ord_3.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1627964345"); // 1
    Ord_3_set.insert("SecondaryClOrdID_t_1627964345");
    Ord_3.add_attribute("SeqNo", "639390019"); // 1
    Ord_3_set.insert("639390019");
    Ord_3.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1945688747"); // 1
    Ord_3_set.insert("ClOrdLinkID_t_1945688747");
    Ord_3.add_attribute("SettlInstMode", "2"); // 1
    Ord_3_set.insert("2");
    Ord_3.add_attribute("OrignDt", "TradeOriginationDate_t_1199613470"); // 1
    Ord_3_set.insert("TradeOriginationDate_t_1199613470");
    Ord_3.add_attribute("TrdDt", "TradeDate_t_999158222"); // 1
    Ord_3_set.insert("TradeDate_t_999158222");
    Ord_3.add_attribute("Acct", "Account_t_295333772"); // 1
    Ord_3_set.insert("Account_t_295333772");
    Ord_3.add_attribute("AcctIDSrc", "5"); // 1
    Ord_3_set.insert("5");
    Ord_3.add_attribute("AcctTyp", "1"); // 1
    Ord_3_set.insert("1");
    Ord_3.add_attribute("DayBkngInst", "1"); // 1
    Ord_3_set.insert("1");
    Ord_3.add_attribute("BkngUnit", "2"); // 1
    Ord_3_set.insert("2");
    Ord_3.add_attribute("AllocID", "AllocID_t_1410419142"); // 1
    Ord_3_set.insert("AllocID_t_1410419142");
    Ord_3.add_attribute("PreallocMeth", "0"); // 1
    Ord_3_set.insert("0");
    Ord_3.add_attribute("SettlTyp", "7"); // 1
    Ord_3_set.insert("7");
    Ord_3.add_attribute("SettlDt", "SettlDate_t_1776310913"); // 1
    Ord_3_set.insert("SettlDate_t_1776310913");
    Ord_3.add_attribute("CshMgn", "2"); // 1
    Ord_3_set.insert("2");
    Ord_3.add_attribute("ClrFeeInd", "3"); // 1
    Ord_3_set.insert("3");
    Ord_3.add_attribute("HandlInst", "1"); // 1
    Ord_3_set.insert("1");
    Ord_3.add_attribute("ExecInst", "q"); // 1
    Ord_3_set.insert("q");
    Ord_3.add_attribute("MinQty", "15819208.590000"); // 1
    Ord_3_set.insert("15819208.590000");
    Ord_3.add_attribute("MtchInc", "9013236.210000"); // 1
    Ord_3_set.insert("9013236.210000");
    Ord_3.add_attribute("MxPxLvls", "2085045775"); // 1
    Ord_3_set.insert("2085045775");
    Ord_3.add_attribute("MaxFloor", "20995527.060000"); // 1
    Ord_3_set.insert("20995527.060000");
    Ord_3.add_attribute("ExDest", "ExDestination_t_967233565"); // 1
    Ord_3_set.insert("ExDestination_t_967233565");
    Ord_3.add_attribute("ExDestIDSrc", "B"); // 1
    Ord_3_set.insert("B");
    Ord_3.add_attribute("ProcCode", "6"); // 1
    Ord_3_set.insert("6");
    Ord_3.add_attribute("PrevClsPx", "10535215.390000"); // 1
    Ord_3_set.insert("10535215.390000");
    Ord_3.add_attribute("Side", "2"); // 1
    Ord_3_set.insert("2");
    Ord_3.add_attribute("SideValuInd", "2"); // 1
    Ord_3_set.insert("2");
    Ord_3.add_attribute("LocReqd", "N"); // 1
    Ord_3_set.insert("N");
    Ord_3.add_attribute("TxnTm", "TransactTime_t_1738577475"); // 1
    Ord_3_set.insert("TransactTime_t_1738577475");
    Ord_3.add_attribute("QtyTyp", "2"); // 1
    Ord_3_set.insert("2");
    Ord_3.add_attribute("OrdTyp", "A"); // 1
    Ord_3_set.insert("A");
    Ord_3.add_attribute("PxTyp", "14"); // 1
    Ord_3_set.insert("14");
    Ord_3.add_attribute("Px", "8549166.800000"); // 1
    Ord_3_set.insert("8549166.800000");
    Ord_3.add_attribute("PxPrtScp", "3"); // 1
    Ord_3_set.insert("3");
    Ord_3.add_attribute("StopPx", "3884571.480000"); // 1
    Ord_3_set.insert("3884571.480000");
    Ord_3.add_attribute("Ccy", "EUR"); // 1
    Ord_3_set.insert("EUR");
    Ord_3.add_attribute("ComplianceID", "ComplianceID_t_740721334"); // 1
    Ord_3_set.insert("ComplianceID_t_740721334");
    Ord_3.add_attribute("SolFlag", "N"); // 1
    Ord_3_set.insert("N");
    Ord_3.add_attribute("IOIID", "IOIID_t_583508194"); // 1
    Ord_3_set.insert("IOIID_t_583508194");
    Ord_3.add_attribute("QID", "QuoteID_t_3656828"); // 1
    Ord_3_set.insert("QuoteID_t_3656828");
    Ord_3.add_attribute("RefOrdID", "RefOrderID_t_859939798"); // 1
    Ord_3_set.insert("RefOrderID_t_859939798");
    Ord_3.add_attribute("RefOrdIDSrc", "1"); // 1
    Ord_3_set.insert("1");
    Ord_3.add_attribute("TmInForce", "1"); // 1
    Ord_3_set.insert("1");
    Ord_3.add_attribute("EfctvTm", "EffectiveTime_t_2065956882"); // 1
    Ord_3_set.insert("EffectiveTime_t_2065956882");
    Ord_3.add_attribute("ExpireDt", "ExpireDate_t_2022621278"); // 1
    Ord_3_set.insert("ExpireDate_t_2022621278");
    Ord_3.add_attribute("ExpireTm", "ExpireTime_t_866138408"); // 1
    Ord_3_set.insert("ExpireTime_t_866138408");
    Ord_3.add_attribute("GTBkngInst", "0"); // 1
    Ord_3_set.insert("0");
    Ord_3.add_attribute("Cpcty", "P"); // 1
    Ord_3_set.insert("P");
    Ord_3.add_attribute("Rstctions", "1"); // 1
    Ord_3_set.insert("1");
    Ord_3.add_attribute("PrTrdAnon", "false"); // 1
    Ord_3_set.insert("false");
    Ord_3.add_attribute("CustCpcty", "4"); // 1
    Ord_3_set.insert("4");
    Ord_3.add_attribute("ForexReq", "Y"); // 1
    Ord_3_set.insert("Y");
    Ord_3.add_attribute("SettlCcy", "GBP"); // 1
    Ord_3_set.insert("GBP");
    Ord_3.add_attribute("BkngTyp", "0"); // 1
    Ord_3_set.insert("0");
    Ord_3.add_attribute("Txt", "Text_t_1296068066"); // 1
    Ord_3_set.insert("Text_t_1296068066");
    Ord_3.add_attribute("EncTxtLen", "1813938295"); // 1
    Ord_3_set.insert("1813938295");
    Ord_3.add_attribute("EncTxt", "EncodedText_t_705874717"); // 1
    Ord_3_set.insert("EncodedText_t_705874717");
    Ord_3.add_attribute("SettlDt2", "SettlDate2_t_887161893"); // 1
    Ord_3_set.insert("SettlDate2_t_887161893");
    Ord_3.add_attribute("Qty2", "7084679.470000"); // 1
    Ord_3_set.insert("7084679.470000");
    Ord_3.add_attribute("Px2", "4104059.660000"); // 1
    Ord_3_set.insert("4104059.660000");
    Ord_3.add_attribute("PosEfct", "O"); // 1
    Ord_3_set.insert("O");
    Ord_3.add_attribute("Covered", "1"); // 1
    Ord_3_set.insert("1");
    Ord_3.add_attribute("MaxShow", "13145506.860000"); // 1
    Ord_3_set.insert("13145506.860000");
    Ord_3.add_attribute("TgtStrategy", "3"); // 1
    Ord_3_set.insert("3");
    Ord_3.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_566151431"); // 1
    Ord_3_set.insert("TargetStrategyParameters_t_566151431");
    Ord_3.add_attribute("ParticipationRt", "10555839.770000"); // 1
    Ord_3_set.insert("10555839.770000");
    Ord_3.add_attribute("Designation", "Designation_t_1405639302"); // 1
    Ord_3_set.insert("Designation_t_1405639302");
    all_values.push_back(Ord_3_set);
    all_compo_names.insert("Ord_3_set");

    {
      xml_element Pty_232{"Pty"};
      multiset<string> Pty_232_set;
      Pty_232.add_attribute("ID", "PartyID_t_2014270339"); // 2
      Pty_232_set.insert("PartyID_t_2014270339");
      Pty_232.add_attribute("Src", "5"); // 2
      Pty_232_set.insert("5");
      Pty_232.add_attribute("R", "77"); // 2
      Pty_232_set.insert("77");
      all_values.push_back(Pty_232_set);
      all_compo_names.insert("Pty_232_set");

      {
        xml_element Sub_232{"Sub"};
        multiset<string> Sub_232_set;
        Sub_232.add_attribute("ID", "PartySubID_t_726726489"); // 3
        Sub_232_set.insert("PartySubID_t_726726489");
        Sub_232.add_attribute("Typ", "22"); // 3
        Sub_232_set.insert("22");
        all_values.push_back(Sub_232_set);
        all_compo_names.insert("Sub_232_set");

        Pty_232.add_element(Sub_232);
      }
      Ord_3.add_element(Pty_232);
    }
    {
      xml_element PreAll_8{"PreAll"};
      multiset<string> PreAll_8_set;
      PreAll_8.add_attribute("Acct", "AllocAccount_t_1041780224"); // 2
      PreAll_8_set.insert("AllocAccount_t_1041780224");
      PreAll_8.add_attribute("ActIDSrc", "2"); // 2
      PreAll_8_set.insert("2");
      PreAll_8.add_attribute("AllocSettlCcy", "CAN"); // 2
      PreAll_8_set.insert("CAN");
      PreAll_8.add_attribute("IndAllocID", "IndividualAllocID_t_739511497"); // 2
      PreAll_8_set.insert("IndividualAllocID_t_739511497");
      PreAll_8.add_attribute("Qty", "2303720.010000"); // 2
      PreAll_8_set.insert("2303720.010000");
      all_values.push_back(PreAll_8_set);
      all_compo_names.insert("PreAll_8_set");

      {
        xml_element Pty_233{"Pty"};
        multiset<string> Pty_233_set;
        Pty_233.add_attribute("ID", "NestedPartyID_t_1527897015"); // 3
        Pty_233_set.insert("NestedPartyID_t_1527897015");
        Pty_233.add_attribute("Src", "7"); // 3
        Pty_233_set.insert("7");
        Pty_233.add_attribute("R", "66"); // 3
        Pty_233_set.insert("66");
        all_values.push_back(Pty_233_set);
        all_compo_names.insert("Pty_233_set");

        {
          xml_element Sub_233{"Sub"};
          multiset<string> Sub_233_set;
          Sub_233.add_attribute("ID", "NestedPartySubID_t_2115108962"); // 4
          Sub_233_set.insert("NestedPartySubID_t_2115108962");
          Sub_233.add_attribute("Typ", "29"); // 4
          Sub_233_set.insert("29");
          all_values.push_back(Sub_233_set);
          all_compo_names.insert("Sub_233_set");

          Pty_233.add_element(Sub_233);
        }
        PreAll_8.add_element(Pty_233);
      }
      Ord_3.add_element(PreAll_8);
    }
    {
      xml_element DsplyInstr_6{"DsplyInstr"};
      multiset<string> DsplyInstr_6_set;
      DsplyInstr_6.add_attribute("DisplayQty", "18919052.400000"); // 2
      DsplyInstr_6_set.insert("18919052.400000");
      DsplyInstr_6.add_attribute("SecDspQty", "16083588.000000"); // 2
      DsplyInstr_6_set.insert("16083588.000000");
      DsplyInstr_6.add_attribute("DspWhn", "1"); // 2
      DsplyInstr_6_set.insert("1");
      DsplyInstr_6.add_attribute("DspMthd", "4"); // 2
      DsplyInstr_6_set.insert("4");
      DsplyInstr_6.add_attribute("DsplLwQty", "1667498.690000"); // 2
      DsplyInstr_6_set.insert("1667498.690000");
      DsplyInstr_6.add_attribute("DisplayHighQty", "10173974.720000"); // 2
      DsplyInstr_6_set.insert("10173974.720000");
      DsplyInstr_6.add_attribute("DspMinIncr", "1193441.860000"); // 2
      DsplyInstr_6_set.insert("1193441.860000");
      DsplyInstr_6.add_attribute("RfrshQty", "5771558.360000"); // 2
      DsplyInstr_6_set.insert("5771558.360000");
      all_values.push_back(DsplyInstr_6_set);
      all_compo_names.insert("DsplyInstr_6_set");

      Ord_3.add_element(DsplyInstr_6);
    }
    {
      xml_element TrdSes_10{"TrdSes"};
      multiset<string> TrdSes_10_set;
      TrdSes_10.add_attribute("SesID", "5"); // 2
      TrdSes_10_set.insert("5");
      TrdSes_10.add_attribute("SesSub", "4"); // 2
      TrdSes_10_set.insert("4");
      all_values.push_back(TrdSes_10_set);
      all_compo_names.insert("TrdSes_10_set");

      Ord_3.add_element(TrdSes_10);
    }
    {
      xml_element Instrmt_43{"Instrmt"};
      multiset<string> Instrmt_43_set;
      Instrmt_43.add_attribute("Sym", "Symbol_t_1891706522"); // 2
      Instrmt_43_set.insert("Symbol_t_1891706522");
      Instrmt_43.add_attribute("Sfx", "CD"); // 2
      Instrmt_43_set.insert("CD");
      Instrmt_43.add_attribute("ID", "SecurityID_t_101396596"); // 2
      Instrmt_43_set.insert("SecurityID_t_101396596");
      Instrmt_43.add_attribute("Src", "L"); // 2
      Instrmt_43_set.insert("L");
      Instrmt_43.add_attribute("Prod", "13"); // 2
      Instrmt_43_set.insert("13");
      Instrmt_43.add_attribute("ProdCmplx", "ProductComplex_t_2115666935"); // 2
      Instrmt_43_set.insert("ProductComplex_t_2115666935");
      Instrmt_43.add_attribute("SecGrp", "SecurityGroup_t_291415375"); // 2
      Instrmt_43_set.insert("SecurityGroup_t_291415375");
      Instrmt_43.add_attribute("CFI", "CFICode_t_478744398"); // 2
      Instrmt_43_set.insert("CFICode_t_478744398");
      Instrmt_43.add_attribute("SecTyp", "EUFRN"); // 2
      Instrmt_43_set.insert("EUFRN");
      Instrmt_43.add_attribute("SubTyp", "SecuritySubType_t_1337074905"); // 2
      Instrmt_43_set.insert("SecuritySubType_t_1337074905");
      Instrmt_43.add_attribute("MMY", "1520524622"); // 2
      Instrmt_43_set.insert("1520524622");
      Instrmt_43.add_attribute("MatDt", "MaturityDate_t_1340109500"); // 2
      Instrmt_43_set.insert("MaturityDate_t_1340109500");
      Instrmt_43.add_attribute("MatTm", "110388417"); // 2
      Instrmt_43_set.insert("110388417");
      Instrmt_43.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1280959607"); // 2
      Instrmt_43_set.insert("SettleOnOpenFlag_t_1280959607");
      Instrmt_43.add_attribute("AsgnMeth", "2079620998"); // 2
      Instrmt_43_set.insert("2079620998");
      Instrmt_43.add_attribute("Status", "1"); // 2
      Instrmt_43_set.insert("1");
      Instrmt_43.add_attribute("CpnPmt", "CouponPaymentDate_t_661372974"); // 2
      Instrmt_43_set.insert("CouponPaymentDate_t_661372974");
      Instrmt_43.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_43_set.insert("FR");
      Instrmt_43.add_attribute("Snrty", "SB"); // 2
      Instrmt_43_set.insert("SB");
      Instrmt_43.add_attribute("NotlPctOut", "6289982.880000"); // 2
      Instrmt_43_set.insert("6289982.880000");
      Instrmt_43.add_attribute("OrigNotlPctOut", "16851739.080000"); // 2
      Instrmt_43_set.insert("16851739.080000");
      Instrmt_43.add_attribute("AttchPnt", "17246815.590000"); // 2
      Instrmt_43_set.insert("17246815.590000");
      Instrmt_43.add_attribute("DetchPnt", "898734.410000"); // 2
      Instrmt_43_set.insert("898734.410000");
      Instrmt_43.add_attribute("Issued", "IssueDate_t_1815409487"); // 2
      Instrmt_43_set.insert("IssueDate_t_1815409487");
      Instrmt_43.add_attribute("RepoCollSecTyp", "1135557799"); // 2
      Instrmt_43_set.insert("1135557799");
      Instrmt_43.add_attribute("RepoTrm", "256623310"); // 2
      Instrmt_43_set.insert("256623310");
      Instrmt_43.add_attribute("RepoRt", "6853233.110000"); // 2
      Instrmt_43_set.insert("6853233.110000");
      Instrmt_43.add_attribute("Fctr", "12549019.850000"); // 2
      Instrmt_43_set.insert("12549019.850000");
      Instrmt_43.add_attribute("CrdRtg", "CreditRating_t_833779146"); // 2
      Instrmt_43_set.insert("CreditRating_t_833779146");
      Instrmt_43.add_attribute("Rgstry", "InstrRegistry_t_1979181603"); // 2
      Instrmt_43_set.insert("InstrRegistry_t_1979181603");
      Instrmt_43.add_attribute("IssuCtry", "790147151"); // 2
      Instrmt_43_set.insert("790147151");
      Instrmt_43.add_attribute("StPrv", "StateOrProvinceOfIssue_t_578002020"); // 2
      Instrmt_43_set.insert("StateOrProvinceOfIssue_t_578002020");
      Instrmt_43.add_attribute("Lcl", "LocaleOfIssue_t_1790474215"); // 2
      Instrmt_43_set.insert("LocaleOfIssue_t_1790474215");
      Instrmt_43.add_attribute("Redeem", "RedemptionDate_t_891543747"); // 2
      Instrmt_43_set.insert("RedemptionDate_t_891543747");
      Instrmt_43.add_attribute("StrkPx", "13778088.720000"); // 2
      Instrmt_43_set.insert("13778088.720000");
      Instrmt_43.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_43_set.insert("EUR");
      Instrmt_43.add_attribute("StrkMult", "16692242.470000"); // 2
      Instrmt_43_set.insert("16692242.470000");
      Instrmt_43.add_attribute("StrkValu", "13386668.800000"); // 2
      Instrmt_43_set.insert("13386668.800000");
      Instrmt_43.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_43_set.insert("1");
      Instrmt_43.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_43_set.insert("1");
      Instrmt_43.add_attribute("StrkPxBndryPrcsn", "7117078.550000"); // 2
      Instrmt_43_set.insert("7117078.550000");
      Instrmt_43.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_43_set.insert("1");
      Instrmt_43.add_attribute("OptAt", "969203922"); // 2
      Instrmt_43_set.insert("969203922");
      Instrmt_43.add_attribute("Mult", "19926674.620000"); // 2
      Instrmt_43_set.insert("19926674.620000");
      Instrmt_43.add_attribute("MultTyp", "1"); // 2
      Instrmt_43_set.insert("1");
      Instrmt_43.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_43_set.insert("1");
      Instrmt_43.add_attribute("MinPxIncr", "5065567.890000"); // 2
      Instrmt_43_set.insert("5065567.890000");
      Instrmt_43.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1382922763"); // 2
      Instrmt_43_set.insert("MinPriceIncrementAmount_t_1382922763");
      Instrmt_43.add_attribute("UOM", "USD"); // 2
      Instrmt_43_set.insert("USD");
      Instrmt_43.add_attribute("UOMQty", "11355550.770000"); // 2
      Instrmt_43_set.insert("11355550.770000");
      Instrmt_43.add_attribute("PxUOM", "tn"); // 2
      Instrmt_43_set.insert("tn");
      Instrmt_43.add_attribute("PxUOMQty", "7199385.710000"); // 2
      Instrmt_43_set.insert("7199385.710000");
      Instrmt_43.add_attribute("SettlMeth", "C"); // 2
      Instrmt_43_set.insert("C");
      Instrmt_43.add_attribute("ExerStyle", "2"); // 2
      Instrmt_43_set.insert("2");
      Instrmt_43.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_43_set.insert("1");
      Instrmt_43.add_attribute("OptPayAmt", "OptPayoutAmount_t_1482051829"); // 2
      Instrmt_43_set.insert("OptPayoutAmount_t_1482051829");
      Instrmt_43.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_43_set.insert("INX");
      Instrmt_43.add_attribute("ValMeth", "CDS"); // 2
      Instrmt_43_set.insert("CDS");
      Instrmt_43.add_attribute("ListMeth", "1"); // 2
      Instrmt_43_set.insert("1");
      Instrmt_43.add_attribute("CapPx", "11055601.280000"); // 2
      Instrmt_43_set.insert("11055601.280000");
      Instrmt_43.add_attribute("FlrPx", "17530618.590000"); // 2
      Instrmt_43_set.insert("17530618.590000");
      Instrmt_43.add_attribute("PutCall", "0"); // 2
      Instrmt_43_set.insert("0");
      Instrmt_43.add_attribute("FlexInd", "true"); // 2
      Instrmt_43_set.insert("true");
      Instrmt_43.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_43_set.insert("true");
      Instrmt_43.add_attribute("TmUnit", "H"); // 2
      Instrmt_43_set.insert("H");
      Instrmt_43.add_attribute("CpnRt", "16084731.780000"); // 2
      Instrmt_43_set.insert("16084731.780000");
      Instrmt_43.add_attribute("Exch", "SecurityExchange_t_1356848993"); // 2
      Instrmt_43_set.insert("SecurityExchange_t_1356848993");
      Instrmt_43.add_attribute("PosLmt", "1645898819"); // 2
      Instrmt_43_set.insert("1645898819");
      Instrmt_43.add_attribute("NTPosLmt", "799656411"); // 2
      Instrmt_43_set.insert("799656411");
      Instrmt_43.add_attribute("Issr", "Issuer_t_764002157"); // 2
      Instrmt_43_set.insert("Issuer_t_764002157");
      Instrmt_43.add_attribute("EncIssrLen", "357230676"); // 2
      Instrmt_43_set.insert("357230676");
      Instrmt_43.add_attribute("EncIssr", "EncodedIssuer_t_1511364266"); // 2
      Instrmt_43_set.insert("EncodedIssuer_t_1511364266");
      Instrmt_43.add_attribute("Desc", "SecurityDesc_t_1511264822"); // 2
      Instrmt_43_set.insert("SecurityDesc_t_1511264822");
      Instrmt_43.add_attribute("EncSecDescLen", "1326434599"); // 2
      Instrmt_43_set.insert("1326434599");
      Instrmt_43.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1356548080"); // 2
      Instrmt_43_set.insert("EncodedSecurityDesc_t_1356548080");
      Instrmt_43.add_attribute("Pool", "Pool_t_43181188"); // 2
      Instrmt_43_set.insert("Pool_t_43181188");
      Instrmt_43.add_attribute("CSetMo", "488915292"); // 2
      Instrmt_43_set.insert("488915292");
      Instrmt_43.add_attribute("CPPgm", "2"); // 2
      Instrmt_43_set.insert("2");
      Instrmt_43.add_attribute("CPRegT", "CPRegType_t_1426103951"); // 2
      Instrmt_43_set.insert("CPRegType_t_1426103951");
      Instrmt_43.add_attribute("Dated", "DatedDate_t_1631655952"); // 2
      Instrmt_43_set.insert("DatedDate_t_1631655952");
      Instrmt_43.add_attribute("IntAcrl", "InterestAccrualDate_t_851176299"); // 2
      Instrmt_43_set.insert("InterestAccrualDate_t_851176299");
      all_values.push_back(Instrmt_43_set);
      all_compo_names.insert("Instrmt_43_set");

      {
        xml_element AID_46{"AID"};
        multiset<string> AID_46_set;
        AID_46.add_attribute("AltID", "SecurityAltID_t_199233327"); // 3
        AID_46_set.insert("SecurityAltID_t_199233327");
        AID_46.add_attribute("AltIDSrc", "2"); // 3
        AID_46_set.insert("2");
        all_values.push_back(AID_46_set);
        all_compo_names.insert("AID_46_set");

        Instrmt_43.add_element(AID_46);
      }
      {
        xml_element SecXML_46{"SecXML"};
        multiset<string> SecXML_46_set;
        SecXML_46.add_attribute("Schema", "SecurityXMLSchema_t_2076604817"); // 3
        SecXML_46_set.insert("SecurityXMLSchema_t_2076604817");
        all_values.push_back(SecXML_46_set);
        all_compo_names.insert("SecXML_46_set");

        Instrmt_43.add_element(SecXML_46);
      }
      {
        xml_element Evnt_46{"Evnt"};
        multiset<string> Evnt_46_set;
        Evnt_46.add_attribute("EventTyp", "9"); // 3
        Evnt_46_set.insert("9");
        Evnt_46.add_attribute("Dt", "EventDate_t_2059607246"); // 3
        Evnt_46_set.insert("EventDate_t_2059607246");
        Evnt_46.add_attribute("Tm", "EventTime_t_1411172998"); // 3
        Evnt_46_set.insert("EventTime_t_1411172998");
        Evnt_46.add_attribute("Px", "20616343.630000"); // 3
        Evnt_46_set.insert("20616343.630000");
        Evnt_46.add_attribute("Txt", "EventText_t_875038306"); // 3
        Evnt_46_set.insert("EventText_t_875038306");
        all_values.push_back(Evnt_46_set);
        all_compo_names.insert("Evnt_46_set");

        Instrmt_43.add_element(Evnt_46);
      }
      {
        xml_element Pty_234{"Pty"};
        multiset<string> Pty_234_set;
        Pty_234.add_attribute("ID", "InstrumentPartyID_t_1579520326"); // 3
        Pty_234_set.insert("InstrumentPartyID_t_1579520326");
        Pty_234.add_attribute("Src", "8"); // 3
        Pty_234_set.insert("8");
        Pty_234.add_attribute("R", "26"); // 3
        Pty_234_set.insert("26");
        all_values.push_back(Pty_234_set);
        all_compo_names.insert("Pty_234_set");

        {
          xml_element Sub_234{"Sub"};
          multiset<string> Sub_234_set;
          Sub_234.add_attribute("ID", "InstrumentPartySubID_t_178386026"); // 4
          Sub_234_set.insert("InstrumentPartySubID_t_178386026");
          Sub_234.add_attribute("Typ", "1"); // 4
          Sub_234_set.insert("1");
          all_values.push_back(Sub_234_set);
          all_compo_names.insert("Sub_234_set");

          Pty_234.add_element(Sub_234);
        }
        Instrmt_43.add_element(Pty_234);
      }
      {
        xml_element CmplxEvnt_43{"CmplxEvnt"};
        multiset<string> CmplxEvnt_43_set;
        CmplxEvnt_43.add_attribute("Typ", "4"); // 3
        CmplxEvnt_43_set.insert("4");
        CmplxEvnt_43.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_155060598"); // 3
        CmplxEvnt_43_set.insert("ComplexOptPayoutAmount_t_155060598");
        CmplxEvnt_43.add_attribute("Px", "12292510.700000"); // 3
        CmplxEvnt_43_set.insert("12292510.700000");
        CmplxEvnt_43.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_43_set.insert("2");
        CmplxEvnt_43.add_attribute("PxBndryPrcsn", "18009594.170000"); // 3
        CmplxEvnt_43_set.insert("18009594.170000");
        CmplxEvnt_43.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_43_set.insert("3");
        CmplxEvnt_43.add_attribute("Cond", "1"); // 3
        CmplxEvnt_43_set.insert("1");
        all_values.push_back(CmplxEvnt_43_set);
        all_compo_names.insert("CmplxEvnt_43_set");

        {
          xml_element EvntDts_43{"EvntDts"};
          multiset<string> EvntDts_43_set;
          EvntDts_43.add_attribute("StartDt", "ComplexEventStartDate_t_10706446"); // 4
          EvntDts_43_set.insert("ComplexEventStartDate_t_10706446");
          EvntDts_43.add_attribute("EndDt", "ComplexEventEndDate_t_1392788099"); // 4
          EvntDts_43_set.insert("ComplexEventEndDate_t_1392788099");
          all_values.push_back(EvntDts_43_set);
          all_compo_names.insert("EvntDts_43_set");

          {
            xml_element EvntTms_43{"EvntTms"};
            multiset<string> EvntTms_43_set;
            EvntTms_43.add_attribute("StartTm", "314887152"); // 5
            EvntTms_43_set.insert("314887152");
            EvntTms_43.add_attribute("EndTm", "1337141045"); // 5
            EvntTms_43_set.insert("1337141045");
            all_values.push_back(EvntTms_43_set);
            all_compo_names.insert("EvntTms_43_set");

            EvntDts_43.add_element(EvntTms_43);
          }
          CmplxEvnt_43.add_element(EvntDts_43);
        }
        Instrmt_43.add_element(CmplxEvnt_43);
      }
      Ord_3.add_element(Instrmt_43);
    }
    {
      xml_element Undly_58{"Undly"};
      multiset<string> Undly_58_set;
      Undly_58.add_attribute("Sym", "UnderlyingSymbol_t_601852531"); // 2
      Undly_58_set.insert("UnderlyingSymbol_t_601852531");
      Undly_58.add_attribute("Sfx", "WI"); // 2
      Undly_58_set.insert("WI");
      Undly_58.add_attribute("ID", "UnderlyingSecurityID_t_1826056337"); // 2
      Undly_58_set.insert("UnderlyingSecurityID_t_1826056337");
      Undly_58.add_attribute("Src", "4"); // 2
      Undly_58_set.insert("4");
      Undly_58.add_attribute("Prod", "3"); // 2
      Undly_58_set.insert("3");
      Undly_58.add_attribute("CFI", "UnderlyingCFICode_t_1310228641"); // 2
      Undly_58_set.insert("UnderlyingCFICode_t_1310228641");
      Undly_58.add_attribute("SecTyp", "ABS"); // 2
      Undly_58_set.insert("ABS");
      Undly_58.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1983405619"); // 2
      Undly_58_set.insert("UnderlyingSecuritySubType_t_1983405619");
      Undly_58.add_attribute("MMY", "1514339516"); // 2
      Undly_58_set.insert("1514339516");
      Undly_58.add_attribute("Mat", "UnderlyingMaturityDate_t_1097771221"); // 2
      Undly_58_set.insert("UnderlyingMaturityDate_t_1097771221");
      Undly_58.add_attribute("MatTm", "623694161"); // 2
      Undly_58_set.insert("623694161");
      Undly_58.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1426463114"); // 2
      Undly_58_set.insert("UnderlyingCouponPaymentDate_t_1426463114");
      Undly_58.add_attribute("RestrctTyp", "FR"); // 2
      Undly_58_set.insert("FR");
      Undly_58.add_attribute("Snrty", "SR"); // 2
      Undly_58_set.insert("SR");
      Undly_58.add_attribute("NotlPctOut", "1540177.720000"); // 2
      Undly_58_set.insert("1540177.720000");
      Undly_58.add_attribute("OrigNotlPctOut", "19409808.980000"); // 2
      Undly_58_set.insert("19409808.980000");
      Undly_58.add_attribute("AttchPnt", "15575557.190000"); // 2
      Undly_58_set.insert("15575557.190000");
      Undly_58.add_attribute("DetchPnt", "6346342.890000"); // 2
      Undly_58_set.insert("6346342.890000");
      Undly_58.add_attribute("Issued", "UnderlyingIssueDate_t_2119366924"); // 2
      Undly_58_set.insert("UnderlyingIssueDate_t_2119366924");
      Undly_58.add_attribute("RepoCollSecTyp", "1178333611"); // 2
      Undly_58_set.insert("1178333611");
      Undly_58.add_attribute("RepoTrm", "1612372765"); // 2
      Undly_58_set.insert("1612372765");
      Undly_58.add_attribute("RepoRt", "1269438.740000"); // 2
      Undly_58_set.insert("1269438.740000");
      Undly_58.add_attribute("Fctr", "2601010.330000"); // 2
      Undly_58_set.insert("2601010.330000");
      Undly_58.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1799476586"); // 2
      Undly_58_set.insert("UnderlyingCreditRating_t_1799476586");
      Undly_58.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1927903291"); // 2
      Undly_58_set.insert("UnderlyingInstrRegistry_t_1927903291");
      Undly_58.add_attribute("Ctry", "141524866"); // 2
      Undly_58_set.insert("141524866");
      Undly_58.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_603098916"); // 2
      Undly_58_set.insert("UnderlyingStateOrProvinceOfIssue_t_603098916");
      Undly_58.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1938609737"); // 2
      Undly_58_set.insert("UnderlyingLocaleOfIssue_t_1938609737");
      Undly_58.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1534312965"); // 2
      Undly_58_set.insert("UnderlyingRedemptionDate_t_1534312965");
      Undly_58.add_attribute("StrkPx", "9179860.690000"); // 2
      Undly_58_set.insert("9179860.690000");
      Undly_58.add_attribute("StrkCcy", "JPY"); // 2
      Undly_58_set.insert("JPY");
      Undly_58.add_attribute("OptA", "1276054410"); // 2
      Undly_58_set.insert("1276054410");
      Undly_58.add_attribute("Mult", "8068398.230000"); // 2
      Undly_58_set.insert("8068398.230000");
      Undly_58.add_attribute("MultTyp", "0"); // 2
      Undly_58_set.insert("0");
      Undly_58.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_58_set.insert("4");
      Undly_58.add_attribute("UOM", "t"); // 2
      Undly_58_set.insert("t");
      Undly_58.add_attribute("UOMQty", "14748056.530000"); // 2
      Undly_58_set.insert("14748056.530000");
      Undly_58.add_attribute("PxUOM", "tn"); // 2
      Undly_58_set.insert("tn");
      Undly_58.add_attribute("PxUOMQty", "14839243.330000"); // 2
      Undly_58_set.insert("14839243.330000");
      Undly_58.add_attribute("TmUnit", "Yr"); // 2
      Undly_58_set.insert("Yr");
      Undly_58.add_attribute("ExerStyle", "1"); // 2
      Undly_58_set.insert("1");
      Undly_58.add_attribute("CpnRt", "7629037.990000"); // 2
      Undly_58_set.insert("7629037.990000");
      Undly_58.add_attribute("Exch", "UnderlyingSecurityExchange_t_786553799"); // 2
      Undly_58_set.insert("UnderlyingSecurityExchange_t_786553799");
      Undly_58.add_attribute("Issr", "UnderlyingIssuer_t_1910204063"); // 2
      Undly_58_set.insert("UnderlyingIssuer_t_1910204063");
      Undly_58.add_attribute("EncUndIssrLen", "916921572"); // 2
      Undly_58_set.insert("916921572");
      Undly_58.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_580051049"); // 2
      Undly_58_set.insert("EncodedUnderlyingIssuer_t_580051049");
      Undly_58.add_attribute("Desc", "UnderlyingSecurityDesc_t_1320276134"); // 2
      Undly_58_set.insert("UnderlyingSecurityDesc_t_1320276134");
      Undly_58.add_attribute("EncUndSecDescLen", "1551555861"); // 2
      Undly_58_set.insert("1551555861");
      Undly_58.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_551934325"); // 2
      Undly_58_set.insert("EncodedUnderlyingSecurityDesc_t_551934325");
      Undly_58.add_attribute("CPPgm", "UnderlyingCPProgram_t_351126097"); // 2
      Undly_58_set.insert("UnderlyingCPProgram_t_351126097");
      Undly_58.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1016444978"); // 2
      Undly_58_set.insert("UnderlyingCPRegType_t_1016444978");
      Undly_58.add_attribute("AllocPct", "6788781.990000"); // 2
      Undly_58_set.insert("6788781.990000");
      Undly_58.add_attribute("Ccy", "GBP"); // 2
      Undly_58_set.insert("GBP");
      Undly_58.add_attribute("Qty", "4592978.420000"); // 2
      Undly_58_set.insert("4592978.420000");
      Undly_58.add_attribute("SettlTyp", "2"); // 2
      Undly_58_set.insert("2");
      Undly_58.add_attribute("CashAmt", "UnderlyingCashAmount_t_1271536833"); // 2
      Undly_58_set.insert("UnderlyingCashAmount_t_1271536833");
      Undly_58.add_attribute("CashTyp", "FIXED"); // 2
      Undly_58_set.insert("FIXED");
      Undly_58.add_attribute("Px", "1395813.130000"); // 2
      Undly_58_set.insert("1395813.130000");
      Undly_58.add_attribute("DirtPx", "420392.540000"); // 2
      Undly_58_set.insert("420392.540000");
      Undly_58.add_attribute("EndPx", "13786910.660000"); // 2
      Undly_58_set.insert("13786910.660000");
      Undly_58.add_attribute("StartVal", "UnderlyingStartValue_t_128263162"); // 2
      Undly_58_set.insert("UnderlyingStartValue_t_128263162");
      Undly_58.add_attribute("CurVal", "UnderlyingCurrentValue_t_1318093664"); // 2
      Undly_58_set.insert("UnderlyingCurrentValue_t_1318093664");
      Undly_58.add_attribute("EndVal", "UnderlyingEndValue_t_38047242"); // 2
      Undly_58_set.insert("UnderlyingEndValue_t_38047242");
      Undly_58.add_attribute("AdjQty", "4344187.630000"); // 2
      Undly_58_set.insert("4344187.630000");
      Undly_58.add_attribute("FxRate", "833530.700000"); // 2
      Undly_58_set.insert("833530.700000");
      Undly_58.add_attribute("FxRateCalc", "M"); // 2
      Undly_58_set.insert("M");
      Undly_58.add_attribute("CapValu", "UnderlyingCapValue_t_1909224417"); // 2
      Undly_58_set.insert("UnderlyingCapValue_t_1909224417");
      Undly_58.add_attribute("SetMeth", "UnderlyingSettlMethod_t_832018096"); // 2
      Undly_58_set.insert("UnderlyingSettlMethod_t_832018096");
      Undly_58.add_attribute("PutCall", "1491556391"); // 2
      Undly_58_set.insert("1491556391");
      all_values.push_back(Undly_58_set);
      all_compo_names.insert("Undly_58_set");

      {
        xml_element UndAID_58{"UndAID"};
        multiset<string> UndAID_58_set;
        UndAID_58.add_attribute("AltID", "UnderlyingSecurityAltID_t_186833996"); // 3
        UndAID_58_set.insert("UnderlyingSecurityAltID_t_186833996");
        UndAID_58.add_attribute("AltIDSrc", "8"); // 3
        UndAID_58_set.insert("8");
        all_values.push_back(UndAID_58_set);
        all_compo_names.insert("UndAID_58_set");

        Undly_58.add_element(UndAID_58);
      }
      {
        xml_element Stip_91{"Stip"};
        multiset<string> Stip_91_set;
        Stip_91.add_attribute("Typ", "POOL"); // 3
        Stip_91_set.insert("POOL");
        Stip_91.add_attribute("Val", "UnderlyingStipValue_t_973387795"); // 3
        Stip_91_set.insert("UnderlyingStipValue_t_973387795");
        all_values.push_back(Stip_91_set);
        all_compo_names.insert("Stip_91_set");

        Undly_58.add_element(Stip_91);
      }
      {
        xml_element Pty_235{"Pty"};
        multiset<string> Pty_235_set;
        Pty_235.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1967097698"); // 3
        Pty_235_set.insert("UnderlyingInstrumentPartyID_t_1967097698");
        Pty_235.add_attribute("Src", "C"); // 3
        Pty_235_set.insert("C");
        Pty_235.add_attribute("R", "51"); // 3
        Pty_235_set.insert("51");
        all_values.push_back(Pty_235_set);
        all_compo_names.insert("Pty_235_set");

        {
          xml_element Sub_235{"Sub"};
          multiset<string> Sub_235_set;
          Sub_235.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1139890185"); // 4
          Sub_235_set.insert("UnderlyingInstrumentPartySubID_t_1139890185");
          Sub_235.add_attribute("Typ", "28"); // 4
          Sub_235_set.insert("28");
          all_values.push_back(Sub_235_set);
          all_compo_names.insert("Sub_235_set");

          Pty_235.add_element(Sub_235);
        }
        Undly_58.add_element(Pty_235);
      }
      Ord_3.add_element(Undly_58);
    }
    {
      xml_element Stip_92{"Stip"};
      multiset<string> Stip_92_set;
      Stip_92.add_attribute("Typ", "STRUCT"); // 2
      Stip_92_set.insert("STRUCT");
      Stip_92.add_attribute("Val", "StipulationValue_t_1491016282"); // 2
      Stip_92_set.insert("StipulationValue_t_1491016282");
      all_values.push_back(Stip_92_set);
      all_compo_names.insert("Stip_92_set");

      Ord_3.add_element(Stip_92);
    }
    {
      xml_element OrdQty_13{"OrdQty"};
      multiset<string> OrdQty_13_set;
      OrdQty_13.add_attribute("Qty", "14444153.070000"); // 2
      OrdQty_13_set.insert("14444153.070000");
      OrdQty_13.add_attribute("Cash", "6367677.200000"); // 2
      OrdQty_13_set.insert("6367677.200000");
      OrdQty_13.add_attribute("Pct", "21022434.130000"); // 2
      OrdQty_13_set.insert("21022434.130000");
      OrdQty_13.add_attribute("RndDir", "2"); // 2
      OrdQty_13_set.insert("2");
      OrdQty_13.add_attribute("RndMod", "10960655.620000"); // 2
      OrdQty_13_set.insert("10960655.620000");
      all_values.push_back(OrdQty_13_set);
      all_compo_names.insert("OrdQty_13_set");

      Ord_3.add_element(OrdQty_13);
    }
    {
      xml_element TrgrInstr_6{"TrgrInstr"};
      multiset<string> TrgrInstr_6_set;
      TrgrInstr_6.add_attribute("TrgrTyp", "2"); // 2
      TrgrInstr_6_set.insert("2");
      TrgrInstr_6.add_attribute("TrgrActn", "1"); // 2
      TrgrInstr_6_set.insert("1");
      TrgrInstr_6.add_attribute("TrgrPx", "13464894.940000"); // 2
      TrgrInstr_6_set.insert("13464894.940000");
      TrgrInstr_6.add_attribute("TrgrSym", "TriggerSymbol_t_847093075"); // 2
      TrgrInstr_6_set.insert("TriggerSymbol_t_847093075");
      TrgrInstr_6.add_attribute("TrgrSecID", "TriggerSecurityID_t_1278945662"); // 2
      TrgrInstr_6_set.insert("TriggerSecurityID_t_1278945662");
      TrgrInstr_6.add_attribute("TrgrSecIDSrc", "E"); // 2
      TrgrInstr_6_set.insert("E");
      TrgrInstr_6.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_975356237"); // 2
      TrgrInstr_6_set.insert("TriggerSecurityDesc_t_975356237");
      TrgrInstr_6.add_attribute("TrgrPxTyp", "3"); // 2
      TrgrInstr_6_set.insert("3");
      TrgrInstr_6.add_attribute("TrgrPxTypScp", "3"); // 2
      TrgrInstr_6_set.insert("3");
      TrgrInstr_6.add_attribute("TrgrPxDir", "U"); // 2
      TrgrInstr_6_set.insert("U");
      TrgrInstr_6.add_attribute("TrgrNewPx", "5329087.490000"); // 2
      TrgrInstr_6_set.insert("5329087.490000");
      TrgrInstr_6.add_attribute("TrgrOrdTyp", "2"); // 2
      TrgrInstr_6_set.insert("2");
      TrgrInstr_6.add_attribute("TrgrNewQty", "11715157.690000"); // 2
      TrgrInstr_6_set.insert("11715157.690000");
      TrgrInstr_6.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1364926845"); // 2
      TrgrInstr_6_set.insert("TriggerTradingSessionID_t_1364926845");
      TrgrInstr_6.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_2114932605"); // 2
      TrgrInstr_6_set.insert("TriggerTradingSessionSubID_t_2114932605");
      all_values.push_back(TrgrInstr_6_set);
      all_compo_names.insert("TrgrInstr_6_set");

      Ord_3.add_element(TrgrInstr_6);
    }
    {
      xml_element SprdBnchmkCurve_20{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_20_set;
      SprdBnchmkCurve_20.add_attribute("Spread", "13583497.650000"); // 2
      SprdBnchmkCurve_20_set.insert("13583497.650000");
      SprdBnchmkCurve_20.add_attribute("Ccy", "USD"); // 2
      SprdBnchmkCurve_20_set.insert("USD");
      SprdBnchmkCurve_20.add_attribute("Name", "Pfandbriefe"); // 2
      SprdBnchmkCurve_20_set.insert("Pfandbriefe");
      SprdBnchmkCurve_20.add_attribute("Point", "BenchmarkCurvePoint_t_1241434531"); // 2
      SprdBnchmkCurve_20_set.insert("BenchmarkCurvePoint_t_1241434531");
      SprdBnchmkCurve_20.add_attribute("Px", "10983236.150000"); // 2
      SprdBnchmkCurve_20_set.insert("10983236.150000");
      SprdBnchmkCurve_20.add_attribute("PxTyp", "7"); // 2
      SprdBnchmkCurve_20_set.insert("7");
      SprdBnchmkCurve_20.add_attribute("SecID", "BenchmarkSecurityID_t_233841068"); // 2
      SprdBnchmkCurve_20_set.insert("BenchmarkSecurityID_t_233841068");
      SprdBnchmkCurve_20.add_attribute("SecIDSrc", "A"); // 2
      SprdBnchmkCurve_20_set.insert("A");
      all_values.push_back(SprdBnchmkCurve_20_set);
      all_compo_names.insert("SprdBnchmkCurve_20_set");

      Ord_3.add_element(SprdBnchmkCurve_20);
    }
    {
      xml_element Yield_15{"Yield"};
      multiset<string> Yield_15_set;
      Yield_15.add_attribute("Typ", "WORST"); // 2
      Yield_15_set.insert("WORST");
      Yield_15.add_attribute("Yld", "17248573.510000"); // 2
      Yield_15_set.insert("17248573.510000");
      Yield_15.add_attribute("CalcDt", "YieldCalcDate_t_823225602"); // 2
      Yield_15_set.insert("YieldCalcDate_t_823225602");
      Yield_15.add_attribute("RedDt", "YieldRedemptionDate_t_184866349"); // 2
      Yield_15_set.insert("YieldRedemptionDate_t_184866349");
      Yield_15.add_attribute("RedPx", "16796171.160000"); // 2
      Yield_15_set.insert("16796171.160000");
      Yield_15.add_attribute("RedPxTyp", "3"); // 2
      Yield_15_set.insert("3");
      all_values.push_back(Yield_15_set);
      all_compo_names.insert("Yield_15_set");

      Ord_3.add_element(Yield_15);
    }
    {
      xml_element Comm_19{"Comm"};
      multiset<string> Comm_19_set;
      Comm_19.add_attribute("Comm", "Commission_t_1280931912"); // 2
      Comm_19_set.insert("Commission_t_1280931912");
      Comm_19.add_attribute("CommTyp", "4"); // 2
      Comm_19_set.insert("4");
      Comm_19.add_attribute("Ccy", "GBP"); // 2
      Comm_19_set.insert("GBP");
      Comm_19.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_19_set.insert("N");
      all_values.push_back(Comm_19_set);
      all_compo_names.insert("Comm_19_set");

      Ord_3.add_element(Comm_19);
    }
    {
      xml_element PegInstr_6{"PegInstr"};
      multiset<string> PegInstr_6_set;
      PegInstr_6.add_attribute("OfstVal", "11569636.010000"); // 2
      PegInstr_6_set.insert("11569636.010000");
      PegInstr_6.add_attribute("PegPxTyp", "9"); // 2
      PegInstr_6_set.insert("9");
      PegInstr_6.add_attribute("MoveTyp", "1"); // 2
      PegInstr_6_set.insert("1");
      PegInstr_6.add_attribute("OfstTyp", "3"); // 2
      PegInstr_6_set.insert("3");
      PegInstr_6.add_attribute("LmtTyp", "0"); // 2
      PegInstr_6_set.insert("0");
      PegInstr_6.add_attribute("RndDir", "1"); // 2
      PegInstr_6_set.insert("1");
      PegInstr_6.add_attribute("Scope", "1"); // 2
      PegInstr_6_set.insert("1");
      PegInstr_6.add_attribute("PegSecurityIDSource", "7"); // 2
      PegInstr_6_set.insert("7");
      PegInstr_6.add_attribute("PegSecID", "PegSecurityID_t_348418015"); // 2
      PegInstr_6_set.insert("PegSecurityID_t_348418015");
      PegInstr_6.add_attribute("PgSymbl", "PegSymbol_t_1356871226"); // 2
      PegInstr_6_set.insert("PegSymbol_t_1356871226");
      PegInstr_6.add_attribute("PegSecDesc", "PegSecurityDesc_t_116720349"); // 2
      PegInstr_6_set.insert("PegSecurityDesc_t_116720349");
      all_values.push_back(PegInstr_6_set);
      all_compo_names.insert("PegInstr_6_set");

      Ord_3.add_element(PegInstr_6);
    }
    {
      xml_element DiscInstr_6{"DiscInstr"};
      multiset<string> DiscInstr_6_set;
      DiscInstr_6.add_attribute("DsctnInst", "5"); // 2
      DiscInstr_6_set.insert("5");
      DiscInstr_6.add_attribute("OfstValu", "6312080.590000"); // 2
      DiscInstr_6_set.insert("6312080.590000");
      DiscInstr_6.add_attribute("MoveTyp", "1"); // 2
      DiscInstr_6_set.insert("1");
      DiscInstr_6.add_attribute("OfstTyp", "1"); // 2
      DiscInstr_6_set.insert("1");
      DiscInstr_6.add_attribute("LimitTyp", "2"); // 2
      DiscInstr_6_set.insert("2");
      DiscInstr_6.add_attribute("RndDir", "1"); // 2
      DiscInstr_6_set.insert("1");
      DiscInstr_6.add_attribute("Scope", "3"); // 2
      DiscInstr_6_set.insert("3");
      all_values.push_back(DiscInstr_6_set);
      all_compo_names.insert("DiscInstr_6_set");

      Ord_3.add_element(DiscInstr_6);
    }
    {
      xml_element StrtPrmGrp_11{"StrtPrmGrp"};
      multiset<string> StrtPrmGrp_11_set;
      StrtPrmGrp_11.add_attribute("StrtPrmNme", "StrategyParameterName_t_2106483659"); // 2
      StrtPrmGrp_11_set.insert("StrategyParameterName_t_2106483659");
      StrtPrmGrp_11.add_attribute("StrtPrmTyp", "19"); // 2
      StrtPrmGrp_11_set.insert("19");
      StrtPrmGrp_11.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1029329431"); // 2
      StrtPrmGrp_11_set.insert("StrategyParameterValue_t_1029329431");
      all_values.push_back(StrtPrmGrp_11_set);
      all_compo_names.insert("StrtPrmGrp_11_set");

      Ord_3.add_element(StrtPrmGrp_11);
    }
    elt.add_element(Ord_3);
  } // end Ord
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
