#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Confirmation.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Confirmation_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Cnfm" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Confirmation_message_t_0;
  elt.add_attribute("CnfmID", "ConfirmID_t_1318654146"); // 0
  Confirmation_message_t_0.insert("ConfirmID_t_1318654146");
  elt.add_attribute("CnfmRefID", "ConfirmRefID_t_1743753535"); // 0
  Confirmation_message_t_0.insert("ConfirmRefID_t_1743753535");
  elt.add_attribute("CnfmReqID", "ConfirmReqID_t_66295257"); // 0
  Confirmation_message_t_0.insert("ConfirmReqID_t_66295257");
  elt.add_attribute("CnfmTransTyp", "2"); // 0
  Confirmation_message_t_0.insert("2");
  elt.add_attribute("CnfmTyp", "1"); // 0
  Confirmation_message_t_0.insert("1");
  elt.add_attribute("CopyMsgInd", "true"); // 0
  Confirmation_message_t_0.insert("true");
  elt.add_attribute("LegalCnfm", "Y"); // 0
  Confirmation_message_t_0.insert("Y");
  elt.add_attribute("CnfmStat", "2"); // 0
  Confirmation_message_t_0.insert("2");
  elt.add_attribute("AllocID", "AllocID_t_1039355723"); // 0
  Confirmation_message_t_0.insert("AllocID_t_1039355723");
  elt.add_attribute("AllocID2", "SecondaryAllocID_t_2062514874"); // 0
  Confirmation_message_t_0.insert("SecondaryAllocID_t_2062514874");
  elt.add_attribute("IndAllocID", "IndividualAllocID_t_1912142018"); // 0
  Confirmation_message_t_0.insert("IndividualAllocID_t_1912142018");
  elt.add_attribute("TxnTm", "TransactTime_t_728419187"); // 0
  Confirmation_message_t_0.insert("TransactTime_t_728419187");
  elt.add_attribute("TrdDt", "TradeDate_t_377530013"); // 0
  Confirmation_message_t_0.insert("TradeDate_t_377530013");
  elt.add_attribute("Qty", "9801636.790000"); // 0
  Confirmation_message_t_0.insert("9801636.790000");
  elt.add_attribute("QtyTyp", "1"); // 0
  Confirmation_message_t_0.insert("1");
  elt.add_attribute("Side", "4"); // 0
  Confirmation_message_t_0.insert("4");
  elt.add_attribute("Ccy", "JPY"); // 0
  Confirmation_message_t_0.insert("JPY");
  elt.add_attribute("LastMkt", "LastMkt_t_1995090350"); // 0
  Confirmation_message_t_0.insert("LastMkt_t_1995090350");
  elt.add_attribute("Acct", "AllocAccount_t_35527764"); // 0
  Confirmation_message_t_0.insert("AllocAccount_t_35527764");
  elt.add_attribute("ActIDSrc", "4"); // 0
  Confirmation_message_t_0.insert("4");
  elt.add_attribute("AcctTyp", "2"); // 0
  Confirmation_message_t_0.insert("2");
  elt.add_attribute("AvgPx", "14936082.590000"); // 0
  Confirmation_message_t_0.insert("14936082.590000");
  elt.add_attribute("AvgPxPrcsn", "1711710734"); // 0
  Confirmation_message_t_0.insert("1711710734");
  elt.add_attribute("PxTyp", "8"); // 0
  Confirmation_message_t_0.insert("8");
  elt.add_attribute("AvgParPx", "20480781.930000"); // 0
  Confirmation_message_t_0.insert("20480781.930000");
  elt.add_attribute("RptedPx", "6264231.400000"); // 0
  Confirmation_message_t_0.insert("6264231.400000");
  elt.add_attribute("Txt", "Text_t_19390517"); // 0
  Confirmation_message_t_0.insert("Text_t_19390517");
  elt.add_attribute("EncTxtLen", "874043773"); // 0
  Confirmation_message_t_0.insert("874043773");
  elt.add_attribute("EncTxt", "EncodedText_t_103339318"); // 0
  Confirmation_message_t_0.insert("EncodedText_t_103339318");
  elt.add_attribute("ProcCode", "4"); // 0
  Confirmation_message_t_0.insert("4");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_45214271"); // 0
  Confirmation_message_t_0.insert("GrossTradeAmt_t_45214271");
  elt.add_attribute("NumDaysInt", "1847092854"); // 0
  Confirmation_message_t_0.insert("1847092854");
  elt.add_attribute("ExDt", "ExDate_t_545553481"); // 0
  Confirmation_message_t_0.insert("ExDate_t_545553481");
  elt.add_attribute("AcrdIntRt", "18413390.500000"); // 0
  Confirmation_message_t_0.insert("18413390.500000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_251179006"); // 0
  Confirmation_message_t_0.insert("AccruedInterestAmt_t_251179006");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_853799121"); // 0
  Confirmation_message_t_0.insert("InterestAtMaturity_t_853799121");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1592176555"); // 0
  Confirmation_message_t_0.insert("EndAccruedInterestAmt_t_1592176555");
  elt.add_attribute("StartCsh", "StartCash_t_745661507"); // 0
  Confirmation_message_t_0.insert("StartCash_t_745661507");
  elt.add_attribute("EndCsh", "EndCash_t_1893154845"); // 0
  Confirmation_message_t_0.insert("EndCash_t_1893154845");
  elt.add_attribute("Concession", "Concession_t_1507207781"); // 0
  Confirmation_message_t_0.insert("Concession_t_1507207781");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_510319877"); // 0
  Confirmation_message_t_0.insert("TotalTakedown_t_510319877");
  elt.add_attribute("NetMny", "NetMoney_t_474090384"); // 0
  Confirmation_message_t_0.insert("NetMoney_t_474090384");
  elt.add_attribute("MatNetMny", "MaturityNetMoney_t_1884737794"); // 0
  Confirmation_message_t_0.insert("MaturityNetMoney_t_1884737794");
  elt.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1490483556"); // 0
  Confirmation_message_t_0.insert("SettlCurrAmt_t_1490483556");
  elt.add_attribute("SettlCcy", "USD"); // 0
  Confirmation_message_t_0.insert("USD");
  elt.add_attribute("SettlCurrFxRt", "5044522.830000"); // 0
  Confirmation_message_t_0.insert("5044522.830000");
  elt.add_attribute("SettlCurrFxRtCalc", "D"); // 0
  Confirmation_message_t_0.insert("D");
  elt.add_attribute("SettlTyp", "0"); // 0
  Confirmation_message_t_0.insert("0");
  elt.add_attribute("SettlDt", "SettlDate_t_539980047"); // 0
  Confirmation_message_t_0.insert("SettlDate_t_539980047");
  elt.add_attribute("SharedComm", "SharedCommission_t_1357878717"); // 0
  Confirmation_message_t_0.insert("SharedCommission_t_1357878717");
  all_values.push_back(Confirmation_message_t_0);
  all_compo_names.insert("Confirmation_message_t");

  { // Hdr
    xml_element Hdr_20{"Hdr"};
    multiset<string> Hdr_20_set;
    Hdr_20.add_attribute("SeqNum", "998868361"); // 1
    Hdr_20_set.insert("998868361");
    Hdr_20.add_attribute("SID", "SenderCompID_t_2033588307"); // 1
    Hdr_20_set.insert("SenderCompID_t_2033588307");
    Hdr_20.add_attribute("TID", "TargetCompID_t_922105803"); // 1
    Hdr_20_set.insert("TargetCompID_t_922105803");
    Hdr_20.add_attribute("OBID", "OnBehalfOfCompID_t_30424898"); // 1
    Hdr_20_set.insert("OnBehalfOfCompID_t_30424898");
    Hdr_20.add_attribute("D2ID", "DeliverToCompID_t_1934182852"); // 1
    Hdr_20_set.insert("DeliverToCompID_t_1934182852");
    Hdr_20.add_attribute("SSub", "SenderSubID_t_1548528943"); // 1
    Hdr_20_set.insert("SenderSubID_t_1548528943");
    Hdr_20.add_attribute("SLoc", "SenderLocationID_t_49815416"); // 1
    Hdr_20_set.insert("SenderLocationID_t_49815416");
    Hdr_20.add_attribute("TSub", "TargetSubID_t_660742977"); // 1
    Hdr_20_set.insert("TargetSubID_t_660742977");
    Hdr_20.add_attribute("TLoc", "TargetLocationID_t_1651868261"); // 1
    Hdr_20_set.insert("TargetLocationID_t_1651868261");
    Hdr_20.add_attribute("OBSub", "OnBehalfOfSubID_t_529073640"); // 1
    Hdr_20_set.insert("OnBehalfOfSubID_t_529073640");
    Hdr_20.add_attribute("OBLoc", "OnBehalfOfLocationID_t_705957248"); // 1
    Hdr_20_set.insert("OnBehalfOfLocationID_t_705957248");
    Hdr_20.add_attribute("D2Sub", "DeliverToSubID_t_1351477467"); // 1
    Hdr_20_set.insert("DeliverToSubID_t_1351477467");
    Hdr_20.add_attribute("D2Loc", "DeliverToLocationID_t_1074627122"); // 1
    Hdr_20_set.insert("DeliverToLocationID_t_1074627122");
    Hdr_20.add_attribute("PosDup", "N"); // 1
    Hdr_20_set.insert("N");
    Hdr_20.add_attribute("PosRsnd", "Y"); // 1
    Hdr_20_set.insert("Y");
    Hdr_20.add_attribute("Snt", "SendingTime_t_1928426243"); // 1
    Hdr_20_set.insert("SendingTime_t_1928426243");
    Hdr_20.add_attribute("OrigSnt", "OrigSendingTime_t_1991989205"); // 1
    Hdr_20_set.insert("OrigSendingTime_t_1991989205");
    Hdr_20.add_attribute("MsgEncd", "MessageEncoding_t_200834332"); // 1
    Hdr_20_set.insert("MessageEncoding_t_200834332");
    all_values.push_back(Hdr_20_set);
    all_compo_names.insert("Hdr_20_set");

    {
      xml_element Hop_20{"Hop"};
      multiset<string> Hop_20_set;
      Hop_20.add_attribute("ID", "HopCompID_t_1674097440"); // 2
      Hop_20_set.insert("HopCompID_t_1674097440");
      Hop_20.add_attribute("Ref", "1351713338"); // 2
      Hop_20_set.insert("1351713338");
      Hop_20.add_attribute("Snt", "HopSendingTime_t_711154210"); // 2
      Hop_20_set.insert("HopSendingTime_t_711154210");
      all_values.push_back(Hop_20_set);
      all_compo_names.insert("Hop_20_set");

      Hdr_20.add_element(Hop_20);
    }
    elt.add_element(Hdr_20);
  } // end Hdr
  { // Pty
    xml_element Pty_86{"Pty"};
    multiset<string> Pty_86_set;
    Pty_86.add_attribute("ID", "PartyID_t_1088967484"); // 1
    Pty_86_set.insert("PartyID_t_1088967484");
    Pty_86.add_attribute("Src", "3"); // 1
    Pty_86_set.insert("3");
    Pty_86.add_attribute("R", "56"); // 1
    Pty_86_set.insert("56");
    all_values.push_back(Pty_86_set);
    all_compo_names.insert("Pty_86_set");

    {
      xml_element Sub_86{"Sub"};
      multiset<string> Sub_86_set;
      Sub_86.add_attribute("ID", "PartySubID_t_1662230770"); // 2
      Sub_86_set.insert("PartySubID_t_1662230770");
      Sub_86.add_attribute("Typ", "7"); // 2
      Sub_86_set.insert("7");
      all_values.push_back(Sub_86_set);
      all_compo_names.insert("Sub_86_set");

      Pty_86.add_element(Sub_86);
    }
    elt.add_element(Pty_86);
  } // end Pty
  { // Pty
    xml_element Pty_87{"Pty"};
    multiset<string> Pty_87_set;
    Pty_87.add_attribute("ID", "PartyID_t_197417811"); // 1
    Pty_87_set.insert("PartyID_t_197417811");
    Pty_87.add_attribute("Src", "H"); // 1
    Pty_87_set.insert("H");
    Pty_87.add_attribute("R", "18"); // 1
    Pty_87_set.insert("18");
    all_values.push_back(Pty_87_set);
    all_compo_names.insert("Pty_87_set");

    {
      xml_element Sub_87{"Sub"};
      multiset<string> Sub_87_set;
      Sub_87.add_attribute("ID", "PartySubID_t_1555296528"); // 2
      Sub_87_set.insert("PartySubID_t_1555296528");
      Sub_87.add_attribute("Typ", "3"); // 2
      Sub_87_set.insert("3");
      all_values.push_back(Sub_87_set);
      all_compo_names.insert("Sub_87_set");

      Pty_87.add_element(Sub_87);
    }
    elt.add_element(Pty_87);
  } // end Pty
  { // OrdAlloc
    xml_element OrdAlloc_6{"OrdAlloc"};
    multiset<string> OrdAlloc_6_set;
    OrdAlloc_6.add_attribute("ClOrdID", "ClOrdID_t_329918683"); // 1
    OrdAlloc_6_set.insert("ClOrdID_t_329918683");
    OrdAlloc_6.add_attribute("OrdID", "OrderID_t_964910370"); // 1
    OrdAlloc_6_set.insert("OrderID_t_964910370");
    OrdAlloc_6.add_attribute("OrdID2", "SecondaryOrderID_t_771390312"); // 1
    OrdAlloc_6_set.insert("SecondaryOrderID_t_771390312");
    OrdAlloc_6.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1878447626"); // 1
    OrdAlloc_6_set.insert("SecondaryClOrdID_t_1878447626");
    OrdAlloc_6.add_attribute("ListID", "ListID_t_1014725786"); // 1
    OrdAlloc_6_set.insert("ListID_t_1014725786");
    OrdAlloc_6.add_attribute("Qty", "14321332.890000"); // 1
    OrdAlloc_6_set.insert("14321332.890000");
    OrdAlloc_6.add_attribute("AvgPx", "13828322.390000"); // 1
    OrdAlloc_6_set.insert("13828322.390000");
    OrdAlloc_6.add_attribute("BkngQty", "15437994.270000"); // 1
    OrdAlloc_6_set.insert("15437994.270000");
    all_values.push_back(OrdAlloc_6_set);
    all_compo_names.insert("OrdAlloc_6_set");

    {
      xml_element Pty_88{"Pty"};
      multiset<string> Pty_88_set;
      Pty_88.add_attribute("ID", "Nested2PartyID_t_2138090537"); // 2
      Pty_88_set.insert("Nested2PartyID_t_2138090537");
      Pty_88.add_attribute("Src", "E"); // 2
      Pty_88_set.insert("E");
      Pty_88.add_attribute("R", "18"); // 2
      Pty_88_set.insert("18");
      all_values.push_back(Pty_88_set);
      all_compo_names.insert("Pty_88_set");

      {
        xml_element Sub_88{"Sub"};
        multiset<string> Sub_88_set;
        Sub_88.add_attribute("ID", "Nested2PartySubID_t_390419539"); // 3
        Sub_88_set.insert("Nested2PartySubID_t_390419539");
        Sub_88.add_attribute("Typ", "23"); // 3
        Sub_88_set.insert("23");
        all_values.push_back(Sub_88_set);
        all_compo_names.insert("Sub_88_set");

        Pty_88.add_element(Sub_88);
      }
      OrdAlloc_6.add_element(Pty_88);
    }
    elt.add_element(OrdAlloc_6);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_7{"OrdAlloc"};
    multiset<string> OrdAlloc_7_set;
    OrdAlloc_7.add_attribute("ClOrdID", "ClOrdID_t_251885496"); // 1
    OrdAlloc_7_set.insert("ClOrdID_t_251885496");
    OrdAlloc_7.add_attribute("OrdID", "OrderID_t_234925096"); // 1
    OrdAlloc_7_set.insert("OrderID_t_234925096");
    OrdAlloc_7.add_attribute("OrdID2", "SecondaryOrderID_t_242833217"); // 1
    OrdAlloc_7_set.insert("SecondaryOrderID_t_242833217");
    OrdAlloc_7.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1925982937"); // 1
    OrdAlloc_7_set.insert("SecondaryClOrdID_t_1925982937");
    OrdAlloc_7.add_attribute("ListID", "ListID_t_1586638434"); // 1
    OrdAlloc_7_set.insert("ListID_t_1586638434");
    OrdAlloc_7.add_attribute("Qty", "9539874.270000"); // 1
    OrdAlloc_7_set.insert("9539874.270000");
    OrdAlloc_7.add_attribute("AvgPx", "19266871.130000"); // 1
    OrdAlloc_7_set.insert("19266871.130000");
    OrdAlloc_7.add_attribute("BkngQty", "5281222.700000"); // 1
    OrdAlloc_7_set.insert("5281222.700000");
    all_values.push_back(OrdAlloc_7_set);
    all_compo_names.insert("OrdAlloc_7_set");

    {
      xml_element Pty_89{"Pty"};
      multiset<string> Pty_89_set;
      Pty_89.add_attribute("ID", "Nested2PartyID_t_1008141545"); // 2
      Pty_89_set.insert("Nested2PartyID_t_1008141545");
      Pty_89.add_attribute("Src", "G"); // 2
      Pty_89_set.insert("G");
      Pty_89.add_attribute("R", "79"); // 2
      Pty_89_set.insert("79");
      all_values.push_back(Pty_89_set);
      all_compo_names.insert("Pty_89_set");

      {
        xml_element Sub_89{"Sub"};
        multiset<string> Sub_89_set;
        Sub_89.add_attribute("ID", "Nested2PartySubID_t_1566747947"); // 3
        Sub_89_set.insert("Nested2PartySubID_t_1566747947");
        Sub_89.add_attribute("Typ", "20"); // 3
        Sub_89_set.insert("20");
        all_values.push_back(Sub_89_set);
        all_compo_names.insert("Sub_89_set");

        Pty_89.add_element(Sub_89);
      }
      OrdAlloc_7.add_element(Pty_89);
    }
    elt.add_element(OrdAlloc_7);
  } // end OrdAlloc
  { // TrdRegTS
    xml_element TrdRegTS_8{"TrdRegTS"};
    multiset<string> TrdRegTS_8_set;
    TrdRegTS_8.add_attribute("TS", "TrdRegTimestamp_t_517850748"); // 1
    TrdRegTS_8_set.insert("TrdRegTimestamp_t_517850748");
    TrdRegTS_8.add_attribute("Typ", "1"); // 1
    TrdRegTS_8_set.insert("1");
    TrdRegTS_8.add_attribute("Src", "TrdRegTimestampOrigin_t_912971975"); // 1
    TrdRegTS_8_set.insert("TrdRegTimestampOrigin_t_912971975");
    TrdRegTS_8.add_attribute("DskTyp", "D"); // 1
    TrdRegTS_8_set.insert("D");
    TrdRegTS_8.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_8_set.insert("1");
    TrdRegTS_8.add_attribute("DskOrdHndlInst", "RSV"); // 1
    TrdRegTS_8_set.insert("RSV");
    all_values.push_back(TrdRegTS_8_set);
    all_compo_names.insert("TrdRegTS_8_set");

    elt.add_element(TrdRegTS_8);
  } // end TrdRegTS
  { // Instrmt
    xml_element Instrmt_12{"Instrmt"};
    multiset<string> Instrmt_12_set;
    Instrmt_12.add_attribute("Sym", "Symbol_t_126448520"); // 1
    Instrmt_12_set.insert("Symbol_t_126448520");
    Instrmt_12.add_attribute("Sfx", "WI"); // 1
    Instrmt_12_set.insert("WI");
    Instrmt_12.add_attribute("ID", "SecurityID_t_745124484"); // 1
    Instrmt_12_set.insert("SecurityID_t_745124484");
    Instrmt_12.add_attribute("Src", "G"); // 1
    Instrmt_12_set.insert("G");
    Instrmt_12.add_attribute("Prod", "9"); // 1
    Instrmt_12_set.insert("9");
    Instrmt_12.add_attribute("ProdCmplx", "ProductComplex_t_141440263"); // 1
    Instrmt_12_set.insert("ProductComplex_t_141440263");
    Instrmt_12.add_attribute("SecGrp", "SecurityGroup_t_1549188698"); // 1
    Instrmt_12_set.insert("SecurityGroup_t_1549188698");
    Instrmt_12.add_attribute("CFI", "CFICode_t_318146805"); // 1
    Instrmt_12_set.insert("CFICode_t_318146805");
    Instrmt_12.add_attribute("SecTyp", "CASH"); // 1
    Instrmt_12_set.insert("CASH");
    Instrmt_12.add_attribute("SubTyp", "SecuritySubType_t_1939608237"); // 1
    Instrmt_12_set.insert("SecuritySubType_t_1939608237");
    Instrmt_12.add_attribute("MMY", "360145690"); // 1
    Instrmt_12_set.insert("360145690");
    Instrmt_12.add_attribute("MatDt", "MaturityDate_t_864268661"); // 1
    Instrmt_12_set.insert("MaturityDate_t_864268661");
    Instrmt_12.add_attribute("MatTm", "27049685"); // 1
    Instrmt_12_set.insert("27049685");
    Instrmt_12.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_602978907"); // 1
    Instrmt_12_set.insert("SettleOnOpenFlag_t_602978907");
    Instrmt_12.add_attribute("AsgnMeth", "642767950"); // 1
    Instrmt_12_set.insert("642767950");
    Instrmt_12.add_attribute("Status", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("CpnPmt", "CouponPaymentDate_t_1556966334"); // 1
    Instrmt_12_set.insert("CouponPaymentDate_t_1556966334");
    Instrmt_12.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_12_set.insert("XR");
    Instrmt_12.add_attribute("Snrty", "SR"); // 1
    Instrmt_12_set.insert("SR");
    Instrmt_12.add_attribute("NotlPctOut", "4176242.310000"); // 1
    Instrmt_12_set.insert("4176242.310000");
    Instrmt_12.add_attribute("OrigNotlPctOut", "12518302.180000"); // 1
    Instrmt_12_set.insert("12518302.180000");
    Instrmt_12.add_attribute("AttchPnt", "371961.340000"); // 1
    Instrmt_12_set.insert("371961.340000");
    Instrmt_12.add_attribute("DetchPnt", "19843721.780000"); // 1
    Instrmt_12_set.insert("19843721.780000");
    Instrmt_12.add_attribute("Issued", "IssueDate_t_131623184"); // 1
    Instrmt_12_set.insert("IssueDate_t_131623184");
    Instrmt_12.add_attribute("RepoCollSecTyp", "15682638"); // 1
    Instrmt_12_set.insert("15682638");
    Instrmt_12.add_attribute("RepoTrm", "354739278"); // 1
    Instrmt_12_set.insert("354739278");
    Instrmt_12.add_attribute("RepoRt", "5667126.780000"); // 1
    Instrmt_12_set.insert("5667126.780000");
    Instrmt_12.add_attribute("Fctr", "9286546.130000"); // 1
    Instrmt_12_set.insert("9286546.130000");
    Instrmt_12.add_attribute("CrdRtg", "CreditRating_t_1857281134"); // 1
    Instrmt_12_set.insert("CreditRating_t_1857281134");
    Instrmt_12.add_attribute("Rgstry", "InstrRegistry_t_1331720855"); // 1
    Instrmt_12_set.insert("InstrRegistry_t_1331720855");
    Instrmt_12.add_attribute("IssuCtry", "659053311"); // 1
    Instrmt_12_set.insert("659053311");
    Instrmt_12.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1983729654"); // 1
    Instrmt_12_set.insert("StateOrProvinceOfIssue_t_1983729654");
    Instrmt_12.add_attribute("Lcl", "LocaleOfIssue_t_1827693010"); // 1
    Instrmt_12_set.insert("LocaleOfIssue_t_1827693010");
    Instrmt_12.add_attribute("Redeem", "RedemptionDate_t_1404177796"); // 1
    Instrmt_12_set.insert("RedemptionDate_t_1404177796");
    Instrmt_12.add_attribute("StrkPx", "13948278.150000"); // 1
    Instrmt_12_set.insert("13948278.150000");
    Instrmt_12.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_12_set.insert("CAN");
    Instrmt_12.add_attribute("StrkMult", "7965328.650000"); // 1
    Instrmt_12_set.insert("7965328.650000");
    Instrmt_12.add_attribute("StrkValu", "18771605.620000"); // 1
    Instrmt_12_set.insert("18771605.620000");
    Instrmt_12.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_12_set.insert("1");
    Instrmt_12.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_12_set.insert("5");
    Instrmt_12.add_attribute("StrkPxBndryPrcsn", "898226.040000"); // 1
    Instrmt_12_set.insert("898226.040000");
    Instrmt_12.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("OptAt", "615707139"); // 1
    Instrmt_12_set.insert("615707139");
    Instrmt_12.add_attribute("Mult", "6928015.110000"); // 1
    Instrmt_12_set.insert("6928015.110000");
    Instrmt_12.add_attribute("MultTyp", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_12_set.insert("0");
    Instrmt_12.add_attribute("MinPxIncr", "1022841.970000"); // 1
    Instrmt_12_set.insert("1022841.970000");
    Instrmt_12.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1939525602"); // 1
    Instrmt_12_set.insert("MinPriceIncrementAmount_t_1939525602");
    Instrmt_12.add_attribute("UOM", "oz_tr"); // 1
    Instrmt_12_set.insert("oz_tr");
    Instrmt_12.add_attribute("UOMQty", "5199084.290000"); // 1
    Instrmt_12_set.insert("5199084.290000");
    Instrmt_12.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_12_set.insert("MMbbl");
    Instrmt_12.add_attribute("PxUOMQty", "1134344.860000"); // 1
    Instrmt_12_set.insert("1134344.860000");
    Instrmt_12.add_attribute("SettlMeth", "P"); // 1
    Instrmt_12_set.insert("P");
    Instrmt_12.add_attribute("ExerStyle", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("OptPayAmt", "OptPayoutAmount_t_711536238"); // 1
    Instrmt_12_set.insert("OptPayoutAmount_t_711536238");
    Instrmt_12.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_12_set.insert("STD");
    Instrmt_12.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_12_set.insert("CDS");
    Instrmt_12.add_attribute("ListMeth", "0"); // 1
    Instrmt_12_set.insert("0");
    Instrmt_12.add_attribute("CapPx", "9264452.430000"); // 1
    Instrmt_12_set.insert("9264452.430000");
    Instrmt_12.add_attribute("FlrPx", "17168250.490000"); // 1
    Instrmt_12_set.insert("17168250.490000");
    Instrmt_12.add_attribute("PutCall", "1"); // 1
    Instrmt_12_set.insert("1");
    Instrmt_12.add_attribute("FlexInd", "true"); // 1
    Instrmt_12_set.insert("true");
    Instrmt_12.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_12_set.insert("false");
    Instrmt_12.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_12_set.insert("Yr");
    Instrmt_12.add_attribute("CpnRt", "181847.150000"); // 1
    Instrmt_12_set.insert("181847.150000");
    Instrmt_12.add_attribute("Exch", "SecurityExchange_t_371653609"); // 1
    Instrmt_12_set.insert("SecurityExchange_t_371653609");
    Instrmt_12.add_attribute("PosLmt", "301456764"); // 1
    Instrmt_12_set.insert("301456764");
    Instrmt_12.add_attribute("NTPosLmt", "1895345277"); // 1
    Instrmt_12_set.insert("1895345277");
    Instrmt_12.add_attribute("Issr", "Issuer_t_382171185"); // 1
    Instrmt_12_set.insert("Issuer_t_382171185");
    Instrmt_12.add_attribute("EncIssrLen", "890114218"); // 1
    Instrmt_12_set.insert("890114218");
    Instrmt_12.add_attribute("EncIssr", "EncodedIssuer_t_1985167882"); // 1
    Instrmt_12_set.insert("EncodedIssuer_t_1985167882");
    Instrmt_12.add_attribute("Desc", "SecurityDesc_t_1256957422"); // 1
    Instrmt_12_set.insert("SecurityDesc_t_1256957422");
    Instrmt_12.add_attribute("EncSecDescLen", "1505821358"); // 1
    Instrmt_12_set.insert("1505821358");
    Instrmt_12.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_530485745"); // 1
    Instrmt_12_set.insert("EncodedSecurityDesc_t_530485745");
    Instrmt_12.add_attribute("Pool", "Pool_t_627027961"); // 1
    Instrmt_12_set.insert("Pool_t_627027961");
    Instrmt_12.add_attribute("CSetMo", "1587732968"); // 1
    Instrmt_12_set.insert("1587732968");
    Instrmt_12.add_attribute("CPPgm", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("CPRegT", "CPRegType_t_419069915"); // 1
    Instrmt_12_set.insert("CPRegType_t_419069915");
    Instrmt_12.add_attribute("Dated", "DatedDate_t_1663971320"); // 1
    Instrmt_12_set.insert("DatedDate_t_1663971320");
    Instrmt_12.add_attribute("IntAcrl", "InterestAccrualDate_t_1152678372"); // 1
    Instrmt_12_set.insert("InterestAccrualDate_t_1152678372");
    all_values.push_back(Instrmt_12_set);
    all_compo_names.insert("Instrmt_12_set");

    {
      xml_element AID_12{"AID"};
      multiset<string> AID_12_set;
      AID_12.add_attribute("AltID", "SecurityAltID_t_1462942088"); // 2
      AID_12_set.insert("SecurityAltID_t_1462942088");
      AID_12.add_attribute("AltIDSrc", "2"); // 2
      AID_12_set.insert("2");
      all_values.push_back(AID_12_set);
      all_compo_names.insert("AID_12_set");

      Instrmt_12.add_element(AID_12);
    }
    {
      xml_element SecXML_12{"SecXML"};
      multiset<string> SecXML_12_set;
      SecXML_12.add_attribute("Schema", "SecurityXMLSchema_t_1509475331"); // 2
      SecXML_12_set.insert("SecurityXMLSchema_t_1509475331");
      all_values.push_back(SecXML_12_set);
      all_compo_names.insert("SecXML_12_set");

      Instrmt_12.add_element(SecXML_12);
    }
    {
      xml_element Evnt_12{"Evnt"};
      multiset<string> Evnt_12_set;
      Evnt_12.add_attribute("EventTyp", "18"); // 2
      Evnt_12_set.insert("18");
      Evnt_12.add_attribute("Dt", "EventDate_t_1906522931"); // 2
      Evnt_12_set.insert("EventDate_t_1906522931");
      Evnt_12.add_attribute("Tm", "EventTime_t_73527921"); // 2
      Evnt_12_set.insert("EventTime_t_73527921");
      Evnt_12.add_attribute("Px", "856781.860000"); // 2
      Evnt_12_set.insert("856781.860000");
      Evnt_12.add_attribute("Txt", "EventText_t_816811021"); // 2
      Evnt_12_set.insert("EventText_t_816811021");
      all_values.push_back(Evnt_12_set);
      all_compo_names.insert("Evnt_12_set");

      Instrmt_12.add_element(Evnt_12);
    }
    {
      xml_element Pty_90{"Pty"};
      multiset<string> Pty_90_set;
      Pty_90.add_attribute("ID", "InstrumentPartyID_t_494861646"); // 2
      Pty_90_set.insert("InstrumentPartyID_t_494861646");
      Pty_90.add_attribute("Src", "8"); // 2
      Pty_90_set.insert("8");
      Pty_90.add_attribute("R", "58"); // 2
      Pty_90_set.insert("58");
      all_values.push_back(Pty_90_set);
      all_compo_names.insert("Pty_90_set");

      {
        xml_element Sub_90{"Sub"};
        multiset<string> Sub_90_set;
        Sub_90.add_attribute("ID", "InstrumentPartySubID_t_752441377"); // 3
        Sub_90_set.insert("InstrumentPartySubID_t_752441377");
        Sub_90.add_attribute("Typ", "29"); // 3
        Sub_90_set.insert("29");
        all_values.push_back(Sub_90_set);
        all_compo_names.insert("Sub_90_set");

        Pty_90.add_element(Sub_90);
      }
      Instrmt_12.add_element(Pty_90);
    }
    {
      xml_element CmplxEvnt_12{"CmplxEvnt"};
      multiset<string> CmplxEvnt_12_set;
      CmplxEvnt_12.add_attribute("Typ", "5"); // 2
      CmplxEvnt_12_set.insert("5");
      CmplxEvnt_12.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_257365275"); // 2
      CmplxEvnt_12_set.insert("ComplexOptPayoutAmount_t_257365275");
      CmplxEvnt_12.add_attribute("Px", "16369627.500000"); // 2
      CmplxEvnt_12_set.insert("16369627.500000");
      CmplxEvnt_12.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_12_set.insert("5");
      CmplxEvnt_12.add_attribute("PxBndryPrcsn", "5588220.390000"); // 2
      CmplxEvnt_12_set.insert("5588220.390000");
      CmplxEvnt_12.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_12_set.insert("3");
      CmplxEvnt_12.add_attribute("Cond", "1"); // 2
      CmplxEvnt_12_set.insert("1");
      all_values.push_back(CmplxEvnt_12_set);
      all_compo_names.insert("CmplxEvnt_12_set");

      {
        xml_element EvntDts_12{"EvntDts"};
        multiset<string> EvntDts_12_set;
        EvntDts_12.add_attribute("StartDt", "ComplexEventStartDate_t_1448936258"); // 3
        EvntDts_12_set.insert("ComplexEventStartDate_t_1448936258");
        EvntDts_12.add_attribute("EndDt", "ComplexEventEndDate_t_1222508614"); // 3
        EvntDts_12_set.insert("ComplexEventEndDate_t_1222508614");
        all_values.push_back(EvntDts_12_set);
        all_compo_names.insert("EvntDts_12_set");

        {
          xml_element EvntTms_12{"EvntTms"};
          multiset<string> EvntTms_12_set;
          EvntTms_12.add_attribute("StartTm", "1222970188"); // 4
          EvntTms_12_set.insert("1222970188");
          EvntTms_12.add_attribute("EndTm", "807273968"); // 4
          EvntTms_12_set.insert("807273968");
          all_values.push_back(EvntTms_12_set);
          all_compo_names.insert("EvntTms_12_set");

          EvntDts_12.add_element(EvntTms_12);
        }
        CmplxEvnt_12.add_element(EvntDts_12);
      }
      Instrmt_12.add_element(CmplxEvnt_12);
    }
    elt.add_element(Instrmt_12);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_3{"InstrmtExt"};
    multiset<string> InstrmtExt_3_set;
    InstrmtExt_3.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_3_set.insert("2");
    InstrmtExt_3.add_attribute("PctAtRisk", "18499981.490000"); // 1
    InstrmtExt_3_set.insert("18499981.490000");
    all_values.push_back(InstrmtExt_3_set);
    all_compo_names.insert("InstrmtExt_3_set");

    {
      xml_element Attrb_3{"Attrb"};
      multiset<string> Attrb_3_set;
      Attrb_3.add_attribute("Typ", "17"); // 2
      Attrb_3_set.insert("17");
      Attrb_3.add_attribute("Val", "InstrAttribValue_t_238280654"); // 2
      Attrb_3_set.insert("InstrAttribValue_t_238280654");
      all_values.push_back(Attrb_3_set);
      all_compo_names.insert("Attrb_3_set");

      InstrmtExt_3.add_element(Attrb_3);
    }
    elt.add_element(InstrmtExt_3);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_9{"FinDetls"};
    multiset<string> FinDetls_9_set;
    FinDetls_9.add_attribute("AgmtDesc", "AgreementDesc_t_121584417"); // 1
    FinDetls_9_set.insert("AgreementDesc_t_121584417");
    FinDetls_9.add_attribute("AgmtID", "AgreementID_t_1911494609"); // 1
    FinDetls_9_set.insert("AgreementID_t_1911494609");
    FinDetls_9.add_attribute("AgmtDt", "AgreementDate_t_1390959026"); // 1
    FinDetls_9_set.insert("AgreementDate_t_1390959026");
    FinDetls_9.add_attribute("AgmtCcy", "JPY"); // 1
    FinDetls_9_set.insert("JPY");
    FinDetls_9.add_attribute("TrmTyp", "3"); // 1
    FinDetls_9_set.insert("3");
    FinDetls_9.add_attribute("StartDt", "StartDate_t_2075480303"); // 1
    FinDetls_9_set.insert("StartDate_t_2075480303");
    FinDetls_9.add_attribute("EndDt", "EndDate_t_1300456051"); // 1
    FinDetls_9_set.insert("EndDate_t_1300456051");
    FinDetls_9.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_9_set.insert("3");
    FinDetls_9.add_attribute("MgnRatio", "136748.410000"); // 1
    FinDetls_9_set.insert("136748.410000");
    all_values.push_back(FinDetls_9_set);
    all_compo_names.insert("FinDetls_9_set");

    elt.add_element(FinDetls_9);
  } // end FinDetls
  { // Undly
    xml_element Undly_16{"Undly"};
    multiset<string> Undly_16_set;
    Undly_16.add_attribute("Sym", "UnderlyingSymbol_t_1321340277"); // 1
    Undly_16_set.insert("UnderlyingSymbol_t_1321340277");
    Undly_16.add_attribute("Sfx", "WI"); // 1
    Undly_16_set.insert("WI");
    Undly_16.add_attribute("ID", "UnderlyingSecurityID_t_355935848"); // 1
    Undly_16_set.insert("UnderlyingSecurityID_t_355935848");
    Undly_16.add_attribute("Src", "B"); // 1
    Undly_16_set.insert("B");
    Undly_16.add_attribute("Prod", "7"); // 1
    Undly_16_set.insert("7");
    Undly_16.add_attribute("CFI", "UnderlyingCFICode_t_1715607468"); // 1
    Undly_16_set.insert("UnderlyingCFICode_t_1715607468");
    Undly_16.add_attribute("SecTyp", "REPO"); // 1
    Undly_16_set.insert("REPO");
    Undly_16.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2134055409"); // 1
    Undly_16_set.insert("UnderlyingSecuritySubType_t_2134055409");
    Undly_16.add_attribute("MMY", "1299449050"); // 1
    Undly_16_set.insert("1299449050");
    Undly_16.add_attribute("Mat", "UnderlyingMaturityDate_t_742485321"); // 1
    Undly_16_set.insert("UnderlyingMaturityDate_t_742485321");
    Undly_16.add_attribute("MatTm", "1371396141"); // 1
    Undly_16_set.insert("1371396141");
    Undly_16.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1265461816"); // 1
    Undly_16_set.insert("UnderlyingCouponPaymentDate_t_1265461816");
    Undly_16.add_attribute("RestrctTyp", "XR"); // 1
    Undly_16_set.insert("XR");
    Undly_16.add_attribute("Snrty", "SB"); // 1
    Undly_16_set.insert("SB");
    Undly_16.add_attribute("NotlPctOut", "3409483.570000"); // 1
    Undly_16_set.insert("3409483.570000");
    Undly_16.add_attribute("OrigNotlPctOut", "8512118.990000"); // 1
    Undly_16_set.insert("8512118.990000");
    Undly_16.add_attribute("AttchPnt", "519318.180000"); // 1
    Undly_16_set.insert("519318.180000");
    Undly_16.add_attribute("DetchPnt", "434628.580000"); // 1
    Undly_16_set.insert("434628.580000");
    Undly_16.add_attribute("Issued", "UnderlyingIssueDate_t_1098735188"); // 1
    Undly_16_set.insert("UnderlyingIssueDate_t_1098735188");
    Undly_16.add_attribute("RepoCollSecTyp", "290212473"); // 1
    Undly_16_set.insert("290212473");
    Undly_16.add_attribute("RepoTrm", "165047275"); // 1
    Undly_16_set.insert("165047275");
    Undly_16.add_attribute("RepoRt", "8627461.490000"); // 1
    Undly_16_set.insert("8627461.490000");
    Undly_16.add_attribute("Fctr", "16811714.990000"); // 1
    Undly_16_set.insert("16811714.990000");
    Undly_16.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1749573781"); // 1
    Undly_16_set.insert("UnderlyingCreditRating_t_1749573781");
    Undly_16.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_256679269"); // 1
    Undly_16_set.insert("UnderlyingInstrRegistry_t_256679269");
    Undly_16.add_attribute("Ctry", "286638561"); // 1
    Undly_16_set.insert("286638561");
    Undly_16.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1677570436"); // 1
    Undly_16_set.insert("UnderlyingStateOrProvinceOfIssue_t_1677570436");
    Undly_16.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1557135320"); // 1
    Undly_16_set.insert("UnderlyingLocaleOfIssue_t_1557135320");
    Undly_16.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1113117193"); // 1
    Undly_16_set.insert("UnderlyingRedemptionDate_t_1113117193");
    Undly_16.add_attribute("StrkPx", "16912452.780000"); // 1
    Undly_16_set.insert("16912452.780000");
    Undly_16.add_attribute("StrkCcy", "GBP"); // 1
    Undly_16_set.insert("GBP");
    Undly_16.add_attribute("OptA", "569559901"); // 1
    Undly_16_set.insert("569559901");
    Undly_16.add_attribute("Mult", "18828545.930000"); // 1
    Undly_16_set.insert("18828545.930000");
    Undly_16.add_attribute("MultTyp", "2"); // 1
    Undly_16_set.insert("2");
    Undly_16.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_16_set.insert("4");
    Undly_16.add_attribute("UOM", "Bbl"); // 1
    Undly_16_set.insert("Bbl");
    Undly_16.add_attribute("UOMQty", "3969351.110000"); // 1
    Undly_16_set.insert("3969351.110000");
    Undly_16.add_attribute("PxUOM", "tn"); // 1
    Undly_16_set.insert("tn");
    Undly_16.add_attribute("PxUOMQty", "6029438.160000"); // 1
    Undly_16_set.insert("6029438.160000");
    Undly_16.add_attribute("TmUnit", "D"); // 1
    Undly_16_set.insert("D");
    Undly_16.add_attribute("ExerStyle", "2"); // 1
    Undly_16_set.insert("2");
    Undly_16.add_attribute("CpnRt", "18684056.320000"); // 1
    Undly_16_set.insert("18684056.320000");
    Undly_16.add_attribute("Exch", "UnderlyingSecurityExchange_t_1183358364"); // 1
    Undly_16_set.insert("UnderlyingSecurityExchange_t_1183358364");
    Undly_16.add_attribute("Issr", "UnderlyingIssuer_t_723557920"); // 1
    Undly_16_set.insert("UnderlyingIssuer_t_723557920");
    Undly_16.add_attribute("EncUndIssrLen", "61870341"); // 1
    Undly_16_set.insert("61870341");
    Undly_16.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2034570263"); // 1
    Undly_16_set.insert("EncodedUnderlyingIssuer_t_2034570263");
    Undly_16.add_attribute("Desc", "UnderlyingSecurityDesc_t_775489739"); // 1
    Undly_16_set.insert("UnderlyingSecurityDesc_t_775489739");
    Undly_16.add_attribute("EncUndSecDescLen", "105333200"); // 1
    Undly_16_set.insert("105333200");
    Undly_16.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_985821803"); // 1
    Undly_16_set.insert("EncodedUnderlyingSecurityDesc_t_985821803");
    Undly_16.add_attribute("CPPgm", "UnderlyingCPProgram_t_1065702212"); // 1
    Undly_16_set.insert("UnderlyingCPProgram_t_1065702212");
    Undly_16.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_270380475"); // 1
    Undly_16_set.insert("UnderlyingCPRegType_t_270380475");
    Undly_16.add_attribute("AllocPct", "18485679.520000"); // 1
    Undly_16_set.insert("18485679.520000");
    Undly_16.add_attribute("Ccy", "JPY"); // 1
    Undly_16_set.insert("JPY");
    Undly_16.add_attribute("Qty", "21052472.210000"); // 1
    Undly_16_set.insert("21052472.210000");
    Undly_16.add_attribute("SettlTyp", "2"); // 1
    Undly_16_set.insert("2");
    Undly_16.add_attribute("CashAmt", "UnderlyingCashAmount_t_1550041045"); // 1
    Undly_16_set.insert("UnderlyingCashAmount_t_1550041045");
    Undly_16.add_attribute("CashTyp", "FIXED"); // 1
    Undly_16_set.insert("FIXED");
    Undly_16.add_attribute("Px", "19991458.180000"); // 1
    Undly_16_set.insert("19991458.180000");
    Undly_16.add_attribute("DirtPx", "10938026.750000"); // 1
    Undly_16_set.insert("10938026.750000");
    Undly_16.add_attribute("EndPx", "8943339.910000"); // 1
    Undly_16_set.insert("8943339.910000");
    Undly_16.add_attribute("StartVal", "UnderlyingStartValue_t_138635992"); // 1
    Undly_16_set.insert("UnderlyingStartValue_t_138635992");
    Undly_16.add_attribute("CurVal", "UnderlyingCurrentValue_t_1663362576"); // 1
    Undly_16_set.insert("UnderlyingCurrentValue_t_1663362576");
    Undly_16.add_attribute("EndVal", "UnderlyingEndValue_t_629704937"); // 1
    Undly_16_set.insert("UnderlyingEndValue_t_629704937");
    Undly_16.add_attribute("AdjQty", "3519078.210000"); // 1
    Undly_16_set.insert("3519078.210000");
    Undly_16.add_attribute("FxRate", "5825314.870000"); // 1
    Undly_16_set.insert("5825314.870000");
    Undly_16.add_attribute("FxRateCalc", "D"); // 1
    Undly_16_set.insert("D");
    Undly_16.add_attribute("CapValu", "UnderlyingCapValue_t_748842932"); // 1
    Undly_16_set.insert("UnderlyingCapValue_t_748842932");
    Undly_16.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1635755808"); // 1
    Undly_16_set.insert("UnderlyingSettlMethod_t_1635755808");
    Undly_16.add_attribute("PutCall", "536143519"); // 1
    Undly_16_set.insert("536143519");
    all_values.push_back(Undly_16_set);
    all_compo_names.insert("Undly_16_set");

    {
      xml_element UndAID_16{"UndAID"};
      multiset<string> UndAID_16_set;
      UndAID_16.add_attribute("AltID", "UnderlyingSecurityAltID_t_1888263365"); // 2
      UndAID_16_set.insert("UnderlyingSecurityAltID_t_1888263365");
      UndAID_16.add_attribute("AltIDSrc", "E"); // 2
      UndAID_16_set.insert("E");
      all_values.push_back(UndAID_16_set);
      all_compo_names.insert("UndAID_16_set");

      Undly_16.add_element(UndAID_16);
    }
    {
      xml_element Stip_33{"Stip"};
      multiset<string> Stip_33_set;
      Stip_33.add_attribute("Typ", "POOL"); // 2
      Stip_33_set.insert("POOL");
      Stip_33.add_attribute("Val", "UnderlyingStipValue_t_924138081"); // 2
      Stip_33_set.insert("UnderlyingStipValue_t_924138081");
      all_values.push_back(Stip_33_set);
      all_compo_names.insert("Stip_33_set");

      Undly_16.add_element(Stip_33);
    }
    {
      xml_element Pty_91{"Pty"};
      multiset<string> Pty_91_set;
      Pty_91.add_attribute("ID", "UnderlyingInstrumentPartyID_t_488966894"); // 2
      Pty_91_set.insert("UnderlyingInstrumentPartyID_t_488966894");
      Pty_91.add_attribute("Src", "2"); // 2
      Pty_91_set.insert("2");
      Pty_91.add_attribute("R", "74"); // 2
      Pty_91_set.insert("74");
      all_values.push_back(Pty_91_set);
      all_compo_names.insert("Pty_91_set");

      {
        xml_element Sub_91{"Sub"};
        multiset<string> Sub_91_set;
        Sub_91.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1264456633"); // 3
        Sub_91_set.insert("UnderlyingInstrumentPartySubID_t_1264456633");
        Sub_91.add_attribute("Typ", "8"); // 3
        Sub_91_set.insert("8");
        all_values.push_back(Sub_91_set);
        all_compo_names.insert("Sub_91_set");

        Pty_91.add_element(Sub_91);
      }
      Undly_16.add_element(Pty_91);
    }
    elt.add_element(Undly_16);
  } // end Undly
  { // Leg
    xml_element Leg_21{"Leg"};
    multiset<string> Leg_21_set;
    Leg_21.add_attribute("Sym", "LegSymbol_t_182675197"); // 1
    Leg_21_set.insert("LegSymbol_t_182675197");
    Leg_21.add_attribute("Sfx", "CD"); // 1
    Leg_21_set.insert("CD");
    Leg_21.add_attribute("ID", "LegSecurityID_t_1498130804"); // 1
    Leg_21_set.insert("LegSecurityID_t_1498130804");
    Leg_21.add_attribute("Src", "K"); // 1
    Leg_21_set.insert("K");
    Leg_21.add_attribute("Prod", "13"); // 1
    Leg_21_set.insert("13");
    Leg_21.add_attribute("CFI", "LegCFICode_t_1455894378"); // 1
    Leg_21_set.insert("LegCFICode_t_1455894378");
    Leg_21.add_attribute("SecTyp", "BDN"); // 1
    Leg_21_set.insert("BDN");
    Leg_21.add_attribute("SecSubTyp", "LegSecuritySubType_t_2117161174"); // 1
    Leg_21_set.insert("LegSecuritySubType_t_2117161174");
    Leg_21.add_attribute("MMY", "823309624"); // 1
    Leg_21_set.insert("823309624");
    Leg_21.add_attribute("Mat", "LegMaturityDate_t_1519756055"); // 1
    Leg_21_set.insert("LegMaturityDate_t_1519756055");
    Leg_21.add_attribute("MatTm", "1063480201"); // 1
    Leg_21_set.insert("1063480201");
    Leg_21.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1717643615"); // 1
    Leg_21_set.insert("LegCouponPaymentDate_t_1717643615");
    Leg_21.add_attribute("Issued", "LegIssueDate_t_1658392048"); // 1
    Leg_21_set.insert("LegIssueDate_t_1658392048");
    Leg_21.add_attribute("RepoCollSecTyp", "579359129"); // 1
    Leg_21_set.insert("579359129");
    Leg_21.add_attribute("RepoTrm", "199864904"); // 1
    Leg_21_set.insert("199864904");
    Leg_21.add_attribute("RepoRt", "20102998.690000"); // 1
    Leg_21_set.insert("20102998.690000");
    Leg_21.add_attribute("Fctr", "11618906.160000"); // 1
    Leg_21_set.insert("11618906.160000");
    Leg_21.add_attribute("CrdRtg", "LegCreditRating_t_133064607"); // 1
    Leg_21_set.insert("LegCreditRating_t_133064607");
    Leg_21.add_attribute("Rgstry", "LegInstrRegistry_t_611659154"); // 1
    Leg_21_set.insert("LegInstrRegistry_t_611659154");
    Leg_21.add_attribute("Ctry", "650162776"); // 1
    Leg_21_set.insert("650162776");
    Leg_21.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_669208126"); // 1
    Leg_21_set.insert("LegStateOrProvinceOfIssue_t_669208126");
    Leg_21.add_attribute("Lcl", "LegLocaleOfIssue_t_352438871"); // 1
    Leg_21_set.insert("LegLocaleOfIssue_t_352438871");
    Leg_21.add_attribute("Redeem", "LegRedemptionDate_t_415571750"); // 1
    Leg_21_set.insert("LegRedemptionDate_t_415571750");
    Leg_21.add_attribute("Strk", "9262736.300000"); // 1
    Leg_21_set.insert("9262736.300000");
    Leg_21.add_attribute("StrkCcy", "JPY"); // 1
    Leg_21_set.insert("JPY");
    Leg_21.add_attribute("OptA", "1245209475"); // 1
    Leg_21_set.insert("1245209475");
    Leg_21.add_attribute("Cmult", "20878016.480000"); // 1
    Leg_21_set.insert("20878016.480000");
    Leg_21.add_attribute("MultTyp", "0"); // 1
    Leg_21_set.insert("0");
    Leg_21.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_21_set.insert("0");
    Leg_21.add_attribute("UOM", "MMBtu"); // 1
    Leg_21_set.insert("MMBtu");
    Leg_21.add_attribute("UOMQty", "2041868.260000"); // 1
    Leg_21_set.insert("2041868.260000");
    Leg_21.add_attribute("PxUOM", "Gal"); // 1
    Leg_21_set.insert("Gal");
    Leg_21.add_attribute("PxUOMQty", "10880116.570000"); // 1
    Leg_21_set.insert("10880116.570000");
    Leg_21.add_attribute("TmUnit", "Min"); // 1
    Leg_21_set.insert("Min");
    Leg_21.add_attribute("ExerStyle", "1"); // 1
    Leg_21_set.insert("1");
    Leg_21.add_attribute("CpnRt", "3964223.870000"); // 1
    Leg_21_set.insert("3964223.870000");
    Leg_21.add_attribute("Exch", "LegSecurityExchange_t_506862324"); // 1
    Leg_21_set.insert("LegSecurityExchange_t_506862324");
    Leg_21.add_attribute("Issr", "LegIssuer_t_753442047"); // 1
    Leg_21_set.insert("LegIssuer_t_753442047");
    Leg_21.add_attribute("EncLegIssrLen", "1219732011"); // 1
    Leg_21_set.insert("1219732011");
    Leg_21.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2026618379"); // 1
    Leg_21_set.insert("EncodedLegIssuer_t_2026618379");
    Leg_21.add_attribute("Desc", "LegSecurityDesc_t_1816922248"); // 1
    Leg_21_set.insert("LegSecurityDesc_t_1816922248");
    Leg_21.add_attribute("EncLegSecDescLen", "789891978"); // 1
    Leg_21_set.insert("789891978");
    Leg_21.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1537526779"); // 1
    Leg_21_set.insert("EncodedLegSecurityDesc_t_1537526779");
    Leg_21.add_attribute("RatioQty", "2487977.290000"); // 1
    Leg_21_set.insert("2487977.290000");
    Leg_21.add_attribute("Side", "4"); // 1
    Leg_21_set.insert("4");
    Leg_21.add_attribute("Ccy", "GBP"); // 1
    Leg_21_set.insert("GBP");
    Leg_21.add_attribute("Pool", "LegPool_t_1122821490"); // 1
    Leg_21_set.insert("LegPool_t_1122821490");
    Leg_21.add_attribute("Dated", "LegDatedDate_t_2012002155"); // 1
    Leg_21_set.insert("LegDatedDate_t_2012002155");
    Leg_21.add_attribute("CSetMo", "2060851122"); // 1
    Leg_21_set.insert("2060851122");
    Leg_21.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1792029617"); // 1
    Leg_21_set.insert("LegInterestAccrualDate_t_1792029617");
    Leg_21.add_attribute("PutCall", "216957378"); // 1
    Leg_21_set.insert("216957378");
    Leg_21.add_attribute("LegOptionRatio", "3289392.240000"); // 1
    Leg_21_set.insert("3289392.240000");
    Leg_21.add_attribute("Px", "5708195.990000"); // 1
    Leg_21_set.insert("5708195.990000");
    all_values.push_back(Leg_21_set);
    all_compo_names.insert("Leg_21_set");

    {
      xml_element LegAID_21{"LegAID"};
      multiset<string> LegAID_21_set;
      LegAID_21.add_attribute("SecAltID", "LegSecurityAltID_t_1493534330"); // 2
      LegAID_21_set.insert("LegSecurityAltID_t_1493534330");
      LegAID_21.add_attribute("SecAltIDSrc", "J"); // 2
      LegAID_21_set.insert("J");
      all_values.push_back(LegAID_21_set);
      all_compo_names.insert("LegAID_21_set");

      Leg_21.add_element(LegAID_21);
    }
    elt.add_element(Leg_21);
  } // end Leg
  { // Yield
    xml_element Yield_3{"Yield"};
    multiset<string> Yield_3_set;
    Yield_3.add_attribute("Typ", "SIMPLE"); // 1
    Yield_3_set.insert("SIMPLE");
    Yield_3.add_attribute("Yld", "14338523.300000"); // 1
    Yield_3_set.insert("14338523.300000");
    Yield_3.add_attribute("CalcDt", "YieldCalcDate_t_1254989497"); // 1
    Yield_3_set.insert("YieldCalcDate_t_1254989497");
    Yield_3.add_attribute("RedDt", "YieldRedemptionDate_t_1338023946"); // 1
    Yield_3_set.insert("YieldRedemptionDate_t_1338023946");
    Yield_3.add_attribute("RedPx", "10237331.830000"); // 1
    Yield_3_set.insert("10237331.830000");
    Yield_3.add_attribute("RedPxTyp", "4"); // 1
    Yield_3_set.insert("4");
    all_values.push_back(Yield_3_set);
    all_compo_names.insert("Yield_3_set");

    elt.add_element(Yield_3);
  } // end Yield
  { // Cpcty
    xml_element Cpcty_0{"Cpcty"};
    multiset<string> Cpcty_0_set;
    Cpcty_0.add_attribute("Cpcty", "I"); // 1
    Cpcty_0_set.insert("I");
    Cpcty_0.add_attribute("Rstctions", "3"); // 1
    Cpcty_0_set.insert("3");
    Cpcty_0.add_attribute("CpctyQty", "1909492.120000"); // 1
    Cpcty_0_set.insert("1909492.120000");
    all_values.push_back(Cpcty_0_set);
    all_compo_names.insert("Cpcty_0_set");

    elt.add_element(Cpcty_0);
  } // end Cpcty
  { // Cpcty
    xml_element Cpcty_1{"Cpcty"};
    multiset<string> Cpcty_1_set;
    Cpcty_1.add_attribute("Cpcty", "W"); // 1
    Cpcty_1_set.insert("W");
    Cpcty_1.add_attribute("Rstctions", "C"); // 1
    Cpcty_1_set.insert("C");
    Cpcty_1.add_attribute("CpctyQty", "9443912.590000"); // 1
    Cpcty_1_set.insert("9443912.590000");
    all_values.push_back(Cpcty_1_set);
    all_compo_names.insert("Cpcty_1_set");

    elt.add_element(Cpcty_1);
  } // end Cpcty
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_8{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_8_set;
    SprdBnchmkCurve_8.add_attribute("Spread", "15804155.900000"); // 1
    SprdBnchmkCurve_8_set.insert("15804155.900000");
    SprdBnchmkCurve_8.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_8_set.insert("JPY");
    SprdBnchmkCurve_8.add_attribute("Name", "EONIA"); // 1
    SprdBnchmkCurve_8_set.insert("EONIA");
    SprdBnchmkCurve_8.add_attribute("Point", "BenchmarkCurvePoint_t_73984949"); // 1
    SprdBnchmkCurve_8_set.insert("BenchmarkCurvePoint_t_73984949");
    SprdBnchmkCurve_8.add_attribute("Px", "8626275.890000"); // 1
    SprdBnchmkCurve_8_set.insert("8626275.890000");
    SprdBnchmkCurve_8.add_attribute("PxTyp", "2"); // 1
    SprdBnchmkCurve_8_set.insert("2");
    SprdBnchmkCurve_8.add_attribute("SecID", "BenchmarkSecurityID_t_1474327950"); // 1
    SprdBnchmkCurve_8_set.insert("BenchmarkSecurityID_t_1474327950");
    SprdBnchmkCurve_8.add_attribute("SecIDSrc", "A"); // 1
    SprdBnchmkCurve_8_set.insert("A");
    all_values.push_back(SprdBnchmkCurve_8_set);
    all_compo_names.insert("SprdBnchmkCurve_8_set");

    elt.add_element(SprdBnchmkCurve_8);
  } // end SprdBnchmkCurve
  { // SetInstr
    xml_element SetInstr_7{"SetInstr"};
    multiset<string> SetInstr_7_set;
    SetInstr_7.add_attribute("DlvryTyp", "2"); // 1
    SetInstr_7_set.insert("2");
    SetInstr_7.add_attribute("StandInstDbTyp", "2"); // 1
    SetInstr_7_set.insert("2");
    SetInstr_7.add_attribute("StandInstDbName", "StandInstDbName_t_39199762"); // 1
    SetInstr_7_set.insert("StandInstDbName_t_39199762");
    SetInstr_7.add_attribute("StandInstDbID", "StandInstDbID_t_1979948263"); // 1
    SetInstr_7_set.insert("StandInstDbID_t_1979948263");
    all_values.push_back(SetInstr_7_set);
    all_compo_names.insert("SetInstr_7_set");

    {
      xml_element DlvInst_7{"DlvInst"};
      multiset<string> DlvInst_7_set;
      DlvInst_7.add_attribute("InstSrc", "2"); // 2
      DlvInst_7_set.insert("2");
      DlvInst_7.add_attribute("InstTyp", "C"); // 2
      DlvInst_7_set.insert("C");
      all_values.push_back(DlvInst_7_set);
      all_compo_names.insert("DlvInst_7_set");

      {
        xml_element Pty_92{"Pty"};
        multiset<string> Pty_92_set;
        Pty_92.add_attribute("ID", "SettlPartyID_t_403284214"); // 3
        Pty_92_set.insert("SettlPartyID_t_403284214");
        Pty_92.add_attribute("Src", "E"); // 3
        Pty_92_set.insert("E");
        Pty_92.add_attribute("R", "35"); // 3
        Pty_92_set.insert("35");
        all_values.push_back(Pty_92_set);
        all_compo_names.insert("Pty_92_set");

        {
          xml_element Sub_92{"Sub"};
          multiset<string> Sub_92_set;
          Sub_92.add_attribute("ID", "SettlPartySubID_t_71829640"); // 4
          Sub_92_set.insert("SettlPartySubID_t_71829640");
          Sub_92.add_attribute("Typ", "19"); // 4
          Sub_92_set.insert("19");
          all_values.push_back(Sub_92_set);
          all_compo_names.insert("Sub_92_set");

          Pty_92.add_element(Sub_92);
        }
        DlvInst_7.add_element(Pty_92);
      }
      SetInstr_7.add_element(DlvInst_7);
    }
    elt.add_element(SetInstr_7);
  } // end SetInstr
  { // Comm
    xml_element Comm_6{"Comm"};
    multiset<string> Comm_6_set;
    Comm_6.add_attribute("Comm", "Commission_t_709122704"); // 1
    Comm_6_set.insert("Commission_t_709122704");
    Comm_6.add_attribute("CommTyp", "5"); // 1
    Comm_6_set.insert("5");
    Comm_6.add_attribute("Ccy", "USD"); // 1
    Comm_6_set.insert("USD");
    Comm_6.add_attribute("FundRenewWaiv", "N"); // 1
    Comm_6_set.insert("N");
    all_values.push_back(Comm_6_set);
    all_compo_names.insert("Comm_6_set");

    elt.add_element(Comm_6);
  } // end Comm
  { // Stip
    xml_element Stip_34{"Stip"};
    multiset<string> Stip_34_set;
    Stip_34.add_attribute("Typ", "MAXBAL"); // 1
    Stip_34_set.insert("MAXBAL");
    Stip_34.add_attribute("Val", "StipulationValue_t_1007987488"); // 1
    Stip_34_set.insert("StipulationValue_t_1007987488");
    all_values.push_back(Stip_34_set);
    all_compo_names.insert("Stip_34_set");

    elt.add_element(Stip_34);
  } // end Stip
  { // Stip
    xml_element Stip_35{"Stip"};
    multiset<string> Stip_35_set;
    Stip_35.add_attribute("Typ", "PPL"); // 1
    Stip_35_set.insert("PPL");
    Stip_35.add_attribute("Val", "StipulationValue_t_1123567228"); // 1
    Stip_35_set.insert("StipulationValue_t_1123567228");
    all_values.push_back(Stip_35_set);
    all_compo_names.insert("Stip_35_set");

    elt.add_element(Stip_35);
  } // end Stip
  { // Stip
    xml_element Stip_36{"Stip"};
    multiset<string> Stip_36_set;
    Stip_36.add_attribute("Typ", "MPR"); // 1
    Stip_36_set.insert("MPR");
    Stip_36.add_attribute("Val", "StipulationValue_t_969833095"); // 1
    Stip_36_set.insert("StipulationValue_t_969833095");
    all_values.push_back(Stip_36_set);
    all_compo_names.insert("Stip_36_set");

    elt.add_element(Stip_36);
  } // end Stip
  { // MiscFees
    xml_element MiscFees_11{"MiscFees"};
    multiset<string> MiscFees_11_set;
    MiscFees_11.add_attribute("Amt", "MiscFeeAmt_t_418724960"); // 1
    MiscFees_11_set.insert("MiscFeeAmt_t_418724960");
    MiscFees_11.add_attribute("Curr", "GBP"); // 1
    MiscFees_11_set.insert("GBP");
    MiscFees_11.add_attribute("Typ", "10"); // 1
    MiscFees_11_set.insert("10");
    MiscFees_11.add_attribute("Basis", "0"); // 1
    MiscFees_11_set.insert("0");
    all_values.push_back(MiscFees_11_set);
    all_compo_names.insert("MiscFees_11_set");

    elt.add_element(MiscFees_11);
  } // end MiscFees
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
